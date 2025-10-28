int __fastcall high_speed_tx_check(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r4
  int v5; // r1
  int i; // r4
  unsigned __int8 v7; // r1
  int v8; // r9
  _DWORD *v9; // r5
  int *v10; // r12
  int *v11; // r4
  int v12; // r0
  int v13; // r1
  int *v14; // lr
  int v15; // r2
  int v16; // r3
  int v18; // r8
  int v19; // r7
  char *v20; // r6
  char *v21; // r5
  int v22; // t1
  const char *v23; // r1
  unsigned int v24; // r3
  char *v25; // r0
  int v26; // r2
  bool v27; // cc
  int v28; // r3
  int v29; // r1
  int v30; // r3
  int v31; // r1
  int v32; // [sp+4h] [bp-1128h]
  int v33; // [sp+20h] [bp-110Ch]
  unsigned int v34; // [sp+2Ch] [bp-1100h]
  int v36; // [sp+3Ch] [bp-10F0h] BYREF
  _DWORD v37[7]; // [sp+40h] [bp-10ECh] BYREF
  int v38; // [sp+5Ch] [bp-10D0h]
  char v39; // [sp+63h] [bp-10C9h] BYREF
  int v40; // [sp+64h] [bp-10C8h] BYREF
  char v41; // [sp+A3h] [bp-1089h] BYREF
  _BYTE v42[132]; // [sp+A4h] [bp-1088h] BYREF
  _DWORD v43[2]; // [sp+128h] [bp-1004h] BYREF
  int v44; // [sp+130h] [bp-FFCh]
  int v45; // [sp+134h] [bp-FF8h]

  V_LOCK();
  LOWORD(v2) = 588;
  HIWORD(v2) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v37, v2, *(int *)(a1 + 232));
  LOWORD(v3) = -11816;
  HIWORD(v3) = (unsigned int)"Setting_read_sensor_temp_remote_on_pic_HNS_2130" >> 16;
  v33 = v3;
  v4 = 0;
  logfmt_raw(
    (char *)v43,
    0x1000u,
    0,
    v38,
    v37[0],
    v37[1],
    v37[2],
    v37[3],
    v37[4],
    v37[5],
    v37[6],
    v38,
    v33,
    "high_speed_tx_check");
  V_UNLOCK();
  LOWORD(v5) = -12308;
  HIWORD(v5) = (unsigned int)"0" >> 16;
  zlog(g_zc, v5, 171, "high_speed_tx_check", 19, 321, 60, v43);
  do
  {
    sub_70158(a1, v4, 19, v4);
    ++v4;
    usleep(0x2710u);
  }
  while ( v4 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v7 = i;
    sub_70158(a1, v7, 12, 3);
  }
  v8 = 0;
  memset(v42, 0, 0x81u);
  do
  {
    v44 = 0;
    v36 = 0;
    v43[0] = 0;
    v43[1] = 0;
    v45 = 0;
    BYTE1(v44) = v8;
    v9 = malloc(0x4Cu);
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
    (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *, int, int, _DWORD))(a1 + 272))(
      a1,
      v43,
      1,
      v9,
      &v36,
      v32,
      2000,
      0);
    v10 = (_DWORD *)((char *)v9 + 10);
    v11 = &v40;
    do
    {
      v12 = *v10;
      v10 += 4;
      v13 = *(v10 - 3);
      v14 = v11;
      v15 = *(v10 - 2);
      v11 += 4;
      v16 = *(v10 - 1);
      *v14 = v12;
      v14[1] = v13;
      v14[2] = v15;
      v14[3] = v16;
    }
    while ( v10 != (_DWORD *)((char *)v9 + 74) );
    free(v9);
    if ( v36 )
    {
      LOWORD(v18) = -11728;
      LOWORD(v19) = -12308;
      v20 = &v39;
      v21 = v42;
      v34 = 0;
      do
      {
        V_LOCK();
        v22 = (unsigned __int8)*++v20;
        HIWORD(v18) = (unsigned int)"rlboard_HNS_2130" >> 16;
        logfmt_raw((char *)v43, 0x1000u, 0, v18, v8, v22);
        V_UNLOCK();
        HIWORD(v19) = (unsigned int)"0" >> 16;
        zlog(g_zc, v19, 171, "high_speed_tx_check", 19, 379, 20, v43);
        LOWORD(v23) = -11708;
        v24 = (unsigned __int8)(v22 - 1);
        v25 = v21;
        v26 = v22;
        v27 = v24 > 0xFD;
        if ( v24 > 0xFD )
          v24 = v34;
        v21 += 2;
        if ( v27 )
          v34 = ++v24;
        HIWORD(v23) = (unsigned int)"ChipSetting_read_sensor_temp_local_on_ctrlboard_HNS_2130" >> 16;
        sprintf(v25, v23, v26, v24);
      }
      while ( v20 != &v41 );
      V_LOCK();
      LOWORD(v28) = -11700;
      HIWORD(v28) = (unsigned int)"ing_read_sensor_temp_local_on_ctrlboard_HNS_2130" >> 16;
      logfmt_raw((char *)v43, 0x1000u, 0, v28, v34, v8, v42);
      V_UNLOCK();
      LOWORD(v29) = -12308;
      HIWORD(v29) = (unsigned int)"0" >> 16;
      zlog(g_zc, v29, 171, "high_speed_tx_check", 19, 385, 60, v43);
      if ( v34 == 64 )
      {
        V_LOCK();
        LOWORD(v30) = -11664;
        HIWORD(v30) = (unsigned int)"ard_HNS_2130" >> 16;
        logfmt_raw((char *)v43, 0x1000u, 0, v30);
        V_UNLOCK();
        LOWORD(v31) = -12308;
        HIWORD(v31) = (unsigned int)"0" >> 16;
        zlog(g_zc, v31, 171, "high_speed_tx_check", 19, 388, 60, v43);
        while ( 1 )
          ;
      }
    }
    ++v8;
  }
  while ( v8 != 8 );
  return 0;
}
