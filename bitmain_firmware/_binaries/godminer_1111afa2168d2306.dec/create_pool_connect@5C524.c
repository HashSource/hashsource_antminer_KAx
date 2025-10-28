int create_pool_connect()
{
  int pool_stratum_threads; // r8
  int v1; // r4
  int v2; // r3
  int v3; // r1
  int v5; // r3
  int v6; // r1
  int v7; // r3
  int v8; // r1
  int v9; // r3
  int v10; // r1
  int v11; // r3
  int v12; // r8
  int v13; // r5
  const char *v14; // r6
  bool v15; // zf
  bool v16; // r0
  int v17; // r3
  int v18; // r1
  char *all_created_runtime; // r0
  int v20; // r3
  char *v21; // r4
  int v22; // t1
  int v23; // r3
  int v24; // r1
  const char *v25; // r1
  int v26; // [sp+14h] [bp-1010h]
  _DWORD v27[1025]; // [sp+20h] [bp-1004h] BYREF

  pool_stratum_threads = create_pool_stratum_threads();
  if ( pool_stratum_threads )
  {
    V_LOCK();
    LOWORD(v2) = -30272;
    HIWORD(v2) = (unsigned int)"Input pool error, try again" >> 16;
    logfmt_raw((char *)v27, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = 28844;
    HIWORD(v3) = (unsigned int)"st below of the servers you have input." >> 16;
    zlog(g_zc, v3, 151, "create_pool_connect", 19, 153, 100, v27);
    return 1;
  }
  else
  {
    v1 = 60;
    do
    {
      sleep(1u);
      if ( pools_active )
        return 0;
      --v1;
    }
    while ( v1 );
    V_LOCK();
    LOWORD(v5) = 29204;
    HIWORD(v5) = (unsigned int)"heck_sn.c" >> 16;
    logfmt_raw((char *)v27, 0x1000u, 0, v5);
    V_UNLOCK();
    LOWORD(v6) = 28844;
    HIWORD(v6) = (unsigned int)"st below of the servers you have input." >> 16;
    zlog(g_zc, v6, 151, "create_pool_connect", 19, 165, 100, v27);
    V_LOCK();
    LOWORD(v7) = 29264;
    HIWORD(v7) = (unsigned int)" %d:%s" >> 16;
    logfmt_raw((char *)v27, 0x1000u, 0, v7);
    V_UNLOCK();
    LOWORD(v8) = 28844;
    HIWORD(v8) = (unsigned int)"st below of the servers you have input." >> 16;
    zlog(g_zc, v8, 151, "create_pool_connect", 19, 166, 100, v27);
    V_LOCK();
    LOWORD(v9) = 29340;
    HIWORD(v9) = (unsigned int)"%d" >> 16;
    logfmt_raw((char *)v27, 0x1000u, 0, v9);
    V_UNLOCK();
    LOWORD(v10) = 28844;
    HIWORD(v10) = (unsigned int)"st below of the servers you have input." >> 16;
    zlog(g_zc, v10, 151, "create_pool_connect", 19, 167, 100, v27);
    if ( total_pools > 0 )
    {
      LOWORD(v11) = 29080;
      HIWORD(v11) = (unsigned int)"ns/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_sn.c" >> 16;
      v26 = v11;
      LOWORD(v11) = 28844;
      HIWORD(v11) = (unsigned int)"st below of the servers you have input." >> 16;
      v12 = v11;
      do
      {
        v13 = *(_DWORD *)(pools + 4 * v1);
        V_LOCK();
        logfmt_raw(
          (char *)v27,
          0x1000u,
          0,
          v26,
          *(_DWORD *)v13,
          *(_DWORD *)(v13 + 12),
          *(_DWORD *)(v13 + 16),
          *(_DWORD *)(v13 + 20));
        V_UNLOCK();
        zlog(g_zc, v12, 151, "create_pool_connect", 19, 173, 80, v27);
        if ( *(_DWORD *)(v13 + 20) )
        {
          v14 = *(const char **)(v13 + 16);
          if ( v14 )
          {
            v15 = strstr(*(const char **)(v13 + 20), "stats") == 0;
            v16 = 1;
            if ( v15 )
            {
              LOWORD(v25) = 29124;
              HIWORD(v25) = (unsigned int)"ild/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_sn.c" >> 16;
              v16 = strcmp(v14, v25) == 0;
            }
            *(_BYTE *)(v13 + 1648) = v16;
          }
        }
        ++v1;
      }
      while ( total_pools > v1 );
      pool_stratum_threads = 0;
    }
    V_LOCK();
    LOWORD(v17) = 29136;
    HIWORD(v17) = (unsigned int)"uildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_sn.c" >> 16;
    logfmt_raw((char *)v27, 0x1000u, 0, v17);
    V_UNLOCK();
    LOWORD(v18) = 28844;
    HIWORD(v18) = (unsigned int)"st below of the servers you have input." >> 16;
    zlog(g_zc, v18, 151, "create_pool_connect", 19, 179, 100, v27);
    v27[0] = 0;
    all_created_runtime = (char *)get_all_created_runtime(v27);
    v20 = v27[0];
    if ( v27[0] > 0 )
    {
      v21 = all_created_runtime - 4;
      do
      {
        v22 = *((_DWORD *)v21 + 1);
        v21 += 4;
        ++pool_stratum_threads;
        (*(void (**)(void))(v22 + 24))();
        (*(void (**)(void))(*(_DWORD *)v21 + 32))();
        v20 = v27[0];
      }
      while ( pool_stratum_threads < v27[0] );
    }
    if ( v20 )
      fan_pwm_set(0x14u);
    green_led_on();
    red_led_on();
    while ( !pools_active )
      sleep(1u);
    V_LOCK();
    LOWORD(v23) = 29164;
    HIWORD(v23) = (unsigned int)"odminer-origin_godminer-new/miner_util/check_sn.c" >> 16;
    logfmt_raw((char *)v27, 0x1000u, 0, v23);
    V_UNLOCK();
    LOWORD(v24) = 28844;
    HIWORD(v24) = (unsigned int)"st below of the servers you have input." >> 16;
    zlog(g_zc, v24, 151, "create_pool_connect", 19, 181, 80, v27);
    return 0;
  }
}
