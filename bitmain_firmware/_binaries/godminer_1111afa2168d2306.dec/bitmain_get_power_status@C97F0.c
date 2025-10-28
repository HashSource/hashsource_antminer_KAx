int bitmain_get_power_status()
{
  int v0; // r5
  int *v1; // r12
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r1
  int *v8; // lr
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r1
  const char *v17; // r2
  int v18; // r1
  int v19; // [sp+10h] [bp-1814h] BYREF
  __int16 v20; // [sp+14h] [bp-1810h]
  int v21; // [sp+18h] [bp-180Ch] BYREF
  int v22; // [sp+1Ch] [bp-1808h]
  int s; // [sp+20h] [bp-1804h] BYREF
  int v24; // [sp+24h] [bp-1800h]
  int v25; // [sp+28h] [bp-17FCh]
  int v26; // [sp+2Ch] [bp-17F8h]
  int v27; // [sp+30h] [bp-17F4h]
  int v28; // [sp+34h] [bp-17F0h]
  __int16 v29; // [sp+38h] [bp-17ECh]
  char v30[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( dword_1B4604 || (v0 = sub_C9384(), v0 >= 0) )
  {
    v22 = 0;
    v21 = 0;
    v19 = 168077909;
    v20 = 14;
    if ( sub_C89F8((void *)dword_1B4600, (unsigned __int8 *)&v19, 6u, (unsigned __int8 *)&v21, 8u) )
    {
      LOWORD(v1) = 31264;
      HIWORD(v1) = (unsigned int)"root/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
      v2 = *v1;
      v3 = v1[1];
      v4 = v1[2];
      v5 = v1[3];
      v1 += 4;
      s = v2;
      v24 = v3;
      v25 = v4;
      v26 = v5;
      v6 = v1[1];
      v27 = *v1;
      v28 = v6;
      V_LOCK();
      logfmt_raw(v30, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v7) = 30700;
      HIWORD(v7) = (unsigned int)"sion < 0 will close power" >> 16;
      zlog(g_zc, v7, 173, "_bitmain_get_power_status", 25, 540, 100, v30);
      LOWORD(v8) = 31288;
      HIWORD(v8) = (unsigned int)"odminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
      v9 = *v8;
      v10 = v8[1];
      v11 = v8[2];
      v12 = v8[3];
      v8 += 4;
      s = v9;
      v24 = v10;
      v25 = v11;
      v26 = v12;
      v13 = v8[1];
      v14 = v8[2];
      v27 = *v8;
      v28 = v13;
      v29 = v14;
      V_LOCK();
      logfmt_raw(v30, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v15) = 30700;
      HIWORD(v15) = (unsigned int)"sion < 0 will close power" >> 16;
      zlog(g_zc, v15, 173, "bitmain_get_power_status", 24, 594, 100, v30);
      return -2147482880;
    }
    return (unsigned __int16)v22;
  }
  else
  {
    LOWORD(v17) = 31052;
    HIWORD(v17) = (unsigned int)"rom list get error!" >> 16;
    snprintf((char *)&s, 0x800u, v17, "bitmain_get_power_status");
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v18) = 30700;
    HIWORD(v18) = (unsigned int)"sion < 0 will close power" >> 16;
    zlog(g_zc, v18, 173, "bitmain_get_power_status", 24, 590, 100, v30);
  }
  return v0;
}
