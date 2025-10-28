int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_17522C )
  {
    dword_175230 = pwm_init(0, 100);
    byte_17522C = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_175230, 0x64u);
  return result;
}
