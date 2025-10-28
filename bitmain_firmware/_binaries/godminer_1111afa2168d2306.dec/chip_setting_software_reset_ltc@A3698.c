int __fastcall chip_setting_software_reset_ltc(int a1)
{
  int v1; // r5
  int v3; // r3
  int v4; // r1
  _DWORD v6[1025]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = 4252;
  HIWORD(v1) = (unsigned int)"end/backend_ltc_1489/chip_setting_ltc_1489.c" >> 16;
  V_LOCK();
  LOWORD(v3) = -23224;
  HIWORD(v3) = (unsigned int)"k delay chip_no %d, value %08x" >> 16;
  logfmt_raw((char *)v6, 0x1000u, 0, v3, v1, 52);
  V_UNLOCK();
  LOWORD(v4) = 4576;
  HIWORD(v4) = (unsigned int)"all core" >> 16;
  zlog(g_zc, v4, 176, v1 + 32, 31, 39, 20, v6);
  v6[2] = 3407873;
  v6[0] = 0;
  v6[1] = 0;
  v6[3] = 0;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v6);
}
