int bitmain_power_close()
{
  if ( dword_1B4600 && dword_1B4604 )
    return 0;
  sub_C9008();
  return 0;
}
