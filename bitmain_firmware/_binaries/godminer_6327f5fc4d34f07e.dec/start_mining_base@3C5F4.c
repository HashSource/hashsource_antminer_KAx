int __fastcall start_mining_base(int a1)
{
  int v1; // r4
  int *all_created_runtime; // r0
  int *v4; // r8
  int *v5; // r5
  int v6; // t1
  int v7; // r0
  int started; // r5
  int *v9; // r4
  int (**v10)(void); // t1
  int v11; // r10
  int v12; // r0
  int v13; // r0
  int *v14; // r7
  int v15; // r8
  int v16; // r3
  int *v17; // r5
  int i; // r4
  int v19; // t1
  int *v20; // r7
  int v21; // r5
  int v22; // t1
  int v24; // [sp+14h] [bp-4h] BYREF
  int v25; // [sp+18h] [bp+0h] BYREF

  v1 = 0;
  v24 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v24);
  v4 = all_created_runtime;
  if ( v24 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_32:
      v15 = 3;
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return v15;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (int *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v24 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_32;
    }
  }
  V_LOCK();
  logfmt_raw((char *)&v25, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "start_mining_base",
    17,
    428,
    60,
    &v25);
  if ( power_init() )
  {
    V_LOCK();
    logfmt_raw((char *)&v25, 0x1000u, 0, ">> power init error, check PSU please <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      433,
      100,
      &v25);
    return 30;
  }
  started = start_heartbeat_thread();
  if ( started )
    return start_heartbeat_thread();
  (*(void (__fastcall **)(int, _DWORD))(a1 + 20))(a1, *(_DWORD *)(a1 + 56));
  if ( v24 > 0 )
  {
    v9 = v4 - 1;
    do
    {
LABEL_12:
      v10 = (int (**)(void))v9[1];
      ++v9;
      if ( !(*v10)() )
      {
        v11 = 3;
        v12 = redirect_nonce_output(*v4, *v9);
        while ( 1 )
        {
          v13 = dev_ctrl(v12);
          (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v13 + 24))(
            *(_DWORD *)(*v9 + 196),
            *(_DWORD *)(*v9 + 904),
            *(_DWORD *)(*v9 + 928));
          (*(void (**)(void))(*v9 + 188))();
          v12 = (*(int (**)(void))(*v9 + 180))();
          if ( !v12 )
            break;
          if ( !--v11 )
          {
            if ( v24 > ++started )
              goto LABEL_12;
            goto LABEL_17;
          }
        }
      }
      ++started;
    }
    while ( v24 > started );
  }
LABEL_17:
  check_and_destroy_abnormal_runtime();
  v14 = (int *)get_all_created_runtime(&v24);
  if ( v24 <= 0 )
  {
    V_LOCK();
    v15 = 12;
    logfmt_raw((char *)&v25, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      463,
      100,
      &v25);
    return v15;
  }
  v15 = (*(int (__fastcall **)(int, _DWORD))(a1 + 20))(a1, *(_DWORD *)(a1 + 60));
  if ( v15 )
    return v15;
  (*(void (__fastcall **)(int))(a1 + 44))(a1);
  V_LOCK();
  logfmt_raw((char *)&v25, 0x1000u, 0, "check_bringup temperature %d C", *(_DWORD *)(a1 + 68));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "start_mining_base",
    17,
    473,
    60,
    &v25);
  v16 = *(_DWORD *)(a1 + 68);
  if ( v16 != -64 )
  {
    if ( v16 < -10 )
    {
      fan_pwm_set(0x28u);
    }
    else if ( v16 > 30 )
    {
      fan_pwm_set(0x64u);
    }
  }
  if ( v24 > 0 )
  {
    v17 = v14 - 1;
    for ( i = 0; i < v24; ++i )
    {
      v19 = v17[1];
      ++v17;
      redirect_nonce_output(*v14, v19);
      (*(void (**)(void))(*v17 + 192))();
    }
  }
  v15 = (*(int (__fastcall **)(int))(a1 + 24))(a1);
  if ( v15 || v24 <= 0 )
    return v15;
  v20 = v14 - 1;
  v21 = 0;
  do
  {
    v22 = v20[1];
    ++v20;
    ++v21;
    (*(void (**)(void))(v22 + 4))();
    (*(void (**)(void))(*v20 + 112))();
    (*(void (**)(void))(*v20 + 8))();
  }
  while ( v24 > v21 );
  return 0;
}
