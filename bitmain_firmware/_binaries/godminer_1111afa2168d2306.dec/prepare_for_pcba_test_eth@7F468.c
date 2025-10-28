int __fastcall prepare_for_pcba_test_eth(int a1, int *a2)
{
  int v4; // r3
  int v5; // r1
  int v6; // r9
  const char *v7; // r0
  void (__fastcall *v8)(int, _DWORD *); // r3
  const char *v9; // r0
  const char *v11; // r0
  _DWORD v12[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v4) = -13336;
  HIWORD(v4) = (unsigned int)"\n" >> 16;
  logfmt_raw((char *)v12, 0x1000u, 0, v4, "prepare_for_pcba_test_eth");
  V_UNLOCK();
  LOWORD(v5) = -13944;
  HIWORD(v5) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
  zlog(g_zc, v5, 171, "prepare_for_pcba_test_eth", 25, 2180, 60, v12);
  v6 = *a2;
  if ( (unsigned int)*a2 > 0xB )
  {
    LOWORD(v11) = -12068;
    HIWORD(v11) = (unsigned int)"_ate_setup" >> 16;
    printf(v11, "prepare_for_pcba_test_eth");
    return 15;
  }
  else
  {
    LOWORD(v7) = -12024;
    HIWORD(v7) = (unsigned int)"serdes_external_loop_ate_setup" >> 16;
    printf(v7, "prepare_for_pcba_test_eth");
    membist1(a1);
    stop_mining_eth(a1);
    v8 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
    v12[0] = 272381185;
    v12[2] = 1310721;
    v12[1] = 0;
    v12[3] = 0;
    v8(a1, v12);
    usleep((__useconds_t)&stru_186A0);
    disable_mac(a1);
    release_all_phy(a1);
    reset_all_phy(a1);
    setup_serdes_phy(a1, v6);
    enable_work(a1, 0x80000000);
    set_work_mode(a1, 0);
    setup_count_sync(a1, 255);
    set_logic_core_id(a1);
    set_logic_chip_id(a1);
    setup_mac(a1);
    set_dag_node_num(a1, 117440506);
    set_ticketmask(a1, 32);
    open_cores(a1);
    set_work_num(a1, 64);
    set_work_timeout(a1, 1);
    set_nonce_num(a1, 127);
    LOWORD(v9) = -11984;
    *(_BYTE *)(a1 + 264) = 1;
    *(_BYTE *)(a1 + 265) = 1;
    HIWORD(v9) = (unsigned int)"xternal_loop_ate_setup" >> 16;
    printf(v9, "prepare_for_pcba_test_eth");
    return 0;
  }
}
