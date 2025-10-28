int __fastcall close_core_clk_tops_rvn(int a1)
{
  int v1; // r6
  int v3; // r3
  int v4; // r1
  void (__fastcall *v5)(int, _DWORD *); // r3
  _DWORD v7[2]; // [sp+10h] [bp-1004h] BYREF
  int v8; // [sp+18h] [bp-FFCh]
  int v9; // [sp+1Ch] [bp-FF8h]

  LOWORD(v1) = 5104;
  HIWORD(v1) = (unsigned int)"dump_nonce" >> 16;
  V_LOCK();
  LOWORD(v3) = -13668;
  HIWORD(v3) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw((char *)v7, 0x1000u, 0, v3, v1 + 596);
  V_UNLOCK();
  LOWORD(v4) = 9580;
  HIWORD(v4) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v4, 171, v1 + 620, 23, 180, 20, v7);
  v8 = 1441792;
  v9 = 0;
  v7[1] = 0;
  v7[0] = -2147483642;
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  LOBYTE(v8) = 1;
  v5(a1, v7);
  usleep(0x2710u);
  return 0;
}
