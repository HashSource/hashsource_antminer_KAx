int __fastcall get_qualify_hashrate_ckb(int a1, double *a2)
{
  double v4; // d8
  void (__fastcall *v5)(int, double *); // r2
  int eeprom_chip_ft; // r0
  const char *v7; // r1
  const char *v8; // r4
  const char *v9; // r1
  double v11; // [sp+0h] [bp-Ch] BYREF

  v4 = 0.0;
  v5 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v11 = 0.0;
  v5(a1, &v11);
  if ( *(_BYTE *)(a1 + 280) != 75 || *(_BYTE *)(a1 + 281) != 55 || *(_BYTE *)(a1 + 282) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 228));
  eeprom_chip_ft = api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 228));
  LOWORD(v7) = -19412;
  v8 = (const char *)(eeprom_chip_ft + 5);
  HIWORD(v7) = (unsigned int)"expected freq: %.2f" >> 16;
  if ( !strncmp((const char *)(eeprom_chip_ft + 5), v7, 4u) )
  {
    v4 = 0.985000014;
  }
  else
  {
    LOWORD(v9) = -19396;
    HIWORD(v9) = (unsigned int)".2f" >> 16;
    if ( !strncmp(v8, v9, 4u) )
      v4 = 0.972000003;
  }
  *a2 = v11 * v4;
  return 0;
}
