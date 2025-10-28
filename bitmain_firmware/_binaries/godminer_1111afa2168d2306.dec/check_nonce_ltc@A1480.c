int __fastcall check_nonce_ltc(int a1, int a2)
{
  int v3; // r1
  int v4; // r4
  unsigned int v5; // r6
  unsigned int v6; // r0
  unsigned int v7; // r7
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r4
  int v11; // r2
  unsigned int v12; // r0
  unsigned int v13; // t1
  unsigned int v14; // t1
  bool v15; // cf
  int v17; // r2
  int v18; // r1
  int v19; // r3
  int v20; // r1
  int v21; // r3
  int v22; // r1
  int v23; // r3
  int v24[8]; // [sp+10h] [bp-1070h] BYREF
  _DWORD dest[20]; // [sp+30h] [bp-1050h] BYREF
  char v26[4096]; // [sp+80h] [bp-1000h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 85);
  v4 = *(_DWORD *)(a1 + 840);
  v5 = *(_DWORD *)(v4 + 4 * (v3 + 4864));
  memcpy(dest, (const void *)(v4 + 80 * v3 + 9216), sizeof(dest));
  dest[19] = bswap32(*(_DWORD *)(a2 + 80));
  scrypt_regenhash(v24, (int)dest);
  v6 = target_to_diff_ltc((int)v24);
  v7 = v6;
  if ( v6 <= 0x1A )
  {
    V_LOCK();
    LOWORD(v21) = 3500;
    HIWORD(v21) = (unsigned int)"runtime_ctrl_ltc() out" >> 16;
    logfmt_raw(v26, 0x1000u, 0, v21, v7, *(unsigned __int8 *)(a2 + 84), 27);
    V_UNLOCK();
    LOWORD(v22) = 3060;
    HIWORD(v22) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
    zlog(g_zc, v22, 171, "check_nonce_ltc", 15, 707, 20, v26);
    return 2;
  }
  v8 = *(unsigned __int8 *)(a2 + 84);
  if ( (v8 & 0x20) != 0 )
  {
    if ( v6 > 0x2F )
      goto LABEL_4;
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "calculate diff %02x, but ans diff %02x (bit5 is 1)", v7, *(unsigned __int8 *)(a2 + 84));
    V_UNLOCK();
    v17 = 713;
LABEL_13:
    LOWORD(v18) = 3060;
    HIWORD(v18) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
    zlog(g_zc, v18, 171, "check_nonce_ltc", 15, v17, 20, v26);
    return 3;
  }
  if ( v6 != v8 + 16 )
  {
    V_LOCK();
    LOWORD(v23) = 3628;
    HIWORD(v23) = (unsigned int)"miner_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_ltc_1489/chip_reg_io_ltc_1489.c" >> 16;
    logfmt_raw(v26, 0x1000u, 0, v23, v7, *(unsigned __int8 *)(a2 + 84));
    V_UNLOCK();
    v17 = 718;
    goto LABEL_13;
  }
LABEL_4:
  if ( v5 <= v6 )
  {
    v9 = dest;
    v10 = v4 + 32 * (*(unsigned __int8 *)(a2 + 85) + 624);
    v11 = v10 + 32;
    while ( 1 )
    {
      v13 = *--v9;
      v12 = v13;
      v14 = *(_DWORD *)(v11 - 4);
      v11 -= 4;
      v15 = v12 >= v14;
      if ( v12 > v14 )
        break;
      if ( !v15 || v10 == v11 )
        return 0;
    }
  }
  V_LOCK();
  LOWORD(v19) = -21704;
  HIWORD(v19) = (unsigned int)" get nonce crc error calc value %04x expected value %04x" >> 16;
  logfmt_raw(v26, 0x1000u, 0, v19, v7, v5);
  V_UNLOCK();
  LOWORD(v20) = 3060;
  HIWORD(v20) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
  zlog(g_zc, v20, 171, "check_nonce_ltc", 15, 724, 20, v26);
  return 1;
}
