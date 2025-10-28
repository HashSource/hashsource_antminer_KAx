int __fastcall sub_403C8(int a1)
{
  if ( bitmain_set_voltage() < 0 )
    return sub_402D0();
  usleep(0x7A120u);
  dword_1088D4 = a1;
  dword_1088D8 = a1;
  return 0;
}
