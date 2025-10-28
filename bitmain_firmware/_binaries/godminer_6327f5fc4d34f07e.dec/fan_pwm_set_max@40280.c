int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_1088AC )
  {
    dword_1088B0 = pwm_init(0, 100);
    byte_1088AC = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_1088B0, 0x64u);
  return result;
}
