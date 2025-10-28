int __fastcall eeprom_get_voltage(int a1, _DWORD *a2)
{
  int *v2; // r2
  int v3; // r2
  int v4; // r3
  int result; // r0
  const char *v6; // r2
  int v7; // r1
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r1
  _DWORD s[512]; // [sp+10h] [bp-1804h] BYREF
  char v16[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v2) = -22640;
  HIWORD(v2) = (unsigned int)&unk_18BC50 >> 16;
  v3 = *v2;
  if ( v3 && *(_BYTE *)(v3 + 80) )
  {
    v4 = *(unsigned __int16 *)(*(_DWORD *)(v3 + 4 * a1) + 39);
    if ( a2 )
    {
      result = 0;
      *a2 = v4;
    }
    else
    {
      LOWORD(v8) = 25484;
      HIWORD(v8) = (unsigned int)&unk_15808C >> 16;
      v9 = *v8;
      v10 = v8[1];
      v11 = v8[2];
      v12 = v8[3];
      v8 += 4;
      s[0] = v9;
      s[1] = v10;
      s[2] = v11;
      s[3] = v12;
      v13 = v8[1];
      s[4] = *v8;
      s[5] = v13;
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v14) = 23676;
      HIWORD(v14) = (unsigned int)"l" >> 16;
      zlog(g_zc, v14, 170, "eeprom_get_voltage", 18, 1044, 100, v16);
      return -2;
    }
  }
  else
  {
    LOWORD(v6) = 25448;
    HIWORD(v6) = (unsigned int)&unk_158068 >> 16;
    snprintf((char *)s, 0x800u, v6, a1);
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v7) = 23676;
    HIWORD(v7) = (unsigned int)"l" >> 16;
    zlog(g_zc, v7, 170, "eeprom_get_voltage", 18, 1033, 100, v16);
    return -1;
  }
  return result;
}
