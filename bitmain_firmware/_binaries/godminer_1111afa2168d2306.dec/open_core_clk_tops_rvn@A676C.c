int __fastcall open_core_clk_tops_rvn(int a1)
{
  int v2; // r6
  char *v3; // r1
  int v4; // r4
  int v5; // r1
  void (__fastcall *v6)(int, _DWORD *); // r3
  _DWORD v8[7]; // [sp+28h] [bp-1020h] BYREF
  int v9; // [sp+44h] [bp-1004h]
  _DWORD v10[2]; // [sp+48h] [bp-1000h] BYREF
  int v11; // [sp+50h] [bp-FF8h]
  int v12; // [sp+54h] [bp-FF4h]

  LOWORD(v2) = 5104;
  V_LOCK();
  LOWORD(v3) = 27796;
  HIWORD(v3) = (unsigned int)"%1.f" >> 16;
  HIWORD(v2) = (unsigned int)"dump_nonce" >> 16;
  V_INT((int)v8, v3, *(int *)(a1 + 256));
  LOWORD(v4) = -13668;
  HIWORD(v4) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw((char *)v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, v4, v2 + 548);
  V_UNLOCK();
  LOWORD(v5) = 9580;
  HIWORD(v5) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v5, 171, v2 + 572, 22, 172, 60, v10);
  v11 = 1441792;
  v10[0] = -2147483641;
  v12 = 0;
  v6 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  LOBYTE(v11) = 1;
  v10[1] = 0;
  v6(a1, v10);
  usleep(0x2710u);
  return 0;
}
