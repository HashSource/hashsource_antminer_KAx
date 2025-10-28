int __fastcall set_reset_rvn(int a1)
{
  int v1; // r5
  int v3; // r3
  int v4; // r1
  void (__fastcall *v5)(int, int *); // r3
  void (__fastcall *v6)(int, int *); // r3
  int v8; // [sp+10h] [bp-1000h] BYREF
  int v9; // [sp+14h] [bp-FFCh]
  int v10; // [sp+18h] [bp-FF8h]
  int v11; // [sp+1Ch] [bp-FF4h]

  LOWORD(v1) = 5104;
  HIWORD(v1) = (unsigned int)"dump_nonce" >> 16;
  V_LOCK();
  LOWORD(v3) = -13668;
  HIWORD(v3) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw((char *)&v8, 0x1000u, 0, v3, v1 + 684);
  V_UNLOCK();
  LOWORD(v4) = 9580;
  HIWORD(v4) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v4, 171, v1 + 700, 13, 196, 40, &v8);
  v10 = 0;
  v8 = -1414856447;
  v11 = 0;
  v5 = *(void (__fastcall **)(int, int *))(a1 + 276);
  v9 = 0;
  LOBYTE(v10) = 1;
  HIWORD(v10) = 252;
  v5(a1, &v8);
  usleep(0x2710u);
  v10 = 1;
  v11 = 0;
  v9 = 0;
  v8 = 29;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 276);
  HIWORD(v10) = 68;
  v6(a1, &v8);
  usleep(0x2710u);
  v10 = 4456449;
  v11 = 0;
  v9 = 0;
  v8 = 31;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v8);
  usleep(0x2710u);
  v10 = 16515073;
  v11 = 0;
  v9 = 0;
  v8 = -1414856704;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v8);
  usleep(0x2710u);
  return 0;
}
