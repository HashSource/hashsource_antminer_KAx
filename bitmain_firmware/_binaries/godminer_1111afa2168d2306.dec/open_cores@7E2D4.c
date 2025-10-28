int __fastcall open_cores(int a1)
{
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -17152;
  HIWORD(v1) = (unsigned int)"" >> 16;
  V_LOCK();
  LOWORD(v3) = -13668;
  HIWORD(v3) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 + 2632);
  V_UNLOCK();
  LOWORD(v4) = -13944;
  HIWORD(v4) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
  zlog(g_zc, v4, 171, v1 + 2644, 10, 867, 20, v6);
  sub_78F84(a1, 13, 127);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
