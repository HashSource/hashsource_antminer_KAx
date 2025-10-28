int __fastcall set_core_enable_kas(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = -3852;
  HIWORD(v2) = (unsigned int)"_KAS_2380" >> 16;
  V_LOCK();
  LOWORD(v5) = -1792;
  HIWORD(v5) = (unsigned int)"0" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 740, a2);
  V_UNLOCK();
  LOWORD(v6) = -2140;
  HIWORD(v6) = (unsigned int)"ng work id ,err" >> 16;
  zlog(g_zc, v6, 171, v2 + 760, 19, 118, 40, v8);
  sub_913B0(a1, 1, a2);
  usleep(0x2710u);
  return 0;
}
