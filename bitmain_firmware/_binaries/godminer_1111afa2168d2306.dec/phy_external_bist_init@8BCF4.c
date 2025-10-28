int __fastcall phy_external_bist_init(int a1, unsigned int a2, unsigned __int8 a3, int a4, int a5)
{
  int v7; // r9
  char *v8; // r1
  int v9; // r1
  unsigned __int8 *v10; // r3
  int v11; // r10
  int v12; // r8
  char *v13; // r1
  int v14; // lr
  int v15; // r9
  int v16; // r1
  int v17; // r8
  char *v18; // r1
  int v19; // r1
  int v20; // r9
  char *v21; // r1
  int v22; // r0
  int v23; // r2
  int v24; // r1
  char *v25; // r1
  int v26; // lr
  int v27; // r1
  int v28; // r7
  char *v29; // r1
  int v30; // r10
  int v31; // lr
  int v32; // r1
  int v34; // r1
  int v36; // [sp+3Ch] [bp-1118h]
  int v37; // [sp+40h] [bp-1114h]
  int v38; // [sp+44h] [bp-1110h]
  unsigned __int8 v39; // [sp+48h] [bp-110Ch]
  unsigned __int8 v40; // [sp+4Fh] [bp-1105h] BYREF
  _DWORD v41[7]; // [sp+50h] [bp-1104h] BYREF
  int v42; // [sp+6Ch] [bp-10E8h]
  _DWORD v43[7]; // [sp+70h] [bp-10E4h] BYREF
  int v44; // [sp+8Ch] [bp-10C8h]
  _DWORD v45[7]; // [sp+90h] [bp-10C4h] BYREF
  int v46; // [sp+ACh] [bp-10A8h]
  _DWORD v47[7]; // [sp+B0h] [bp-10A4h] BYREF
  int v48; // [sp+CCh] [bp-1088h]
  _DWORD v49[7]; // [sp+D0h] [bp-1084h] BYREF
  int v50; // [sp+ECh] [bp-1068h]
  _DWORD v51[7]; // [sp+F0h] [bp-1064h] BYREF
  int v52; // [sp+10Ch] [bp-1048h]
  _DWORD v53[7]; // [sp+110h] [bp-1044h] BYREF
  int v54; // [sp+12Ch] [bp-1028h]
  _DWORD v55[7]; // [sp+130h] [bp-1024h] BYREF
  int v56; // [sp+14Ch] [bp-1008h]
  char v57[4080]; // [sp+150h] [bp-1004h] BYREF

  LOWORD(v7) = -5856;
  v40 = a3;
  V_LOCK();
  LOWORD(v8) = 27796;
  HIWORD(v8) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v41, v8, *(int *)(a1 + 256));
  HIWORD(v7) = (unsigned int)"freq_HNS_2130" >> 16;
  logfmt_raw(
    v57,
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
    v7,
    "phy_external_bist_init",
    v40);
  V_UNLOCK();
  LOWORD(v9) = -10928;
  HIWORD(v9) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v9, 174, "phy_external_bist_init", 22, 1920, 60, v57);
  v10 = (unsigned __int8 *)&case_select[16 * a5];
  v11 = v10[16];
  v12 = v10[8];
  v39 = v10[8];
  v36 = v10[4];
  v38 = v11;
  v37 = v10[12];
  V_LOCK();
  LOWORD(v13) = 27796;
  HIWORD(v13) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v43, v13, *(int *)(a1 + 256));
  LOWORD(v14) = -6676;
  LOWORD(v15) = -6732;
  HIWORD(v15) = (unsigned int)": %d" >> 16;
  if ( !v11 )
  {
    HIWORD(v14) = (unsigned int)" post_eq: %d" >> 16;
    v15 = v14;
  }
  logfmt_raw(
    v57,
    0x1000u,
    0,
    v44,
    v43[0],
    v43[1],
    v43[2],
    v43[3],
    v43[4],
    v43[5],
    v43[6],
    v44,
    "rx adapt %s, mode=%02d, main=%02d, pre=%02d, post=%02d",
    v15,
    a4,
    v36,
    v12,
    v37);
  V_UNLOCK();
  LOWORD(v16) = -10928;
  HIWORD(v16) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v16, 174, "phy_external_bist_init", 22, 1942, 60, v57);
  sub_7FA14(a1, v40, 86, 3670024);
  usleep(0x12Cu);
  sub_7FA14(a1, v40, 85, 109905420);
  usleep(0x12Cu);
  sub_7FA14(a1, v40, 101, -268374016);
  usleep(0x12Cu);
  sub_7FA14(a1, v40, 64, 256);
  usleep(0x12Cu);
  sub_7FA14(a1, v40, 80, 33423870);
  usleep(0x12Cu);
  sub_7FA14(a1, v40, 81, 832516511);
  usleep(0x12Cu);
  sub_7FA14(a1, v40, 88, -1);
  usleep(0x12Cu);
  v17 = check_core_reg_with_expect_data_eth(a1, a2, v40, 125, 0x70007000u);
  V_LOCK();
  LOWORD(v18) = 27796;
  HIWORD(v18) = (unsigned int)"%1.f" >> 16;
  if ( v17 )
  {
    V_INT((int)v45, v18, *(int *)(a1 + 256));
    logfmt_raw(
      v57,
      0x1000u,
      0,
      v46,
      v45[0],
      v45[1],
      v45[2],
      v45[3],
      v45[4],
      v45[5],
      v45[6],
      v46,
      "%s sram init failed!",
      "phy_external_bist_init");
    V_UNLOCK();
    LOWORD(v19) = -10928;
    HIWORD(v19) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v19, 174, "phy_external_bist_init", 22, 1975, 100, v57);
  }
  else
  {
    V_INT((int)v47, v18, *(int *)(a1 + 256));
    logfmt_raw(
      v57,
      0x1000u,
      0,
      v48,
      v47[0],
      v47[1],
      v47[2],
      v47[3],
      v47[4],
      v47[5],
      v47[6],
      v48,
      "%s PHY core-%02x sram init successed!",
      "phy_external_bist_init",
      v40);
    V_UNLOCK();
    LOWORD(v34) = -10928;
    HIWORD(v34) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v34, 174, "phy_external_bist_init", 22, 1977, 100, v57);
  }
  phy_eq_main_set_by_apb(a1, a2, &v40, 1, v36);
  phy_eq_pre_set_by_apb(a1, a2, &v40, 1, v39);
  phy_eq_post_set_by_apb(a1, a2, &v40, 1, v37);
  sub_7FA14(a1, v40, 86, 137889800);
  usleep(0x12Cu);
  sub_7FA14(a1, v40, 80, 0);
  usleep(0x12Cu);
  v20 = check_core_reg_with_expect_data(a1, a2, v40, 119, 0);
  V_LOCK();
  LOWORD(v21) = 27796;
  HIWORD(v21) = (unsigned int)"%1.f" >> 16;
  if ( v20 )
  {
    V_INT((int)v49, v21, *(int *)(a1 + 256));
    logfmt_raw(
      v57,
      0x1000u,
      0,
      v50,
      v49[0],
      v49[1],
      v49[2],
      v49[3],
      v49[4],
      v49[5],
      v49[6],
      v50,
      "%s PHY core-%02x wait ack failed!",
      "phy_external_bist_init",
      v40);
    V_UNLOCK();
    v22 = g_zc;
    v23 = 2003;
  }
  else
  {
    V_INT((int)v51, v21, *(int *)(a1 + 256));
    logfmt_raw(
      v57,
      0x1000u,
      0,
      v52,
      v51[0],
      v51[1],
      v51[2],
      v51[3],
      v51[4],
      v51[5],
      v51[6],
      v52,
      "%s PHY core-%02x wait ack successed!",
      "phy_external_bist_init",
      v40);
    V_UNLOCK();
    v22 = g_zc;
    v23 = 2005;
  }
  LOWORD(v24) = -10928;
  HIWORD(v24) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(v22, v24, 174, "phy_external_bist_init", 22, v23, 100, v57);
  sub_7FA14(a1, v40, 82, 0);
  usleep(0x64u);
  V_LOCK();
  LOWORD(v25) = 27796;
  HIWORD(v25) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v53, v25, *(int *)(a1 + 256));
  LOWORD(v26) = -7936;
  HIWORD(v26) = (unsigned int)"R NUM] chip %02x core %02x reg %04x rdata %04x" >> 16;
  logfmt_raw(
    v57,
    0x1000u,
    0,
    v54,
    v53[0],
    v53[1],
    v53[2],
    v53[3],
    v53[4],
    v53[5],
    v53[6],
    v54,
    v26,
    "phy_external_bist_init",
    v40);
  V_UNLOCK();
  LOWORD(v27) = -10928;
  HIWORD(v27) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v27, 174, "phy_external_bist_init", 22, 2010, 100, v57);
  v28 = v40;
  sub_7FA14(a1, v40, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, v28, 83, 0) )
  {
    V_LOCK();
    LOWORD(v29) = 27796;
    HIWORD(v29) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v55, v29, *(int *)(a1 + 256));
    LOWORD(v30) = -7900;
    HIWORD(v30) = (unsigned int)"rdata %04x" >> 16;
    LOWORD(v31) = -10968;
    HIWORD(v31) = (unsigned int)"%s PHY core %02x sram boot failed!" >> 16;
    logfmt_raw(
      v57,
      0x1000u,
      0,
      v56,
      v55[0],
      v55[1],
      v55[2],
      v55[3],
      v55[4],
      v55[5],
      v55[6],
      v56,
      v31,
      "phy_handshake",
      v28,
      v30);
    V_UNLOCK();
    LOWORD(v32) = -10928;
    HIWORD(v32) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v32, 174, "phy_handshake", 13, 1744, 100, v57);
  }
  phy_pll_switch(a1, a2, v40, a4);
  if ( v38 )
    phy_rx_adapt(a1, a2, v40);
  return usleep(0x64u);
}
