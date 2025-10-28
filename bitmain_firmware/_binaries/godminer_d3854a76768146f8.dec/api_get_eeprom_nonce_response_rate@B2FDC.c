int __fastcall api_get_eeprom_nonce_response_rate(int a1, _DWORD *a2)
{
  int *v2; // r3
  int v3; // r2
  int v4; // r3
  int result; // r0
  const char *v6; // r2
  int v7; // r1
  const char *v8; // r2
  int v9; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v11[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v2) = -22640;
  HIWORD(v2) = (unsigned int)&unk_18BC50 >> 16;
  v3 = *v2;
  v4 = v2[a1 + 2];
  if ( v3 && *(_BYTE *)(v3 + 80) )
  {
    if ( a2 )
    {
      result = 0;
      *a2 = *(_DWORD *)(*(_DWORD *)(v3 + 4 * v4) + 43);
    }
    else
    {
      LOWORD(v8) = 25588;
      HIWORD(v8) = (unsigned int)&unk_1580F4 >> 16;
      snprintf(s, 0x800u, v8, "api_get_eeprom_nonce_response_rate", v4);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v9) = 23676;
      HIWORD(v9) = (unsigned int)"l" >> 16;
      zlog(g_zc, v9, 170, "api_get_eeprom_nonce_response_rate", 34, 1249, 100, v11);
      return -2;
    }
  }
  else
  {
    LOWORD(v6) = 23632;
    HIWORD(v6) = (unsigned int)"" >> 16;
    snprintf(s, 0x800u, v6, "api_get_eeprom_nonce_response_rate", v4);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v7) = 23676;
    HIWORD(v7) = (unsigned int)"l" >> 16;
    zlog(g_zc, v7, 170, "api_get_eeprom_nonce_response_rate", 34, 1240, 100, v11);
    return -1;
  }
  return result;
}
