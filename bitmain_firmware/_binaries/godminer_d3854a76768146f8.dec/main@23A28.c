int __fastcall main(int argc, const char **argv, const char **envp)
{
  FILE *v5; // r7
  size_t v6; // r8
  int v7; // r11
  char *v8; // r9
  size_t i; // r7
  const unsigned __int16 **v10; // r0
  int v11; // t1
  int v12; // r5
  int v14; // r0
  unsigned int v15; // r7
  _DWORD *v16; // r0
  _DWORD *v17; // r9
  int hardware_version; // r8
  _DWORD *all_created_runtime; // r10
  int v20; // r8
  int v21; // r0
  int v22; // r12
  int v23; // r3
  void *v24; // [sp+14h] [bp-1068h]
  char dest[32]; // [sp+18h] [bp-1064h] BYREF
  char command[64]; // [sp+38h] [bp-1044h] BYREF
  char s[4100]; // [sp+78h] [bp-1004h] BYREF

  memset(s, 0, 0x100u);
  memset(command, 0, sizeof(command));
  snprintf(command, 0x40u, "pidof %s", "godminer");
  v5 = popen(command, "r");
  if ( v5 )
  {
    while ( fgets(s, 256, v5) )
      ;
    v6 = 0;
    pclose(v5);
    v7 = 0;
    v8 = s;
    for ( i = 1; strlen(s) >= i; ++i )
    {
      memset(dest, 0, sizeof(dest));
      v10 = _ctype_b_loc();
      v11 = (unsigned __int8)*v8++;
      if ( ((*v10)[v11] & 0x2000) != 0 )
      {
        strncpy(dest, &s[v6], i - v6 - 1);
        v6 = i;
        if ( strtol(dest, 0, 10) > 0 )
          ++v7;
      }
    }
    if ( v7 )
    {
      printf("%d instance of %s is already Running on this machine", v7, "godminer");
      if ( v7 != 1 )
      {
        v12 = 1;
        printf("godminer is forbidden to start again as it is already started, will exit immediately.");
        return v12;
      }
    }
  }
  if ( log_init() )
    puts("log init error!");
  V_LOCK();
  logfmt_raw(s, 0x1000u, 0, "release version");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/god-miner.c",
    139,
    "main",
    4,
    1579,
    40,
    s);
  V_LOCK();
  logfmt_raw(s, 0x1000u, 0, "asic mode");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/god-miner.c",
    139,
    "main",
    4,
    1584,
    40,
    s);
  while ( 1 )
  {
    v14 = EVPX_EncryptInit_ex(argc, (int)argv, "a:c:hp:Po:u:v:F", (const char **)&off_130A1C, 0);
    if ( v14 < 0 )
      break;
    parse_arg(v14, (char *)optarg);
  }
  if ( argc > optind )
  {
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "%s: unsupported non-option argument -- '%s'", *argv, argv[optind]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "parse_cmdline",
      13,
      555,
      100,
      s);
    exit(1);
  }
  v15 = 4;
  V_LOCK();
  logfmt_raw(s, 0x1000u, 0, "opt_algo %d, %s", opt_algo, off_1309C0[opt_algo]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/god-miner.c",
    139,
    "main",
    4,
    1588,
    60,
    s);
  if ( !total_pools )
  {
    V_LOCK();
    v12 = 1;
    logfmt_raw(s, 0x1000u, 0, "Need to specify at least one pool server.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "main",
      4,
      1604,
      80,
      s);
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "Pool setup failed!");
    V_UNLOCK();
    v23 = 1605;
    goto LABEL_42;
  }
  droa_macro_check();
  if ( opt_version_path )
    read_version_file();
  else
    make_fake_version();
  if ( opt_api_remote )
  {
    pools_active = 1;
    start_api_thread();
  }
  v16 = dhash_content_init(opt_algo);
  v24 = v16;
  if ( !v16 )
  {
    printf(aInvalidPointer, "dhash_content");
    return 3;
  }
  set_frontend_runtime_type((int)v16, opt_algo);
  check_pool_worker();
  v12 = hardware_init(opt_algo);
  if ( !v12 )
  {
    v17 = machine_runtime_init(opt_machine_type, opt_algo);
    if ( !v17 )
    {
      printf(aInvalidPointer, "machine_runtime");
      return 3;
    }
    hardware_version = get_hardware_version();
    V_LOCK();
    logfmt_raw(
      s,
      0x1000u,
      0,
      "godminer Version = 0x%04X %s",
      (unsigned __int16)hardware_version,
      "2.0.0_release_clean_master_abdd7697984ddd67627b79989c4bd15ada4ba400_Sep 25 2023 16:18:04");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "init_miner_version",
      18,
      632,
      40,
      s);
    sprintf(g_miner_version, "%d.%d-%s", (unsigned __int8)hardware_version, BYTE2(hardware_version), "2.0.0");
    *(_DWORD *)s = 0;
    all_created_runtime = get_all_created_runtime(s);
    if ( is_eeprom_loaded() )
    {
      while ( v12 < *(int *)s )
      {
        v22 = all_created_runtime[v12++];
        (*(void (__fastcall **)(int, int, int))(v22 + 160))(v22, 1, opt_custom_freq);
      }
    }
    check_sn((char *)v17[29]);
    http_test_case_init();
    start_http_thread();
    if ( check_pool_connect() == 35 )
      return 1;
    v12 = ((int (__fastcall *)(_DWORD *))v17[12])(v17);
    if ( v12 )
      return v12;
    if ( opt_algo == 10 )
    {
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "start_dag_gen_engine_rvn begin!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "main",
        4,
        1682,
        40,
        s);
      start_dag_gen_engine_rvn();
    }
    signal(2, (__sighandler_t)sub_2D4FC);
    v15 = 4u;
    signal(3, (__sighandler_t)sub_2D4FC);
    signal(15, (__sighandler_t)sub_2D4FC);
    signal(11, (__sighandler_t)sub_2D4FC);
    signal(10, (__sighandler_t)sub_2D4FC);
    signal(13, (__sighandler_t)1);
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "always catch signal!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "main",
      4u,
      1709,
      40,
      s);
    if ( create_pool_connect() == 35 )
      return 1;
    thr_info = 0;
    pthread_attr_init(&stru_18B938);
    v20 = pthread_create(dword_18B934, &stru_18B938, (void *(*)(void *))work_generator_thread, &thr_info);
    pthread_attr_destroy(&stru_18B938);
    if ( v20 )
    {
      V_LOCK();
      v12 = 1;
      logfmt_raw(s, 0x1000u, 0, "work generator thread %d create failed");
      V_UNLOCK();
      v23 = 1719;
    }
    else
    {
      dword_18B960 = 1;
      pthread_attr_init((pthread_attr_t *)&dword_18B964[1]);
      v12 = pthread_create(
              dword_18B964,
              (const pthread_attr_t *)&dword_18B964[1],
              (void *(*)(void *))nonce_submit_thread,
              &dword_18B960);
      v21 = pthread_attr_destroy((pthread_attr_t *)&dword_18B964[1]);
      if ( !v12 )
      {
        miner_monitor_init(v21);
        V_LOCK();
        logfmt_raw(s, 0x1000u, 0, "Skip DOAROA LOG");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "main",
          4u,
          1740,
          40,
          s);
        add_chip_status_observer((int)godminer_chip_status_monitor);
        add_fanspeed_observer((int)godminer_fan_monitor);
        miner_monitor_start();
        sleep(5u);
        set_miner_start_time();
        set_elapsed_time_validity(1);
        start_watchpool_thread();
        sleep(5u);
        ((void (__fastcall *)(_DWORD *))v17[3])(v17);
        pthread_join(dword_18B934[0], 0);
        V_LOCK();
        logfmt_raw(s, 0x1000u, 0, "workio threads dead, exiting.");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "main",
          4u,
          1787,
          80,
          s);
        print_summary();
        dhash_content_exit(v24);
        ((void (*)(void))v17[5])();
        machine_runtime_exit(0);
        return v12;
      }
      V_LOCK();
      v12 = 1;
      logfmt_raw(s, 0x1000u, 0, "simulation submit thread create failed");
      V_UNLOCK();
      v23 = 1727;
    }
LABEL_42:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "main",
      v15,
      v23,
      100,
      s);
  }
  return v12;
}
