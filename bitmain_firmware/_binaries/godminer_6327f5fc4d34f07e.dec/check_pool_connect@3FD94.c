int check_pool_connect()
{
  int pool_stratum_threads; // r8
  int v1; // r4
  int v3; // r5
  const char *v4; // r6
  bool v5; // zf
  bool v6; // r0
  char *all_created_runtime; // r0
  int v8; // r3
  char *v9; // r4
  int v10; // t1
  _DWORD v11[1025]; // [sp+20h] [bp-1004h] BYREF

  pool_stratum_threads = create_pool_stratum_threads();
  if ( pool_stratum_threads )
  {
    V_LOCK();
    logfmt_raw((char *)v11, 0x1000u, 0, "stratum thread create failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_pool.c",
      151,
      "check_pool_connect",
      18,
      152,
      100,
      v11);
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
    logfmt_raw((char *)v11, 0x1000u, 0, "No servers were found that could be used to get work from.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_pool.c",
      151,
      "check_pool_connect",
      18,
      164,
      100,
      v11);
    V_LOCK();
    logfmt_raw((char *)v11, 0x1000u, 0, "Please check the details from the list below of the servers you have input.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_pool.c",
      151,
      "check_pool_connect",
      18,
      165,
      100,
      v11);
    V_LOCK();
    logfmt_raw(
      (char *)v11,
      0x1000u,
      0,
      "Most likely you have input the wrong URL, forgotten to add a port, have not set up workers, or the network was disconnected.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_pool.c",
      151,
      "check_pool_connect",
      18,
      166,
      100,
      v11);
    if ( total_pools > 0 )
    {
      do
      {
        v3 = *(_DWORD *)(pools + 4 * v1);
        V_LOCK();
        logfmt_raw(
          (char *)v11,
          0x1000u,
          0,
          "Pool: %d  URL: %s\tUser: %s  Password: %s",
          *(_DWORD *)v3,
          *(_DWORD *)(v3 + 8),
          *(_DWORD *)(v3 + 12),
          *(_DWORD *)(v3 + 16));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/check_pool.c",
          151,
          "check_pool_connect",
          18,
          172,
          80,
          v11);
        if ( *(_DWORD *)(v3 + 16) )
        {
          v4 = *(const char **)(v3 + 12);
          if ( v4 )
          {
            v5 = strstr(*(const char **)(v3 + 16), "stats") == 0;
            v6 = 1;
            if ( v5 )
              v6 = strcmp(v4, "benchmark") == 0;
            *(_BYTE *)(v3 + 1640) = v6;
          }
        }
        ++v1;
      }
      while ( total_pools > v1 );
    }
    V_LOCK();
    logfmt_raw((char *)v11, 0x1000u, 0, "No servers could be used!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_pool.c",
      151,
      "check_pool_connect",
      18,
      178,
      100,
      v11);
    v11[0] = 0;
    all_created_runtime = (char *)get_all_created_runtime(v11);
    v8 = v11[0];
    if ( v11[0] > 0 )
    {
      v9 = all_created_runtime - 4;
      do
      {
        v10 = *((_DWORD *)v9 + 1);
        v9 += 4;
        ++pool_stratum_threads;
        (*(void (**)(void))(v10 + 12))();
        (*(void (**)(void))(*(_DWORD *)v9 + 20))();
        v8 = v11[0];
      }
      while ( pool_stratum_threads < v11[0] );
    }
    if ( v8 )
      fan_pwm_set(0x14u);
    green_led_on();
    red_led_on();
    while ( !pools_active )
      sleep(1u);
    V_LOCK();
    logfmt_raw((char *)v11, 0x1000u, 0, "Pool is activing, exiting and restart.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_pool.c",
      151,
      "check_pool_connect",
      18,
      180,
      80,
      v11);
    return 0;
  }
}
