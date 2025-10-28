int fan_pwm_get()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_17522C )
  {
    v0 = dword_175230;
  }
  else
  {
    v0 = pwm_init(0, 1);
    dword_175230 = v0;
    byte_17522C = 1;
  }
  pwm_get(v0, (int)&v2);
  return v2;
}
