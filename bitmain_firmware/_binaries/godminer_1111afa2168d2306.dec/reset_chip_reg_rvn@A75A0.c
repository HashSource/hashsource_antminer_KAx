int __fastcall reset_chip_reg_rvn(int a1)
{
  int v2; // r6
  char *v3; // r1
  int v4; // r4
  int v5; // r1
  void (__fastcall *v6)(int, _DWORD *); // r3
  _DWORD v8[7]; // [sp+28h] [bp-1024h] BYREF
  int v9; // [sp+44h] [bp-1008h]
  _DWORD v10[2]; // [sp+48h] [bp-1004h] BYREF
  int v11; // [sp+50h] [bp-FFCh]
  int v12; // [sp+54h] [bp-FF8h]

  LOWORD(v2) = 5104;
  V_LOCK();
  LOWORD(v3) = 27796;
  HIWORD(v3) = (unsigned int)"%1.f" >> 16;
  HIWORD(v2) = (unsigned int)"dump_nonce" >> 16;
  V_INT((int)v8, v3, *(int *)(a1 + 256));
  LOWORD(v4) = -13668;
  HIWORD(v4) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw((char *)v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, v4, v2 + 1244);
  V_UNLOCK();
  LOWORD(v5) = 9580;
  HIWORD(v5) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v5, 171, v2 + 1264, 18, 324, 60, v10);
  v11 = 16515072;
  v12 = 0;
  v10[1] = 0;
  v10[0] = -1414856447;
  v6 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  LOBYTE(v11) = 1;
  v6(a1, v10);
  return usleep(0x2710u);
}
