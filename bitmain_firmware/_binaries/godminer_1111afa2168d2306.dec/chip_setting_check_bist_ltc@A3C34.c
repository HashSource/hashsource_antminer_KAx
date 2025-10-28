int __fastcall chip_setting_check_bist_ltc(int a1, int a2, int a3, int a4, int *a5)
{
  size_t v5; // r4
  size_t v6; // r11
  int *v8; // r6
  int v9; // r3
  int v11; // r3
  int v12; // r1
  int v13; // r3
  int v14; // lr
  char *v15; // r4
  char *v16; // r11
  int v17; // r9
  int v18; // r8
  char *v20; // r1
  int v21; // r1
  int v22; // r3
  int v23; // r11
  int *v24; // r9
  int v25; // r4
  int v27; // r3
  int v28; // [sp+4h] [bp-1080h]
  int v30; // [sp+34h] [bp-1050h]
  int v31; // [sp+34h] [bp-1050h]
  char *ptr; // [sp+3Ch] [bp-1048h]
  int v34; // [sp+44h] [bp-1040h]
  int v35; // [sp+4Ch] [bp-1038h] BYREF
  _DWORD v36[2]; // [sp+50h] [bp-1034h] BYREF
  int v37; // [sp+58h] [bp-102Ch]
  int v38; // [sp+5Ch] [bp-1028h]
  _DWORD v39[7]; // [sp+60h] [bp-1024h] BYREF
  int v40; // [sp+7Ch] [bp-1008h]
  char v41[4096]; // [sp+80h] [bp-1004h] BYREF

  v8 = a5;
  if ( a2 )
  {
    v9 = *(_DWORD *)(a1 + 352);
  }
  else
  {
    v9 = 1;
    v5 = 4;
    v6 = 12;
    v30 = 1;
  }
  if ( a2 )
  {
    v30 = v9;
    v6 = 3 * v9;
    v5 = 4 * v9;
  }
  if ( a2 )
    v6 *= 4;
  v35 = 0;
  V_LOCK();
  LOWORD(v11) = 4824;
  HIWORD(v11) = (unsigned int)"Setting_get_chip_status_RVN" >> 16;
  logfmt_raw(v41, 0x1000u, 0, v11, a2, a3, a4);
  V_UNLOCK();
  LOWORD(v12) = 4576;
  HIWORD(v12) = (unsigned int)"all core" >> 16;
  zlog(g_zc, v12, 176, "chip_setting_check_bist_ltc", 27, 188, 20, v41);
  ptr = (char *)calloc(v6, 1u);
  memset(a5, 0, v5);
  v13 = 0;
  v37 = 0;
  v36[0] = 0;
  v36[1] = 0;
  v38 = 0;
  if ( !a2 )
    v13 = *(_DWORD *)(a1 + 504);
  LOBYTE(v37) = a2;
  v14 = *(_DWORD *)(a1 + 356);
  if ( !a2 )
    LOBYTE(v13) = *(_BYTE *)(v13 + a3);
  BYTE1(v37) = v13;
  HIBYTE(v38) = a4;
  LOBYTE(v38) = a4;
  HIWORD(v37) = 6;
  BYTE1(v38) = v14;
  (*(void (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 316))(
    a1,
    v36,
    v30,
    ptr,
    &v35,
    v28,
    2000,
    0);
  v34 = v35;
  if ( v35 > 0 )
  {
    v15 = ptr;
    v16 = &ptr[12 * v35];
    do
    {
      v17 = 0;
      if ( *((_WORD *)v15 + 3) == 6 )
        v17 = v15[3] & 1;
      if ( a2 )
        a5[(unsigned int)(unsigned __int8)v15[4] / *(_DWORD *)(a1 + 444)] = v17;
      else
        *a5 = v17;
      v15 += 12;
    }
    while ( v15 != v16 );
  }
  if ( v30 <= v34 )
    goto LABEL_21;
  V_LOCK();
  LOWORD(v20) = 27796;
  HIWORD(v20) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v39, v20, *(int *)(a1 + 256));
  logfmt_raw(
    v41,
    0x1000u,
    0,
    v40,
    v39[0],
    v39[1],
    v39[2],
    v39[3],
    v39[4],
    v39[5],
    v39[6],
    v40,
    "detected core %d get check bist results less than expect num(%d < %d)",
    a4,
    v35,
    v30);
  V_UNLOCK();
  LOWORD(v21) = 4576;
  HIWORD(v21) = (unsigned int)"all core" >> 16;
  zlog(g_zc, v21, 176, "chip_setting_check_bist_ltc", 27, 223, 80, v41);
  if ( v30 <= 0 )
  {
LABEL_21:
    v18 = 0;
  }
  else
  {
    LOWORD(v22) = 4576;
    v18 = 0;
    LOWORD(v23) = 4948;
    HIWORD(v22) = (unsigned int)"all core" >> 16;
    v24 = &a5[v30];
    v25 = 0;
    v31 = v22;
    do
    {
      if ( !*v8++ )
      {
        V_LOCK();
        v27 = a3;
        v18 = -1;
        if ( a2 )
          v27 = v25;
        HIWORD(v23) = (unsigned int)"ChipSetting_get_addr_RVN" >> 16;
        logfmt_raw(v41, 0x1000u, 0, v23, v27, a4);
        V_UNLOCK();
        zlog(g_zc, v31, 176, "chip_setting_check_bist_ltc", 27, 228, 80, v41);
      }
      ++v25;
    }
    while ( v24 != v8 );
  }
  free(ptr);
  return v18;
}
