int __fastcall chip_setting_reset_bist_ltc(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r11
  int v8; // r8
  int v9; // r3
  int v10; // r1
  int v11; // r3
  bool v12; // zf
  int v13; // r2
  int v14; // r5
  int v15; // r10
  int v16; // r3
  int v17; // r2
  int v18; // r0
  int v19; // r1
  char v21; // r2
  int v22; // r1
  char v23; // r3
  int v24; // r3
  char v25; // r3
  int v26; // r3
  int v29; // [sp+20h] [bp-1014h] BYREF
  int v30; // [sp+24h] [bp-1010h]
  int v31; // [sp+28h] [bp-100Ch]
  int v32; // [sp+2Ch] [bp-1008h]
  char var1004[4112]; // [sp+30h] [bp-1004h] BYREF

  v7 = a5;
  v8 = a2;
  V_LOCK();
  LOWORD(v9) = -27176;
  HIWORD(v9) = (unsigned int)"d" >> 16;
  logfmt_raw(var1004, 0x1000u, 0, v9, "chip_setting_reset_bist_ltc");
  V_UNLOCK();
  LOWORD(v10) = 4576;
  HIWORD(v10) = (unsigned int)"all core" >> 16;
  zlog(g_zc, v10, 176, "chip_setting_reset_bist_ltc", 27, 242, 40, var1004);
  if ( !a4 )
  {
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    if ( !a2 )
      v8 = a5;
    LOBYTE(v31) = a2;
    LOBYTE(v11) = *(_BYTE *)(a1 + 356);
    if ( a2 )
    {
      BYTE1(v32) = *(_BYTE *)(a1 + 356);
      v8 = a5;
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  v11 = *(_DWORD *)(a1 + 356);
  v12 = v8 == 0;
  v13 = v8;
  v8 = 0;
  v29 = 0;
  v7 = v11 - 1;
  v30 = 0;
  v32 = 0;
  v31 = (unsigned __int8)v13;
  if ( v12 )
  {
    v8 = v13;
LABEL_13:
    v21 = *(_BYTE *)(*(_DWORD *)(a1 + 504) + a3);
    BYTE1(v32) = v11;
    BYTE1(v31) = v21;
    if ( v7 >= v8 )
      goto LABEL_4;
    usleep(0x2710u);
    v22 = *(_DWORD *)(a1 + 504);
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v23 = *(_BYTE *)(v22 + a3);
    BYTE1(v32) = *(_DWORD *)(a1 + 356);
    BYTE1(v31) = v23;
    goto LABEL_15;
  }
  BYTE1(v31) = 0;
  BYTE1(v32) = v11;
  if ( v7 >= 0 )
  {
LABEL_4:
    v14 = v8;
    while ( 1 )
    {
      v29 = 1024;
      HIWORD(v31) = 0;
      LOBYTE(v32) = v14;
      HIWORD(v32) = 0;
      v15 = (*(int (__fastcall **)(int, int *))(a1 + 280))(a1, &v29);
      if ( v15 )
        break;
      ++v14;
      usleep(0x3E8u);
      if ( v14 > v7 )
      {
        usleep(0x2710u);
        v29 = 0;
        v30 = 0;
        v32 = 0;
        v31 = (unsigned __int8)a2;
        if ( a2 )
        {
          BYTE1(v32) = *(_DWORD *)(a1 + 356);
          goto LABEL_21;
        }
        v25 = *(_BYTE *)(*(_DWORD *)(a1 + 504) + a3);
        BYTE1(v32) = *(_DWORD *)(a1 + 356);
        BYTE1(v31) = v25;
        if ( v8 > v7 )
          goto LABEL_15;
LABEL_21:
        while ( 1 )
        {
          v29 = 37888;
          HIWORD(v31) = 0;
          LOBYTE(v32) = v8;
          HIWORD(v32) = 0;
          v15 = (*(int (__fastcall **)(int, int *))(a1 + 280))(a1, &v29);
          if ( v15 )
            break;
          ++v8;
          usleep(0x3E8u);
          if ( v8 > v7 )
            goto LABEL_15;
        }
        V_LOCK();
        LOWORD(v24) = 4220;
        HIWORD(v24) = (unsigned int)"odminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c" >> 16;
        logfmt_raw(var1004, 0x1000u, 0, v24, "chip_setting_reset_bist_ltc", HIWORD(v31), v8);
        V_UNLOCK();
        v17 = 290;
        v18 = g_zc;
LABEL_8:
        LOWORD(v19) = 4576;
        HIWORD(v19) = (unsigned int)"all core" >> 16;
        zlog(v18, v19, 176, "chip_setting_reset_bist_ltc", 27, v17, 100, var1004);
        return v15;
      }
    }
    V_LOCK();
    LOWORD(v16) = 4220;
    HIWORD(v16) = (unsigned int)"odminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c" >> 16;
    logfmt_raw(var1004, 0x1000u, 0, v16, "chip_setting_reset_bist_ltc", HIWORD(v31), v14);
    V_UNLOCK();
    v17 = 267;
    v18 = g_zc;
    goto LABEL_8;
  }
  usleep(0x2710u);
  v26 = *(_DWORD *)(a1 + 356);
  v29 = 0;
  v30 = 0;
  v31 = 1;
  v32 = 0;
  BYTE1(v32) = v26;
LABEL_15:
  usleep(0x2710u);
  return 0;
}
