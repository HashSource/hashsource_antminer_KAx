int __fastcall gpio_write(int a1, int a2)
{
  const char *v4; // r2
  int v5; // r0
  int v6; // r5
  char *v7; // r1
  int *v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // lr
  int v15; // r1
  int *v16; // lr
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r1
  int *v27; // lr
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r1
  int v33; // r1
  char s[64]; // [sp+10h] [bp-1844h] BYREF
  int v35; // [sp+50h] [bp-1804h] BYREF
  int v36; // [sp+54h] [bp-1800h]
  int v37; // [sp+58h] [bp-17FCh]
  int v38; // [sp+5Ch] [bp-17F8h]
  int v39; // [sp+60h] [bp-17F4h]
  int v40; // [sp+64h] [bp-17F0h]
  int v41; // [sp+68h] [bp-17ECh]
  int v42; // [sp+6Ch] [bp-17E8h]
  int v43; // [sp+70h] [bp-17E4h]
  __int16 v44; // [sp+74h] [bp-17E0h]
  char v45; // [sp+76h] [bp-17DEh]
  char v46[4100]; // [sp+850h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_18A40C) )
  {
    LOWORD(v9) = 19512;
    HIWORD(v9) = (unsigned int)"en power_version = 0x%x" >> 16;
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    v13 = v9[3];
    v14 = v9[4];
    v35 = v10;
    v36 = v11;
    v37 = v12;
    v38 = v13;
    LOWORD(v39) = v14;
    BYTE2(v39) = BYTE2(v14);
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, &v35);
    V_UNLOCK();
    LOWORD(v15) = 19168;
    HIWORD(v15) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
    zlog(g_zc, v15, 172, "gpio_write", 10, 415, 100, v46);
    return -1;
  }
  else
  {
    LOWORD(v4) = 20020;
    HIWORD(v4) = (unsigned int)"e/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
    snprintf(s, 0x40u, v4, a1);
    v5 = open64(s);
    v6 = v5;
    if ( v5 < 0 )
    {
      LOWORD(v16) = 20192;
      HIWORD(v16) = (unsigned int)"or error, chain is %d,slave addr is %d" >> 16;
      v17 = *v16;
      v18 = v16[1];
      v19 = v16[2];
      v20 = v16[3];
      v16 += 4;
      v35 = v17;
      v36 = v18;
      v37 = v19;
      v38 = v20;
      v21 = *v16;
      v22 = v16[1];
      v23 = v16[2];
      v24 = v16[3];
      v16 += 4;
      v39 = v21;
      v40 = v22;
      v41 = v23;
      v42 = v24;
      v25 = v16[1];
      v43 = *v16;
      v44 = v25;
      v45 = BYTE2(v25);
      V_LOCK();
      logfmt_raw(v46, 0x1000u, 0, &v35);
      V_UNLOCK();
      LOWORD(v26) = 19168;
      HIWORD(v26) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
      zlog(g_zc, v26, 172, "gpio_write", 10, 423, 100, v46);
      pthread_mutex_unlock(&stru_18A40C);
      return -2;
    }
    else
    {
      if ( a2 )
        v7 = "1";
      else
        v7 = "01";
      if ( write(v5, v7, 1u) < 0 )
      {
        LOWORD(v27) = 20232;
        HIWORD(v27) = (unsigned int)" auto exec tsensor_open, but chain %d,slave_addr %d open failed" >> 16;
        v28 = *v27;
        v29 = v27[1];
        v30 = v27[2];
        v31 = v27[3];
        v27 += 4;
        v35 = v28;
        v36 = v29;
        v37 = v30;
        v38 = v31;
        v32 = v27[1];
        v39 = *v27;
        LOWORD(v40) = v32;
        BYTE2(v40) = BYTE2(v32);
        V_LOCK();
        logfmt_raw(v46, 0x1000u, 0, &v35);
        V_UNLOCK();
        LOWORD(v33) = 19168;
        HIWORD(v33) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
        zlog(g_zc, v33, 172, "gpio_write", 10, 429, 100, v46);
        close(v6);
        pthread_mutex_unlock(&stru_18A40C);
        return -3;
      }
      else
      {
        close(v6);
        pthread_mutex_unlock(&stru_18A40C);
        return 0;
      }
    }
  }
}
