int __fastcall get_sale_hashrate_ckb(int a1, double *a2, _DWORD *a3)
{
  double v5; // d8
  void (__fastcall *v7)(int, double *); // r5
  const char *v8; // r4
  double v10; // [sp+0h] [bp-Ch] BYREF

  v5 = 0.0;
  v7 = *(void (__fastcall **)(int, double *))(a1 + 120);
  v10 = 0.0;
  v7(a1, &v10);
  if ( *(_BYTE *)(a1 + 248) != 75 || *(_BYTE *)(a1 + 249) != 55 || *(_BYTE *)(a1 + 250) )
    return 24;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 196));
  v8 = (const char *)(api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 196)) + 5);
  if ( !strncmp(v8, "B1C1", 4u) )
  {
    v5 = 0.982900023;
  }
  else if ( !strncmp(v8, "B2C1", 4u) )
  {
    v5 = 0.970799983;
  }
  *a2 = v10 * v5;
  *a3 = 50;
  return 0;
}
