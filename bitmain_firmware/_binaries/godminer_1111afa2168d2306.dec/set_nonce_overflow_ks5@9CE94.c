int __fastcall set_nonce_overflow_ks5(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = 156;
  HIWORD(v2) = (unsigned int)"sor_temp_local_on_ctrlboard_KS5_2382" >> 16;
  V_LOCK();
  LOWORD(v5) = -1792;
  HIWORD(v5) = (unsigned int)"0" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 872, a2);
  V_UNLOCK();
  LOWORD(v6) = 1808;
  HIWORD(v6) = (unsigned int)"Setting_freq_LTC_1489" >> 16;
  zlog(g_zc, v6, 171, v2 + 896, 22, 111, 40, v8);
  sub_9A5B8(a1, 10, a2);
  usleep(0x2710u);
  return 0;
}
