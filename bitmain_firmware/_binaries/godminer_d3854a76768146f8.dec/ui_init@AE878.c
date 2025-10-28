int ui_init()
{
  int v0; // r5
  int v2; // r1
  int v3; // r1
  int v4; // r0
  _DWORD *v5; // r0
  void *(*v6)(void *); // r2
  int *v7; // r12
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r12
  int v13; // r1
  _DWORD v14[4]; // [sp+10h] [bp-1800h] BYREF
  char v15; // [sp+20h] [bp-17F0h]
  char v16[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_18A788 )
    return 0;
  if ( gpio_init() )
  {
    LOWORD(v7) = 17960;
    HIWORD(v7) = (unsigned int)"encode Chip FT Program Version OOM" >> 16;
    v8 = *v7;
    v9 = v7[1];
    v10 = v7[2];
    v11 = v7[3];
    v0 = -1;
    v12 = v7[4];
    v14[0] = v8;
    v14[1] = v9;
    v14[2] = v10;
    v14[3] = v11;
    v15 = v12;
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, v14);
    V_UNLOCK();
    LOWORD(v13) = 22124;
    HIWORD(v13) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
    zlog(g_zc, v13, 170, "ui_init", 7, 152, 100, v16);
    return v0;
  }
  gpio_export(941);
  gpio_export(942);
  gpio_export(921);
  gpio_export(943);
  LOWORD(v2) = -7056;
  HIWORD(v2) = (unsigned int)&loc_AFBC8 >> 16;
  gpio_reg_callback(921, v2);
  LOWORD(v3) = -7056;
  HIWORD(v3) = (unsigned int)&loc_AFBC8 >> 16;
  gpio_reg_callback(943, v3);
  pthread_mutex_init(&stru_18A758, 0);
  LOWORD(v4) = -7716;
  HIWORD(v4) = (unsigned int)&loc_AF934 >> 16;
  off_18A774 = 0;
  dword_18A778 = 0;
  dword_18A77C = 0;
  dword_18A780 = 0;
  dword_18A784 = 0;
  v5 = new_c_map(v4, 0, 0);
  LOWORD(v6) = -7700;
  dword_18A770 = (int)v5;
  HIWORD(v6) = (unsigned int)&off_AF944 >> 16;
  dword_18A754[0] = 1;
  pthread_create((pthread_t *)&dword_18A78C, 0, v6, 0);
  dword_18A788 = 1;
  return 0;
}
