int __fastcall packet_2_nonce_ltc(_DWORD *a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v11; // r3
  int v12; // r1
  int v14; // r2
  int v15; // r9
  int v16; // r1
  int v17; // r3
  int v18; // r2
  int v19; // r3
  int v20; // r3
  unsigned int v21; // r9
  int v22; // r0
  int v23; // r2
  int v24; // r3
  int v25; // r1
  const char *v26; // r0
  int v27; // r0
  int v28; // r1
  char v29[4080]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v11) = 3740;
  HIWORD(v11) = (unsigned int)"/chip_reg_io_ltc_1489.c" >> 16;
  logfmt_raw(v29, 0x1000u, 0, v11);
  V_UNLOCK();
  LOWORD(v12) = 3060;
  HIWORD(v12) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
  zlog(g_zc, v12, 171, "packet_2_nonce_ltc", 18, 239, 40, v29);
  if ( (unsigned __int8)a2[8] >> 5 != 4 )
    return 10;
  v14 = BM_CRC5(a2 + 2, 51);
  if ( v14 == (a2[8] & 0x1F) )
  {
    v15 = a1[210];
    v16 = (unsigned __int8)a2[7];
    v17 = *(_DWORD *)(v15 + 8 * v16);
    v18 = *(_DWORD *)(v15 + 8 * v16 + 4);
    *(_DWORD *)a3 = v17;
    *(_DWORD *)(a3 + 4) = v18;
    *a7 = v17;
    strcpy((char *)(a3 + 16), (const char *)(v15 + ((v16 + 16) << 6)));
    *(_DWORD *)(a3 + 80) = *(_DWORD *)(a2 + 2);
    *(_BYTE *)(a3 + 84) = a2[6] & 0x3F;
    v19 = (unsigned __int8)a2[7];
    *(_BYTE *)(a3 + 85) = v19;
    memcpy((void *)(a3 + 86), (const void *)(v15 + 16 * (v19 + 1504)), *(_DWORD *)(v15 + 4 * (v19 + 6528)));
    v20 = (unsigned __int8)a2[7];
    *(_DWORD *)(a3 + 104) = *(_DWORD *)(v15 + 4 * (v20 + 6528));
    *(_DWORD *)(a3 + 108) = *(_DWORD *)(v15 + 4 * (v20 + 6656));
    v21 = (unsigned __int8)a2[2];
    v22 = ((unsigned __int8)((_BYTE)v21 << 7) | ((unsigned __int8)a2[3] >> 1)) / a1[111];
    if ( v22 >= a1[88] )
    {
      v27 = rand();
      sub_14561C(v27, a1[88]);
      v22 = v28;
      *a6 = v28;
      v21 = (unsigned __int8)a2[2];
    }
    else
    {
      *a6 = v22;
    }
    v23 = *(_DWORD *)(a3 + 80);
    *(_DWORD *)(a3 + 8) = v22;
    *(_DWORD *)(a3 + 12) = v21 >> 1;
    *a5 = v23;
    *a4 = 1;
    V_LOCK();
    LOWORD(v24) = 3832;
    HIWORD(v24) = (unsigned int)"_setting_software_reset_ltc" >> 16;
    logfmt_raw(v29, 0x1000u, 0, v24);
    V_UNLOCK();
    LOWORD(v25) = 3060;
    HIWORD(v25) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
    zlog(g_zc, v25, 171, "packet_2_nonce_ltc", 18, 286, 40, v29);
    return 0;
  }
  else
  {
    LOWORD(v26) = 3764;
    HIWORD(v26) = (unsigned int)"%s failed, reg:%02x, core_id:%d" >> 16;
    printf(v26, a1[62], v14);
    return 11;
  }
}
