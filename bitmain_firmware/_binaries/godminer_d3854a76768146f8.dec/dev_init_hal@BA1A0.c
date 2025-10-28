int __fastcall dev_init_hal(int a1)
{
  int v1; // r4
  int hash_on_plug; // r0
  int v3; // r2
  unsigned int v4; // r8
  int v5; // r3
  int v6; // r1
  int v7; // r3
  int v8; // r1
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r1
  int v16; // r0
  int v17; // r3
  int v18; // r1
  int v19; // r3
  int v20; // r3
  int v21; // r1
  int v22; // [sp+14h] [bp-1018h]
  unsigned __int8 v24; // [sp+27h] [bp-1005h] BYREF
  char v25[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = platform_init();
  if ( v1 )
  {
    V_LOCK();
    LOWORD(v20) = 29492;
    HIWORD(v20) = (unsigned int)"eThread send http response error" >> 16;
    logfmt_raw(v25, 0x1000u, 0, v20);
    V_UNLOCK();
    LOWORD(v21) = 29516;
    HIWORD(v21) = (unsigned int)"se error" >> 16;
    zlog(g_zc, v21, 164, "dev_init_hal", 12, 57, 100, v25);
    return -1;
  }
  else
  {
    total_chain = 0;
    hash_on_plug = get_hash_on_plug();
    LOWORD(v3) = 29684;
    v4 = hash_on_plug;
    HIWORD(v3) = (unsigned int)"10s..." >> 16;
    v5 = total_chain;
    v22 = v3;
    do
    {
      while ( ((v4 >> v1) & 1) == 0 )
      {
        if ( ++v1 == 16 )
          goto LABEL_7;
      }
      g_chain_info[2 * v5] = v1;
      LOBYTE(g_chain_info[2 * v5 + 1]) = 1;
      V_LOCK();
      logfmt_raw(v25, 0x1000u, 0, v22, total_chain, g_chain_info[2 * total_chain]);
      V_UNLOCK();
      LOWORD(v6) = 29516;
      HIWORD(v6) = (unsigned int)"se error" >> 16;
      zlog(g_zc, v6, 164, "dev_init_hal", 12, 67, 60, v25);
      if ( platform_is_pic_mcu_en() )
      {
        if ( open_pic((unsigned __int8)v1) < 0 )
        {
          V_LOCK();
          logfmt_raw(
            v25,
            0x1000u,
            0,
            "chain_offset %d, chain %d, open pic error!",
            total_chain,
            g_chain_info[2 * total_chain]);
          V_UNLOCK();
          v16 = g_zc;
          v17 = 71;
LABEL_14:
          LOWORD(v18) = 29516;
          HIWORD(v18) = (unsigned int)"se error" >> 16;
          zlog(v16, v18, 164, "dev_init_hal", 12, v17, 100, v25);
          return -1;
        }
        pic1704_reset(v1);
        usleep(0x493E0u);
        pic1704_jump_to_app(v1);
        usleep(0x493E0u);
        if ( !pic1704_get_sw_version(g_chain_info[2 * total_chain], &v24) )
        {
          V_LOCK();
          LOWORD(v19) = 29756;
          HIWORD(v19) = (unsigned int)"ed! try again after 10s..." >> 16;
          logfmt_raw(v25, 0x1000u, 0, v19, total_chain, g_chain_info[2 * total_chain]);
          V_UNLOCK();
          v16 = g_zc;
          v17 = 82;
          goto LABEL_14;
        }
        V_LOCK();
        LOWORD(v10) = 29808;
        HIWORD(v10) = (unsigned int)"" >> 16;
        logfmt_raw(v25, 0x1000u, 0, v10, total_chain, g_chain_info[2 * total_chain], v24);
        V_UNLOCK();
        LOWORD(v11) = 29516;
        HIWORD(v11) = (unsigned int)"se error" >> 16;
        zlog(g_zc, v11, 164, "dev_init_hal", 12, 88, 60, v25);
      }
      ++v1;
      v5 = ++total_chain;
    }
    while ( v1 != 16 );
LABEL_7:
    if ( a1 != v5 )
    {
      V_LOCK();
      LOWORD(v12) = 29864;
      LOWORD(v13) = 4752;
      HIWORD(v12) = (unsigned int)"d." >> 16;
      HIWORD(v13) = (unsigned int)&unk_132B50 >> 16;
      logfmt_raw(v25, 0x1000u, 0, v13, v12);
      V_UNLOCK();
      LOWORD(v14) = 29516;
      HIWORD(v14) = (unsigned int)"se error" >> 16;
      zlog(g_zc, v14, 164, "dev_init_hal", 12, 96, 100, v25);
      V_LOCK();
      logfmt_raw(v25, 0x1000u, 0, "phyiscal chain num = %d, total chain num = %d", a1, total_chain);
      V_UNLOCK();
      LOWORD(v15) = 29516;
      HIWORD(v15) = (unsigned int)"se error" >> 16;
      zlog(g_zc, v15, 164, "dev_init_hal", 12, 97, 100, v25);
    }
    fpga_reset();
    V_LOCK();
    LOWORD(v7) = 29920;
    HIWORD(v7) = (unsigned int)" init failed" >> 16;
    logfmt_raw(v25, 0x1000u, 0, v7);
    V_UNLOCK();
    LOWORD(v8) = 29516;
    HIWORD(v8) = (unsigned int)"se error" >> 16;
    zlog(g_zc, v8, 164, "dev_init_hal", 12, 101, 60, v25);
    enable_bypass_mode();
    dev_config_hal("t");
    return 0;
  }
}
