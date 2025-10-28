int __fastcall check_asic_num_base(int a1)
{
  int v1; // r4
  int *all_created_runtime; // r0
  int *v4; // r5
  int v5; // t1
  int v6; // r0
  int v7; // r8
  int v8; // r0
  int i; // r4
  int v10; // r0
  int v11; // r5
  int *v12; // r4
  int (**v13)(void); // t1
  int v14; // r7
  int v15; // r0
  int v16; // r0
  int v17; // r7
  int v19; // [sp+0h] [bp-10ACh]
  int *v20; // [sp+14h] [bp-1098h]
  int v21; // [sp+24h] [bp-1088h] BYREF
  _QWORD v22[16]; // [sp+28h] [bp-1084h] BYREF
  char v23[4100]; // [sp+A8h] [bp-1004h] BYREF

  v1 = 0;
  v21 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v21);
  v20 = all_created_runtime;
  if ( v21 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_25:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v4 = all_created_runtime;
    while ( 1 )
    {
      v6 = dev_ctrl(all_created_runtime);
      all_created_runtime = (int *)(*(int (__fastcall **)(int))(v6 + 28))(v1++);
      if ( v21 <= v1 )
        break;
      v5 = v4[1];
      ++v4;
      if ( !v5 )
        goto LABEL_25;
    }
  }
  V_LOCK();
  logfmt_raw(v23, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  v7 = 1;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "check_asic_num_base",
    19,
    370,
    60,
    v23);
  memset(v22, 0, sizeof(v22));
  V_LOCK();
  logfmt_raw(v23, 0x1000u, 0, "start to check asic num test loop");
  V_UNLOCK();
  v8 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
         "gin_godminer-new/machine_runtime/machine_runtime_base.c",
         166,
         "check_asic_num_base",
         19,
         375,
         60,
         v23);
  while ( 1 )
  {
    if ( v21 > 0 )
    {
      for ( i = 0; i < v21; ++i )
      {
        v10 = dev_ctrl(v8);
        v8 = (*(int (__fastcall **)(int))(v10 + 40))(i);
      }
    }
    v11 = power_init();
    if ( v11 )
      break;
    v8 = (*(int (__fastcall **)(int, _DWORD))(a1 + 20))(a1, *(_DWORD *)(a1 + 56));
    if ( v21 > 0 )
    {
      v12 = v20 - 1;
      do
      {
        while ( 1 )
        {
          v13 = (int (**)(void))v12[1];
          ++v12;
          v8 = (*v13)();
          if ( !v8 )
            break;
          if ( v21 <= ++v11 )
            goto LABEL_22;
        }
        v14 = 3;
        v15 = redirect_nonce_output(*v20, *v12);
        while ( 1 )
        {
          v16 = dev_ctrl(v15);
          (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v16 + 24))(
            *(_DWORD *)(*v12 + 196),
            *(_DWORD *)(*v12 + 904),
            *(_DWORD *)(*v12 + 928));
          (*(void (**)(void))(*v12 + 188))();
          v15 = (*(int (**)(void))(*v12 + 180))();
          if ( !v15 )
            break;
          if ( !--v14 )
          {
            v17 = LODWORD(v22[v11]) + 1;
            LODWORD(v22[v11]) = v17;
            goto LABEL_21;
          }
        }
        v17 = v22[v11];
LABEL_21:
        (*(void (**)(void))(*v12 + 20))();
        V_LOCK();
        v19 = v11++;
        logfmt_raw(v23, 0x1000u, 0, "chain[%d] check asic num test, loop:%d done, total failed times:%d", v19, v7, v17);
        V_UNLOCK();
        v8 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/machine_runtime/machine_runtime_base.c",
               166,
               "check_asic_num_base",
               19,
               410,
               60,
               v23);
      }
      while ( v21 > v11 );
    }
LABEL_22:
    if ( ++v7 == 1001 )
      return 0;
  }
  V_LOCK();
  logfmt_raw(v23, 0x1000u, 0, "power init error!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "check_asic_num_base",
    19,
    382,
    100,
    v23);
  return 30;
}
