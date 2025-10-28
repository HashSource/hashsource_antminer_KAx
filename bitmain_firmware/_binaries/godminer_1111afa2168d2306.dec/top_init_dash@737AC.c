int __fastcall top_init_dash(int *a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r1
  int v5; // r7
  int v6; // r4
  int v7; // r0
  int v8; // r1
  char v9; // r3
  void (__fastcall *v10)(int *, int, int); // r3
  _DWORD v12[7]; // [sp+28h] [bp-1024h] BYREF
  int v13; // [sp+44h] [bp-1008h]
  char v14[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 27796;
  HIWORD(v2) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v12, v2, a1[64]);
  LOWORD(v3) = -18820;
  HIWORD(v3) = (unsigned int)"ture_dcr" >> 16;
  logfmt_raw(v14, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, v3);
  V_UNLOCK();
  LOWORD(v4) = -19376;
  HIWORD(v4) = (unsigned int)": %02x%02x%02x%02x chipid:%d coreid:%d" >> 16;
  zlog(g_zc, v4, 173, "top_init_dash", 13, 640, 40, v14);
  v5 = a1[88];
  v6 = a1[126];
  v7 = sub_145388(256, (unsigned __int8)v5);
  if ( (_BYTE)v5 )
  {
    v8 = v6 - 1;
    v9 = 0;
    do
    {
      *(_BYTE *)++v8 = v9;
      v9 += v7;
    }
    while ( v8 != v6 - 1 + (unsigned __int8)v5 );
    v6 = a1[126];
  }
  v10 = (void (__fastcall *)(int *, int, int))a1[67];
  a1[111] = v7;
  v10(a1, v6, v5);
  usleep(0x2710u);
  sub_6FB40((int)a1, 0);
  usleep(0x2710u);
  sub_736A0((int)a1);
  return 0;
}
