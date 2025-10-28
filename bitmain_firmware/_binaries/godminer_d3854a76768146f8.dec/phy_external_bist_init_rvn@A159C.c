int __fastcall phy_external_bist_init_rvn(int a1, int a2, unsigned int a3, int a4)
{
  char *v7; // r1
  int v8; // r1
  char *v9; // r1
  int v10; // r1
  char *v11; // r1
  int v12; // r1
  char *v13; // r1
  int v14; // r10
  int v15; // r1
  char *v17; // r1
  int v18; // r1
  int v19; // [sp+0h] [bp-10DCh] BYREF
  int v20; // [sp+30h] [bp-10ACh]
  int *v21; // [sp+34h] [bp-10A8h]
  _DWORD v22[7]; // [sp+38h] [bp-10A4h] BYREF
  int v23; // [sp+54h] [bp-1088h]
  _DWORD v24[7]; // [sp+58h] [bp-1084h] BYREF
  int v25; // [sp+74h] [bp-1068h]
  _DWORD v26[7]; // [sp+78h] [bp-1064h] BYREF
  int v27; // [sp+94h] [bp-1048h]
  _DWORD v28[7]; // [sp+98h] [bp-1044h] BYREF
  int v29; // [sp+B4h] [bp-1028h]
  _DWORD v30[7]; // [sp+B8h] [bp-1024h] BYREF
  int v31; // [sp+D4h] [bp-1008h]
  char v32[4100]; // [sp+D8h] [bp-1004h] BYREF

  v20 = a4;
  V_LOCK();
  LOWORD(v7) = 588;
  HIWORD(v7) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v22, v7, *(int *)(a1 + 232));
  logfmt_raw(
    v32,
    0x1000u,
    0,
    v23,
    v22[0],
    v22[1],
    v22[2],
    v22[3],
    v22[4],
    v22[5],
    v22[6],
    v23,
    1370512,
    "phy_external_bist_init_rvn",
    a3);
  V_UNLOCK();
  LOWORD(v8) = 7660;
  HIWORD(v8) = (unsigned int)"%d] remote temp failed after retry %d times" >> 16;
  zlog(g_zc, v8, 174, "phy_external_bist_init_rvn", 26, 988, 60, v32);
  sub_99D08(a1, a3, 86, 3670024);
  usleep(0x12Cu);
  sub_99D08(a1, a3, 85, 109905420);
  usleep(0x12Cu);
  sub_99D08(a1, a3, 101, -268374016);
  usleep(0x12Cu);
  sub_99D08(a1, a3, 64, 256);
  usleep(0x12Cu);
  sub_99D08(a1, a3, 80, 33423870);
  usleep(0x12Cu);
  sub_99D08(a1, a3, 81, 832516511);
  usleep(0x12Cu);
  sub_99D08(a1, a3, 88, -1);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data_rvn_0(a1, a2, a3, 125, 0x70007000u) )
  {
    V_LOCK();
    LOWORD(v17) = 588;
    HIWORD(v17) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v24, v17, *(int *)(a1 + 232));
    logfmt_raw(
      v32,
      0x1000u,
      0,
      v25,
      v24[0],
      v24[1],
      v24[2],
      v24[3],
      v24[4],
      v24[5],
      v24[6],
      v25,
      "%s PHY core %02x sram boot failed!",
      "phy_external_bist_init_rvn",
      a3);
    V_UNLOCK();
    LOWORD(v18) = 7660;
    HIWORD(v18) = (unsigned int)"%d] remote temp failed after retry %d times" >> 16;
    zlog(g_zc, v18, 174, "phy_external_bist_init_rvn", 26, 1041, 100, v32);
  }
  sub_99D08(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_99D08(a1, a3, 80, 0);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data_rvn_0(a1, a2, a3, 119, 0) )
  {
    V_LOCK();
    LOWORD(v9) = 588;
    HIWORD(v9) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v26, v9, *(int *)(a1 + 232));
    logfmt_raw(
      v32,
      0x1000u,
      0,
      v27,
      v26[0],
      v26[1],
      v26[2],
      v26[3],
      v26[4],
      v26[5],
      v26[6],
      v27,
      1369752,
      "phy_external_bist_init_rvn",
      a3);
    V_UNLOCK();
    LOWORD(v10) = 7660;
    HIWORD(v10) = (unsigned int)"%d] remote temp failed after retry %d times" >> 16;
    zlog(g_zc, v10, 174, "phy_external_bist_init_rvn", 26, 1068, 100, v32);
  }
  sub_99D08(a1, a3, 82, 0);
  usleep(0x64u);
  V_LOCK();
  LOWORD(v11) = 588;
  HIWORD(v11) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v28, v11, *(int *)(a1 + 232));
  logfmt_raw(
    v32,
    0x1000u,
    0,
    v29,
    v28[0],
    v28[1],
    v28[2],
    v28[3],
    v28[4],
    v28[5],
    v28[6],
    v29,
    1369788,
    "phy_external_bist_init_rvn",
    a3);
  V_UNLOCK();
  LOWORD(v12) = 7660;
  HIWORD(v12) = (unsigned int)"%d] remote temp failed after retry %d times" >> 16;
  zlog(g_zc, v12, 174, "phy_external_bist_init_rvn", 26, 1074, 100, v32);
  sub_99D08(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data_rvn_0(a1, a2, a3, 83, 0) )
  {
    V_LOCK();
    LOWORD(v13) = 588;
    HIWORD(v13) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v30, v13, *(int *)(a1 + 232));
    LOWORD(v14) = -9696;
    HIWORD(v14) = (unsigned int)"" >> 16;
    v21 = &v19;
    logfmt_raw(
      v32,
      0x1000u,
      0,
      v31,
      v30[0],
      v30[1],
      v30[2],
      v30[3],
      v30[4],
      v30[5],
      v30[6],
      v31,
      v14,
      "phy_handshake_rvn",
      a3,
      1369824,
      v20);
    V_UNLOCK();
    LOWORD(v15) = 7660;
    HIWORD(v15) = (unsigned int)"%d] remote temp failed after retry %d times" >> 16;
    zlog(g_zc, v15, 174, "phy_handshake_rvn", 17, 827, 100, v32);
  }
  phy_pll_switch_rvn(a1, a2, a3, v20);
  return usleep(0x64u);
}
