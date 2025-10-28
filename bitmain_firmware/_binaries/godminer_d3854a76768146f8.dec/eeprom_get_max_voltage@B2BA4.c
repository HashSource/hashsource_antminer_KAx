int eeprom_get_max_voltage()
{
  int *v0; // r3
  int result; // r0
  int v2; // t1
  int v3; // r2
  int v4; // r1
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  char v6[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( dword_18A790[0] && *(_BYTE *)(dword_18A790[0] + 80) )
  {
    if ( dword_18A794 <= 0 )
    {
      return 0;
    }
    else
    {
      v0 = dword_18A798;
      result = 0;
      do
      {
        v2 = *v0++;
        v3 = *(unsigned __int16 *)(*(_DWORD *)(dword_18A790[0] + 4 * v2) + 39);
        if ( result < v3 )
          result = v3;
      }
      while ( v0 != &dword_18A798[dword_18A794] );
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: eeprom is not ready", "eeprom_get_max_voltage");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v4) = 23676;
    HIWORD(v4) = (unsigned int)"l" >> 16;
    zlog(g_zc, v4, 170, "eeprom_get_max_voltage", 22, 1054, 100, v6);
    return -1;
  }
  return result;
}
