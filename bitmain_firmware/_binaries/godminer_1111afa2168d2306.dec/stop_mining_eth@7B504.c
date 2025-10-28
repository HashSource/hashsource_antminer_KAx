int __fastcall stop_mining_eth(int a1)
{
  int v1; // r7
  int v3; // r3
  int v4; // r1
  int v5; // r0
  int (**v6)(); // r0
  void (__fastcall *v7)(int, unsigned int *); // r3
  unsigned int v9; // [sp+10h] [bp-1004h] BYREF
  int v10; // [sp+14h] [bp-1000h]
  int v11; // [sp+18h] [bp-FFCh]
  int v12; // [sp+1Ch] [bp-FF8h]

  LOWORD(v1) = -17152;
  HIWORD(v1) = (unsigned int)"" >> 16;
  V_LOCK();
  LOWORD(v3) = -13336;
  HIWORD(v3) = (unsigned int)"\n" >> 16;
  logfmt_raw((char *)&v9, 0x1000u, 0, v3, v1 + 704);
  V_UNLOCK();
  LOWORD(v4) = -13944;
  HIWORD(v4) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
  zlog(g_zc, v4, 171, v1 + 720, 15, 1728, 60, &v9);
  v5 = (*(int (__fastcall **)(int))(a1 + 60))(a1);
  v6 = dev_ctrl(v5);
  ((void (__fastcall *)(_DWORD))v6[14])(*(_DWORD *)(a1 + 248));
  *(_BYTE *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 265) = 0;
  set_ticketmask(a1, 1);
  set_core_reset(a1);
  v10 = 0;
  v11 = 1310721;
  v12 = 0;
  v9 = 274347265;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 276))(a1, &v9);
  usleep((__useconds_t)&stru_186A0);
  v11 = 5373953;
  v12 = 0;
  v10 = 0;
  v9 = 9;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 276))(a1, &v9);
  usleep((__useconds_t)&stru_186A0);
  v11 = 5701633;
  v12 = 0;
  v10 = 0;
  v7 = *(void (__fastcall **)(int, unsigned int *))(a1 + 276);
  v9 = 1;
  v7(a1, &v9);
  usleep((__useconds_t)&stru_186A0);
  v11 = 5636097;
  v12 = 0;
  v10 = 0;
  v9 = 0x80000000;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 276))(a1, &v9);
  usleep((__useconds_t)&stru_186A0);
  sub_78F84(a1, 12, 2);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
