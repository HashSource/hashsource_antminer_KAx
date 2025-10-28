int __fastcall adjust_working_freq_ltc(int a1, int a2)
{
  int v4; // r3
  int v5; // r1
  float v6; // s16
  int v7; // r4
  int v8; // r3
  int v9; // r1
  char v11[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v4) = 3676;
  HIWORD(v4) = (unsigned int)"ease/build/godminer-origin_godminer-new/backend/backend_ltc_1489/chip_reg_io_ltc_1489.c" >> 16;
  logfmt_raw(v11, 0x1000u, 0, v4);
  V_UNLOCK();
  LOWORD(v5) = 3060;
  HIWORD(v5) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
  zlog(g_zc, v5, 171, "adjust_working_freq_ltc", 23, 910, 40, v11);
  v6 = (float)(a2 + *(_DWORD *)(a1 + 480));
  if ( *(float *)(a1 + 996) <= v6 )
  {
    v6 = *(float *)(a1 + 996);
    v7 = 0;
    goto LABEL_3;
  }
  v7 = 18;
  if ( v6 >= 900.0 )
  {
LABEL_3:
    chip_setting_freq_ltc(a1, 1, 0);
    *(_DWORD *)(a1 + 480) = (int)v6;
    V_LOCK();
    LOWORD(v8) = 3708;
    HIWORD(v8) = (unsigned int)"ner-new/backend/backend_ltc_1489/chip_reg_io_ltc_1489.c" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v8);
    V_UNLOCK();
    LOWORD(v9) = 3060;
    HIWORD(v9) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
    zlog(g_zc, v9, 171, "adjust_working_freq_ltc", 23, 925, 40, v11);
  }
  return v7;
}
