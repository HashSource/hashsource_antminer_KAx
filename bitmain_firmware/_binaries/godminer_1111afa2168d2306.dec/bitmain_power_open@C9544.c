int bitmain_power_open()
{
  int result; // r0

  result = dword_1B4600;
  if ( !dword_1B4600 || !dword_1B4604 )
    return sub_C9384();
  return result;
}
