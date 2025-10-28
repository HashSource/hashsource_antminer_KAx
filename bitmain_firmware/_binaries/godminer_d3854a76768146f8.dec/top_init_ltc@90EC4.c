int __fastcall top_init_ltc(int *a1)
{
  int v2; // r3
  int v3; // r1
  char *v4; // r1
  int v5; // r4
  int v6; // r1
  int v7; // r9
  int v8; // r4
  int v9; // r0
  int v10; // r1
  char v11; // r3
  void (__fastcall *v12)(int *, int, int); // r3
  int v13; // r3
  int v14; // r1
  _DWORD v16[7]; // [sp+28h] [bp-1024h] BYREF
  int v17; // [sp+44h] [bp-1008h]
  char v18[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 1420;
  HIWORD(v2) = (unsigned int)&unk_1520FC >> 16;
  logfmt_raw(v18, 0x1000u, 0, v2);
  V_UNLOCK();
  LOWORD(v3) = 604;
  HIWORD(v3) = (unsigned int)"dapt_rvn" >> 16;
  zlog(g_zc, v3, 171, "top_init_ltc", 12, 505, 40, v18);
  V_LOCK();
  LOWORD(v4) = 588;
  HIWORD(v4) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v16, v4, a1[58]);
  LOWORD(v5) = 1440;
  HIWORD(v5) = (unsigned int)&unk_152110 >> 16;
  logfmt_raw(v18, 0x1000u, 0, v17, v16[0], v16[1], v16[2], v16[3], v16[4], v16[5], v16[6], v17, v5);
  V_UNLOCK();
  LOWORD(v6) = 604;
  HIWORD(v6) = (unsigned int)"dapt_rvn" >> 16;
  zlog(g_zc, v6, 171, "top_init_ltc", 12, 506, 40, v18);
  v7 = a1[78];
  v8 = a1[116];
  v9 = sub_12EA10(256, (unsigned __int8)v7);
  if ( (_BYTE)v7 )
  {
    v10 = v8 - 1;
    v11 = 0;
    do
    {
      *(_BYTE *)++v10 = v11;
      v11 += v9;
    }
    while ( v10 != v8 - 1 + (unsigned __int8)v7 );
    v8 = a1[116];
  }
  v12 = (void (__fastcall *)(int *, int, int))a1[60];
  a1[101] = v9;
  v12(a1, v8, v7);
  sub_8D684((int)a1, 0);
  sub_90CD8((int)a1);
  V_LOCK();
  LOWORD(v13) = 1456;
  HIWORD(v13) = (unsigned int)&unk_152120 >> 16;
  logfmt_raw(v18, 0x1000u, 0, v13);
  V_UNLOCK();
  LOWORD(v14) = 604;
  HIWORD(v14) = (unsigned int)"dapt_rvn" >> 16;
  zlog(g_zc, v14, 171, "top_init_ltc", 12, 519, 40, v18);
  return 0;
}
