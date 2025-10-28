int __fastcall set_fuart_cfg_ks5(int a1)
{
  int v1; // r5
  int v3; // r3
  int v4; // r1
  void (__fastcall *v5)(int, _DWORD *); // r3
  _DWORD v7[2]; // [sp+10h] [bp-1000h] BYREF
  int v8; // [sp+18h] [bp-FF8h]
  int v9; // [sp+1Ch] [bp-FF4h]

  LOWORD(v1) = 156;
  HIWORD(v1) = (unsigned int)"sor_temp_local_on_ctrlboard_KS5_2382" >> 16;
  V_LOCK();
  LOWORD(v3) = -13668;
  HIWORD(v3) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw((char *)v7, 0x1000u, 0, v3, v1 + 1032);
  V_UNLOCK();
  LOWORD(v4) = 1808;
  HIWORD(v4) = (unsigned int)"Setting_freq_LTC_1489" >> 16;
  zlog(g_zc, v4, 171, v1 + 1052, 17, 140, 40, v7);
  v8 = 0;
  v9 = 0;
  v7[1] = 0;
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  HIWORD(v8) = 96;
  v7[0] = 32;
  LOBYTE(v8) = 1;
  v5(a1, v7);
  usleep(0x2710u);
  return 0;
}
