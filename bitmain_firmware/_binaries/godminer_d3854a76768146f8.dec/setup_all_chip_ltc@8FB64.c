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
  LOWORD(v2) = 972;
  HIWORD(v2) = (unsigned int)&unk_151F3C >> 16;
  logfmt_raw(v19, 0x1000u, 0, v2);
  V_UNLOCK();
  LOWORD(v3) = 604;
  HIWORD(v3) = (unsigned int)"dapt_rvn" >> 16;
  zlog(g_zc, v3, 171, "setup_all_chip_ltc", 18, 577, 40, v19);
  v4 = a1[78];
  V_LOCK();
  LOWORD(v5) = -25092;
  HIWORD(v5) = (unsigned int)"date_dash" >> 16;
  logfmt_raw(v19, 0x1000u, 0, v5, "setup_all_chip_ltc");
  V_UNLOCK();
  LOWORD(v6) = 604;
  HIWORD(v6) = (unsigned int)"dapt_rvn" >> 16;
  zlog(g_zc, v6, 171, "setup_all_chip_ltc", 18, 580, 60, v19);
  if ( !sub_8FB24(a1) )
    return 12;
  v7 = a1[116];
  v8 = sub_12EA10(256, (unsigned __int8)v4);
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
    v7 = a1[116];
  }
  v11 = (void (__fastcall *)(int *, int, int))a1[60];
  a1[101] = v8;
  v11(a1, v7, v4);
  sub_8D684((int)a1, 0);
  chip_setting_ticket_mask_ltc(a1, 0xFFFFFFFF);
  if ( a1[79] > 0 )
  {
    v12 = 0;
    do
    {
      v18 = v12++;
      chip_setting_working_mode_ltc((int)a1, 1, 0, 0, v18, 0xFFu);
    }
    while ( a1[79] > v12 );
  }
  a1[110] = 900;
  V_LOCK();
  LOWORD(v13) = 996;
  HIWORD(v13) = (unsigned int)&unk_151F54 >> 16;
  logfmt_raw(v19, 0x1000u, 0, v13);
  V_UNLOCK();
  LOWORD(v14) = 604;
  HIWORD(v14) = (unsigned int)"dapt_rvn" >> 16;
  zlog(g_zc, v14, 171, "setup_all_chip_ltc", 18, 649, 60, v19);
  if ( !sub_8FB24(a1) )
    return 12;
  V_LOCK();
  LOWORD(v15) = 972;
  HIWORD(v15) = (unsigned int)&unk_151F3C >> 16;
  logfmt_raw(v19, 0x1000u, 0, v15);
  V_UNLOCK();
  LOWORD(v16) = 604;
  HIWORD(v16) = (unsigned int)"dapt_rvn" >> 16;
  zlog(g_zc, v16, 171, "setup_all_chip_ltc", 18, 653, 40, v19);
  return 0;
}
