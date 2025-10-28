void __fastcall __noreturn check_working_voltage(int a1)
{
  int current_voltage; // r4
  int v3; // r0
  int v4; // r4
  int v5; // r5
  int v6; // r0

  while ( 1 )
  {
    current_voltage = get_current_voltage();
    v3 = (*(int (__fastcall **)(int))(a1 + 4))(a1);
    v4 = current_voltage - v3;
    v5 = v3;
    if ( v4 < 0 )
      v4 = -v4;
    if ( v4 > 9 )
    {
      v6 = is_power_init();
      set_voltage_by_steps(v5, v6);
    }
    sleep(1u);
  }
}
