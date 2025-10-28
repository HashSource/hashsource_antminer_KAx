int __fastcall check_if_bringup_temp_too_low(int a1)
{
  char *all_created_runtime; // r0
  char *v3; // r6
  int v4; // r1
  char *v5; // r7
  char *v6; // r3
  int v7; // r5
  int v8; // t1
  int v10; // r3
  char *v11; // r5
  int v12; // r1
  int v13; // r0
  int v14; // r0
  int v15; // t1
  int v16; // r3
  int v17; // r1
  int v18; // [sp+14h] [bp-1008h] BYREF
  char v19[4100]; // [sp+18h] [bp-1004h] BYREF

  all_created_runtime = (char *)get_all_created_runtime(&v18);
  if ( v18 > 0 )
  {
    v3 = all_created_runtime;
    v4 = *(_DWORD *)(a1 + 92);
    if ( *(_DWORD *)(*(_DWORD *)all_created_runtime + 424) > v4 )
    {
      V_LOCK();
      LOWORD(v16) = -9888;
      HIWORD(v16) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_interface.c" >> 16;
      logfmt_raw(v19, 0x1000u, 0, v16);
      V_UNLOCK();
      LOWORD(v17) = -11348;
      HIWORD(v17) = (unsigned int)"ck it, and reboot system" >> 16;
      zlog(g_zc, v17, 166, "check_if_bringup_temp_too_low", 29, 1208, 100, v19);
    }
    else
    {
      v5 = all_created_runtime;
      v6 = all_created_runtime;
      v7 = 0;
      do
      {
        if ( ++v7 == v18 )
          return 0;
        v8 = *((_DWORD *)v6 + 1);
        v6 += 4;
      }
      while ( *(_DWORD *)(v8 + 424) <= v4 );
      V_LOCK();
      LOWORD(v10) = -9888;
      HIWORD(v10) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_interface.c" >> 16;
      v11 = &v3[4 * v7];
      logfmt_raw(v19, 0x1000u, 0, v10);
      V_UNLOCK();
      LOWORD(v12) = -11348;
      HIWORD(v12) = (unsigned int)"ck it, and reboot system" >> 16;
      zlog(g_zc, v12, 166, "check_if_bringup_temp_too_low", 29, 1208, 100, v19);
      do
      {
        v13 = (*(int (**)(void))(*(_DWORD *)v5 + 24))();
        v14 = dev_ctrl(v13);
        v15 = *(_DWORD *)v5;
        v5 += 4;
        (*(void (__fastcall **)(_DWORD))(v14 + 32))(*(_DWORD *)(v15 + 248));
      }
      while ( v11 != v5 );
    }
    power_off();
    while ( 1 )
      sleep(1u);
  }
  return 0;
}
