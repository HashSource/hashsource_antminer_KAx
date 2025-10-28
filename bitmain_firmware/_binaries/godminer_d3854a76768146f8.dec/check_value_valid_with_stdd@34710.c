bool __fastcall check_value_valid_with_stdd(__int64 a1, int a2)
{
  double v2; // d0
  int *v4; // r3
  int v5; // r2
  int v6; // t1
  double v7; // d7
  double v8; // d10
  double v9; // d8
  int v10; // r3
  int v11; // r1
  char v13[4096]; // [sp+28h] [bp-1000h] BYREF

  if ( a1 <= 0 )
  {
    v7 = 0.0;
  }
  else
  {
    v4 = (int *)a1;
    v5 = 0;
    do
    {
      v6 = *v4++;
      v5 += v6;
    }
    while ( (int *)(a1 + 4 * HIDWORD(a1)) != v4 );
    v7 = (double)v5;
  }
  v8 = v7 / (double)SHIDWORD(a1);
  calc_stdd(a1);
  V_LOCK();
  v9 = (double)a2;
  LOWORD(v10) = 12044;
  HIWORD(v10) = (unsigned int)"ms\": [\"%s\", \"%s\"], \"id\": %d, \"method\": \"eth_submitLogin\"}" >> 16;
  logfmt_raw(v13, 0x1000u, 0, v10, v8, v2, v8 - v2, v2 + v8, v9);
  V_UNLOCK();
  LOWORD(v11) = 11432;
  HIWORD(v11) = (unsigned int)", %s, %s" >> 16;
  zlog(g_zc, v11, 134, "check_value_valid_with_stdd", 27, 559, 20, v13);
  return v9 >= v8 - v2 && v9 <= v2 + v8 || v2 < 2.0;
}
