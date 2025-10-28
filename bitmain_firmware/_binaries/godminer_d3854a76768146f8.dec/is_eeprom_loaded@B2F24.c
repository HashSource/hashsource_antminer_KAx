int is_eeprom_loaded()
{
  int result; // r0
  int v1; // r1
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  char v3[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( !dword_18A790[0] || (result = *(unsigned __int8 *)(dword_18A790[0] + 80), !*(_BYTE *)(dword_18A790[0] + 80)) )
  {
    snprintf(s, 0x800u, "%s: g_eeprom_data is not ready", "is_eeprom_loaded");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v1) = 23676;
    HIWORD(v1) = (unsigned int)"l" >> 16;
    zlog(g_zc, v1, 170, "is_eeprom_loaded", 16, 1121, 20, v3);
    return 0;
  }
  return result;
}
