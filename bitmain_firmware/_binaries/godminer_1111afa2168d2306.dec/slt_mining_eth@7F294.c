int __fastcall slt_mining_eth(int a1)
{
  int v1; // r7
  int v3; // r3
  int v4; // r1
  int v5; // r3
  int v6; // r0
  void (__fastcall *v7)(int, _DWORD *); // r3
  int v8; // r3
  _DWORD v10[2]; // [sp+10h] [bp-1004h] BYREF
  int v11; // [sp+18h] [bp-FFCh]
  int v12; // [sp+1Ch] [bp-FF8h]

  LOWORD(v1) = -17152;
  HIWORD(v1) = (unsigned int)"" >> 16;
  V_LOCK();
  LOWORD(v3) = -13336;
  HIWORD(v3) = (unsigned int)"\n" >> 16;
  logfmt_raw((char *)v10, 0x1000u, 0, v3, v1 + 3072);
  V_UNLOCK();
  LOWORD(v4) = -13944;
  HIWORD(v4) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
  zlog(g_zc, v4, 171, v1 + 3088, 14, 1756, 60, v10);
  v5 = *(_DWORD *)a1;
  v11 = 1310720;
  v12 = 0;
  v10[1] = 0;
  v10[0] = 272381185;
  v6 = v5;
  v7 = *(void (__fastcall **)(int, _DWORD *))(v5 + 276);
  LOBYTE(v11) = 1;
  v7(v6, v10);
  usleep((__useconds_t)&stru_186A0);
  disable_mac(*(_DWORD *)a1);
  release_all_phy(*(_DWORD *)a1);
  reset_all_phy(*(_DWORD *)a1);
  setup_serdes_phy(*(_DWORD *)a1, 9);
  enable_work(*(_DWORD *)a1, 0x80000000);
  set_work_mode(*(_DWORD *)a1, 0);
  setup_count_sync(*(_DWORD *)a1, 255);
  set_logic_core_id(*(_DWORD *)a1);
  set_logic_chip_id(*(_DWORD *)a1);
  setup_mac(*(_DWORD *)a1);
  set_dag_node_num(*(_DWORD *)a1, *(__int64 *)(a1 + 8) >> 6);
  set_ticketmask(*(_DWORD *)a1, 32);
  open_cores(*(_DWORD *)a1);
  set_work_num(*(_DWORD *)a1, 64);
  set_work_timeout(*(_DWORD *)a1, 1);
  set_nonce_num(*(_DWORD *)a1, 0);
  v8 = *(_DWORD *)a1;
  *(_BYTE *)(v8 + 264) = 1;
  *(_BYTE *)(v8 + 265) = 1;
  return 0;
}
