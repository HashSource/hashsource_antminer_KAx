int fan_pwm_get()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_1088AC )
  {
    v0 = dword_1088B0;
  }
  else
  {
    v0 = pwm_init(0, 1);
    dword_1088B0 = v0;
    byte_1088AC = 1;
  }
  pwm_get(v0, (int)&v2);
  return v2;
}
