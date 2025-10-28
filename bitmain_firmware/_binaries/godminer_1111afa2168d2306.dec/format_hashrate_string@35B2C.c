int __fastcall format_hashrate_string(int a1, char *a2)
{
  double v2; // d0
  double v5; // d8
  int v6; // r3
  int v7; // r1
  int v8; // r3
  double v9; // d0
  double v10; // d8
  const char *v11; // r1
  const char *v13; // r1
  char v14[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = v2;
  V_LOCK();
  LOWORD(v6) = -26300;
  HIWORD(v6) = (unsigned int)"lue:%.4f, max_value:%.4f, to_check:%.4f" >> 16;
  logfmt_raw(v14, 0x1000u, 0, v6, v2, a1);
  V_UNLOCK();
  LOWORD(v7) = -26580;
  HIWORD(v7) = (unsigned int)"f %s" >> 16;
  zlog(g_zc, v7, 134, "format_hashrate_string", 22, 51, 20, v14);
  if ( v2 < 10000.0 )
  {
    LOWORD(v13) = -26268;
    HIWORD(v13) = (unsigned int)"ck:%.4f" >> 16;
    return sprintf(a2, v13, v2, a1);
  }
  else
  {
    if ( v2 < 10000000.0 )
    {
      v8 = 75;
      v10 = v2 * 0.001;
    }
    else
    {
      if ( v2 >= 1.0e10 )
        v8 = 71;
      else
        v8 = 77;
      if ( v2 >= 1.0e10 )
        v9 = 0.000000001;
      else
        v9 = 0.000001;
      v10 = v5 * v9;
    }
    LOWORD(v11) = -26256;
    HIWORD(v11) = (unsigned int)"XLY_CORRECT" >> 16;
    return sprintf(a2, v11, v10, v8, a1);
  }
}
