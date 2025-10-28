void __fastcall __noreturn check_working_voltage(int a1)
{
  int v2; // r9
  int v3; // r8
  int current_voltage; // r6
  int v5; // r0
  int v6; // r3
  int v7; // r4
  int v8; // r0
  int v9; // r0
  int v10; // [sp+1Ch] [bp-4h] BYREF
  char v11[4100]; // [sp+20h] [bp+0h] BYREF

  v10 = 0;
  LOWORD(v2) = -11384;
  LOWORD(v3) = -11944;
  get_all_created_runtime(&v10);
  while ( 1 )
  {
    current_voltage = get_current_voltage();
    v5 = (*(int (__fastcall **)(int))(a1 + 8))(a1);
    v6 = current_voltage - v5;
    v7 = v5;
    if ( current_voltage - v5 < 0 )
      v6 = v5 - current_voltage;
    if ( v6 > 9 )
    {
      V_LOCK();
      HIWORD(v2) = (unsigned int)":6" >> 16;
      logfmt_raw(v11, 0x1000u, 0, v2, current_voltage, v7);
      V_UNLOCK();
      HIWORD(v3) = (unsigned int)off_14D320 >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        v3,
        21,
        352,
        40,
        v11);
      if ( opt_algo == 9 )
      {
        (*(void (__fastcall **)(int, int))(a1 + 28))(a1, v7);
      }
      else if ( opt_algo == 11 )
      {
        v9 = is_power_init();
        set_voltage_by_steps(v7, v9, 0x14u);
      }
      else
      {
        v8 = is_power_init();
        set_voltage_by_steps(v7, v8, 0x64u);
      }
    }
    sleep(1u);
  }
}
