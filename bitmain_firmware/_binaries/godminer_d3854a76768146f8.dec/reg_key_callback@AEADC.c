int __fastcall reg_key_callback(int a1)
{
  int v2; // r5
  _DWORD *v3; // r2
  int v4; // r3
  int *v6; // lr
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r1
  int *v15; // lr
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // lr
  int v21; // r1
  int v22; // [sp+10h] [bp-1800h] BYREF
  int v23; // [sp+14h] [bp-17FCh]
  int v24; // [sp+18h] [bp-17F8h]
  int v25; // [sp+1Ch] [bp-17F4h]
  int v26; // [sp+20h] [bp-17F0h]
  int v27; // [sp+24h] [bp-17ECh]
  __int16 v28; // [sp+28h] [bp-17E8h]
  char v29; // [sp+2Ah] [bp-17E6h]
  char v30[4096]; // [sp+810h] [bp-1000h] BYREF

  v2 = pthread_mutex_lock(&stru_18A758);
  if ( v2 )
  {
    LOWORD(v15) = 19512;
    HIWORD(v15) = (unsigned int)"en power_version = 0x%x" >> 16;
    v16 = *v15;
    v17 = v15[1];
    v18 = v15[2];
    v19 = v15[3];
    v2 = -1;
    v20 = v15[4];
    v22 = v16;
    v23 = v17;
    v24 = v18;
    v25 = v19;
    LOWORD(v26) = v20;
    BYTE2(v26) = BYTE2(v20);
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, &v22);
    V_UNLOCK();
    LOWORD(v21) = 22124;
    HIWORD(v21) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
    zlog(g_zc, v21, 170, "reg_key_callback", 16, 398, 100, v30);
  }
  else
  {
    v3 = &off_18A774;
    v4 = 0;
    while ( *v3++ )
    {
      if ( ++v4 == 5 )
      {
        LOWORD(v6) = 22468;
        HIWORD(v6) = (unsigned int)" %d, total chain num = %d" >> 16;
        v7 = *v6;
        v8 = v6[1];
        v9 = v6[2];
        v10 = v6[3];
        v6 += 4;
        v2 = -2;
        v22 = v7;
        v23 = v8;
        v24 = v9;
        v25 = v10;
        v11 = v6[1];
        v12 = v6[2];
        v26 = *v6;
        v27 = v11;
        v28 = v12;
        v29 = BYTE2(v12);
        V_LOCK();
        logfmt_raw(v30, 0x1000u, 0, &v22);
        V_UNLOCK();
        LOWORD(v13) = 22124;
        HIWORD(v13) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
        zlog(g_zc, v13, 170, "reg_key_callback", 16, 414, 100, v30);
        goto LABEL_7;
      }
    }
    dword_18A754[v4 + 8] = a1;
LABEL_7:
    pthread_mutex_unlock(&stru_18A758);
  }
  return v2;
}
