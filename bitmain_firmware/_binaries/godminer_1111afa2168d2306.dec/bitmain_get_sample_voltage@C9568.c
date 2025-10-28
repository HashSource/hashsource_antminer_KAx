int bitmain_get_sample_voltage()
{
  int result; // r0
  const char *v1; // r2
  int v2; // r1
  int *v3; // r12
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r12
  int v9; // r1
  int *v10; // r12
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r1
  int v18; // [sp+10h] [bp-1814h] BYREF
  __int16 v19; // [sp+14h] [bp-1810h]
  _DWORD v20[2]; // [sp+18h] [bp-180Ch] BYREF
  int s; // [sp+20h] [bp-1804h] BYREF
  int v22; // [sp+24h] [bp-1800h]
  int v23; // [sp+28h] [bp-17FCh]
  int v24; // [sp+2Ch] [bp-17F8h]
  int v25; // [sp+30h] [bp-17F4h]
  int v26; // [sp+34h] [bp-17F0h]
  int v27; // [sp+38h] [bp-17ECh]
  char v28[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( dword_1B4604 || sub_C9384() >= 0 )
  {
    v20[1] = 0;
    v20[0] = 0;
    v18 = 67414613;
    v19 = 8;
    result = sub_C89F8((void *)dword_1B4600, (unsigned __int8 *)&v18, 6u, (unsigned __int8 *)v20, 8u);
    if ( result )
    {
      LOWORD(v3) = 31216;
      HIWORD(v3) = (unsigned int)"orkspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
      v4 = *v3;
      v5 = v3[1];
      v6 = v3[2];
      v7 = v3[3];
      v8 = v3[4];
      s = v4;
      v22 = v5;
      v23 = v6;
      v24 = v7;
      v25 = v8;
      V_LOCK();
      logfmt_raw(v28, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v9) = 30700;
      HIWORD(v9) = (unsigned int)"sion < 0 will close power" >> 16;
      zlog(g_zc, v9, 173, "_bitmain_get_sample_N", 21, 468, 100, v28);
      LOWORD(v10) = 31236;
      HIWORD(v10) = (unsigned int)"3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
      v11 = *v10;
      v12 = v10[1];
      v13 = v10[2];
      v14 = v10[3];
      v10 += 4;
      s = v11;
      v22 = v12;
      v23 = v13;
      v24 = v14;
      v15 = v10[1];
      v16 = v10[2];
      v25 = *v10;
      v26 = v15;
      v27 = v16;
      V_LOCK();
      logfmt_raw(v28, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v17) = 30700;
      HIWORD(v17) = (unsigned int)"sion < 0 will close power" >> 16;
      return zlog(g_zc, v17, 173, "bitmain_get_sample_voltage", 26, 580, 100, v28);
    }
  }
  else
  {
    LOWORD(v1) = 31052;
    HIWORD(v1) = (unsigned int)"rom list get error!" >> 16;
    snprintf((char *)&s, 0x800u, v1, "bitmain_get_sample_voltage");
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v2) = 30700;
    HIWORD(v2) = (unsigned int)"sion < 0 will close power" >> 16;
    return zlog(g_zc, v2, 173, "bitmain_get_sample_voltage", 26, 576, 100, v28);
  }
  return result;
}
