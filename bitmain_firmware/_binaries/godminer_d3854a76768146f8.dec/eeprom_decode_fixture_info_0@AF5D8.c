int __fastcall eeprom_decode_fixture_info_0(unsigned __int8 *a1, _WORD *a2)
{
  int v4; // r0
  unsigned int v5; // r2
  unsigned int v6; // r6
  bool v7; // zf
  int v8; // r7
  const char *v10; // r2
  int v11; // r2
  int v12; // r1
  const char *v13; // r2
  unsigned int s[64]; // [sp+10h] [bp-1904h] BYREF
  char v15[2048]; // [sp+110h] [bp-1804h] BYREF
  char v16[4100]; // [sp+910h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v4 = a1[1];
  v5 = *a1;
  v6 = v4 - 2;
  if ( (unsigned __int8)(v4 - 2) > 0xFDu )
  {
    LOWORD(v13) = 23916;
    HIWORD(v13) = (unsigned int)"i2c uninited" >> 16;
    snprintf(v15, 0x800u, v13, a1[1], v6, a1[1]);
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, v15);
    V_UNLOCK();
    v11 = 279;
    goto LABEL_11;
  }
  v7 = v5 >> 4 == 1;
  if ( v5 >> 4 == 1 )
    v7 = (v5 & 0xF) == 1;
  v8 = !v7;
  if ( !v7 )
  {
    LOWORD(v10) = 24004;
    HIWORD(v10) = (unsigned int)"read1" >> 16;
    snprintf(v15, 0x800u, v10);
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, v15);
    V_UNLOCK();
    v11 = 285;
LABEL_11:
    LOWORD(v12) = 23676;
    HIWORD(v12) = (unsigned int)"l" >> 16;
    zlog(g_zc, v12, 170, "decode_eeprom_fixture_info", 26, v11, 100, v16);
    return -1;
  }
  memcpy(s, a1 + 2, v4 - 2);
  data_dec(s, v6, 1, 1);
  *a2 = *(_WORD *)a1;
  memcpy(a2 + 1, s, v6);
  return v8;
}
