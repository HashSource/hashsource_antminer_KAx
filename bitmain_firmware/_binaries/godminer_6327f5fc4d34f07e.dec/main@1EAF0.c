int __fastcall main(int argc, const char **argv, const char **envp)
{
  FILE *v5; // r6
  char *v6; // r7
  char *v7; // r8
  int v8; // r10
  size_t i; // r6
  const unsigned __int16 **v10; // r0
  int v11; // t1
  const char *v12; // r1
  size_t v13; // r2
  int v14; // r4
  int v16; // r0
  _DWORD *v17; // r0
  void *v18; // r7
  _DWORD *v19; // r5
  int hardware_version; // r8
  _DWORD *all_created_runtime; // r8
  int v22; // r12
  int v23; // r9
  time_t started; // r0
  int v25; // r3
  int v26; // r1
  unsigned int v27; // [sp+0h] [bp-1074h]
  char dest[32]; // [sp+10h] [bp-1064h] BYREF
  char command[64]; // [sp+30h] [bp-1044h] BYREF
  char s[4100]; // [sp+70h] [bp-1004h] BYREF

  memset(s, 0, 0x100u);
  memset(command, 0, sizeof(command));
  snprintf(command, 0x40u, "pidof %s", "godminer");
  v5 = popen(command, "r");
  if ( v5 )
  {
    do
      v6 = fgets(s, 256, v5);
    while ( v6 );
    v7 = s;
    pclose(v5);
    v8 = 0;
    for ( i = 1; strlen(s) >= i; ++i )
    {
      memset(dest, 0, sizeof(dest));
      v10 = _ctype_b_loc();
      v11 = (unsigned __int8)*v7++;
      if ( ((*v10)[v11] & 0x2000) != 0 )
      {
        v12 = &s[(_DWORD)v6];
        v13 = i - (_DWORD)v6 - 1;
        v6 = (char *)i;
        strncpy(dest, v12, v13);
        if ( strtol(dest, 0, 10) > 0 )
          ++v8;
      }
    }
    if ( v8 )
    {
      printf("%d instance of %s is already Running on this machine", v8, "godminer");
      if ( v8 != 1 )
      {
        v14 = 1;
        printf("godminer is forbidden to start again as it is already started, will exit immediately.");
        return v14;
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
    891,
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
    896,
    40,
    s);
  while ( 1 )
  {
    v16 = EVPX_EncryptInit_ex(argc, (int)argv, "a:c:hp:Po:u:v:F", (const char **)&off_DECA8, 0);
    if ( v16 < 0 )
      break;
    parse_arg(v16, (char *)optarg);
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
      533,
      100,
      s);
    exit(1);
  }
  V_LOCK();
  logfmt_raw(s, 0x1000u, 0, "opt_algo %d, %s", opt_algo, off_DEC5C[opt_algo]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/god-miner.c",
    139,
    "main",
    4,
    900,
    60,
    s);
  if ( !total_pools )
  {
    V_LOCK();
    v14 = 1;
    logfmt_raw(s, 0x1000u, 0, "Need to specify at least one pool server.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "main",
      4,
      906,
      80,
      s);
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "Pool setup failed!");
    V_UNLOCK();
    v25 = 907;
    LOWORD(v26) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp"
                                    "/release/build/godminer-origin_godminer-new/god-miner.c";
    v27 = 4;
    goto LABEL_40;
  }
  if ( opt_version_path )
    read_version_file();
  else
    make_fake_version();
  if ( opt_api_remote )
    start_api_thread();
  v17 = dhash_content_init(opt_algo);
  v18 = v17;
  if ( !v17 )
  {
    printf("invalid pointer(%s)!\n", "dhash_content");
    return 3;
  }
  set_frontend_runtime_type((int)v17, opt_algo);
  check_pool_worker();
  if ( check_pool_connect() == 35 )
    return 1;
  v14 = hardware_init(opt_algo);
  if ( !v14 )
  {
    v19 = machine_runtime_init(opt_machine_type, opt_algo);
    if ( !v19 )
    {
      printf("invalid pointer(%s)!\n", "machine_runtime");
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
      "2.0.0_release_dirty_godminer-new_d3bbb0b4626cffb60bb52fb528749eb04d7c4de0_Sep 14 2022 01:04:53");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "init_miner_version",
      18,
      610,
      40,
      s);
    sprintf(g_miner_version, "%d.%d-%s", (unsigned __int8)hardware_version, BYTE2(hardware_version), "2.0.0");
    *(_DWORD *)s = 0;
    all_created_runtime = get_all_created_runtime(s);
    if ( is_eeprom_loaded() )
    {
      while ( v14 < *(int *)s )
      {
        v22 = all_created_runtime[v14++];
        (*(void (__fastcall **)(int, int, int))(v22 + 148))(v22, 1, opt_custom_freq);
      }
    }
    show_sn(v19[21]);
    v14 = ((int (__fastcall *)(_DWORD *))v19[7])(v19);
    if ( !v14 )
    {
      signal(2, (__sighandler_t)sub_27540);
      signal(3, (__sighandler_t)sub_27540);
      signal(15, (__sighandler_t)sub_27540);
      signal(11, (__sighandler_t)sub_27540);
      signal(10, (__sighandler_t)sub_27540);
      signal(13, (__sighandler_t)1);
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "always catch signal!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "main",
        4u,
        967,
        40,
        s);
      thr_info = 0;
      pthread_attr_init(&stru_11AE50);
      v23 = pthread_create(dword_11AE4C, &stru_11AE50, (void *(*)(void *))work_generator_thread, &thr_info);
      pthread_attr_destroy(&stru_11AE50);
      if ( v23 )
      {
        V_LOCK();
        v14 = 1;
        logfmt_raw(s, 0x1000u, 0, "work generator thread %d create failed");
        V_UNLOCK();
        v25 = 973;
      }
      else
      {
        dword_11AE78 = 1;
        pthread_attr_init((pthread_attr_t *)&dword_11AE7C[1]);
        v14 = pthread_create(
                dword_11AE7C,
                (const pthread_attr_t *)&dword_11AE7C[1],
                (void *(*)(void *))nonce_submit_thread,
                &dword_11AE78);
        pthread_attr_destroy((pthread_attr_t *)&dword_11AE7C[1]);
        if ( !v14 )
        {
          set_elapsed_time_validity(1);
          started = set_miner_start_time();
          miner_monitor_init(started);
          add_chip_status_observer((int)godminer_chip_status_monitor);
          add_fanspeed_observer((int)godminer_fan_monitor);
          miner_monitor_start();
          start_watchpool_thread();
          sleep(0xAu);
          ((void (__fastcall *)(_DWORD *))v19[2])(v19);
          http_test_case_init();
          start_http_thread();
          pthread_join(dword_11AE4C[0], 0);
          V_LOCK();
          logfmt_raw(s, 0x1000u, 0, "workio threads dead, exiting.");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/god-miner.c",
            139,
            "main",
            4u,
            1009,
            80,
            s);
          print_summary();
          dhash_content_exit(v18);
          ((void (*)(void))v19[3])();
          machine_runtime_exit(0);
          return v14;
        }
        V_LOCK();
        v14 = 1;
        logfmt_raw(s, 0x1000u, 0, "simulation submit thread create failed");
        V_UNLOCK();
        v25 = 981;
      }
      LOWORD(v26) = -3308;
      v27 = 4u;
LABEL_40:
      HIWORD(v26) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/r"
                                  "elease/build/godminer-origin_godminer-new/god-miner.c" >> 16;
      zlog(g_zc, v26, 139, "main", v27, v25, 100, s);
    }
  }
  return v14;
}
