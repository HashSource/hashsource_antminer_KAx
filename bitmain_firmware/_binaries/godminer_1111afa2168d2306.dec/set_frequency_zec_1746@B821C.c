int __fastcall set_frequency_zec_1746(int a1)
{
  float v1; // s0
  const char *v2; // r3
  unsigned int v3; // r2
  int v4; // r4
  int v5; // r5
  unsigned int v6; // t1
  void (__fastcall *v7)(int, _DWORD *); // r3
  int v8; // r3
  int v9; // r1
  _DWORD v11[1025]; // [sp+10h] [bp-1004h] BYREF

  v2 = "d";
  v3 = 100;
  v4 = -2145385919;
  v5 = 100;
  while ( (float)v3 <= v1 )
  {
    v5 = v3;
    v4 = *((_DWORD *)v2 + 1);
    if ( v2 == (const char *)&unk_173388 )
      break;
    v6 = *((_DWORD *)v2 + 2);
    v2 += 8;
    v3 = v6;
  }
  v7 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  v11[0] = v4;
  v11[2] = 786433;
  v11[3] = 0;
  v11[1] = 0;
  v7(a1, v11);
  V_LOCK();
  LOWORD(v8) = 18964;
  HIWORD(v8) = (unsigned int)"d, calculate diff %d, chip return diff %d," >> 16;
  logfmt_raw((char *)v11, 0x1000u, 0, v8, v1, v5, v4);
  V_UNLOCK();
  LOWORD(v9) = 19016;
  HIWORD(v9) = (unsigned int)", type %d, diff %d, ticket mask %d" >> 16;
  zlog(g_zc, v9, 171, "set_frequency_zec_1746", 22, 637, 40, v11);
  return 0;
}
