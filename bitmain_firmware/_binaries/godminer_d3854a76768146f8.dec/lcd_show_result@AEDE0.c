int __fastcall lcd_show_result(char a1, int a2, unsigned int a3)
{
  int v6; // r0
  int v7; // r4
  const char *v9; // r2
  int v10; // r1
  int *v11; // lr
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // lr
  int v17; // r1
  _DWORD s[4]; // [sp+10h] [bp-1804h] BYREF
  __int16 v19; // [sp+20h] [bp-17F4h]
  char v20; // [sp+22h] [bp-17F2h]
  char v21[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_18A758) )
  {
    LOWORD(v11) = 19512;
    HIWORD(v11) = (unsigned int)"en power_version = 0x%x" >> 16;
    v12 = *v11;
    v13 = v11[1];
    v14 = v11[2];
    v15 = v11[3];
    v7 = -4;
    v16 = v11[4];
    s[0] = v12;
    s[1] = v13;
    s[2] = v14;
    s[3] = v15;
    v19 = v16;
    v20 = BYTE2(v16);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v17) = 22124;
    HIWORD(v17) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
    zlog(g_zc, v17, 170, "lcd_show_result", 15, 470, 100, v21);
  }
  else
  {
    v6 = dword_172CF4;
    if ( dword_172CF4 < 0 )
    {
      dword_172CF4 = lcd_init((int)lcd_path);
      lcd_clear(dword_172CF4);
      v6 = dword_172CF4;
    }
    if ( v6 <= 0 )
    {
      LOWORD(v9) = 22528;
      HIWORD(v9) = (unsigned int)"8x\n" >> 16;
      snprintf((char *)s, 0x800u, v9, lcd_path);
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v10) = 22124;
      HIWORD(v10) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
      v7 = -1;
      zlog(g_zc, v10, 170, "lcd_show_result", 15, 486, 100, v21);
    }
    else
    {
      v7 = lcd_write(v6, a1, a2, a3);
    }
    pthread_mutex_unlock(&stru_18A758);
  }
  return v7;
}
