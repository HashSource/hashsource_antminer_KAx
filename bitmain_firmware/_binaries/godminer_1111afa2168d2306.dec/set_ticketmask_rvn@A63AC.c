int __fastcall set_ticketmask_rvn(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp+0h] BYREF

  LOWORD(v2) = 5104;
  HIWORD(v2) = (unsigned int)"dump_nonce" >> 16;
  V_LOCK();
  LOWORD(v5) = -1792;
  HIWORD(v5) = (unsigned int)"0" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 468, a2);
  V_UNLOCK();
  LOWORD(v6) = 9580;
  HIWORD(v6) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v6, 171, v2 + 488, 18, 163, 40, v8);
  sub_A46C8(a1, 26, a2);
  *(_DWORD *)(a1 + 448) = a2;
  usleep(0x2710u);
  return 0;
}
