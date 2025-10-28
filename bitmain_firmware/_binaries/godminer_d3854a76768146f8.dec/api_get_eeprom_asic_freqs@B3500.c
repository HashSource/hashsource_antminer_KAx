int __fastcall api_get_eeprom_asic_freqs(int a1, void *dest, float *a3)
{
  int *v4; // r3
  int v5; // r1
  int v6; // lr
  int v7; // r0
  char *v8; // r3
  int v9; // r1
  float v10; // s13
  float v11; // s14
  int v12; // t1
  int v13; // r5
  const char *v15; // r2
  int v16; // r1
  const char *v17; // r2
  int v18; // r1
  char src[512]; // [sp+10h] [bp-1A00h] BYREF
  char s[2048]; // [sp+210h] [bp-1800h] BYREF
  char v21[4096]; // [sp+A10h] [bp-1000h] BYREF

  LOWORD(v4) = -22640;
  HIWORD(v4) = (unsigned int)&unk_18BC50 >> 16;
  v5 = *v4;
  v6 = v4[a1 + 2];
  if ( *v4 && *(_BYTE *)(v5 + 80) )
  {
    v7 = *(_DWORD *)(v5 + 4 * v6);
    v8 = src;
    v9 = v7 + 62;
    v10 = (float)*(unsigned __int16 *)(v7 + 41);
    v11 = (double)*(unsigned __int16 *)(v7 + 61) * 0.01;
    do
    {
      v12 = *(unsigned __int8 *)++v9;
      *(float *)v8 = v10 + (float)((float)v12 * v11);
      v8 += 4;
    }
    while ( s != v8 );
    v13 = (int)a3;
    if ( a3 )
      v13 = 1;
    if ( !dest )
      v13 = 0;
    if ( v13 )
    {
      *a3 = v11;
      memcpy(dest, src, 0x200u);
      return 0;
    }
    else
    {
      LOWORD(v17) = 25748;
      HIWORD(v17) = (unsigned int)&unk_158194 >> 16;
      snprintf(s, 0x800u, v17, "api_get_eeprom_asic_freqs", v6);
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v18) = 23676;
      HIWORD(v18) = (unsigned int)"l" >> 16;
      zlog(g_zc, v18, 170, "api_get_eeprom_asic_freqs", 25, 1390, 100, v21);
      return -2;
    }
  }
  else
  {
    LOWORD(v15) = 25700;
    HIWORD(v15) = (unsigned int)&unk_158164 >> 16;
    snprintf(s, 0x800u, v15, "api_get_eeprom_asic_freqs", v4[a1 + 2]);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v16) = 23676;
    HIWORD(v16) = (unsigned int)"l" >> 16;
    zlog(g_zc, v16, 170, "api_get_eeprom_asic_freqs", 25, 1371, 100, v21);
    return -1;
  }
}
