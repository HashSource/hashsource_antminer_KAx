int __fastcall chip_setting_software_reset_ltc(int a1)
{
  int v1; // r5
  int v3; // r3
  int v4; // r1
  _DWORD v6[1025]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = 1796;
  HIWORD(v1) = (unsigned int)&unk_152274 >> 16;
  V_LOCK();
  LOWORD(v3) = -21232;
  HIWORD(v3) = (unsigned int)"ChipSetting_analog_mux_ETH" >> 16;
  logfmt_raw((char *)v6, 0x1000u, 0, v3, v1, 52);
  V_UNLOCK();
  LOWORD(v4) = 2120;
  HIWORD(v4) = (unsigned int)"6" >> 16;
  zlog(g_zc, v4, 176, v1 + 32, 31, 39, 20, v6);
  v6[2] = 3407873;
  v6[0] = 0;
  v6[1] = 0;
  v6[3] = 0;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v6);
}
