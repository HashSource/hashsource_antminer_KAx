int __fastcall gpio_read(int a1, _BYTE *a2)
{
  int v4; // r4
  const char *v5; // r2
  int v6; // r0
  int v7; // r5
  int *v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // lr
  int v15; // r1
  const char *v16; // r2
  int v17; // r1
  int *v18; // r12
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r1
  int buf; // [sp+1Ch] [bp-1848h] BYREF
  char s[64]; // [sp+20h] [bp-1844h] BYREF
  int v27; // [sp+60h] [bp-1804h] BYREF
  int v28; // [sp+64h] [bp-1800h]
  int v29; // [sp+68h] [bp-17FCh]
  int v30; // [sp+6Ch] [bp-17F8h]
  int v31; // [sp+70h] [bp-17F4h]
  __int16 v32; // [sp+74h] [bp-17F0h]
  char v33[4100]; // [sp+860h] [bp-1004h] BYREF

  buf = 0;
  v4 = pthread_mutex_lock(&stru_18A40C);
  if ( v4 )
  {
    LOWORD(v9) = 19512;
    HIWORD(v9) = (unsigned int)"en power_version = 0x%x" >> 16;
    v4 = -1;
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    v13 = v9[3];
    v14 = v9[4];
    v27 = v10;
    v28 = v11;
    v29 = v12;
    v30 = v13;
    LOWORD(v31) = v14;
    BYTE2(v31) = BYTE2(v14);
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, &v27);
    V_UNLOCK();
    LOWORD(v15) = 19168;
    HIWORD(v15) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
    zlog(g_zc, v15, 172, "gpio_read", 9, 372, 100, v33);
  }
  else
  {
    LOWORD(v5) = 20020;
    HIWORD(v5) = (unsigned int)"e/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
    snprintf(s, 0x40u, v5, a1);
    v6 = open64(s);
    v7 = v6;
    if ( v6 < 0 )
    {
      LOWORD(v16) = 20052;
      HIWORD(v16) = (unsigned int)"ease/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
      snprintf((char *)&v27, 0x800u, v16, a1);
      V_LOCK();
      logfmt_raw(v33, 0x1000u, 0, &v27);
      V_UNLOCK();
      LOWORD(v17) = 19168;
      HIWORD(v17) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
      v4 = -2;
      zlog(g_zc, v17, 172, "gpio_read", 9, 380, 100, v33);
      pthread_mutex_unlock(&stru_18A40C);
    }
    else if ( read(v6, &buf, 4u) < 0 )
    {
      LOWORD(v18) = 20096;
      HIWORD(v18) = (unsigned int)"end/device/hal/tsensor/bitmain_tsensor.c" >> 16;
      v19 = *v18;
      v20 = v18[1];
      v21 = v18[2];
      v22 = v18[3];
      v18 += 4;
      v27 = v19;
      v28 = v20;
      v29 = v21;
      v30 = v22;
      v23 = v18[1];
      v31 = *v18;
      v32 = v23;
      V_LOCK();
      logfmt_raw(v33, 0x1000u, 0, &v27);
      V_UNLOCK();
      LOWORD(v24) = 19168;
      HIWORD(v24) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
      v4 = -3;
      zlog(g_zc, v24, 172, "gpio_read", 9, 387, 100, v33);
      close(v7);
      pthread_mutex_unlock(&stru_18A40C);
    }
    else
    {
      close(v7);
      pthread_mutex_unlock(&stru_18A40C);
      *a2 = strtol((const char *)&buf, 0, 10);
    }
  }
  return v4;
}
