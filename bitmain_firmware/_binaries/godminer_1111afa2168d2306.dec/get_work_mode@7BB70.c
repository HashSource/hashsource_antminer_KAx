int __fastcall get_work_mode(int a1)
{
  int v2; // r3
  int v3; // r1
  char *v4; // r11
  int v5; // r0
  int v6; // r10
  int v7; // r9
  char *v8; // r6
  char *v9; // r4
  int v10; // lr
  int v11; // r12
  int v12; // r1
  char v14[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = -13668;
  HIWORD(v2) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw(v14, 0x1000u, 0, v2, "get_work_mode");
  V_UNLOCK();
  LOWORD(v3) = -13944;
  HIWORD(v3) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
  zlog(g_zc, v3, 171, "get_work_mode", 13, 223, 20, v14);
  v4 = (char *)malloc(0x600u);
  v5 = sub_7934C(a1, 255, 12, v4);
  if ( v5 > 0 )
  {
    LOWORD(v6) = -13328;
    LOWORD(v7) = -13944;
    v8 = &v4[12 * v5];
    v9 = v4;
    do
    {
      V_LOCK();
      v10 = *(_DWORD *)v9;
      HIWORD(v6) = (unsigned int)" %02x core %02x ethbist err cnt: %08x" >> 16;
      v11 = (unsigned __int8)v9[4];
      v12 = *((unsigned __int16 *)v9 + 3);
      v9 += 12;
      logfmt_raw(v14, 0x1000u, 0, v6, v11, (unsigned __int8)*(v9 - 4), v12, v10);
      V_UNLOCK();
      HIWORD(v7) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
      zlog(g_zc, v7, 171, "get_work_mode", 13, 229, 20, v14);
    }
    while ( v9 != v8 );
  }
  free(v4);
  return 0;
}
