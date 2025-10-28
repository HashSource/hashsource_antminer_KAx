int __fastcall prepare_for_pcba_test_rvn(int a1, int *a2)
{
  int v4; // r3
  int v5; // r1
  int v6; // r9
  const char *v7; // r0
  void (__fastcall *v8)(int, _DWORD *); // r3
  int v9; // r1
  const char *v10; // r0
  const char *v12; // r0
  _DWORD v13[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v4) = -13336;
  HIWORD(v4) = (unsigned int)"\n" >> 16;
  logfmt_raw((char *)v13, 0x1000u, 0, v4, "prepare_for_pcba_test_rvn");
  V_UNLOCK();
  LOWORD(v5) = 9580;
  HIWORD(v5) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v5, 171, "prepare_for_pcba_test_rvn", 25, 2487, 60, v13);
  v6 = *a2;
  if ( (unsigned int)*a2 > 0xA )
  {
    LOWORD(v12) = -12068;
    HIWORD(v12) = (unsigned int)"_ate_setup" >> 16;
    printf(v12, "prepare_for_pcba_test_rvn");
    return 15;
  }
  else
  {
    LOWORD(v7) = -12024;
    HIWORD(v7) = (unsigned int)"serdes_external_loop_ate_setup" >> 16;
    printf(v7, "prepare_for_pcba_test_rvn");
    membist1_rvn(a1);
    stop_mining_rvn(a1);
    v8 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
    v13[0] = 272381185;
    v13[2] = 1310721;
    v13[1] = 0;
    v13[3] = 0;
    v8(a1, v13);
    usleep((__useconds_t)&stru_186A0);
    disable_mac_rvn(a1);
    release_all_phy_rvn(a1);
    reset_all_phy_rvn(a1);
    setup_serdes_phy_rvn(a1, v6);
    enable_work_rvn(a1, 0x80000000);
    set_work_mode_rvn(a1, 0);
    setup_count_sync_rvn(a1, 0xFFu);
    set_logic_core_id_rvn(a1);
    set_logic_chip_id_rvn(a1);
    setup_mac_rvn(a1);
    set_dag_node_num_rvn(a1, v9, 117440506, 0);
    set_ticketmask_rvn(a1, 9);
    open_cores_rvn(a1);
    set_work_num_rvn(a1, 64);
    set_work_timeout_rvn(a1, 1);
    set_nonce_num_rvn(a1, 127);
    LOWORD(v10) = -11984;
    *(_BYTE *)(a1 + 264) = 1;
    *(_BYTE *)(a1 + 265) = 1;
    HIWORD(v10) = (unsigned int)"xternal_loop_ate_setup" >> 16;
    printf(v10, "prepare_for_pcba_test_rvn");
    return 0;
  }
}
