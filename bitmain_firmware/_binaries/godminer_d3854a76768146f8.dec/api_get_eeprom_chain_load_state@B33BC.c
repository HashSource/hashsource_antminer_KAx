int __fastcall api_get_eeprom_chain_load_state(int a1)
{
  _DWORD *v1; // r3
  _DWORD *v2; // r0
  const char *v4; // r2
  int v5; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v7[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v1) = -22640;
  HIWORD(v1) = (unsigned int)&unk_18BC50 >> 16;
  v2 = &v1[a1];
  if ( *v1 )
    return *(unsigned __int8 *)(*v1 + v2[2] + 64);
  LOWORD(v4) = 23632;
  HIWORD(v4) = (unsigned int)"" >> 16;
  snprintf(s, 0x800u, v4, "api_get_eeprom_chain_load_state", v2[2]);
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v5) = 23676;
  HIWORD(v5) = (unsigned int)"l" >> 16;
  zlog(g_zc, v5, 170, "api_get_eeprom_chain_load_state", 31, 1329, 100, v7);
  return -1;
}
