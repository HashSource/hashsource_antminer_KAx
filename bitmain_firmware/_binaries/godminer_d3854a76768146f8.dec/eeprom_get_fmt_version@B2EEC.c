int __fastcall eeprom_get_fmt_version(int a1, _BYTE *a2)
{
  int v2; // r3

  if ( !dword_18A790[0] || !*(_BYTE *)(dword_18A790[0] + 80) )
    return sub_AFCA8();
  v2 = *(_DWORD *)(dword_18A790[0] + 4 * a1);
  *a2 = *(_BYTE *)(v2 + 2);
  return 0;
}
