int __fastcall open_core_dram_clk(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r1
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  char v8[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = 27796;
  HIWORD(v2) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v6, v2, *(int *)(a1 + 256));
  LOWORD(v3) = 10124;
  HIWORD(v3) = (unsigned int)"d all data" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, v3);
  V_UNLOCK();
  LOWORD(v4) = 9580;
  HIWORD(v4) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v4, 171, "open_core_dram_clk", 18, 1431, 60, v8);
  sub_A46C8(a1, 15, 3);
  usleep(0x2710u);
  sub_A46C8(a1, 9, 7);
  usleep(0x2710u);
  return 0;
}
