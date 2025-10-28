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
  int v23; // r1
  int v24; // r1
  int v25; // r1
  int v26; // r1
  int v27; // r1
  int v28; // r1
  char v29[4100]; // [sp+10h] [bp-1004h] BYREF

  v6 = malloc(0xCu);
  V_LOCK();
  LOWORD(v7) = -12320;
  HIWORD(v7) = (unsigned int)"eset_HNS_2130" >> 16;
  logfmt_raw(v29, 0x1000u, 0, v7, "phy_rx_adapt");
  V_UNLOCK();
  LOWORD(v8) = -9656;
  HIWORD(v8) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v8, 174, "phy_rx_adapt", 12, 1608, 60, v29);
  sub_7660C(a1, a3, 84, -1);
  v9 = sub_76880(a1, a2, (unsigned __int16)a3, 84, v6);
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
    logfmt_raw(v29, 0x1000u, 0, 1370248, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v25) = -9656;
    HIWORD(v25) = (unsigned int)"t_kas" >> 16;
    zlog(g_zc, v25, 174, "phy_rx_adapt", 12, 1628, 100, v29);
  }
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 127, 0xF0000000, 4) )
  {
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, 1370300, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v24) = -9656;
    HIWORD(v24) = (unsigned int)"t_kas" >> 16;
    zlog(g_zc, v24, 174, "phy_rx_adapt", 12, 1634, 100, v29);
  }
  sub_7660C(a1, a3, 84, -16711936);
  v13 = sub_76880(a1, a2, (unsigned __int16)a3, 84, v6);
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
  sub_7660C(a1, a3, 100, (int)&loc_F000C + 3);
  v15 = sub_76880(a1, a2, (unsigned __int16)a3, 100, v6);
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
  sub_7660C(a1, a3, 80, 1966110);
  v17 = sub_76880(a1, a2, (unsigned __int16)a3, 80, v6);
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
  sub_7660C(a1, a3, 80, 0);
  v19 = sub_76880(a1, a2, (unsigned __int16)a3, 80, v6);
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
    logfmt_raw(v29, 0x1000u, 0, 1370352, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v26) = -9656;
    HIWORD(v26) = (unsigned int)"t_kas" >> 16;
    zlog(g_zc, v26, 174, "phy_rx_adapt", 12, 1707, 100, v29);
  }
  sub_7660C(a1, a3, 84, -1);
  v21 = sub_76880(a1, a2, (unsigned __int16)a3, 84, v6);
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
    logfmt_raw(v29, 0x1000u, 0, 1370388, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v27) = -9656;
    HIWORD(v27) = (unsigned int)"t_kas" >> 16;
    zlog(g_zc, v27, 174, "phy_rx_adapt", 12, 1730, 100, v29);
  }
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 127, 0xF0000000, 4) )
  {
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, 1370440, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v28) = -9656;
    HIWORD(v28) = (unsigned int)"t_kas" >> 16;
    zlog(g_zc, v28, 174, "phy_rx_adapt", 12, 1735, 100, v29);
  }
  sub_7660C(a1, a3, 83, 251662080);
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 83, 0, 4) )
  {
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, 1370352, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v23) = -9656;
    HIWORD(v23) = (unsigned int)"t_kas" >> 16;
    zlog(g_zc, v23, 174, "phy_rx_adapt", 12, 1742, 100, v29);
  }
  return a2;
}
