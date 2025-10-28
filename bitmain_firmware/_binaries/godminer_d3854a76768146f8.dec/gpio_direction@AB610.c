int __fastcall gpio_direction(int a1, int a2)
{
  const char *v4; // r2
  int v5; // r0
  int v6; // r8
  bool v7; // zf
  size_t v8; // r2
  const char *v9; // r5
  const char *v10; // r2
  int v11; // r1
  int *v13; // lr
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // lr
  int v19; // r1
  const char *v20; // r2
  int v21; // r1
  const char *v22; // r2
  int v23; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  _DWORD v25[4]; // [sp+50h] [bp-1800h] BYREF
  __int16 v26; // [sp+60h] [bp-17F0h]
  char v27; // [sp+62h] [bp-17EEh]
  char v28[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18A40C) )
  {
    LOWORD(v13) = 19512;
    HIWORD(v13) = (unsigned int)"en power_version = 0x%x" >> 16;
    v14 = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v17 = v13[3];
    v18 = v13[4];
    v25[0] = v14;
    v25[1] = v15;
    v25[2] = v16;
    v25[3] = v17;
    v26 = v18;
    v27 = BYTE2(v18);
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, v25);
    V_UNLOCK();
    LOWORD(v19) = 19168;
    HIWORD(v19) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
    zlog(g_zc, v19, 172, "gpio_direction", 14, 327, 100, v28);
    return -1;
  }
  else
  {
    LOWORD(v4) = 19860;
    HIWORD(v4) = (unsigned int)"tsensor_open" >> 16;
    snprintf(s, 0x40u, v4, a1);
    v5 = open64(s);
    v6 = v5;
    if ( v5 < 0 )
    {
      LOWORD(v22) = 19896;
      HIWORD(v22) = (unsigned int)"sor_write" >> 16;
      snprintf((char *)v25, 0x800u, v22, a1);
      V_LOCK();
      logfmt_raw(v28, 0x1000u, 0, v25);
      V_UNLOCK();
      LOWORD(v23) = 19168;
      HIWORD(v23) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
      zlog(g_zc, v23, 172, "gpio_direction", 14, 334, 100, v28);
      pthread_mutex_unlock(&stru_18A40C);
      return -2;
    }
    else
    {
      v7 = a2 == 0;
      if ( a2 )
        v8 = 3;
      else
        v8 = 2;
      v9 = "out";
      if ( v7 )
        v9 = "in";
      if ( write(v5, v9, v8) < 0 )
      {
        LOWORD(v20) = 19944;
        HIWORD(v20) = (unsigned int)" input chain is %d" >> 16;
        snprintf((char *)v25, 0x800u, v20, a1, v9);
        V_LOCK();
        logfmt_raw(v28, 0x1000u, 0, v25);
        V_UNLOCK();
        LOWORD(v21) = 19168;
        HIWORD(v21) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
        zlog(g_zc, v21, 172, "gpio_direction", 14, 343, 100, v28);
        close(v6);
        pthread_mutex_unlock(&stru_18A40C);
        return -3;
      }
      else
      {
        LOWORD(v10) = 19984;
        HIWORD(v10) = (unsigned int)"enkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
        snprintf((char *)v25, 0x800u, v10, a1, v9);
        V_LOCK();
        logfmt_raw(v28, 0x1000u, 0, v25);
        V_UNLOCK();
        LOWORD(v11) = 19168;
        HIWORD(v11) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
        zlog(g_zc, v11, 172, "gpio_direction", 14, 350, 20, v28);
        close(v6);
        pthread_mutex_unlock(&stru_18A40C);
        return 0;
      }
    }
  }
}
