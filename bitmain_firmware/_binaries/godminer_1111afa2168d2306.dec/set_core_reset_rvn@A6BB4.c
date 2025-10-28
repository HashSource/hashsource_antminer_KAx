int __fastcall set_core_reset_rvn(int a1)
{
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = 5104;
  HIWORD(v1) = (unsigned int)"dump_nonce" >> 16;
  V_LOCK();
  LOWORD(v3) = -13668;
  HIWORD(v3) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 + 716);
  V_UNLOCK();
  LOWORD(v4) = 9580;
  HIWORD(v4) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v4, 171, v1 + 736, 18, 212, 40, v6);
  sub_A46C8(a1, 2, 0);
  usleep(0x2710u);
  sub_A46C8(a1, 2, 255);
  usleep(0x2710u);
  return 0;
}
