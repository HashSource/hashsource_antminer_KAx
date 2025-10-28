int __fastcall get_sale_hashrate_kas(int a1, double *a2, _DWORD *a3)
{
  int v7; // r5
  double v8; // [sp+0h] [bp-Ch] BYREF

  v8 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v8);
  if ( *(_BYTE *)(a1 + 280) != 75 )
    return 25;
  if ( *(_BYTE *)(a1 + 281) != 83 )
    return 25;
  if ( *(_BYTE *)(a1 + 282) != 51 )
    return 25;
  v7 = *(unsigned __int8 *)(a1 + 283);
  if ( *(_BYTE *)(a1 + 283) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 228));
  api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 228));
  *a2 = v8 * 0.980000019;
  *a3 = 100;
  return v7;
}
