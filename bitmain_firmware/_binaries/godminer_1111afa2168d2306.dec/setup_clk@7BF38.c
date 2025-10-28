int __fastcall setup_clk(int a1)
{
  int v2; // r8
  char *v3; // r1
  int v4; // r5
  int v5; // r1
  void (__fastcall *v6)(int, int *); // r3
  _DWORD v8[7]; // [sp+28h] [bp-1020h] BYREF
  int v9; // [sp+44h] [bp-1004h]
  int v10; // [sp+48h] [bp-1000h] BYREF
  int v11; // [sp+4Ch] [bp-FFCh]
  int v12; // [sp+50h] [bp-FF8h]
  int v13; // [sp+54h] [bp-FF4h]

  LOWORD(v2) = -17152;
  V_LOCK();
  LOWORD(v3) = 27796;
  HIWORD(v3) = (unsigned int)"%1.f" >> 16;
  HIWORD(v2) = (unsigned int)"" >> 16;
  V_INT((int)v8, v3, *(int *)(a1 + 256));
  LOWORD(v4) = -13668;
  HIWORD(v4) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw((char *)&v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, v4, v2 + 1120);
  V_UNLOCK();
  LOWORD(v5) = -13944;
  HIWORD(v5) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
  zlog(g_zc, v5, 171, v2 + 1132, 9, 271, 60, &v10);
  v12 = 2097153;
  v13 = 0;
  v11 = 0;
  v10 = 11;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v10);
  usleep((__useconds_t)&stru_186A0);
  v12 = 1179649;
  v13 = 0;
  v11 = 0;
  v10 = 276305409;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v10);
  usleep((__useconds_t)&stru_186A0);
  v12 = 1310721;
  v13 = 0;
  v11 = 0;
  v10 = 272381185;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v10);
  usleep((__useconds_t)&stru_186A0);
  sub_78F84(a1, 240, 0x80000000);
  usleep(0x2710u);
  v12 = 1441793;
  v13 = 0;
  v11 = 0;
  v10 = -2147483641;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v10);
  usleep((__useconds_t)&stru_186A0);
  v12 = 3211265;
  v13 = 0;
  v11 = 0;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 276);
  v10 = 0;
  v6(a1, &v10);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
