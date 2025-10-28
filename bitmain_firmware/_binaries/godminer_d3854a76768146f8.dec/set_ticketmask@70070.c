int __fastcall set_ticketmask(int a1, int a2)
{
  char *v4; // r1
  int v5; // r5
  int v6; // r4
  int v7; // r1
  _DWORD v9[7]; // [sp+30h] [bp-1024h] BYREF
  int v10; // [sp+4Ch] [bp-1008h]
  char v11[4100]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v4) = 588;
  HIWORD(v4) = (unsigned int)": get test = %d" >> 16;
  LOWORD(v5) = -15372;
  HIWORD(v5) = (unsigned int)"Perform refb_clk_div2_en override" >> 16;
  V_INT((int)v9, v4, *(int *)(a1 + 232));
  LOWORD(v6) = -12136;
  HIWORD(v6) = (unsigned int)"ChipSetting_nonce_counter_HNS_2130" >> 16;
  logfmt_raw(v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, v6, v5 + 40, a2);
  V_UNLOCK();
  LOWORD(v7) = -12308;
  HIWORD(v7) = (unsigned int)"0" >> 16;
  zlog(g_zc, v7, 171, v5 + 56, 14, 115, 40, v11);
  sub_7002C(a1, 10, a2);
  *(_DWORD *)(a1 + 408) = a2;
  usleep(0x2710u);
  return 0;
}
