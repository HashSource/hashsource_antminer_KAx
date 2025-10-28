int __fastcall set_reset_ks5(int a1)
{
  int v1; // r6
  int v3; // r3
  int v4; // r1
  _DWORD v6[1025]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = 156;
  HIWORD(v1) = (unsigned int)"sor_temp_local_on_ctrlboard_KS5_2382" >> 16;
  V_LOCK();
  LOWORD(v3) = -13668;
  HIWORD(v3) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw((char *)v6, 0x1000u, 0, v3, v1 + 960);
  V_UNLOCK();
  LOWORD(v4) = 1808;
  HIWORD(v4) = (unsigned int)"Setting_freq_LTC_1489" >> 16;
  zlog(g_zc, v4, 171, v1 + 976, 13, 126, 40, v6);
  v6[2] = 4456449;
  v6[3] = 0;
  v6[1] = 0;
  v6[0] = 1;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v6);
  usleep(0x2710u);
  return 0;
}
