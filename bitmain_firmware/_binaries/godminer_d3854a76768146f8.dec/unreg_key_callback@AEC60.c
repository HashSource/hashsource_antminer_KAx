int __fastcall unreg_key_callback(int a1)
{
  int v2; // r0
  int *v3; // r3
  int v4; // t1
  int *v5; // lr
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int *v14; // lr
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // lr
  int v20; // r1
  int v22; // [sp+10h] [bp-1804h] BYREF
  int v23; // [sp+14h] [bp-1800h]
  int v24; // [sp+18h] [bp-17FCh]
  int v25; // [sp+1Ch] [bp-17F8h]
  int v26; // [sp+20h] [bp-17F4h]
  int v27; // [sp+24h] [bp-17F0h]
  int v28; // [sp+28h] [bp-17ECh]
  __int16 v29; // [sp+2Ch] [bp-17E8h]
  char v30; // [sp+2Eh] [bp-17E6h]
  char v31[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = pthread_mutex_lock(&stru_18A758);
  if ( v2 )
  {
    LOWORD(v14) = 19512;
    HIWORD(v14) = (unsigned int)"en power_version = 0x%x" >> 16;
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    v18 = v14[3];
    v19 = v14[4];
    v22 = v15;
    v23 = v16;
    v24 = v17;
    v25 = v18;
    LOWORD(v26) = v19;
    BYTE2(v26) = BYTE2(v19);
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, &v22);
    V_UNLOCK();
    LOWORD(v20) = 22124;
    HIWORD(v20) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
    zlog(g_zc, v20, 170, "unreg_key_callback", 18, 434, 100, v31);
    return -1;
  }
  else
  {
    v3 = (int *)&off_18A774;
    while ( 1 )
    {
      v4 = *v3++;
      if ( a1 == v4 )
        break;
      if ( ++v2 == 5 )
      {
        LOWORD(v5) = 22496;
        HIWORD(v5) = (unsigned int)"reset fpga" >> 16;
        v6 = *v5;
        v7 = v5[1];
        v8 = v5[2];
        v9 = v5[3];
        v5 += 4;
        v22 = v6;
        v23 = v7;
        v24 = v8;
        v25 = v9;
        v10 = v5[1];
        v11 = v5[2];
        v12 = v5[3];
        v26 = *v5;
        v27 = v10;
        v28 = v11;
        v29 = v12;
        v30 = BYTE2(v12);
        V_LOCK();
        logfmt_raw(v31, 0x1000u, 0, &v22);
        V_UNLOCK();
        LOWORD(v13) = 22124;
        HIWORD(v13) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
        zlog(g_zc, v13, 170, "unreg_key_callback", 18, 448, 80, v31);
        goto LABEL_7;
      }
    }
    dword_18A754[v2 + 8] = 0;
LABEL_7:
    pthread_mutex_unlock(&stru_18A758);
    return 0;
  }
}
