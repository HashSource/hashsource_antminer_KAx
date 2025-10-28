int __fastcall set_chip0_1_work_1_pe_rvn(int a1)
{
  int v2; // r5
  char *v3; // r1
  int v4; // r4
  int v5; // r1
  _DWORD v7[7]; // [sp+28h] [bp-20h] BYREF
  int v8; // [sp+44h] [bp-4h]
  char v9[4100]; // [sp+48h] [bp+0h] BYREF

  LOWORD(v2) = 5104;
  V_LOCK();
  LOWORD(v3) = 27796;
  HIWORD(v3) = (unsigned int)"%1.f" >> 16;
  HIWORD(v2) = (unsigned int)"dump_nonce" >> 16;
  V_INT((int)v7, v3, *(int *)(a1 + 256));
  LOWORD(v4) = -13668;
  HIWORD(v4) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v4, v2 + 3176);
  V_UNLOCK();
  LOWORD(v5) = 9580;
  HIWORD(v5) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v5, 171, v2 + 3204, 25, 1130, 60, v9);
  sub_A480C(a1, 0, 29, 0);
  usleep(0x2710u);
  sub_A480C(a1, 0, 29, 1);
  usleep(0x2710u);
  return 0;
}
