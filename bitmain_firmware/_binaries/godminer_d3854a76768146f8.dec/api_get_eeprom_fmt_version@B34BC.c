int __fastcall api_get_eeprom_fmt_version(int a1)
{
  if ( dword_18A790[0] && *(_BYTE *)(dword_18A790[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_18A790[0] + 4 * dword_18A790[a1 + 2]) + 2);
  sub_AFCA8();
  return 0;
}
