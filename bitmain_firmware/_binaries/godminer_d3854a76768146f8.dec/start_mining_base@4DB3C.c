int __fastcall start_mining_base(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r5
  int v6; // t1
  int v7; // r0
  _DWORD *v8; // r6
  int i; // r9
  int (**v10)(void); // t1
  int v11; // r0
  int v12; // r4
  int v13; // r0
  int v14; // r4
  int *v16; // r7
  unsigned int v17; // r0
  int *v18; // r6
  int j; // r4
  int v20; // t1
  int *v21; // r7
  int v22; // r6
  int v23; // t1
  int (__fastcall *v24)(int, int); // r4
  int v25; // r0
  int v26; // [sp+14h] [bp-4h] BYREF
  int v27; // [sp+18h] [bp+0h] BYREF

  v1 = 0;
  v26 = 0;
  all_created_runtime = get_all_created_runtime(&v26);
  v4 = all_created_runtime;
  if ( v26 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_25:
      printf(aInvalidPointer, "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v26 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_25;
    }
  }
  V_LOCK();
  logfmt_raw((char *)&v27, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "start_mining_base",
    17,
    754,
    60,
    &v27);
  if ( *(_DWORD *)(a1 + 72) <= 5u && opt_custom_power_mode == 1 )
  {
    byte_174FD4 = 1;
    V_LOCK();
    logfmt_raw((char *)&v27, 0x1000u, 0, "sleep on!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      760,
      60,
      &v27);
  }
  if ( power_init((unsigned __int8)byte_174FD4, v26) )
  {
    V_LOCK();
    logfmt_raw((char *)&v27, 0x1000u, 0, ">> power init error, check PSU please <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      763,
      100,
      &v27);
    V_LOCK();
    logfmt_raw((char *)&v27, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      764,
      100,
      &v27);
    return 30;
  }
  else
  {
    V_LOCK();
    logfmt_raw((char *)&v27, 0x1000u, 0, ">> power init success <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      767,
      40,
      &v27);
    if ( start_heartbeat_thread() )
    {
      return start_heartbeat_thread();
    }
    else
    {
      if ( opt_algo != 9
        || (v24 = *(int (__fastcall **)(int, int))(a1 + 28),
            v25 = platfrom_get_check_asic_voltage(),
            (v14 = v24(a1, v25)) == 0) )
      {
        (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
        if ( v26 <= 0 )
          goto LABEL_27;
        v8 = v4 - 1;
        for ( i = 0; i < v26; ++i )
        {
          v10 = (int (**)(void))v8[1];
          ++v8;
          v11 = (*v10)();
          if ( !v11 )
          {
            v12 = 3;
            do
            {
              v13 = dev_ctrl(0);
              (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v13 + 24))(
                *(_DWORD *)(*v8 + 228),
                *(_DWORD *)(*v8 + 944),
                *(_DWORD *)(*v8 + 968));
              (*(void (**)(void))(*v8 + 216))();
              v11 = (*(int (**)(void))(*v8 + 204))();
              if ( v11 )
                break;
              --v12;
            }
            while ( v12 );
          }
        }
        if ( v11 )
        {
          return v11;
        }
        else
        {
LABEL_27:
          check_and_destroy_abnormal_runtime();
          v16 = (int *)get_all_created_runtime(&v26);
          if ( v26 <= 0 )
          {
            V_LOCK();
            v14 = 12;
            logfmt_raw((char *)&v27, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              166,
              "start_mining_base",
              17,
              799,
              100,
              &v27);
          }
          else
          {
            v14 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
            if ( !v14 )
            {
              (*(void (__fastcall **)(int))(a1 + 64))(a1);
              if ( *(_DWORD *)(a1 + 72) != 9 )
              {
                V_LOCK();
                logfmt_raw((char *)&v27, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  166,
                  "start_mining_base",
                  17,
                  813,
                  60,
                  &v27);
              }
              v17 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
              fan_pwm_set(v17);
              if ( v26 > 0 )
              {
                v18 = v16 - 1;
                for ( j = 0; j < v26; ++j )
                {
                  v20 = v18[1];
                  ++v18;
                  redirect_nonce_output(*v16, v20);
                  (*(void (**)(void))(*v18 + 224))();
                }
              }
              if ( *(_DWORD *)(a1 + 72) == 9 )
              {
                (*(void (__fastcall **)(int))(a1 + 64))(a1);
                V_LOCK();
                logfmt_raw((char *)&v27, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  166,
                  "start_mining_base",
                  17,
                  829,
                  60,
                  &v27);
              }
              v14 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
              if ( !v14 && v26 > 0 )
              {
                v21 = v16 - 1;
                v22 = 0;
                do
                {
                  v23 = v21[1];
                  ++v21;
                  ++v22;
                  (*(void (**)(void))(v23 + 4))();
                  (*(void (**)(void))(*v21 + 120))();
                  (*(void (**)(void))(*v21 + 16))();
                }
                while ( v26 > v22 );
              }
            }
          }
        }
      }
      return v14;
    }
  }
}
