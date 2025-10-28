int __fastcall softreset_all_chip_ks5(int *a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r1
  int v5; // r3
  int v6; // r1
  void (__fastcall *v7)(int *, _DWORD *); // r3
  _DWORD v9[7]; // [sp+28h] [bp-1024h] BYREF
  int v10; // [sp+44h] [bp-1008h]
  _DWORD v11[2]; // [sp+48h] [bp-1004h] BYREF
  int v12; // [sp+50h] [bp-FFCh]
  int v13; // [sp+54h] [bp-FF8h]

  V_LOCK();
  LOWORD(v2) = 27796;
  HIWORD(v2) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v9, v2, a1[64]);
  LOWORD(v3) = -1616;
  HIWORD(v3) = (unsigned int)"hash_clock_count_KDA_2110" >> 16;
  logfmt_raw((char *)v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, v3);
  V_UNLOCK();
  LOWORD(v4) = 1808;
  HIWORD(v4) = (unsigned int)"Setting_freq_LTC_1489" >> 16;
  zlog(g_zc, v4, 171, "softreset_all_chip_ks5", 22, 628, 40, v11);
  V_LOCK();
  LOWORD(v5) = -23224;
  HIWORD(v5) = (unsigned int)"k delay chip_no %d, value %08x" >> 16;
  logfmt_raw((char *)v11, 0x1000u, 0, v5, "ChipSetting_software_reset_KS5_2382", 68);
  V_UNLOCK();
  LOWORD(v6) = -23376;
  HIWORD(v6) = (unsigned int)"k: %s" >> 16;
  zlog(g_zc, v6, 150, "ChipSetting_software_reset_KS5_2382", 35, 180, 20, v11);
  v12 = 0;
  v11[0] = 3;
  v13 = 0;
  v7 = (void (__fastcall *)(int *, _DWORD *))a1[69];
  HIWORD(v12) = 68;
  LOBYTE(v12) = 1;
  v11[1] = 0;
  v7(a1, v11);
  sub_9A5B8((int)a1, 10, 0);
  sub_9A900(a1, 127);
  return 0;
}
