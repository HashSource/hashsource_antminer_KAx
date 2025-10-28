int __fastcall get_theory_hashrate_eth(int a1, double *a2)
{
  double v4; // r0
  float v5; // s14
  double v6; // d7
  char *v8; // r1
  int v9; // r4
  int v10; // r1
  int v11; // r4
  char *v12; // r1
  int v13; // r1
  float v14; // [sp+2Ch] [bp-1048h] BYREF
  _DWORD v15[7]; // [sp+30h] [bp-1044h] BYREF
  int v16; // [sp+4Ch] [bp-1028h]
  _DWORD v17[7]; // [sp+50h] [bp-1024h] BYREF
  int v18; // [sp+6Ch] [bp-1008h]
  char v19[4100]; // [sp+70h] [bp-1004h] BYREF

  v14 = 1.0;
  if ( is_eeprom_loaded() )
  {
    LODWORD(v4) = api_get_eeprom_nonce_response_rate(*(_DWORD *)(a1 + 228), &v14);
    if ( LODWORD(v4) )
    {
      v14 = 1.0;
      V_LOCK();
      LOWORD(v8) = 588;
      HIWORD(v8) = (unsigned int)": get test = %d" >> 16;
      V_INT((int)v17, v8, *(int *)(a1 + 232));
      LOWORD(v9) = -11932;
      HIWORD(v9) = (unsigned int)"_2130" >> 16;
      logfmt_raw(v19, 0x1000u, 0, v18, v17[0], v17[1], v17[2], v17[3], v17[4], v17[5], v17[6], v18, v9);
      V_UNLOCK();
      LOWORD(v10) = -12308;
      HIWORD(v10) = (unsigned int)"0" >> 16;
      LODWORD(v4) = zlog(g_zc, v10, 171, "get_theory_hashrate_eth", 23, 1358, 100, v19);
      v5 = v14 * 1920.0;
    }
    else
    {
      if ( v14 == 0.0 )
      {
        v6 = 1900000000.0;
        goto LABEL_6;
      }
      v5 = (float)(v14 / 100.0) * 1920.0;
    }
    floor(v4);
    v6 = (double)(50 * (unsigned int)(v5 / 50.0)) * 1000.0 * 1000.0;
LABEL_6:
    *a2 = v6;
    return 0;
  }
  LOWORD(v11) = -11984;
  *a2 = 1.0;
  V_LOCK();
  LOWORD(v12) = 588;
  HIWORD(v12) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v15, v12, *(int *)(a1 + 232));
  HIWORD(v11) = (unsigned int)"fg_HNS_2130" >> 16;
  logfmt_raw(v19, 0x1000u, 0, v16, v15[0], v15[1], v15[2], v15[3], v15[4], v15[5], v15[6], v16, v11);
  V_UNLOCK();
  LOWORD(v13) = -12308;
  HIWORD(v13) = (unsigned int)"0" >> 16;
  zlog(g_zc, v13, 171, "get_theory_hashrate_eth", 23, 1349, 100, v19);
  return 32;
}
