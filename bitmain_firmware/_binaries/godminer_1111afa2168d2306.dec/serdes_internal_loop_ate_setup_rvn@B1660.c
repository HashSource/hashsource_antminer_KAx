int __fastcall serdes_internal_loop_ate_setup_rvn(int a1, int a2, int a3, int a4)
{
  char *v8; // r1
  int v9; // r10
  int v10; // r1
  _DWORD v12[7]; // [sp+28h] [bp+0h] BYREF
  int v13; // [sp+44h] [bp+1Ch]
  char v14[4100]; // [sp+48h] [bp+20h] BYREF

  V_LOCK();
  LOWORD(v8) = 27796;
  HIWORD(v8) = (unsigned int)"%1.f" >> 16;
  LOWORD(v9) = 11108;
  HIWORD(v9) = (unsigned int)"_setup_rvn" >> 16;
  V_INT((int)v12, v8, *(int *)(a1 + 256));
  logfmt_raw(v14, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, "%s ...", v9 + 288);
  V_UNLOCK();
  LOWORD(v10) = 11824;
  HIWORD(v10) = (unsigned int)&unk_172FF8 >> 16;
  zlog(g_zc, v10, 174, v9 + 324, 34, 394, 60, v14);
  serdes_wait_status_rvn(a1, a2, a3, 4244, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4244, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4756, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4756, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5268, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5268, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5780, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5780, 0);
  sub_AEC94(a1, a3, 77, (int)&loc_110010 + 1);
  sub_AEC94(a1, a3, 78, -2144251791);
  sub_AEC94(a1, a3, 77, (int)&dword_10000 + 1);
  sub_AEC94(a1, a3, 78, -2144251791);
  usleep(0x2710u);
  serdes_wait_status_rvn(a1, a2, a3, 4244, a4);
  serdes_wait_status_rvn(a1, a2, a3, 4244, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 4756, a4);
  serdes_wait_status_rvn(a1, a2, a3, 4756, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 5268, a4);
  serdes_wait_status_rvn(a1, a2, a3, 5268, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 5780, a4);
  serdes_wait_status_rvn(a1, a2, a3, 5780, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  return 0;
}
