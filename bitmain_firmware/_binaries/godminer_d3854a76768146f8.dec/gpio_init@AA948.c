int gpio_init()
{
  int v0; // r0
  void *(*v1)(void *); // r2
  int *v3; // r3
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r3
  int v9; // r1
  _DWORD v10[3]; // [sp+10h] [bp-1800h] BYREF
  char v11; // [sp+1Ch] [bp-17F4h]
  char v12[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_18A3EC )
  {
    LOWORD(v3) = 19152;
    HIWORD(v3) = (unsigned int)"end/device/hal/power/bitmain_power_APW9.c" >> 16;
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    v10[0] = v4;
    v10[1] = v5;
    v10[2] = v6;
    v11 = v7;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v8) = 18980;
    LOWORD(v9) = 19168;
    HIWORD(v8) = (unsigned int)"crc, crc = 0x%04x, crc_read = 0x%04x" >> 16;
    HIWORD(v9) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
    zlog(g_zc, v9, 172, v8, 9, 98, 80, v12);
  }
  else
  {
    pthread_mutex_init(&stru_18A3F0, 0);
    LOWORD(v0) = -22216;
    HIWORD(v0) = (unsigned int)&loc_AC090 >> 16;
    dword_18A408 = (int)new_c_map(v0, 0, 0);
    pthread_mutex_init(&stru_18A40C, 0);
    LOWORD(v1) = -17656;
    HIWORD(v1) = (unsigned int)&loc_AD260 >> 16;
    dword_18A424 = 1;
    pthread_create((pthread_t *)&dword_18A428, 0, v1, 0);
    dword_18A3EC = 1;
  }
  return 0;
}
