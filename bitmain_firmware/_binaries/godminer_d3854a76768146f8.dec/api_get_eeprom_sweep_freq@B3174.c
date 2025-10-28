int __fastcall api_get_eeprom_sweep_freq(int a1)
{
  const char *v1; // r2
  int v2; // r1
  int v3; // r3
  int v4; // r1
  int *v6; // r5
  int v7; // r3
  int v8; // r1
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v10[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_18A790[0] && *(_BYTE *)(dword_18A790[0] + 80) )
  {
    v6 = &dword_18A790[a1];
    V_LOCK();
    LOWORD(v7) = 25672;
    HIWORD(v7) = (unsigned int)&unk_158148 >> 16;
    logfmt_raw(v10, 0x1000u, 0, v7, *(unsigned __int16 *)(*(_DWORD *)(dword_18A790[0] + 4 * v6[2]) + 191));
    V_UNLOCK();
    LOWORD(v8) = 23676;
    HIWORD(v8) = (unsigned int)"l" >> 16;
    zlog(g_zc, v8, 170, "api_get_eeprom_sweep_freq", 25, 1270, 20, v10);
    return *(__int16 *)(*(_DWORD *)(dword_18A790[0] + 4 * v6[2]) + 191);
  }
  else
  {
    LOWORD(v1) = 24252;
    HIWORD(v1) = (unsigned int)"he master address to %d" >> 16;
    snprintf(s, 0x800u, v1, "api_get_eeprom_sweep_freq");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v2) = 23676;
    HIWORD(v2) = (unsigned int)"l" >> 16;
    zlog(g_zc, v2, 170, "api_get_eeprom_sweep_freq", 25, 1265, 20, v10);
    V_LOCK();
    LOWORD(v3) = 25644;
    HIWORD(v3) = (unsigned int)&unk_15812C >> 16;
    logfmt_raw(v10, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v4) = 23676;
    HIWORD(v4) = (unsigned int)"l" >> 16;
    zlog(g_zc, v4, 170, "api_get_eeprom_sweep_freq", 25, 1266, 60, v10);
    return 0;
  }
}
