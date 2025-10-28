unsigned int __fastcall phy_rx_adapt(int a1, unsigned int a2, unsigned int a3)
{
  void *v6; // r7
  int v7; // r3
  int v8; // r1
  int v9; // r0
  unsigned int *v10; // r3
  int v11; // r2
  int v13; // r0
  int v14; // r2
  int v15; // r0
  int v16; // r2
  int v17; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r2
  int v21; // r0
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r3
  int v26; // r1
  int v27; // r3
  int v28; // r1
  int v29; // r3
  int v30; // r1
  int v31; // r3
  int v32; // r1
  int v33; // r3
  int v34; // r1
  char v35[4100]; // [sp+10h] [bp-1004h] BYREF

  v6 = malloc(0xCu);
  V_LOCK();
  LOWORD(v7) = -13956;
  HIWORD(v7) = (unsigned int)"08x" >> 16;
  logfmt_raw(v35, 0x1000u, 0, v7, "phy_rx_adapt");
  V_UNLOCK();
  LOWORD(v8) = -10928;
  HIWORD(v8) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v8, 174, "phy_rx_adapt", 12, 2559, 60, v35);
  sub_7FA14(a1, a3, 84, -1);
  v9 = sub_7FCB4(a1, a2, (unsigned __int16)a3, 84, v6);
  if ( v9 )
  {
    v10 = (unsigned int *)v6;
    v11 = 0;
    do
    {
      ++v11;
      if ( *((unsigned __int8 *)v10 + 4) == a2 && *((unsigned __int8 *)v10 + 8) == a3 )
        goto LABEL_6;
      v10 += 3;
    }
    while ( v9 != v11 );
  }
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 126, 0xF0000000, 4) )
  {
    V_LOCK();
    LOWORD(v27) = -6976;
    HIWORD(v27) = (unsigned int)"adapt_5.ini" >> 16;
    logfmt_raw(v35, 0x1000u, 0, v27, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v28) = -10928;
    HIWORD(v28) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v28, 174, "phy_rx_adapt", 12, 2579, 100, v35);
  }
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 127, 0xF0000000, 4) )
  {
    V_LOCK();
    LOWORD(v25) = -6924;
    HIWORD(v25) = (unsigned int)"t_7.ini" >> 16;
    logfmt_raw(v35, 0x1000u, 0, v25, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v26) = -10928;
    HIWORD(v26) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v26, 174, "phy_rx_adapt", 12, 2585, 100, v35);
  }
  sub_7FA14(a1, a3, 84, -16711936);
  v13 = sub_7FCB4(a1, a2, (unsigned __int16)a3, 84, v6);
  if ( v13 )
  {
    v10 = (unsigned int *)v6;
    v14 = 0;
    do
    {
      while ( 1 )
      {
        ++v14;
        if ( *((unsigned __int8 *)v10 + 4) == a2 )
          break;
        v10 += 3;
        if ( v13 == v14 )
          goto LABEL_18;
      }
      if ( *((unsigned __int8 *)v10 + 8) == a3 )
        goto LABEL_6;
      v10 += 3;
    }
    while ( v13 != v14 );
  }
LABEL_18:
  sub_7FA14(a1, a3, 100, (int)&loc_F000C + 3);
  v15 = sub_7FCB4(a1, a2, (unsigned __int16)a3, 100, v6);
  if ( v15 )
  {
    v10 = (unsigned int *)v6;
    v16 = 0;
    do
    {
      while ( 1 )
      {
        ++v16;
        if ( *((unsigned __int8 *)v10 + 4) == a2 )
          break;
        v10 += 3;
        if ( v15 == v16 )
          goto LABEL_24;
      }
      if ( *((unsigned __int8 *)v10 + 8) == a3 )
        goto LABEL_6;
      v10 += 3;
    }
    while ( v15 != v16 );
  }
LABEL_24:
  sub_7FA14(a1, a3, 80, 1966110);
  v17 = sub_7FCB4(a1, a2, (unsigned __int16)a3, 80, v6);
  if ( v17 )
  {
    v10 = (unsigned int *)v6;
    v18 = 0;
    do
    {
      while ( 1 )
      {
        ++v18;
        if ( *((unsigned __int8 *)v10 + 4) == a2 )
          break;
        v10 += 3;
        if ( v17 == v18 )
          goto LABEL_30;
      }
      if ( *((unsigned __int8 *)v10 + 8) == a3 )
        goto LABEL_6;
      v10 += 3;
    }
    while ( v17 != v18 );
  }
LABEL_30:
  sub_7FA14(a1, a3, 80, 0);
  v19 = sub_7FCB4(a1, a2, (unsigned __int16)a3, 80, v6);
  if ( v19 )
  {
    v10 = (unsigned int *)v6;
    v20 = 0;
    do
    {
      while ( 1 )
      {
        ++v20;
        if ( *((unsigned __int8 *)v10 + 4) == a2 )
          break;
        v10 += 3;
        if ( v19 == v20 )
          goto LABEL_36;
      }
      if ( *((unsigned __int8 *)v10 + 8) == a3 )
        goto LABEL_6;
      v10 += 3;
    }
    while ( v19 != v20 );
  }
LABEL_36:
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 119, 0, 4) )
  {
    V_LOCK();
    LOWORD(v29) = -6872;
    HIWORD(v29) = (unsigned int)"ini" >> 16;
    logfmt_raw(v35, 0x1000u, 0, v29, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v30) = -10928;
    HIWORD(v30) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v30, 174, "phy_rx_adapt", 12, 2658, 100, v35);
  }
  sub_7FA14(a1, a3, 84, -1);
  v21 = sub_7FCB4(a1, a2, (unsigned __int16)a3, 84, v6);
  if ( v21 )
  {
    v10 = (unsigned int *)v6;
    v22 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        ++v22;
        if ( *((unsigned __int8 *)v10 + 4) == a2 )
          break;
        v10 += 3;
        if ( v21 == v22 )
          goto LABEL_44;
      }
      if ( *((unsigned __int8 *)v10 + 8) == a3 )
        break;
      v10 += 3;
      if ( v21 == v22 )
        goto LABEL_44;
    }
LABEL_6:
    a2 = bswap32(*v10);
    free(v6);
    return a2;
  }
LABEL_44:
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 126, 0xF0000000, 4) )
  {
    V_LOCK();
    LOWORD(v31) = -6836;
    HIWORD(v31) = (unsigned int)" phy test config failed" >> 16;
    logfmt_raw(v35, 0x1000u, 0, v31, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v32) = -10928;
    HIWORD(v32) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v32, 174, "phy_rx_adapt", 12, 2681, 100, v35);
  }
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 127, 0xF0000000, 4) )
  {
    V_LOCK();
    LOWORD(v33) = -6784;
    HIWORD(v33) = (unsigned int)&word_16E748 >> 16;
    logfmt_raw(v35, 0x1000u, 0, v33, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v34) = -10928;
    HIWORD(v34) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v34, 174, "phy_rx_adapt", 12, 2686, 100, v35);
  }
  sub_7FA14(a1, a3, 83, 251662080);
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 83, 0, 4) )
  {
    V_LOCK();
    LOWORD(v23) = -6872;
    HIWORD(v23) = (unsigned int)"ini" >> 16;
    logfmt_raw(v35, 0x1000u, 0, v23, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v24) = -10928;
    HIWORD(v24) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v24, 174, "phy_rx_adapt", 12, 2693, 100, v35);
  }
  return a2;
}
