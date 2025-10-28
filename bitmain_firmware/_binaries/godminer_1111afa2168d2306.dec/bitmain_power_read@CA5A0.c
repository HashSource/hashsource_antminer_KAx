int __fastcall bitmain_power_read(__int16 a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r4
  const char *v7; // r9
  int v8; // r8
  const char *v9; // r10
  int v10; // r9
  int v11; // r6
  unsigned __int8 *v12; // r8
  int v13; // r4
  int v14; // t1
  const char *v16; // r2
  int v17; // r2
  int v18; // r1
  int *v19; // lr
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v27; // [sp+14h] [bp-1848h]
  int v28; // [sp+1Ch] [bp-1840h] BYREF
  char v29; // [sp+20h] [bp-183Ch]
  char v30; // [sp+21h] [bp-183Bh]
  __int16 v31; // [sp+22h] [bp-183Ah]
  unsigned __int8 v32[52]; // [sp+24h] [bp-1838h] BYREF
  _DWORD s[6]; // [sp+58h] [bp-1804h] BYREF
  __int16 v34; // [sp+70h] [bp-17ECh]
  char v35; // [sp+72h] [bp-17EAh]
  char v36[4100]; // [sp+858h] [bp-1004h] BYREF

  memset(v32, 0, 0x32u);
  v29 = a1;
  v31 = a1 + 12 + a3;
  v30 = a3;
  v28 = 101100117;
  if ( dword_1B4604 )
  {
    v27 = 0;
  }
  else
  {
    v27 = sub_C9384();
    if ( v27 < 0 )
    {
      LOWORD(v16) = 31052;
      HIWORD(v16) = (unsigned int)"rom list get error!" >> 16;
      snprintf((char *)s, 0x800u, v16, "bitmain_power_read");
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, s);
      V_UNLOCK();
      v17 = 896;
LABEL_12:
      LOWORD(v18) = 30700;
      HIWORD(v18) = (unsigned int)"sion < 0 will close power" >> 16;
      zlog(g_zc, v18, 173, "bitmain_power_read", 18, v17, 100, v36);
      return v27;
    }
  }
  v5 = sub_C89F8((void *)dword_1B4600, (unsigned __int8 *)&v28, 8u, v32, a3 + 7);
  LOBYTE(v6) = v5;
  if ( v5 )
  {
    LOWORD(v19) = 30992;
    HIWORD(v19) = (unsigned int)" protocal not support!" >> 16;
    v20 = *v19;
    v21 = v19[1];
    v22 = v19[2];
    v23 = v19[3];
    v19 += 4;
    v27 = -2147482880;
    s[0] = v20;
    s[1] = v21;
    s[2] = v22;
    s[3] = v23;
    v24 = v19[1];
    v25 = v19[2];
    s[4] = *v19;
    s[5] = v24;
    v34 = v25;
    v35 = BYTE2(v25);
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, s);
    V_UNLOCK();
    v17 = 906;
    goto LABEL_12;
  }
  LOWORD(v7) = 31396;
  LOWORD(v8) = 30700;
  do
  {
    HIWORD(v7) = (unsigned int)"s %d" >> 16;
    v6 = (unsigned __int8)(v6 + 1);
    snprintf((char *)s, 0x800u, v7);
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, s);
    V_UNLOCK();
    HIWORD(v8) = (unsigned int)"sion < 0 will close power" >> 16;
    zlog(g_zc, v8, 173, "bitmain_power_read", 18, 914, 100, v36);
  }
  while ( v6 <= a3 + 6 );
  if ( a3 )
  {
    LOWORD(v9) = 31424;
    LOWORD(v10) = 30700;
    v11 = a2 + (unsigned __int8)(a3 - 1);
    v12 = &v32[4];
    v13 = a2 - 1;
    do
    {
      v14 = *++v12;
      HIWORD(v9) = (unsigned int)", chain is %d,slave addr is %d" >> 16;
      *(_BYTE *)++v13 = v14;
      snprintf((char *)s, 0x800u, v9, v13 - a2, v14);
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, s);
      V_UNLOCK();
      HIWORD(v10) = (unsigned int)"sion < 0 will close power" >> 16;
      zlog(g_zc, v10, 173, "bitmain_power_read", 18, 919, 100, v36);
    }
    while ( v13 != v11 );
  }
  return v27;
}
