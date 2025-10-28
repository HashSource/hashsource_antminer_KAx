int lcd_clear_result()
{
  int *v1; // lr
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // lr
  int v7; // r1
  _DWORD v8[4]; // [sp+10h] [bp-1800h] BYREF
  __int16 v9; // [sp+20h] [bp-17F0h]
  char v10; // [sp+22h] [bp-17EEh]
  char v11[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18A758) )
  {
    LOWORD(v1) = 19512;
    HIWORD(v1) = (unsigned int)"en power_version = 0x%x" >> 16;
    v2 = *v1;
    v3 = v1[1];
    v4 = v1[2];
    v5 = v1[3];
    v6 = v1[4];
    v8[0] = v2;
    v8[1] = v3;
    v8[2] = v4;
    v8[3] = v5;
    v9 = v6;
    v10 = BYTE2(v6);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v8);
    V_UNLOCK();
    LOWORD(v7) = 22124;
    HIWORD(v7) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
    return zlog(g_zc, v7, 170, "lcd_clear_result", 16, 501, 100, v11);
  }
  else
  {
    if ( dword_172CF4 > 0 )
      lcd_clear(dword_172CF4);
    return pthread_mutex_unlock(&stru_18A758);
  }
}
