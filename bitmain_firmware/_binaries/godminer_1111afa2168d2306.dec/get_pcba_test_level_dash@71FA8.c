int __fastcall get_pcba_test_level_dash(_DWORD *a1, _DWORD *a2)
{
  int v2; // r5
  int (**v6)(); // r0
  int v7; // r0
  unsigned __int16 *v8; // r1
  int v9; // r2
  int v10; // r12
  int v11; // lr
  unsigned __int16 *i; // r3
  int v13; // r3
  int j; // r2
  int v15; // r3
  char *v16; // r1
  int v17; // r2
  char *v18; // r5
  int v19; // r1
  char *v20; // r1
  const char *v21; // r2
  char *v22; // r1
  int v23; // r1
  int v24; // [sp+48h] [bp-1068h] BYREF
  __int16 v25; // [sp+4Ch] [bp-1064h]
  _DWORD v26[7]; // [sp+50h] [bp-1060h] BYREF
  int v27; // [sp+6Ch] [bp-1044h]
  _DWORD v28[8]; // [sp+70h] [bp-1040h] BYREF
  _DWORD v29[7]; // [sp+90h] [bp-1020h] BYREF
  int v30; // [sp+ACh] [bp-1004h]
  char v31[4096]; // [sp+B0h] [bp-1000h] BYREF

  v2 = a1[251];
  v25 = 0;
  v24 = 0;
  if ( v2 )
  {
LABEL_2:
    *a2 = v2;
    return 0;
  }
  v6 = dev_ctrl((int)a1);
  v7 = ((int (__fastcall *)(_DWORD, int, int, int *))v6[26])(a1[62], 52, 393216, &v24);
  if ( !v7 )
  {
    v8 = (unsigned __int16 *)&unk_16B1D0;
    v9 = 700;
    v10 = (unsigned __int16)v24;
    v11 = HIWORD(v24);
    for ( i = (unsigned __int16 *)&unk_16B1D0; ; v9 = i[2] )
    {
      if ( (unsigned __int16)v24 == v9
        && i[3] == HIWORD(v24)
        && *((unsigned __int8 *)i + 8) == (unsigned __int8)v25
        && *((unsigned __int8 *)i + 9) == HIBYTE(v25) )
      {
        v13 = *(_DWORD *)&aGlobalIdxInitD_1[10 * v7 + 940];
        a1[251] = v13;
        goto LABEL_13;
      }
      ++v7;
      i += 5;
      if ( v7 == 5 )
        break;
    }
    v13 = a1[251];
LABEL_13:
    if ( !v13 )
    {
      for ( j = 700; v10 != j || v8[3] != v11; j = v8[2] )
      {
        ++v13;
        v8 += 5;
        if ( v13 == 5 )
          goto LABEL_20;
      }
      v15 = *(_DWORD *)&aGlobalIdxInitD_1[10 * v13 + 940];
      a1[251] = v15;
      if ( v15 )
        goto LABEL_21;
LABEL_20:
      a1[251] = 5;
    }
LABEL_21:
    V_LOCK();
    LOWORD(v16) = 27796;
    HIWORD(v16) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v29, v16, (int)a1[64]);
    LOWORD(v17) = -19064;
    HIWORD(v17) = (unsigned int)"ware_reset_DCR_1727" >> 16;
    v18 = &aGlobalIdxInitD_1[10 * a1[251] - 10];
    logfmt_raw(
      v31,
      0x1000u,
      0,
      v30,
      v29[0],
      v29[1],
      v29[2],
      v29[3],
      v29[4],
      v29[5],
      v29[6],
      v30,
      v17,
      (unsigned __int16)v24,
      HIWORD(v24),
      (unsigned __int8)v18[948],
      (unsigned __int8)v18[949]);
    V_UNLOCK();
    LOWORD(v19) = -19376;
    HIWORD(v19) = (unsigned int)": %02x%02x%02x%02x chipid:%d coreid:%d" >> 16;
    zlog(g_zc, v19, 173, "get_pcba_test_level_dash", 24, 1049, 40, v31);
    v2 = a1[251];
    goto LABEL_2;
  }
  *a2 = -1;
  V_LOCK();
  LOWORD(v20) = 27796;
  HIWORD(v20) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v26, v20, (int)a1[64]);
  LOWORD(v21) = -19096;
  LOWORD(v22) = 31628;
  HIWORD(v21) = (unsigned int)"_reset_DCR_1727" >> 16;
  HIWORD(v22) = (unsigned int)"pwm value error!" >> 16;
  V_STR(v28, v22, v21);
  logfmt_raw(
    v31,
    0x1000u,
    0,
    v27,
    v26[0],
    v26[1],
    v26[2],
    v26[3],
    v26[4],
    v26[5],
    v26[6],
    v27,
    v28[0],
    v28[1],
    v28[2],
    v28[3],
    v28[4],
    v28[5],
    v28[6],
    v28[7],
    "pic info lost");
  V_UNLOCK();
  LOWORD(v23) = -19376;
  HIWORD(v23) = (unsigned int)": %02x%02x%02x%02x chipid:%d coreid:%d" >> 16;
  zlog(g_zc, v23, 173, "get_pcba_test_level_dash", 24, 1027, 120, v31);
  return 15;
}
