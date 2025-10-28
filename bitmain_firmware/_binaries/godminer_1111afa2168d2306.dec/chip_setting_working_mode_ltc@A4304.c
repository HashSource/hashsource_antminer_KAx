int __fastcall chip_setting_working_mode_ltc(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  int v10; // r3
  int v11; // r1
  char v12; // r2
  int v13; // r3
  int v14; // r3
  int v15; // r0
  int v16; // r5
  int v17; // r3
  int v18; // r0
  int v19; // r2
  int v20; // r1
  int v22; // r0
  int v23; // r3
  int v24; // [sp+18h] [bp-1010h] BYREF
  int v25; // [sp+1Ch] [bp-100Ch]
  int v26; // [sp+20h] [bp-1008h]
  int v27; // [sp+24h] [bp-1004h]
  char var1000[4120]; // [sp+28h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v10) = -27176;
  HIWORD(v10) = (unsigned int)"d" >> 16;
  logfmt_raw(var1000, 0x1000u, 0, v10, "chip_setting_working_mode_ltc");
  V_UNLOCK();
  LOWORD(v11) = 4576;
  HIWORD(v11) = (unsigned int)"all core" >> 16;
  zlog(g_zc, v11, 176, "chip_setting_working_mode_ltc", 29, 304, 20, var1000);
  if ( a4 )
  {
    v14 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    if ( !a2 )
      v14 = *(_DWORD *)(a1 + 504);
    LOBYTE(v26) = a2;
    v15 = *(_DWORD *)(a1 + 356);
    if ( !a2 )
      LOBYTE(v14) = *(_BYTE *)(v14 + a3);
    LOBYTE(v27) = a5;
    BYTE1(v27) = v15;
    BYTE1(v26) = v14;
    v24 = a6 | 0x400;
    BYTE2(v27) = 1;
    v16 = (*(int (__fastcall **)(int))(a1 + 280))(a1);
    if ( v16 )
    {
      V_LOCK();
      LOWORD(v17) = 4984;
      HIWORD(v17) = (unsigned int)"ing_get_addr_RVN" >> 16;
      logfmt_raw(
        var1000,
        0x1000u,
        0,
        v17,
        "chip_setting_working_mode_ltc",
        (unsigned __int8)v26,
        BYTE1(v26),
        HIWORD(v26));
      V_UNLOCK();
      v18 = g_zc;
      v19 = 321;
LABEL_8:
      LOWORD(v20) = 4576;
      HIWORD(v20) = (unsigned int)"all core" >> 16;
      zlog(v18, v20, 176, "chip_setting_working_mode_ltc", 29, v19, 100, var1000);
      return v16;
    }
  }
  else
  {
    if ( a2 )
      v12 = 0;
    else
      v13 = *(_DWORD *)(a1 + 504);
    v24 = 0;
    v25 = 0;
    v27 = 0;
    v26 = (unsigned __int8)a2;
    if ( !a2 )
      v12 = *(_BYTE *)(v13 + a3);
    v22 = *(_DWORD *)(a1 + 356);
    BYTE1(v26) = v12;
    *(_WORD *)((char *)&v27 + 1) = (unsigned __int8)v22;
    LOBYTE(v27) = a5;
    HIWORD(v26) = 0;
    HIBYTE(v27) = 0;
    v24 = a6 | 0x400;
    v16 = (*(int (__fastcall **)(int, int *))(a1 + 280))(a1, &v24);
    if ( v16 )
    {
      V_LOCK();
      LOWORD(v23) = 5044;
      HIWORD(v23) = (unsigned int)"ChipSetting_read_sensor_temp_local_RVN" >> 16;
      logfmt_raw(
        var1000,
        0x1000u,
        0,
        v23,
        "chip_setting_working_mode_ltc",
        (unsigned __int8)v26,
        BYTE1(v26),
        HIWORD(v26),
        a5);
      V_UNLOCK();
      v18 = g_zc;
      v19 = 344;
      goto LABEL_8;
    }
  }
  usleep(0x3E8u);
  return v16;
}
