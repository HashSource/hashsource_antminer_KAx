int __fastcall serdes_external_loop_ate_setup(int a1, int a2, int a3, int a4)
{
  char *v7; // r1
  int v8; // r7
  int v9; // r1
  int v10; // r8
  char *v11; // r1
  int v12; // r1
  char *v13; // r3
  char *v14; // r1
  int v15; // r1
  _DWORD v18[7]; // [sp+30h] [bp-1064h] BYREF
  int v19; // [sp+4Ch] [bp-1048h]
  _DWORD v20[7]; // [sp+50h] [bp-1044h] BYREF
  int v21; // [sp+6Ch] [bp-1028h]
  _DWORD v22[7]; // [sp+70h] [bp-1024h] BYREF
  int v23; // [sp+8Ch] [bp-1008h]
  char v24[4100]; // [sp+90h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v7) = 27796;
  HIWORD(v7) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v18, v7, *(int *)(a1 + 256));
  LOWORD(v8) = -13336;
  HIWORD(v8) = (unsigned int)"\n" >> 16;
  logfmt_raw(
    v24,
    0x1000u,
    0,
    v19,
    v18[0],
    v18[1],
    v18[2],
    v18[3],
    v18[4],
    v18[5],
    v18[6],
    v19,
    v8,
    "serdes_external_loop_ate_setup");
  V_UNLOCK();
  LOWORD(v9) = -10928;
  HIWORD(v9) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  LOWORD(v10) = -10676;
  zlog(g_zc, v9, 174, "serdes_external_loop_ate_setup", 30, 1544, 60, v24);
  V_LOCK();
  LOWORD(v11) = 27796;
  HIWORD(v11) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v20, v11, *(int *)(a1 + 256));
  HIWORD(v10) = (unsigned int)"%s Override rx_recal_skip_en, rx_recal_force_en, rx_recal_bank_sel, rx_coarse_adpt_force_e"
                              "n, rx_coarse_adpt_skip_en" >> 16;
  logfmt_raw(
    v24,
    0x1000u,
    0,
    v21,
    v20[0],
    v20[1],
    v20[2],
    v20[3],
    v20[4],
    v20[5],
    v20[6],
    v21,
    v10,
    "serdes_external_loop_ate_setup");
  V_UNLOCK();
  LOWORD(v12) = -10928;
  HIWORD(v12) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v12, 174, "serdes_external_loop_ate_setup", 30, 1546, 60, v24);
  if ( LFSR31 )
  {
    sub_7FA14(a1, a3, 77, (int)&dword_10000 + 1);
    sub_7FA14(a1, a3, 78, -2144251757);
    sub_7FA14(a1, a3, 77, (int)&dword_10000 + 1);
    sub_7FA14(a1, a3, 78, -2144251757);
    sub_7FA14(a1, a3, 77, (int)&loc_110010 + 1);
    sub_7FA14(a1, a3, 78, -2144251757);
    sub_7FA14(a1, a3, 77, (int)&dword_10000 + 1);
    sub_7FA14(a1, a3, 78, -2144251757);
    sub_7FA14(a1, a3, 77, (int)&loc_110010 + 1);
    sub_7FA14(a1, a3, 78, -2144251757);
    v13 = (char *)&dword_10000 + 1;
  }
  else
  {
    sub_7FA14(a1, a3, 77, (int)&loc_90008 + 1);
    sub_7FA14(a1, a3, 78, -2144251757);
    sub_7FA14(a1, a3, 77, (int)&loc_90008 + 1);
    sub_7FA14(a1, a3, 78, -2144251757);
    sub_7FA14(a1, a3, 77, 1638425);
    sub_7FA14(a1, a3, 78, -2144251757);
    sub_7FA14(a1, a3, 77, (int)&loc_90008 + 1);
    sub_7FA14(a1, a3, 78, -2144251757);
    sub_7FA14(a1, a3, 77, 1638425);
    sub_7FA14(a1, a3, 78, -2144251757);
    v13 = (char *)&loc_90008;
  }
  sub_7FA14(a1, a3, 77, (int)v13);
  sub_7FA14(a1, a3, 78, -2144251757);
  usleep(0xFA0u);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  V_LOCK();
  LOWORD(v14) = 27796;
  HIWORD(v14) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v22, v14, *(int *)(a1 + 256));
  logfmt_raw(
    v24,
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
    "%s Introducing error",
    "serdes_external_loop_ate_setup");
  V_UNLOCK();
  LOWORD(v15) = -10928;
  HIWORD(v15) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v15, 174, "serdes_external_loop_ate_setup", 30, 1575, 60, v24);
  sub_7FA14(a1, a3, 77, 716778169);
  sub_7FA14(a1, a3, 78, -2144251791);
  sub_7FA14(a1, a3, 77, 715729577);
  sub_7FA14(a1, a3, 78, -2144251791);
  usleep((__useconds_t)&stru_13880);
  serdes_wait_status(a1, a2, a3, 4244, a4);
  serdes_wait_status(a1, a2, a3, 4244, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 4756, a4);
  serdes_wait_status(a1, a2, a3, 4756, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 5268, a4);
  serdes_wait_status(a1, a2, a3, 5268, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 5780, a4);
  serdes_wait_status(a1, a2, a3, 5780, (int)&dword_10000 + 1);
  return 0;
}
