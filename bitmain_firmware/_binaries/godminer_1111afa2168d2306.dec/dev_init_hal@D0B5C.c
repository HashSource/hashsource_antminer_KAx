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
  int v12; // r1
  int v13; // r0
  int v14; // r3
  int v15; // r1
  int v16; // r3
  int v17; // r3
  int v18; // r1
  int v19; // [sp+14h] [bp-1018h]
  unsigned __int8 v21; // [sp+27h] [bp-1005h] BYREF
  char v22[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = platform_init();
  if ( v1 )
  {
    V_LOCK();
    LOWORD(v17) = -31252;
    HIWORD(v17) = (unsigned int)"%s: after set baud, get zynq bt8d %08x\n" >> 16;
    logfmt_raw(v22, 0x1000u, 0, v17);
    V_UNLOCK();
    LOWORD(v18) = -31228;
    HIWORD(v18) = (unsigned int)"zynq bt8d %08x\n" >> 16;
    zlog(g_zc, v18, 164, "dev_init_hal", 12, 61, 100, v22);
    return -1;
  }
  else
  {
    total_chain = 0;
    hash_on_plug = get_hash_on_plug();
    LOWORD(v3) = -31060;
    v4 = hash_on_plug;
    HIWORD(v3) = (unsigned int)"pic jump to app error!\n" >> 16;
    v5 = total_chain;
    v19 = v3;
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
      logfmt_raw(v22, 0x1000u, 0, v19, total_chain, g_chain_info[2 * total_chain]);
      V_UNLOCK();
      LOWORD(v6) = -31228;
      HIWORD(v6) = (unsigned int)"zynq bt8d %08x\n" >> 16;
      zlog(g_zc, v6, 164, "dev_init_hal", 12, 71, 60, v22);
      if ( platform_is_pic_mcu_en() )
      {
        if ( open_pic((unsigned __int8)v1) < 0 )
        {
          V_LOCK();
          logfmt_raw(
            v22,
            0x1000u,
            0,
            "chain_offset %d, chain %d, open pic error!",
            total_chain,
            g_chain_info[2 * total_chain]);
          V_UNLOCK();
          v13 = g_zc;
          v14 = 75;
LABEL_14:
          LOWORD(v15) = -31228;
          HIWORD(v15) = (unsigned int)"zynq bt8d %08x\n" >> 16;
          zlog(v13, v15, 164, "dev_init_hal", 12, v14, 100, v22);
          return -1;
        }
        pic1704_reset(v1);
        usleep(0x493E0u);
        pic1704_jump_to_app(v1);
        usleep(0x493E0u);
        if ( !pic1704_get_sw_version(g_chain_info[2 * total_chain], &v21) )
        {
          V_LOCK();
          LOWORD(v16) = -30988;
          HIWORD(v16) = (unsigned int)"chain_offset %d, chain %d\n" >> 16;
          logfmt_raw(v22, 0x1000u, 0, v16, total_chain, g_chain_info[2 * total_chain]);
          V_UNLOCK();
          v13 = g_zc;
          v14 = 86;
          goto LABEL_14;
        }
        V_LOCK();
        LOWORD(v10) = -30936;
        HIWORD(v10) = (unsigned int)"flash failed!!!" >> 16;
        logfmt_raw(v22, 0x1000u, 0, v10, total_chain, g_chain_info[2 * total_chain], v21);
        V_UNLOCK();
        LOWORD(v11) = -31228;
        HIWORD(v11) = (unsigned int)"zynq bt8d %08x\n" >> 16;
        zlog(g_zc, v11, 164, "dev_init_hal", 12, 92, 60, v22);
      }
      ++v1;
      v5 = ++total_chain;
    }
    while ( v1 != 16 );
LABEL_7:
    if ( a1 != v5 )
    {
      set_miner_6060info_board_num_less_than_design_err(1);
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, "phyiscal chain num = %d, total chain num = %d", a1, total_chain);
      V_UNLOCK();
      LOWORD(v12) = -31228;
      HIWORD(v12) = (unsigned int)"zynq bt8d %08x\n" >> 16;
      zlog(g_zc, v12, 164, "dev_init_hal", 12, 105, 100, v22);
    }
    fpga_reset();
    V_LOCK();
    LOWORD(v7) = -30832;
    HIWORD(v7) = (unsigned int)"_dc_dc" >> 16;
    logfmt_raw(v22, 0x1000u, 0, v7);
    V_UNLOCK();
    LOWORD(v8) = -31228;
    HIWORD(v8) = (unsigned int)"zynq bt8d %08x\n" >> 16;
    zlog(g_zc, v8, 164, "dev_init_hal", 12, 109, 60, v22);
    enable_bypass_mode();
    dev_config_hal("tu_t_table");
    return 0;
  }
}
