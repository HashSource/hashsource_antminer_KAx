int bitmain_power_open()
{
  int result; // r0

  result = dword_18A858;
  if ( !dword_18A858 || !dword_18A85C )
    return sub_B44D4();
  return result;
}
