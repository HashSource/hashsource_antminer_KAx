int __fastcall release_all_phy(int a1)
{
  int v2; // r5
  char *v3; // r1
  int v4; // r4
  int v5; // r1
  _DWORD v7[7]; // [sp+28h] [bp-1024h] BYREF
  int v8; // [sp+44h] [bp-1008h]
  char v9[4100]; // [sp+48h] [bp-1004h] BYREF

  LOWORD(v2) = -17152;
  V_LOCK();
  LOWORD(v3) = 27796;
  HIWORD(v3) = (unsigned int)"%1.f" >> 16;
  HIWORD(v2) = (unsigned int)"" >> 16;
  V_INT((int)v7, v3, *(int *)(a1 + 256));
  LOWORD(v4) = -13668;
  HIWORD(v4) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v4, v2 + 1236);
  V_UNLOCK();
  LOWORD(v5) = -13944;
  HIWORD(v5) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
  zlog(g_zc, v5, 171, v2 + 1252, 15, 317, 60, v9);
  sub_78F84(a1, 80, 0);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
