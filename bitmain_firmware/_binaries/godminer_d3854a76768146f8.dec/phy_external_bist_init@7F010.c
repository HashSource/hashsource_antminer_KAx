int __fastcall phy_external_bist_init(int a1, unsigned int a2, unsigned __int8 a3, int a4, int a5)
{
  char *v7; // r1
  int v8; // r1
  unsigned __int8 *v9; // r2
  int v10; // r9
  int v11; // r10
  char *v12; // r1
  const char *v13; // lr
  int v14; // r1
  char *v15; // r1
  int v16; // r1
  int v17; // r8
  char *v18; // r1
  int v19; // lr
  int v20; // r1
  char *v22; // r1
  int v23; // r1
  char *v24; // r1
  int v25; // r1
  int v26; // [sp+38h] [bp-10DCh]
  int v27; // [sp+3Ch] [bp-10D8h]
  unsigned __int8 v29; // [sp+48h] [bp-10CCh]
  unsigned __int8 v30; // [sp+4Fh] [bp-10C5h] BYREF
  _DWORD v31[7]; // [sp+50h] [bp-10C4h] BYREF
  int v32; // [sp+6Ch] [bp-10A8h]
  _DWORD v33[7]; // [sp+70h] [bp-10A4h] BYREF
  int v34; // [sp+8Ch] [bp-1088h]
  _DWORD v35[7]; // [sp+90h] [bp-1084h] BYREF
  int v36; // [sp+ACh] [bp-1068h]
  _DWORD v37[7]; // [sp+B0h] [bp-1064h] BYREF
  int v38; // [sp+CCh] [bp-1048h]
  _DWORD v39[7]; // [sp+D0h] [bp-1044h] BYREF
  int v40; // [sp+ECh] [bp-1028h]
  _DWORD v41[7]; // [sp+F0h] [bp-1024h] BYREF
  int v42; // [sp+10Ch] [bp-1008h]
  char v43[4080]; // [sp+110h] [bp-1004h] BYREF

  v30 = a3;
  V_LOCK();
  LOWORD(v7) = 588;
  HIWORD(v7) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v31, v7, *(int *)(a1 + 232));
  logfmt_raw(
    v43,
    0x1000u,
    0,
    v32,
    v31[0],
    v31[1],
    v31[2],
    v31[3],
    v31[4],
    v31[5],
    v31[6],
    v32,
    1370512,
    "phy_external_bist_init",
    v30);
  V_UNLOCK();
  LOWORD(v8) = -9656;
  HIWORD(v8) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v8, 174, "phy_external_bist_init", 22, 1051, 60, v43);
  v9 = (unsigned __int8 *)&eth_2280_phy_eq + 16 * a5;
  v10 = v9[12];
  v26 = *v9;
  v11 = v9[4];
  v29 = v9[4];
  v27 = v9[8];
  V_LOCK();
  LOWORD(v12) = 588;
  HIWORD(v12) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v33, v12, *(int *)(a1 + 232));
  v13 = "enabled";
  if ( !v10 )
    v13 = "disabled";
  logfmt_raw(
    v43,
    0x1000u,
    0,
    v34,
    v33[0],
    v33[1],
    v33[2],
    v33[3],
    v33[4],
    v33[5],
    v33[6],
    v34,
    1370536,
    v13,
    v26,
    v11,
    v27);
  V_UNLOCK();
  LOWORD(v14) = -9656;
  HIWORD(v14) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v14, 174, "phy_external_bist_init", 22, 1071, 60, v43);
  sub_7660C(a1, v30, 86, 3670024);
  usleep(0x12Cu);
  sub_7660C(a1, v30, 85, 109905420);
  usleep(0x12Cu);
  sub_7660C(a1, v30, 101, -268374016);
  usleep(0x12Cu);
  sub_7660C(a1, v30, 64, 256);
  usleep(0x12Cu);
  sub_7660C(a1, v30, 80, 33423870);
  usleep(0x12Cu);
  sub_7660C(a1, v30, 81, 832516511);
  usleep(0x12Cu);
  sub_7660C(a1, v30, 88, -1);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data_eth(a1, a2, v30, 125, 0x70007000u) )
  {
    V_LOCK();
    LOWORD(v24) = 588;
    HIWORD(v24) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v35, v24, *(int *)(a1 + 232));
    logfmt_raw(
      v43,
      0x1000u,
      0,
      v36,
      v35[0],
      v35[1],
      v35[2],
      v35[3],
      v35[4],
      v35[5],
      v35[6],
      v36,
      "%s sram boot failed!",
      "phy_external_bist_init");
    V_UNLOCK();
    LOWORD(v25) = -9656;
    HIWORD(v25) = (unsigned int)"t_kas" >> 16;
    zlog(g_zc, v25, 174, "phy_external_bist_init", 22, 1104, 100, v43);
  }
  phy_eq_main_set_by_apb(a1, a2, &v30, 1, v26);
  phy_eq_pre_set_by_apb(a1, a2, &v30, 1, v29);
  phy_eq_post_set_by_apb(a1, a2, &v30, 1, v27);
  sub_7660C(a1, v30, 86, 137889800);
  usleep(0x12Cu);
  sub_7660C(a1, v30, 80, 0);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data(a1, a2, v30, 119, 0) )
  {
    V_LOCK();
    LOWORD(v22) = 588;
    HIWORD(v22) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v37, v22, *(int *)(a1 + 232));
    logfmt_raw(
      v43,
      0x1000u,
      0,
      v38,
      v37[0],
      v37[1],
      v37[2],
      v37[3],
      v37[4],
      v37[5],
      v37[6],
      v38,
      "%s PHY core %02x wait ack failed!",
      "phy_external_bist_init",
      v30);
    V_UNLOCK();
    LOWORD(v23) = -9656;
    HIWORD(v23) = (unsigned int)"t_kas" >> 16;
    zlog(g_zc, v23, 174, "phy_external_bist_init", 22, 1131, 100, v43);
  }
  sub_7660C(a1, v30, 82, 0);
  usleep(0x64u);
  V_LOCK();
  LOWORD(v15) = 588;
  HIWORD(v15) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v39, v15, *(int *)(a1 + 232));
  logfmt_raw(
    v43,
    0x1000u,
    0,
    v40,
    v39[0],
    v39[1],
    v39[2],
    v39[3],
    v39[4],
    v39[5],
    v39[6],
    v40,
    1369788,
    "phy_external_bist_init",
    v30);
  V_UNLOCK();
  LOWORD(v16) = -9656;
  HIWORD(v16) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v16, 174, "phy_external_bist_init", 22, 1137, 100, v43);
  v17 = v30;
  sub_7660C(a1, v30, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, v17, 83, 0) )
  {
    V_LOCK();
    LOWORD(v18) = 588;
    HIWORD(v18) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v41, v18, *(int *)(a1 + 232));
    LOWORD(v19) = -9696;
    HIWORD(v19) = (unsigned int)"" >> 16;
    logfmt_raw(
      v43,
      0x1000u,
      0,
      v42,
      v41[0],
      v41[1],
      v41[2],
      v41[3],
      v41[4],
      v41[5],
      v41[6],
      v42,
      v19,
      "phy_handshake",
      v17,
      1369824);
    V_UNLOCK();
    LOWORD(v20) = -9656;
    HIWORD(v20) = (unsigned int)"t_kas" >> 16;
    zlog(g_zc, v20, 174, "phy_handshake", 13, 890, 100, v43);
  }
  phy_pll_switch(a1, a2, v30, a4);
  if ( v10 )
    phy_rx_adapt(a1, a2, v30);
  return usleep(0x64u);
}
