int __fastcall phy_external_bist(int a1, int a2, int a3, int a4)
{
  int v8; // r6
  char *v9; // r1
  int v10; // r1
  char *v11; // r2
  unsigned __int8 *v12; // r6
  unsigned __int8 *v13; // r5
  unsigned __int16 v14; // t1
  int v15; // r1
  unsigned __int8 *v16; // r5
  unsigned __int8 v17; // t1
  char *v19; // [sp+2Ch] [bp-1090h]
  _DWORD v20[7]; // [sp+38h] [bp-1084h] BYREF
  int v21; // [sp+54h] [bp-1068h]
  _DWORD v22[7]; // [sp+58h] [bp-1064h] BYREF
  int v23; // [sp+74h] [bp-1048h]
  _BYTE s[64]; // [sp+78h] [bp-1044h] BYREF
  char v25[4100]; // [sp+B8h] [bp-1004h] BYREF

  LOWORD(v8) = -12320;
  V_LOCK();
  LOWORD(v9) = 588;
  HIWORD(v9) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v20, v9, *(int *)(a1 + 232));
  HIWORD(v8) = (unsigned int)"eset_HNS_2130" >> 16;
  logfmt_raw(v25, 0x1000u, 0, v21, v20[0], v20[1], v20[2], v20[3], v20[4], v20[5], v20[6], v21, v8, "phy_external_bist");
  V_UNLOCK();
  LOWORD(v10) = -9656;
  HIWORD(v10) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v10, 174, "phy_external_bist", 17, 1158, 60, v25);
  memset(s, 0, sizeof(s));
  if ( a4 )
  {
    LOWORD(v11) = 588;
    HIWORD(v11) = (unsigned int)": get test = %d" >> 16;
    v12 = (unsigned __int8 *)(a3 - 1);
    v19 = v11;
    v13 = (unsigned __int8 *)(a3 + (unsigned __int8)(a4 - 1));
    do
    {
      while ( 1 )
      {
        v14 = *++v12;
        if ( check_core_reg_with_expect_data_eth(a1, a2, v14, 64, 0xFF000100) )
          break;
        if ( v12 == v13 )
          goto LABEL_6;
      }
      V_LOCK();
      V_INT((int)v22, v19, *(int *)(a1 + 232));
      logfmt_raw(
        v25,
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
        1370028,
        "phy_external_bist");
      V_UNLOCK();
      LOWORD(v15) = -9656;
      HIWORD(v15) = (unsigned int)"t_kas" >> 16;
      zlog(g_zc, v15, 174, "phy_external_bist", 17, 1298, 100, v25);
    }
    while ( v12 != v13 );
LABEL_6:
    v16 = (unsigned __int8 *)(a3 - 1);
    do
    {
      v17 = *++v16;
      sub_7660C(a1, v17, 133, 0xFFFF);
      sub_7660C(a1, *v16, 134, 1342177279);
    }
    while ( v16 != v12 );
  }
  sub_765C8(a1, 132, -2147483647);
  sleep(0xAu);
  return 0;
}
