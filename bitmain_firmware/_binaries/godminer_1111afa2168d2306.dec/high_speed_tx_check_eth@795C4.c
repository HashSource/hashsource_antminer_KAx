int __fastcall high_speed_tx_check_eth(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r4
  int v5; // r1
  int i; // r4
  unsigned __int8 v7; // r1
  int v8; // r11
  char *v9; // r5
  int v10; // r8
  int v11; // r7
  char *v12; // r6
  char *v13; // r5
  int v14; // t1
  const char *v15; // r1
  unsigned int v16; // r3
  char *v17; // r0
  int v18; // r2
  bool v19; // cc
  int v20; // r3
  int v21; // r1
  int v22; // r3
  int v23; // r1
  int v25; // [sp+4h] [bp-1148h]
  int v26; // [sp+20h] [bp-112Ch]
  unsigned int v27; // [sp+28h] [bp-1124h]
  int v28; // [sp+30h] [bp-111Ch]
  int *v30; // [sp+38h] [bp-1114h]
  int v31; // [sp+44h] [bp-1108h] BYREF
  _DWORD v32[6]; // [sp+48h] [bp-1104h] BYREF
  _DWORD v33[7]; // [sp+60h] [bp-10ECh] BYREF
  int v34; // [sp+7Ch] [bp-10D0h]
  char v35; // [sp+83h] [bp-10C9h] BYREF
  _BYTE dest[196]; // [sp+84h] [bp-10C8h] BYREF
  _DWORD v37[2]; // [sp+148h] [bp-1004h] BYREF
  int v38; // [sp+150h] [bp-FFCh]
  int v39; // [sp+154h] [bp-FF8h]

  V_LOCK();
  LOWORD(v2) = 27796;
  HIWORD(v2) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v33, v2, *(int *)(a1 + 256));
  LOWORD(v3) = -13668;
  HIWORD(v3) = (unsigned int)"ist0 final pattern %08x" >> 16;
  v26 = v3;
  v4 = 0;
  logfmt_raw(
    (char *)v37,
    0x1000u,
    0,
    v34,
    v33[0],
    v33[1],
    v33[2],
    v33[3],
    v33[4],
    v33[5],
    v33[6],
    v34,
    v26,
    "high_speed_tx_check_eth");
  V_UNLOCK();
  LOWORD(v5) = -13944;
  HIWORD(v5) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
  zlog(g_zc, v5, 171, "high_speed_tx_check_eth", 23, 329, 60, v37);
  do
  {
    sub_790B0(a1, v4, 19, v4);
    ++v4;
    usleep(0x2710u);
  }
  while ( v4 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v7 = i;
    sub_790B0(a1, v7, 12, 3);
  }
  v30 = v32;
  memset(&dest[64], 0, 0x81u);
  v32[0] = 0;
  v32[1] = 4;
  v32[2] = 7000000;
  v32[3] = 7000004;
  v32[4] = 14090220;
  v32[5] = 14090224;
  do
  {
    v8 = 0;
    v28 = *v30++;
    do
    {
      v31 = 0;
      v37[1] = v28;
      v38 = 1;
      v37[0] = 0;
      v39 = 0;
      BYTE1(v38) = v8;
      v9 = (char *)calloc(0x8Cu, 1u);
      (*(void (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 304))(
        a1,
        v37,
        1,
        v9,
        &v31,
        v25,
        2000,
        0);
      memcpy(dest, v9 + 10, 0x80u);
      free(v9);
      if ( v31 )
      {
        LOWORD(v10) = -13660;
        LOWORD(v11) = -13944;
        v12 = &v35;
        v13 = &dest[64];
        v27 = 0;
        do
        {
          V_LOCK();
          v14 = (unsigned __int8)*++v12;
          HIWORD(v10) = (unsigned int)"al pattern %08x" >> 16;
          logfmt_raw((char *)v37, 0x1000u, 0, v10, v8, v14);
          V_UNLOCK();
          HIWORD(v11) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
          zlog(g_zc, v11, 171, "high_speed_tx_check_eth", 23, 387, 20, v37);
          LOWORD(v15) = 19788;
          v16 = (unsigned __int8)(v14 - 1);
          v17 = v13;
          v18 = v14;
          v19 = v16 > 0xFD;
          if ( v16 > 0xFD )
            v16 = v27;
          v13 += 2;
          if ( v19 )
            v27 = ++v16;
          HIWORD(v15) = (unsigned int)"ual(%d, %d), fd %d" >> 16;
          sprintf(v17, v15, v18, v16);
        }
        while ( v12 != &dest[63] );
        V_LOCK();
        LOWORD(v20) = -13632;
        HIWORD(v20) = (unsigned int)" err cnt failed, resp_num: %d\n" >> 16;
        logfmt_raw((char *)v37, 0x1000u, 0, v20, v28, v8, &dest[64]);
        V_UNLOCK();
        LOWORD(v21) = -13944;
        HIWORD(v21) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
        zlog(g_zc, v21, 171, "high_speed_tx_check_eth", 23, 394, 60, v37);
        if ( v27 == 64 )
        {
          V_LOCK();
          LOWORD(v22) = -13588;
          HIWORD(v22) = (unsigned int)"re %02x membist0 err cnt: %08x" >> 16;
          logfmt_raw((char *)v37, 0x1000u, 0, v22);
          V_UNLOCK();
          LOWORD(v23) = -13944;
          HIWORD(v23) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
          zlog(g_zc, v23, 171, "high_speed_tx_check_eth", 23, 397, 60, v37);
          while ( 1 )
            ;
        }
      }
      ++v8;
    }
    while ( v8 != 8 );
  }
  while ( v30 != v33 );
  return 0;
}
