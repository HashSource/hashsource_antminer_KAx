int __fastcall phy_eq_main_set(int a1, int a2)
{
  int v3; // r5
  unsigned __int8 *v4; // r4
  int v5; // r0
  unsigned __int8 *v6; // r3
  int v7; // r2
  int v8; // r0
  unsigned __int8 *v9; // r7
  int v10; // r3
  int v11; // r8
  char *v12; // r1
  int v13; // r1
  int v14; // r0
  unsigned __int8 *v15; // r3
  int v16; // r2
  int v17; // r0
  unsigned __int8 *v18; // r5
  int v19; // r3
  int v20; // r7
  char *v21; // r1
  int v22; // r1
  _DWORD v24[7]; // [sp+28h] [bp-1044h] BYREF
  int v25; // [sp+44h] [bp-1028h]
  _DWORD v26[7]; // [sp+48h] [bp-1024h] BYREF
  int v27; // [sp+64h] [bp-1008h]
  char v28[4100]; // [sp+68h] [bp-1004h] BYREF

  v3 = (a2 << 12) | (a2 << 18) | a2 | (a2 << 6);
  v4 = (unsigned __int8 *)malloc(0x600u);
  v5 = sub_7FA64(a1, 0, 111, v4);
  if ( v5 )
  {
    v6 = v4;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v6 + 3)) == 111 && !v6[8] )
        break;
      v6 += 12;
      if ( v5 == v7 )
        goto LABEL_7;
    }
    sub_7F9D0(a1, 111, bswap32(*v6) | v3);
  }
LABEL_7:
  v8 = sub_7FA64(a1, 0, 111, v4);
  if ( v8 )
  {
    v9 = v4;
    v10 = 0;
    while ( 1 )
    {
      ++v10;
      if ( *((_WORD *)v9 + 3) == 28416 )
      {
        v11 = v9[8];
        if ( !v9[8] )
          break;
      }
      v9 += 12;
      if ( v8 == v10 )
        goto LABEL_13;
    }
    V_LOCK();
    LOWORD(v12) = 27796;
    HIWORD(v12) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v24, v12, *(int *)(a1 + 256));
    logfmt_raw(
      v28,
      0x1000u,
      v11,
      v25,
      v24[0],
      v24[1],
      v24[2],
      v24[3],
      v24[4],
      v24[5],
      v24[6],
      v25,
      "[PHY EQ MAIN SET] chip 0x0 core 0x0 reg 0x6f rdata %08x",
      bswap32(*(_DWORD *)v9));
    V_UNLOCK();
    LOWORD(v13) = -10928;
    HIWORD(v13) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v13, 174, "phy_eq_main_set", 15, 2443, 60, v28);
  }
LABEL_13:
  v14 = sub_7FA64(a1, 0, 112, v4);
  if ( v14 )
  {
    v15 = v4;
    v16 = 0;
    while ( 1 )
    {
      ++v16;
      if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v15 + 3)) == 112 && !v15[8] )
        break;
      v15 += 12;
      if ( v14 == v16 )
        goto LABEL_19;
    }
    sub_7F9D0(a1, 112, bswap32(*v15) | v3);
  }
LABEL_19:
  v17 = sub_7FA64(a1, 0, 112, v4);
  if ( v17 )
  {
    v18 = v4;
    v19 = 0;
    while ( 1 )
    {
      ++v19;
      if ( *((_WORD *)v18 + 3) == 28672 )
      {
        v20 = v18[8];
        if ( !v18[8] )
          break;
      }
      v18 += 12;
      if ( v17 == v19 )
        goto LABEL_25;
    }
    V_LOCK();
    LOWORD(v21) = 27796;
    HIWORD(v21) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v26, v21, *(int *)(a1 + 256));
    logfmt_raw(
      v28,
      0x1000u,
      v20,
      v27,
      v26[0],
      v26[1],
      v26[2],
      v26[3],
      v26[4],
      v26[5],
      v26[6],
      v27,
      "[PHY EQ MAIN SET] chip 0x0 core 0x0 reg 0x70 rdata %08x",
      bswap32(*(_DWORD *)v18));
    V_UNLOCK();
    LOWORD(v22) = -10928;
    HIWORD(v22) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v22, 174, "phy_eq_main_set", 15, 2463, 60, v28);
  }
LABEL_25:
  free(v4);
  return 0;
}
