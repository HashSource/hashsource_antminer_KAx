int __fastcall phy_external_loop_adapt(
        int a1,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        char a7)
{
  char *v10; // r1
  int v11; // r10
  int v12; // r11
  int v13; // r1
  int v15; // r10
  int v16; // r11
  int v17; // r1
  unsigned __int8 v18; // [sp+3Fh] [bp-1025h] BYREF
  int v19; // [sp+40h] [bp-1024h] BYREF
  int v20; // [sp+44h] [bp-1020h]
  int v21; // [sp+48h] [bp-101Ch]
  int v22; // [sp+4Ch] [bp-1018h]
  int v23; // [sp+50h] [bp-1014h]
  int v24; // [sp+54h] [bp-1010h]
  int v25; // [sp+58h] [bp-100Ch]
  int v26; // [sp+5Ch] [bp-1008h]
  char var1004[4128]; // [sp+60h] [bp-1004h] BYREF

  v18 = a3;
  V_LOCK();
  LOWORD(v10) = 27796;
  HIWORD(v10) = (unsigned int)"%1.f" >> 16;
  V_INT((int)&v19, v10, *(int *)(a1 + 256));
  if ( a7 )
  {
    LOWORD(v11) = -6724;
    HIWORD(v11) = (unsigned int)"pre_eq=" >> 16;
    LOWORD(v12) = -6732;
    HIWORD(v12) = (unsigned int)": %d" >> 16;
    logfmt_raw(
      var1004,
      0x1000u,
      0,
      v26,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v11,
      "phy_external_loop_adapt",
      v12,
      a4,
      a5,
      a6);
    V_UNLOCK();
    LOWORD(v13) = -10928;
    HIWORD(v13) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v13, 174, "phy_external_loop_adapt", 23, 1905, 60, var1004);
    phy_eq_main_set_by_apb(a1, a2, &v18, 1, a4);
    phy_eq_pre_set_by_apb(a1, a2, &v18, 1, a5);
    phy_eq_post_set_by_apb(a1, a2, &v18, 1, a6);
    if ( a7 == 1 )
      phy_rx_adapt(a1, a2, v18);
  }
  else
  {
    LOWORD(v15) = -6724;
    HIWORD(v15) = (unsigned int)"pre_eq=" >> 16;
    LOWORD(v16) = -6676;
    HIWORD(v16) = (unsigned int)" post_eq: %d" >> 16;
    logfmt_raw(
      var1004,
      0x1000u,
      0,
      v26,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v15,
      "phy_external_loop_adapt",
      v16,
      a4,
      a5,
      a6);
    V_UNLOCK();
    LOWORD(v17) = -10928;
    HIWORD(v17) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v17, 174, "phy_external_loop_adapt", 23, 1905, 60, var1004);
    phy_eq_main_set_by_apb(a1, a2, &v18, 1, a4);
    phy_eq_pre_set_by_apb(a1, a2, &v18, 1, a5);
    phy_eq_post_set_by_apb(a1, a2, &v18, 1, a6);
  }
  usleep(0x64u);
  return 0;
}
