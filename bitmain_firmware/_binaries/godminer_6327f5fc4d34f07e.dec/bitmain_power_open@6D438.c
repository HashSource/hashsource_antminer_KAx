int bitmain_power_open()
{
  int result; // r0

  result = dword_119DF0;
  if ( !dword_119DF0 || !dword_119DF4 )
    return sub_6D270();
  return result;
}
