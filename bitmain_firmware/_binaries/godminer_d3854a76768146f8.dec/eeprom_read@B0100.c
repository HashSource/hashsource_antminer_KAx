int __fastcall eeprom_read(unsigned int a1, unsigned __int8 a2, int a3, int a4)
{
  unsigned int v5; // r6
  int v6; // r8
  int *v9; // r12
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r12
  int v15; // r1
  int v16; // r11
  int v17; // r6
  int v18; // r7
  void *v19; // r0
  int v20; // r3
  const char *v21; // r2
  int v22; // r11
  int v23; // r1
  const char *v25; // r2
  int v26; // r1
  const char *v27; // r2
  int v28; // r1
  unsigned __int8 v30; // [sp+1Fh] [bp-1805h] BYREF
  _DWORD s[4]; // [sp+20h] [bp-1804h] BYREF
  __int16 v32; // [sp+30h] [bp-17F4h]
  char v33[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    LOWORD(v27) = 24212;
    HIWORD(v27) = (unsigned int)"update the slave address to %d" >> 16;
    v22 = -2147483391;
    snprintf((char *)s, 0x800u, v27, "eeprom_read", a1);
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v28) = 23676;
    HIWORD(v28) = (unsigned int)"l" >> 16;
    zlog(g_zc, v28, 170, "eeprom_read", 11, 131, 100, v33);
    return v22;
  }
  LOWORD(v6) = -22640;
  v5 = 8 * a1;
  HIWORD(v6) = (unsigned int)&unk_18BC50 >> 16;
  if ( !*(_DWORD *)(v6 + 8 * a1 + 76) )
  {
    v22 = eeprom_open(a1);
    if ( v22 < 0 )
    {
      LOWORD(v25) = 24284;
      HIWORD(v25) = (unsigned int)"" >> 16;
      snprintf((char *)s, 0x800u, v25, "eeprom_read", a1);
      V_LOCK();
      logfmt_raw(v33, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v26) = 23676;
      HIWORD(v26) = (unsigned int)"l" >> 16;
      zlog(g_zc, v26, 170, "eeprom_read", 11, 136, 100, v33);
      return v22;
    }
  }
  LOWORD(v9) = 24392;
  HIWORD(v9) = (unsigned int)"fs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_lcd.c" >> 16;
  v10 = *v9;
  v11 = v9[1];
  v12 = v9[2];
  v13 = v9[3];
  v14 = v9[4];
  s[0] = v10;
  s[1] = v11;
  s[2] = v12;
  s[3] = v13;
  v32 = v14;
  V_LOCK();
  logfmt_raw(v33, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v15) = 23676;
  HIWORD(v15) = (unsigned int)"l" >> 16;
  zlog(g_zc, v15, 170, "eeprom_read", 11, 152, 20, v33);
  if ( a4 )
  {
    v16 = a3;
    v17 = v6 + v5;
    v18 = a3 + a4;
    while ( 1 )
    {
      v19 = *(void **)(v17 + 72);
      v20 = v16;
      v30 = a2;
      ++v16;
      ++a2;
      if ( iic_read_reg(v19, &v30, 1, v20, 1u) != 1 )
        break;
      if ( v16 == v18 )
        goto LABEL_11;
    }
    LOWORD(v21) = 24412;
    HIWORD(v21) = (unsigned int)"ease/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_lcd.c" >> 16;
    v22 = -2147483392;
    snprintf((char *)s, 0x800u, v21, a1, v30);
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v23) = 23676;
    HIWORD(v23) = (unsigned int)"l" >> 16;
    zlog(g_zc, v23, 170, "eeprom_read", 11, 158, 100, v33);
    return v22;
  }
LABEL_11:
  usleep((__useconds_t)&loc_7A120);
  return 0;
}
