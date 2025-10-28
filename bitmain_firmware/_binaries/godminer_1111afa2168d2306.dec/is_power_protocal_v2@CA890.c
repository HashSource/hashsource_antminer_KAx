bool is_power_protocal_v2()
{
  bool v0; // cc

  v0 = (unsigned int)dword_1B4608 > 0x62;
  if ( dword_1B4608 != 98 )
    v0 = (unsigned int)(dword_1B4608 - 100) > 2;
  return !v0;
}
