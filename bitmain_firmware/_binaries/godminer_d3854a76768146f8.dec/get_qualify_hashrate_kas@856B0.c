int __fastcall get_qualify_hashrate_kas(int a1, double *a2)
{
  int v5; // r5
  double v6; // [sp+0h] [bp-8h] BYREF

  v6 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v6);
  if ( *(_BYTE *)(a1 + 280) != 75 )
    return 25;
  if ( *(_BYTE *)(a1 + 281) != 83 )
    return 25;
  if ( *(_BYTE *)(a1 + 282) != 51 )
    return 25;
  v5 = *(unsigned __int8 *)(a1 + 283);
  if ( *(_BYTE *)(a1 + 283) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 228));
  api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 228));
  *a2 = v6 * 0.980000019;
  return v5;
}
