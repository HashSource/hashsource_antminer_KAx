bool is_power_protocal_v2()
{
  bool v0; // cc

  v0 = (unsigned int)dword_18A860 > 0x62;
  if ( dword_18A860 != 98 )
    v0 = (unsigned int)(dword_18A860 - 100) > 2;
  return !v0;
}
