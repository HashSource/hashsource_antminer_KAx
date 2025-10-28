int __fastcall set_baud_eth(int a1, char *a2)
{
  int v4; // r9
  char *v5; // r1
  int v6; // r7
  int v7; // r1
  char *v8; // r1
  int v9; // r1
  int v10; // r4
  _DWORD v12[4]; // [sp+28h] [bp-1054h] BYREF
  _DWORD v13[7]; // [sp+38h] [bp-1044h] BYREF
  int v14; // [sp+54h] [bp-1028h]
  _DWORD v15[7]; // [sp+58h] [bp-1024h] BYREF
  int v16; // [sp+74h] [bp-1008h]
  char v17[4100]; // [sp+78h] [bp-1004h] BYREF

  if ( a2 == (char *)&loc_FE500 + 2 )
    goto LABEL_17;
  if ( (int)a2 > (int)((char *)&loc_FE500 + 2) )
  {
    if ( a2 == byte_17D784 )
      goto LABEL_18;
    if ( (int)a2 > (int)byte_17D784 )
    {
      if ( a2 == (char *)3000000 || a2 == (char *)3125000 )
      {
        v4 = -65536;
        goto LABEL_8;
      }
      goto LABEL_10;
    }
    if ( a2 == "_err: 0x%llx, lane_err: %u" )
    {
LABEL_18:
      v4 = -65535;
      goto LABEL_8;
    }
LABEL_10:
    v4 = -65510;
    goto LABEL_8;
  }
  if ( a2 == (char *)&loc_70800 )
  {
    v4 = -65530;
    goto LABEL_8;
  }
  if ( a2 == (char *)&loc_E1000 )
  {
LABEL_17:
    v4 = -65534;
    goto LABEL_8;
  }
  if ( a2 != (char *)38400 )
    goto LABEL_10;
  v4 = -65456;
LABEL_8:
  V_LOCK();
  LOWORD(v5) = 27796;
  HIWORD(v5) = (unsigned int)"%1.f" >> 16;
  LOWORD(v6) = -13760;
  V_INT((int)v13, v5, *(int *)(a1 + 256));
  HIWORD(v6) = (unsigned int)"%02x cnt %08x" >> 16;
  logfmt_raw(v17, 0x1000u, 0, v14, v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v14, v6, a2);
  V_UNLOCK();
  LOWORD(v7) = -13944;
  HIWORD(v7) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
  zlog(g_zc, v7, 171, "set_baud_eth", 12, 1285, 60, v17);
  v12[2] = 3145729;
  v12[1] = 0;
  v12[0] = v4;
  v12[3] = 0;
  V_LOCK();
  LOWORD(v8) = 27796;
  HIWORD(v8) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v15, v8, *(int *)(a1 + 256));
  logfmt_raw(
    v17,
    0x1000u,
    0,
    v16,
    v15[0],
    v15[1],
    v15[2],
    v15[3],
    v15[4],
    v15[5],
    v15[6],
    v16,
    "set misc ctrl %08x",
    v4);
  V_UNLOCK();
  LOWORD(v9) = -23376;
  HIWORD(v9) = (unsigned int)"k: %s" >> 16;
  zlog(g_zc, v9, 150, "ChipSetting_misc_ctrl_ETH", 25, 286, 40, v17);
  v10 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v12);
  usleep(0x2710u);
  return v10;
}
