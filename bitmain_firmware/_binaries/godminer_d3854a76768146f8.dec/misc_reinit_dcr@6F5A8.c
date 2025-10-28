int __fastcall misc_reinit_dcr(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r1
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  char v8[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = 588;
  HIWORD(v2) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v6, v2, *(int *)(a1 + 232));
  LOWORD(v3) = -15388;
  HIWORD(v3) = (unsigned int)"override" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, v3);
  V_UNLOCK();
  LOWORD(v4) = -15728;
  HIWORD(v4) = (unsigned int)"oarse_adpt_force_en, rx_coarse_adpt_skip_en" >> 16;
  zlog(g_zc, v4, 171, "misc_reinit_dcr", 15, 450, 40, v8);
  sub_6F28C(a1);
  return 0;
}
