int __fastcall eeprom_load_one_chain(unsigned int a1, int a2)
{
  const char *v4; // r10
  int v5; // r7
  int v6; // r9
  int v7; // r1
  const char *v8; // r2
  const char *v9; // r2
  int v10; // r1
  unsigned __int8 *v12; // [sp+14h] [bp-1A08h]
  unsigned __int8 s[256]; // [sp+18h] [bp-1A04h] BYREF
  _WORD v14[128]; // [sp+118h] [bp-1904h] BYREF
  char v15[2040]; // [sp+218h] [bp-1804h] BYREF
  char v16[4100]; // [sp+A18h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  LOWORD(v4) = 25188;
  memset(v14, 0, sizeof(v14));
  v5 = 3;
  v12 = *(unsigned __int8 **)(a2 + 4 * a1);
  while ( 1 )
  {
    v6 = eeprom_read(a1, 0, (int)s, 256);
    if ( v6 )
    {
      LOWORD(v9) = 25148;
      HIWORD(v9) = (unsigned int)&unk_157F3C >> 16;
      snprintf(v15, 0x800u, v9, a1);
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, v15);
      V_UNLOCK();
      LOWORD(v10) = 23676;
      HIWORD(v10) = (unsigned int)"l" >> 16;
      zlog(g_zc, v10, 170, "eeprom_load_one_chain", 21, 822, 100, v16);
      return v6;
    }
    if ( !eeprom_decode_fixture_info_0(s, v14) )
      break;
    HIWORD(v4) = (unsigned int)&unk_157F64 >> 16;
    snprintf(v15, 0x800u, v4, a1);
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, v15);
    V_UNLOCK();
    LOWORD(v7) = 23676;
    HIWORD(v7) = (unsigned int)"l" >> 16;
    zlog(g_zc, v7, 170, "eeprom_load_one_chain", 21, 836, 100, v16);
    usleep(0x7A120u);
    if ( !--v5 )
      goto LABEL_6;
  }
  if ( !sub_B0664(v14, (int)v12) || !sub_AF500(v14, v12) )
  {
LABEL_6:
    LOWORD(v8) = 25220;
    HIWORD(v8) = (unsigned int)&unk_157F84 >> 16;
    *(_BYTE *)(a2 + a1 + 64) = 0;
    snprintf(v15, 0x800u, v8, a1);
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, v15);
    V_UNLOCK();
    v6 = -1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_load_one_chain",
      21,
      853,
      100,
      v16);
    return v6;
  }
  *(_BYTE *)(a2 + a1 + 64) = 1;
  return v6;
}
