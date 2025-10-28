int __fastcall recover_mining_rvn(int a1)
{
  int v2; // r3
  void (__fastcall *v3)(int, _DWORD *); // r3
  unsigned int eeprom_phy_seq_level; // r0
  char *v6; // r1
  int v7; // r4
  int v8; // r1
  _DWORD v9[7]; // [sp+28h] [bp-1020h] BYREF
  int v10; // [sp+44h] [bp-1004h]
  _DWORD v11[2]; // [sp+48h] [bp-1000h] BYREF
  int v12; // [sp+50h] [bp-FF8h]
  int v13; // [sp+54h] [bp-FF4h]

  V_LOCK();
  LOWORD(v2) = -13336;
  HIWORD(v2) = (unsigned int)"\n" >> 16;
  logfmt_raw((char *)v11, 0x1000u, 0, v2, "recover_mining_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "recover_mining_rvn",
    18,
    2170,
    60,
    v11);
  get_chip_dag_packet_num_rvn(a1);
  v12 = 1310720;
  v11[0] = 272381185;
  v3 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  v13 = 0;
  v11[1] = 0;
  LOBYTE(v12) = 1;
  v3(a1, v11);
  usleep((__useconds_t)&stru_186A0);
  disable_mac_rvn(a1);
  release_all_phy_rvn(a1);
  reset_all_phy_rvn(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 256));
  if ( eeprom_phy_seq_level > 0xA )
  {
    V_LOCK();
    LOWORD(v6) = 27796;
    HIWORD(v6) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v9, v6, *(int *)(a1 + 256));
    LOWORD(v7) = 10284;
    HIWORD(v7) = (unsigned int)"status error!" >> 16;
    logfmt_raw((char *)v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, v7);
    V_UNLOCK();
    LOWORD(v8) = 9580;
    HIWORD(v8) = (unsigned int)"get membist lost cnt failed!" >> 16;
    zlog(g_zc, v8, 171, "recover_mining_rvn", 18, 2185, 60, v11);
    return 31;
  }
  else
  {
    setup_serdes_phy_rvn(a1, eeprom_phy_seq_level);
    enable_work_rvn(a1, 0x80000000);
    set_work_mode_rvn(a1, 2);
    setup_count_sync_rvn(a1, 0xFFu);
    set_logic_core_id_rvn(a1);
    set_logic_chip_id_rvn(a1);
    setup_mac_rvn(a1);
    set_ticketmask_rvn(a1, 9);
    open_cores_rvn(a1);
    set_work_num_rvn(a1, 64);
    set_work_timeout_rvn(a1, 1);
    set_nonce_num_rvn(a1, 0);
    *(_BYTE *)(a1 + 264) = 1;
    *(_BYTE *)(a1 + 265) = 1;
    return 0;
  }
}
