int __fastcall get_sale_hashrate_ckb(int a1, double *a2, _DWORD *a3)
{
  double v5; // d8
  void (__fastcall *v7)(int, double *); // r5
  int eeprom_chip_ft; // r0
  const char *v9; // r1
  const char *v10; // r4
  const char *v11; // r1
  const char *v12; // r1
  const char *v13; // r1
  double v15; // [sp+0h] [bp-Ch] BYREF

  v5 = 0.0;
  v7 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v15 = 0.0;
  v7(a1, &v15);
  if ( *(_BYTE *)(a1 + 280) != 75 || *(_BYTE *)(a1 + 281) != 55 || *(_BYTE *)(a1 + 282) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 228));
  eeprom_chip_ft = api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 228));
  LOWORD(v9) = -19412;
  v10 = (const char *)(eeprom_chip_ft + 5);
  HIWORD(v9) = (unsigned int)"expected freq: %.2f" >> 16;
  if ( !strncmp((const char *)(eeprom_chip_ft + 5), v9, 4u)
    || (LOWORD(v11) = -19404, HIWORD(v11) = (unsigned int)" freq: %.2f" >> 16, !strncmp(v10, v11, 4u)) )
  {
    v5 = 0.982900023;
  }
  else
  {
    LOWORD(v12) = -19396;
    HIWORD(v12) = (unsigned int)".2f" >> 16;
    if ( !strncmp(v10, v12, 4u) )
    {
      v5 = 0.970799983;
    }
    else
    {
      LOWORD(v13) = -19388;
      HIWORD(v13) = (unsigned int)"n [%d] set sweep %f, start_freq = %f, sweep_step %f, step_id %d " >> 16;
      if ( !strncmp(v10, v13, 4u) )
        v5 = 0.970799983;
    }
  }
  *a2 = v15 * v5;
  *a3 = 50;
  return 0;
}
