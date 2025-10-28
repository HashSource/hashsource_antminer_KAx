int __fastcall work_2_packet_ltc(int a1, _DWORD *a2, unsigned __int8 *a3, _DWORD *a4)
{
  int v5; // r4
  _DWORD *v7; // r3
  int v8; // r0
  const char *v9; // r1
  int v10; // r12
  _DWORD *v11; // r11
  _DWORD *v12; // r2
  int v13; // t1
  int v14; // r8
  int v15; // lr
  int v16; // r12
  int v17; // r7
  int v18; // r12
  int v19; // r8
  int v20; // r3
  unsigned __int8 v21; // r12
  unsigned __int8 *v22; // r3
  unsigned __int8 *v23; // r2
  unsigned __int8 v24; // r1
  unsigned __int8 v25; // t1
  unsigned __int8 v26; // t1
  int v27; // r4
  __int16 v28; // r0
  int v29; // r3
  int v31; // r3
  const char *v32; // r7
  int v33; // r3
  int v34; // r1
  char *v35; // r5
  char *v36; // r6
  int v37; // t1
  int v38; // r3
  int v39; // r1
  int v40; // r1
  const char *v43; // [sp+1Ch] [bp-2010h]
  int v44; // [sp+20h] [bp-200Ch]
  char v45[4056]; // [sp+28h] [bp-2004h] BYREF
  char v46[4100]; // [sp+1028h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 840);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  if ( *(_DWORD *)(a1 + 508) == 1 )
    a3[2] = 48;
  v7 = a2;
  v8 = *(unsigned __int8 *)(v5 + 27136);
  v9 = (const char *)(a2 + 2);
  v10 = *((_DWORD *)v9 + 36);
  v43 = v9;
  *(_QWORD *)(v5 + 8 * v8) = *(_QWORD *)a2;
  v11 = a2 + 18;
  *(_DWORD *)(v5 + 4 * (v8 + 4864)) = v10;
  v12 = (_DWORD *)(v5 + 32 * (v8 + 624));
  v13 = v7[39];
  v7 += 39;
  v14 = v7[1];
  v15 = v7[2];
  v16 = v7[3];
  *v12 = v13;
  v12[1] = v14;
  v12[2] = v15;
  v12[3] = v16;
  v17 = v7[4];
  v18 = v7[7];
  v19 = v7[5];
  v12[6] = v7[6];
  v12[7] = v18;
  v12[4] = v17;
  v12[5] = v19;
  strcpy((char *)(v5 + ((*(unsigned __int8 *)(v5 + 27136) + 16) << 6)), v9);
  memcpy((void *)(v5 + 80 * *(unsigned __int8 *)(v5 + 27136) + 9216), a2 + 18, 0x50u);
  memcpy((void *)(v5 + 16 * (*(unsigned __int8 *)(v5 + 27136) + 1504)), a2 + 47, a2[51]);
  v20 = *(unsigned __int8 *)(v5 + 27136);
  *(_DWORD *)(v5 + 4 * (v20 + 6528)) = a2[51];
  *(_DWORD *)(v5 + 4 * (v20 + 6656)) = a2[52];
  v21 = *(_BYTE *)(v5 + 27136);
  a3[3] = v21;
  *(_BYTE *)(v5 + 27136) = (v21 + 1) & 0x7F;
  memcpy(a3 + 4, a2 + 18, 0x50u);
  v22 = a3 + 3;
  v23 = a3 + 84;
  do
  {
    v25 = *++v22;
    v24 = v25;
    v26 = *--v23;
    *v22 = v26;
    *v23 = v24;
  }
  while ( v22 != a3 + 43 );
  v27 = memcmp(&last_work_ltc, a2 + 18, 0x50u);
  if ( !v27 )
  {
    V_LOCK();
    LOWORD(v31) = -23160;
    HIWORD(v31) = (unsigned int)"p %02x, core %02x, reg %02x, clk_delay %08x" >> 16;
    LOWORD(v32) = -29500;
    logfmt_raw(v46, 0x1000u, 0, v31);
    V_UNLOCK();
    LOWORD(v33) = 2080;
    LOWORD(v34) = 3060;
    HIWORD(v33) = (unsigned int)"nce_ltc" >> 16;
    HIWORD(v34) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
    zlog(g_zc, v34, 171, v33, 17, 198, 80, v46);
    v35 = (char *)a2 + 71;
    v36 = (char *)a2 + 151;
    v44 = a3[3];
    do
    {
      v37 = (unsigned __int8)*++v35;
      HIWORD(v32) = (unsigned int)"hain" >> 16;
      snprintf(&v45[v27], 4096 - v27, v32, v37);
      v27 += 3;
    }
    while ( v35 != v36 );
    V_LOCK();
    LOWORD(v38) = 3232;
    HIWORD(v38) = (unsigned int)"ng_freq_ltc() in" >> 16;
    logfmt_raw(v46, 0x1000u, 0, v38, v43, v44);
    V_UNLOCK();
    LOWORD(v39) = 3060;
    HIWORD(v39) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
    zlog(g_zc, v39, 171, "dump_work_ltc", 13, 117, 20, v46);
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, "dump work: %s", v45);
    V_UNLOCK();
    LOWORD(v40) = 3060;
    HIWORD(v40) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
    zlog(g_zc, v40, 171, "dump_work_ltc", 13, 118, 20, v46);
  }
  memcpy(&last_work_ltc, v11, 0x50u);
  v28 = BM_CRC16(a3 + 2, 82);
  a3[85] = v28;
  a3[84] = HIBYTE(v28);
  v29 = *(unsigned __int8 *)(a1 + 264);
  *a4 = 86;
  if ( !v29 || !*(_BYTE *)(a1 + 265) )
    return 0;
  memset(*(void **)(a1 + 472), 0, 48 * *(_DWORD *)(a1 + 352));
  chip_setting_ticket_mask_ltc((_DWORD *)a1, 0x7FFu);
  *(_BYTE *)(a1 + 264) = 0;
  return 0;
}
