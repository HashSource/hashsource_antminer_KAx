int __fastcall dram_bist_check_ltc_status_rvn(int a1, int a2, int a3, int a4)
{
  int v8; // r3
  int v9; // r1
  int v10; // r3
  int v11; // r0
  int v12; // r2
  int v13; // r1
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r3
  char v20[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v8) = 10320;
  HIWORD(v8) = (unsigned int)"esp_num: %d, work_mode: %d" >> 16;
  logfmt_raw(v20, 0x1000u, 0, v8, "dram_bist_check_ltc_status_rvn", a4, a1, a2);
  V_UNLOCK();
  LOWORD(v9) = 9580;
  HIWORD(v9) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v9, 171, "dram_bist_check_ltc_status_rvn", 30, 2557, 40, v20);
  switch ( a1 )
  {
    case 0:
      *(_BYTE *)(a3 + a4) = 0;
      V_LOCK();
      LOWORD(v15) = 10368;
      HIWORD(v15) = (unsigned int)" %02x load done" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v15, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v11 = g_zc;
      v12 = 2561;
      break;
    case 1:
      *(_BYTE *)(a3 + a4) = 0;
      V_LOCK();
      LOWORD(v16) = 10412;
      HIWORD(v16) = (unsigned int)"ad err" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v16, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v11 = g_zc;
      v12 = 2565;
      break;
    case 2:
      *(_BYTE *)(a3 + a4) = 1;
      V_LOCK();
      LOWORD(v17) = 10456;
      HIWORD(v17) = (unsigned int)"x" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v17, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v11 = g_zc;
      v12 = 2569;
      break;
    case 4:
      *(_BYTE *)(a3 + a4) = -30;
      V_LOCK();
      LOWORD(v18) = 10544;
      HIWORD(v18) = (unsigned int)"x, core: %02x dag load done" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v18, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v11 = g_zc;
      v12 = 2577;
      break;
    case 6:
      *(_BYTE *)(a3 + a4) = 1;
      V_LOCK();
      LOWORD(v10) = 10500;
      HIWORD(v10) = (unsigned int)"" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v10, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v11 = g_zc;
      v12 = 2573;
      break;
    default:
      V_LOCK();
      LOWORD(v19) = 10592;
      HIWORD(v19) = (unsigned int)"done" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v19, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v11 = g_zc;
      v12 = 2580;
      break;
  }
  LOWORD(v13) = 9580;
  HIWORD(v13) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(v11, v13, 171, "dram_bist_check_ltc_status_rvn", 30, v12, 40, v20);
  return 0;
}
