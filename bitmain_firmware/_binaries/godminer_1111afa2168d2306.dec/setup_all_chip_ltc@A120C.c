int __fastcall setup_all_chip_ltc(int *a1)
{
  int v2; // r3
  int v3; // r1
  int v4; // r8
  int v5; // r3
  int v6; // r1
  int v7; // r5
  int v8; // r0
  int v9; // r1
  char v10; // r3
  void (__fastcall *v11)(int *, int, int); // r3
  int v12; // r5
  int v13; // r3
  int v14; // r1
  int v15; // r3
  int v16; // r1
  int v18; // [sp+0h] [bp-1014h]
  char v19[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 3428;
  HIWORD(v2) = (unsigned int)"_ltc() in" >> 16;
  logfmt_raw(v19, 0x1000u, 0, v2);
  V_UNLOCK();
  LOWORD(v3) = 3060;
  HIWORD(v3) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
  zlog(g_zc, v3, 171, "setup_all_chip_ltc", 18, 577, 40, v19);
  v4 = a1[88];
  V_LOCK();
  LOWORD(v5) = -27176;
  HIWORD(v5) = (unsigned int)"d" >> 16;
  logfmt_raw(v19, 0x1000u, 0, v5, "setup_all_chip_ltc");
  V_UNLOCK();
  LOWORD(v6) = 3060;
  HIWORD(v6) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
  zlog(g_zc, v6, 171, "setup_all_chip_ltc", 18, 580, 60, v19);
  if ( !sub_A11CC(a1) )
    return 12;
  v7 = a1[126];
  v8 = sub_145388(256, (unsigned __int8)v4);
  if ( (_BYTE)v4 )
  {
    v9 = v7 - 1;
    v10 = 0;
    do
    {
      *(_BYTE *)++v9 = v10;
      v10 += v8;
    }
    while ( v7 - 1 + (unsigned __int8)v4 != v9 );
    v7 = a1[126];
  }
  v11 = (void (__fastcall *)(int *, int, int))a1[67];
  a1[111] = v8;
  v11(a1, v7, v4);
  sub_9ED7C((int)a1, 0);
  chip_setting_ticket_mask_ltc(a1, 0xFFFFFFFF);
  if ( a1[89] > 0 )
  {
    v12 = 0;
    do
    {
      v18 = v12++;
      chip_setting_working_mode_ltc((int)a1, 1, 0, 0, v18, 0xFFu);
    }
    while ( a1[89] > v12 );
  }
  a1[120] = 900;
  V_LOCK();
  LOWORD(v13) = 3452;
  HIWORD(v13) = (unsigned int)"" >> 16;
  logfmt_raw(v19, 0x1000u, 0, v13);
  V_UNLOCK();
  LOWORD(v14) = 3060;
  HIWORD(v14) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
  zlog(g_zc, v14, 171, "setup_all_chip_ltc", 18, 649, 60, v19);
  if ( !sub_A11CC(a1) )
    return 12;
  V_LOCK();
  LOWORD(v15) = 3428;
  HIWORD(v15) = (unsigned int)"_ltc() in" >> 16;
  logfmt_raw(v19, 0x1000u, 0, v15);
  V_UNLOCK();
  LOWORD(v16) = 3060;
  HIWORD(v16) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
  zlog(g_zc, v16, 171, "setup_all_chip_ltc", 18, 653, 40, v19);
  return 0;
}
