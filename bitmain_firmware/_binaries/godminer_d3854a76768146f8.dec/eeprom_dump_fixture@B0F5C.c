int __fastcall eeprom_dump_fixture(unsigned __int8 *a1)
{
  int v1; // r3
  const char *v2; // r11
  int v4; // r5
  char *v5; // r12
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  const char *v11; // r3
  int v12; // r3
  const char *v13; // r3
  const char *v14; // r3
  const char *v15; // r3
  const char *v16; // r3
  const char *v17; // r3
  const char *v18; // r3
  const char *v19; // r3
  int v20; // r3
  const char *v21; // r2
  const char *v22; // r3
  const char *v23; // r3
  int v24; // r3
  const char *v25; // r2
  int v26; // r3
  int v27; // r3
  int v28; // r3
  int v29; // r3
  const char *v30; // r2
  char *format; // [sp+18h] [bp-180Ch]
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v34[4100]; // [sp+820h] [bp-1004h] BYREF

  LOWORD(v1) = 24652;
  LOWORD(v2) = 24664;
  HIWORD(v2) = (unsigned int)&unk_157D58 >> 16;
  HIWORD(v1) = (unsigned int)&unk_157D4C >> 16;
  snprintf(s, 0x800u, v2, v1, *a1 & 0xF);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  LOWORD(v4) = 23676;
  V_UNLOCK();
  HIWORD(v4) = (unsigned int)"l" >> 16;
  LOWORD(v5) = 24768;
  HIWORD(v5) = (unsigned int)&unk_157DC0 >> 16;
  format = v5;
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 469, 100, v34);
  LOWORD(v6) = 24680;
  HIWORD(v6) = (unsigned int)&unk_157D68 >> 16;
  snprintf(s, 0x800u, v2, v6, *a1 >> 4);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 470, 100, v34);
  LOWORD(v7) = 24696;
  HIWORD(v7) = (unsigned int)&unk_157D78 >> 16;
  snprintf(s, 0x800u, v2, v7, a1[1]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 471, 100, v34);
  LOWORD(v8) = 24716;
  HIWORD(v8) = (unsigned int)&unk_157D8C >> 16;
  snprintf(s, 0x800u, v2, v8, a1[49]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 472, 100, v34);
  LOWORD(v9) = 24736;
  HIWORD(v9) = (unsigned int)&unk_157DA0 >> 16;
  snprintf(s, 0x800u, v2, v9, a1[50]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 473, 100, v34);
  LOWORD(v10) = 24752;
  HIWORD(v10) = (unsigned int)&unk_157DB0 >> 16;
  snprintf(s, 0x800u, format, v10, *(_DWORD *)(a1 + 35));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 474, 100, v34);
  LOWORD(v11) = 24780;
  HIWORD(v11) = (unsigned int)&unk_157DCC >> 16;
  snprintf(s, 0x800u, "%-30s : 0x%02x", v11, a1[2]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 475, 100, v34);
  LOWORD(v12) = 24816;
  HIWORD(v12) = (unsigned int)&unk_157DF0 >> 16;
  snprintf(s, 0x800u, format, v12, *(_DWORD *)(a1 + 3));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 477, 100, v34);
  LOWORD(v13) = -30812;
  HIWORD(v13) = (unsigned int)"n_num %d" >> 16;
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", v13, a1[31], a1[32]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 478, 100, v34);
  LOWORD(v14) = 24840;
  HIWORD(v14) = (unsigned int)&unk_157E08 >> 16;
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", v14, a1[33], a1[34]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 479, 100, v34);
  LOWORD(v15) = 24844;
  HIWORD(v15) = (unsigned int)&unk_157E0C >> 16;
  snprintf(s, 0x800u, "%-30s : %u", v15, *(unsigned __int16 *)(a1 + 39));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 480, 100, v34);
  LOWORD(v16) = 24876;
  HIWORD(v16) = (unsigned int)&unk_157E2C >> 16;
  snprintf(s, 0x800u, "%-30s : %u", v16, *(unsigned __int16 *)(a1 + 41));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 481, 100, v34);
  snprintf(s, 0x800u, "%-30s : %.2f", "nonce_response_rate", *(float *)(a1 + 43));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 482, 100, v34);
  LOWORD(v17) = 24928;
  HIWORD(v17) = (unsigned int)&unk_157E60 >> 16;
  snprintf(s, 0x800u, "%-30s : %u", v17, a1[47]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 483, 100, v34);
  LOWORD(v18) = 24948;
  HIWORD(v18) = (unsigned int)&unk_157E74 >> 16;
  snprintf(s, 0x800u, "%-30s : %u", v18, a1[48]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 484, 100, v34);
  LOWORD(v19) = 24968;
  HIWORD(v19) = (unsigned int)&unk_157E88 >> 16;
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", v19, a1[24] >> 7, a1[24] & 0x7F);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 485, 100, v34);
  LOWORD(v20) = 24980;
  LOWORD(v21) = 25000;
  HIWORD(v20) = (unsigned int)&unk_157E94 >> 16;
  HIWORD(v21) = (unsigned int)&unk_157EA8 >> 16;
  snprintf(
    s,
    0x800u,
    v21,
    v20,
    **(unsigned __int8 **)(a1 + 25),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 1),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 2),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 3));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 486, 100, v34);
  LOWORD(v22) = 25032;
  HIWORD(v22) = (unsigned int)&unk_157EC8 >> 16;
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", v22, a1[29] >> 7, a1[29] & 0x7F);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 487, 100, v34);
  LOWORD(v23) = 25044;
  HIWORD(v23) = (unsigned int)&unk_157ED4 >> 16;
  snprintf(s, 0x800u, "%-30s : 0x%02x", v23, a1[30]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 488, 100, v34);
  LOWORD(v24) = 25060;
  LOWORD(v25) = 25072;
  HIWORD(v24) = (unsigned int)&unk_157EE4 >> 16;
  HIWORD(v25) = (unsigned int)&unk_157EF0 >> 16;
  snprintf(s, 0x800u, v25, v24, a1[15]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 489, 100, v34);
  LOWORD(v26) = 25088;
  HIWORD(v26) = (unsigned int)&unk_157F00 >> 16;
  snprintf(s, 0x800u, format, v26, *((_DWORD *)a1 + 4));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 490, 100, v34);
  LOWORD(v27) = 25092;
  HIWORD(v27) = (unsigned int)&unk_157F04 >> 16;
  snprintf(s, 0x800u, format, v27, *(_DWORD *)(a1 + 7));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 491, 100, v34);
  LOWORD(v28) = 25104;
  HIWORD(v28) = (unsigned int)&unk_157F10 >> 16;
  snprintf(s, 0x800u, format, v28, *(_DWORD *)(a1 + 11));
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 492, 100, v34);
  LOWORD(v29) = 25120;
  LOWORD(v30) = 25136;
  HIWORD(v29) = (unsigned int)&unk_157F20 >> 16;
  HIWORD(v30) = (unsigned int)&unk_157F30 >> 16;
  snprintf(s, 0x800u, v30, v29, a1[55]);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(g_zc, v4, 170, "eeprom_dump_fixture", 19, 493, 100, v34);
}
