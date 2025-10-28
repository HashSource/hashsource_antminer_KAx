int __fastcall format_hashrate_double(int a1, double *a2, char *a3)
{
  double v3; // d0
  int v7; // r3
  int v8; // r1
  const char *v9; // r1
  int v11; // r2
  double v12; // d9
  const char *v13; // r1
  char v14[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v7) = -26244;
  HIWORD(v7) = (unsigned int)"                                " >> 16;
  logfmt_raw(v14, 0x1000u, 0, v7, v3, a1);
  V_UNLOCK();
  LOWORD(v8) = -26580;
  HIWORD(v8) = (unsigned int)"f %s" >> 16;
  zlog(g_zc, v8, 134, "format_hashrate_double", 22, 86, 20, v14);
  if ( v3 >= 10000.0 )
  {
    if ( v3 < 10000000.0 )
    {
      v11 = 75;
      *a2 = v3 * 0.001;
    }
    else
    {
      if ( v3 < 1.0e10 )
        v11 = 77;
      else
        v11 = 71;
      if ( v3 < 1.0e10 )
        v12 = 0.000001;
      else
        v12 = 0.000000001;
      *a2 = v3 * v12;
    }
    LOWORD(v13) = -26204;
    HIWORD(v13) = (unsigned int)"\\\"" >> 16;
    return sprintf(a3, v13, v11, a1);
  }
  else
  {
    LOWORD(v9) = -26212;
    *a2 = v3;
    HIWORD(v9) = (unsigned int)"" >> 16;
    return sprintf(a3, v9, a1);
  }
}
