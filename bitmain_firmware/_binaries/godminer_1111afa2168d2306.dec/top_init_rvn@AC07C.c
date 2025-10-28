int __fastcall top_init_rvn(int a1)
{
  int v2; // r8
  char *v3; // r1
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  char *v8; // r1
  int v9; // r4
  int v10; // r1
  _DWORD v12[7]; // [sp+28h] [bp-1044h] BYREF
  int v13; // [sp+44h] [bp-1028h]
  _DWORD v14[7]; // [sp+48h] [bp-1024h] BYREF
  int v15; // [sp+64h] [bp-1008h]
  char v16[4100]; // [sp+68h] [bp-1004h] BYREF

  LOWORD(v2) = -13956;
  V_LOCK();
  LOWORD(v3) = 27796;
  HIWORD(v3) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v12, v3, *(int *)(a1 + 256));
  HIWORD(v2) = (unsigned int)"08x" >> 16;
  logfmt_raw(v16, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, v2, "top_init_rvn");
  V_UNLOCK();
  LOWORD(v4) = 9580;
  HIWORD(v4) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v4, 171, "top_init_rvn", 12, 2283, 60, v16);
  if ( !sub_A5938((int *)a1) )
  {
    reset_chip_reg_rvn(a1);
    sleep(0xAu);
    v5 = 0;
    v6 = *(_DWORD *)(a1 + 504) - 1;
    do
      *(_BYTE *)++v6 = v5++;
    while ( v5 != 8 );
    v7 = *(_DWORD *)(a1 + 504);
    *(_DWORD *)(a1 + 444) = 1;
    (*(void (__fastcall **)(int, int))(a1 + 268))(a1, v7);
    sub_A5938((int *)a1);
    setup_clk_rvn(a1);
    set_baud_rvn(a1, (int)"tu_t_table");
    sub_A4A2C(a1, 5250832);
    usleep(0x2710u);
    cache_and_dag_gen_rvn(a1);
    while ( 1 )
      ;
  }
  V_LOCK();
  LOWORD(v8) = 27796;
  HIWORD(v8) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v14, v8, *(int *)(a1 + 256));
  LOWORD(v9) = -13280;
  HIWORD(v9) = (unsigned int)"x membist0: lost/err/etherr: %08x/%08x/%08x, total:lost/err/etherr: %llx/%llx/%llx" >> 16;
  logfmt_raw(v16, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, v9, "top_init_rvn");
  V_UNLOCK();
  LOWORD(v10) = 9580;
  HIWORD(v10) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v10, 171, "top_init_rvn", 12, 2287, 100, v16);
  return 12;
}
