int __fastcall eeprom_load_one_chain(unsigned int a1, int a2)
{
  int v4; // r5
  int v5; // r8
  int v6; // r7
  size_t v7; // r1
  int v8; // r3
  int v9; // r2
  bool v10; // zf
  _BOOL4 v11; // r0
  unsigned int v12; // r6
  int v13; // r8
  char *v14; // r7
  char v15; // r3
  int v16; // r3
  int *v17; // r6
  int v19; // r10
  int v20; // r8
  int v21; // lr
  int v22; // r12
  int v23; // r2
  _WORD *v24; // r8
  _DWORD *v25; // r8
  int v26; // r2
  int v27; // r1
  int v28; // r3
  bool v29; // cf
  _DWORD *v30; // r8
  int v31; // r1
  _DWORD *v32; // r8
  _WORD *v33; // r8
  float v34; // s12
  _DWORD *v35; // r0
  char v36; // r2
  int v37; // r1
  int v38; // r0
  int v39; // r3
  char *v40; // r0
  char *v41; // r8
  _DWORD *v42; // r2
  int v43; // r1
  int v44; // r0
  int v45; // r2
  _WORD s[128]; // [sp+18h] [bp-1B04h] BYREF
  _DWORD v48[64]; // [sp+118h] [bp-1A04h] BYREF
  unsigned int dest[64]; // [sp+218h] [bp-1904h] BYREF
  char v50[2040]; // [sp+318h] [bp-1804h] BYREF
  char v51[4100]; // [sp+B18h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v48, 0, sizeof(v48));
  v4 = *(_DWORD *)(a2 + 4 * a1);
  v5 = 3;
  while ( 1 )
  {
    v6 = eeprom_read(a1, 0, (int)s, 256);
    if ( v6 )
    {
      snprintf(v50, 0x800u, "Read configuration fail for chain %d.\n", a1);
      V_LOCK();
      logfmt_raw(v51, 0x1000u, 0, v50);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_load_one_chain",
        21,
        567,
        100,
        v51);
      return v6;
    }
    memset(dest, 0, sizeof(dest));
    v7 = HIBYTE(s[0]) - 2;
    v8 = s[0] & 0xF;
    v9 = LOBYTE(s[0]) >> 4;
    if ( (unsigned __int8)(HIBYTE(s[0]) - 2) > 0xFDu )
    {
      snprintf(
        v50,
        0x800u,
        "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
        HIBYTE(s[0]),
        v7,
        HIBYTE(s[0]));
      V_LOCK();
      logfmt_raw(v51, 0x1000u, 0, v50);
      V_UNLOCK();
      v44 = g_zc;
      v45 = 265;
      goto LABEL_42;
    }
    v10 = v9 == 1;
    if ( v9 == 1 )
      v10 = v8 == 1;
    v11 = !v10;
    if ( v10 )
      break;
    snprintf(
      v50,
      0x800u,
      "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
      v8,
      v9);
    V_LOCK();
    logfmt_raw(v51, 0x1000u, 0, v50);
    V_UNLOCK();
    v44 = g_zc;
    v45 = 271;
LABEL_42:
    zlog(
      v44,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "decode_eeprom_fixture_info",
      26,
      v45,
      100,
      v51);
    snprintf(v50, 0x800u, "Data decode fail for chain %d.\n", a1);
    V_LOCK();
    logfmt_raw(v51, 0x1000u, 0, v50);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_load_one_chain",
      21,
      581,
      100,
      v51);
    usleep(0x7A120u);
    if ( !--v5 )
    {
      v17 = &g_zc;
      v14 = v50;
      goto LABEL_13;
    }
  }
  v12 = HIBYTE(s[0]) - 2;
  v13 = v11;
  memcpy(dest, &s[1], v7);
  data_dec(dest, v12, 1, 1);
  LOWORD(v48[0]) = s[0];
  v14 = (char *)(LOBYTE(s[0]) >> 4);
  memcpy((char *)v48 + 2, dest, v12);
  v15 = *(_BYTE *)v4 & 0xF | (16 * ((unsigned __int8)v14 & 0xF));
  *(_BYTE *)v4 = v15;
  *(_BYTE *)v4 = v15 & 0xF0 | v48[0] & 0xF;
  *(_BYTE *)(v4 + 1) = BYTE1(v48[0]);
  v16 = BYTE2(v48[0]);
  *(_BYTE *)(v4 + 2) = BYTE2(v48[0]);
  if ( v16 != 3 )
  {
    v14 = v50;
    v17 = &g_zc;
    strcpy(v50, "This FMT is not supported\n");
    V_LOCK();
    logfmt_raw(v51, 0x1000u, v13, v50);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "init_eeprom_fmt_info",
      20,
      359,
      100,
      v51);
LABEL_13:
    *(_BYTE *)(a2 + a1 + 64) = 0;
    snprintf(v14, 0x800u, "Data load fail for chain %d.\n", a1);
    V_LOCK();
    logfmt_raw(v51, 0x1000u, 0, v14);
    V_UNLOCK();
    zlog(
      *v17,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_load_one_chain",
      21,
      598,
      100,
      v51);
    return -1;
  }
  v19 = (int)calloc(0x12u, 1u);
  v20 = v19;
  *(_DWORD *)(v4 + 3) = v19;
  if ( v19 )
  {
    v19 = 1;
  }
  else
  {
    v14 = v50;
    strcpy(v50, "Decode SN OOM\n");
    V_LOCK();
    logfmt_raw(v51, 0x1000u, 0, v50);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_buf_to_layout",
      20,
      420,
      100,
      v51);
    v20 = *(_DWORD *)(v4 + 3);
  }
  v17 = *(int **)((char *)v48 + 3);
  v21 = *(_DWORD *)((char *)&v48[1] + 3);
  v22 = *(_DWORD *)((char *)&v48[2] + 3);
  v23 = *(_DWORD *)((char *)&v48[3] + 3);
  *(_DWORD *)v20 = *(_DWORD *)((char *)v48 + 3);
  *(_DWORD *)(v20 + 4) = v21;
  *(_DWORD *)(v20 + 8) = v22;
  *(_DWORD *)(v20 + 12) = v23;
  *(_BYTE *)(v20 + 16) = HIBYTE(v48[4]);
  v24 = calloc(3u, 1u);
  *(_DWORD *)(v4 + 7) = v24;
  if ( !v24 )
  {
    v14 = v50;
    v17 = &g_zc;
    v19 = 0;
    strcpy(v50, "Decode Chip Die OOM\n");
    V_LOCK();
    logfmt_raw(v51, 0x1000u, 0, v50);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_buf_to_layout",
      20,
      429,
      100,
      v51);
    v24 = *(_WORD **)(v4 + 7);
  }
  *v24 = v48[5];
  v25 = calloc(0xEu, 1u);
  *(_DWORD *)(v4 + 11) = v25;
  if ( !v25 )
  {
    v14 = v50;
    v17 = &g_zc;
    v19 = 0;
    strcpy(v50, "Decode Chip Marking OOM\n");
    V_LOCK();
    logfmt_raw(v51, 0x1000u, 0, v50);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_buf_to_layout",
      20,
      438,
      100,
      v51);
    v25 = *(_DWORD **)(v4 + 11);
  }
  v26 = *(_DWORD *)((char *)&v48[7] + 2);
  v27 = *(_DWORD *)((char *)&v48[6] + 2);
  *v25 = *(_DWORD *)((char *)&v48[5] + 2);
  v25[2] = v26;
  v25[1] = v27;
  *((_BYTE *)v25 + 12) = BYTE2(v48[8]);
  v28 = *(unsigned __int8 *)(v4 + 2) - 1;
  v29 = *(_BYTE *)(v4 + 2) != 1;
  *(_BYTE *)(v4 + 15) = HIBYTE(v48[8]);
  if ( v28 != 1 && v29 )
  {
    v30 = calloc(0xAu, 1u);
    *(_DWORD *)(v4 + 16) = v30;
    if ( !v30 )
    {
      v14 = v50;
      v17 = &g_zc;
      v19 = 0;
      strcpy(v50, "Decode Chip FT Program Version OOM\n");
      V_LOCK();
      logfmt_raw(v51, 0x1000u, 0, v50);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        464,
        100,
        v51);
      v30 = *(_DWORD **)(v4 + 16);
    }
    v31 = v48[10];
    *v30 = v48[9];
    v30[1] = v31;
    *((_BYTE *)v30 + 8) = v48[11];
  }
  else
  {
    memset(dest, 0, 16);
    v40 = (char *)calloc(0xFu, 1u);
    v41 = v40;
    *(_DWORD *)(v4 + 16) = v40;
    if ( !v40 )
    {
      v14 = v50;
      v19 = 0;
      strcpy(v50, "Decode Chip FT Program Version OOM\n");
      V_LOCK();
      logfmt_raw(v51, 0x1000u, 0, v50);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        453,
        100,
        v51);
      v41 = *(char **)(v4 + 16);
    }
    dest[0] = v48[9];
    dest[1] = v48[10];
    LOBYTE(dest[2]) = v48[11];
    v17 = (int *)HIBYTE(v48[9]);
    snprintf(v41, 0xFu, "F%dV%02dB%dC%d", LOBYTE(v48[9]), BYTE1(v48[9]), BYTE2(v48[9]), HIBYTE(v48[9]));
  }
  *(_BYTE *)(v4 + 24) = *(_BYTE *)(v4 + 24) & 0x80 | BYTE1(v48[19]) & 0x7F;
  *(_BYTE *)(v4 + 24) = *(_BYTE *)(v4 + 24) & 0x7F | (BYTE1(v48[19]) >> 7 << 7);
  v32 = calloc(5u, 1u);
  *(_DWORD *)(v4 + 25) = v32;
  if ( !v32 )
  {
    v14 = v50;
    v17 = &g_zc;
    v19 = 0;
    strcpy(v50, "Decode Chip FT Program Version OOM\n");
    V_LOCK();
    logfmt_raw(v51, 0x1000u, 0, v50);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_buf_to_layout",
      20,
      478,
      100,
      v51);
    v32 = *(_DWORD **)(v4 + 25);
  }
  *v32 = *(_DWORD *)((char *)&v48[19] + 2);
  *(_BYTE *)(v4 + 29) = *(_BYTE *)(v4 + 29) & 0x80 | BYTE2(v48[20]) & 0x7F;
  *(_BYTE *)(v4 + 29) = *(_BYTE *)(v4 + 29) & 0x7F | (BYTE2(v48[20]) >> 7 << 7);
  *(_BYTE *)(v4 + 30) = HIBYTE(v48[20]);
  *(_DWORD *)(v4 + 31) = v48[21];
  v33 = calloc(3u, 1u);
  *(_DWORD *)(v4 + 35) = v33;
  if ( !v33 )
  {
    v14 = v50;
    v17 = &g_zc;
    v19 = 0;
    strcpy(v50, "Decode Chip Technology OOM\n");
    V_LOCK();
    logfmt_raw(v51, 0x1000u, 0, v50);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_buf_to_layout",
      20,
      502,
      100,
      v51);
    v33 = *(_WORD **)(v4 + 35);
  }
  *v33 = v48[22];
  *(_WORD *)(v4 + 39) = __rev16(HIWORD(v48[22]));
  *(_WORD *)(v4 + 41) = __rev16(LOWORD(v48[23]));
  v34 = (double)((unsigned __int16)(HIWORD(v48[23]) << 8) | HIBYTE(HIWORD(v48[23]))) / 100.0;
  *(float *)(v4 + 43) = v34;
  *(_DWORD *)(v4 + 47) = v48[24];
  v35 = calloc(9u, 1u);
  *(_DWORD *)(v4 + 51) = v35;
  if ( !v35 )
  {
    v14 = v50;
    v17 = &g_zc;
    strcpy(v50, "Decode miner_type OOM\n");
    V_LOCK();
    logfmt_raw(v51, 0x1000u, 0, v50);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_buf_to_layout",
      20,
      538,
      100,
      v51);
    v42 = *(_DWORD **)(v4 + 51);
    v43 = v48[26];
    *v42 = v48[25];
    v42[1] = v43;
    *(_BYTE *)(v4 + 59) = BYTE1(v48[28]);
    goto LABEL_13;
  }
  v36 = BYTE1(v48[28]);
  v37 = v48[26];
  if ( !v19 )
  {
    v17 = &g_zc;
    v14 = v50;
  }
  *v35 = v48[25];
  v35[1] = v37;
  *(_BYTE *)(v4 + 59) = v36;
  if ( !v19 )
    goto LABEL_13;
  v38 = BM_CRC5(v48, 8 * (*(unsigned __int8 *)(v4 + 1) - 1));
  v39 = *(unsigned __int8 *)(v4 + 59);
  if ( v38 != v39 )
  {
    v14 = v50;
    v17 = &g_zc;
    snprintf(
      v50,
      0x800u,
      "Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n",
      v39,
      *(unsigned __int8 *)(v4 + 1),
      v38);
    V_LOCK();
    logfmt_raw(v51, 0x1000u, 0, v50);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "_is_fixture_crc_pass",
      20,
      237,
      100,
      v51);
    goto LABEL_13;
  }
  *(_BYTE *)(a2 + a1 + 64) = 1;
  return 0;
}
