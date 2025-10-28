int __fastcall recover_mining_eth(int a1)
{
  int v2; // r3
  int v3; // r1
  void (__fastcall *v4)(int, _DWORD *); // r3
  unsigned int eeprom_phy_seq_level; // r0
  char *v7; // r1
  int v8; // r4
  int v9; // r1
  _DWORD v10[7]; // [sp+28h] [bp-1020h] BYREF
  int v11; // [sp+44h] [bp-1004h]
  _DWORD v12[2]; // [sp+48h] [bp-1000h] BYREF
  int v13; // [sp+50h] [bp-FF8h]
  int v14; // [sp+54h] [bp-FF4h]

  V_LOCK();
  LOWORD(v2) = -10788;
  HIWORD(v2) = (unsigned int)"_plldivider_kas" >> 16;
  logfmt_raw((char *)v12, 0x1000u, 0, v2, "recover_mining_eth", 0);
  V_UNLOCK();
  LOWORD(v3) = -12308;
  HIWORD(v3) = (unsigned int)"0" >> 16;
  zlog(g_zc, v3, 171, "recover_mining_eth", 18, 1661, 60, v12);
  v13 = 1310720;
  v12[0] = 272381185;
  v4 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
  v12[1] = 0;
  v14 = 0;
  LOBYTE(v13) = 1;
  v4(a1, v12);
  usleep((__useconds_t)&stru_18698.st_size);
  disable_mac(a1);
  release_all_phy(a1);
  reset_all_phy(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 228));
  if ( eeprom_phy_seq_level > 0xA )
  {
    V_LOCK();
    LOWORD(v7) = 588;
    HIWORD(v7) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v10, v7, *(int *)(a1 + 232));
    LOWORD(v8) = -10760;
    HIWORD(v8) = (unsigned int)"freq_kas_KAS_2380" >> 16;
    logfmt_raw((char *)v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v8);
    V_UNLOCK();
    LOWORD(v9) = -12308;
    HIWORD(v9) = (unsigned int)"0" >> 16;
    zlog(g_zc, v9, 171, "recover_mining_eth", 18, 1676, 60, v12);
    return 31;
  }
  else
  {
    setup_serdes_phy(a1, eeprom_phy_seq_level);
    enable_work(a1, 0x80000000);
    set_work_mode(a1, 0);
    setup_count_sync(a1, 255);
    set_logic_core_id(a1);
    set_logic_chip_id(a1);
    setup_mac(a1);
    set_dag_node_num(a1, *(__int64 *)*(_DWORD *)(a1 + 972) >> 6);
    set_ticketmask(a1, 32);
    open_cores(a1);
    set_work_num(a1, 64);
    set_work_timeout(a1, 1);
    set_nonce_num(a1, 0);
    *(_BYTE *)(a1 + 237) = 1;
    *(_BYTE *)(a1 + 238) = 1;
    return 0;
  }
}
