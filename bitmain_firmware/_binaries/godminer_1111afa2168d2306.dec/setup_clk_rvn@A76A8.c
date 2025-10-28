int __fastcall setup_clk_rvn(int a1)
{
  int v2; // r8
  char *v3; // r1
  int v4; // r5
  int v5; // r1
  _DWORD v7[7]; // [sp+28h] [bp-1024h] BYREF
  int v8; // [sp+44h] [bp-1008h]
  int v9; // [sp+48h] [bp-1004h] BYREF
  int v10; // [sp+4Ch] [bp-1000h]
  int v11; // [sp+50h] [bp-FFCh]
  int v12; // [sp+54h] [bp-FF8h]

  LOWORD(v2) = 5104;
  V_LOCK();
  LOWORD(v3) = 27796;
  HIWORD(v3) = (unsigned int)"%1.f" >> 16;
  HIWORD(v2) = (unsigned int)"dump_nonce" >> 16;
  V_INT((int)v7, v3, *(int *)(a1 + 256));
  LOWORD(v4) = -13668;
  HIWORD(v4) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw((char *)&v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v4, v2 + 1284);
  V_UNLOCK();
  LOWORD(v5) = 9580;
  HIWORD(v5) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v5, 171, v2 + 1300, 13, 333, 60, &v9);
  v11 = 524289;
  v12 = 0;
  v10 = 0;
  v9 = 1076363553;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v9);
  usleep(0x2710u);
  v11 = 786433;
  v12 = 0;
  v10 = 0;
  v9 = 1076363537;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v9);
  usleep(0x2710u);
  v11 = 14155777;
  v12 = 0;
  v10 = 0;
  v9 = 1077936417;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v9);
  usleep(0x2710u);
  return 0;
}
