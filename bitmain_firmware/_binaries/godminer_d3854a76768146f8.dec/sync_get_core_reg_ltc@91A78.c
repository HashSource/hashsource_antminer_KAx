int __fastcall sync_get_core_reg_ltc(pthread_mutex_t *a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  int v7; // r6
  __int16 v8; // r1
  __int16 v12; // r1
  char v13; // r0
  char v14; // r12
  char v15; // r2
  char v16; // r12
  unsigned int v17; // r0
  char v18; // r2
  char v19; // r0
  int v20; // r2
  int v21; // r2
  int v22; // r8
  int v23; // r7
  char v24; // r11
  int v25; // r1
  unsigned __int8 v27; // r2
  unsigned __int8 v28; // r1
  int v29; // r3
  int v30; // [sp+14h] [bp-1038h]
  int v31; // [sp+1Ch] [bp-1030h]
  unsigned int v32; // [sp+24h] [bp-1028h]
  __int16 v33; // [sp+26h] [bp-1026h]
  int v34[2]; // [sp+28h] [bp-1024h] BYREF
  char v35[2]; // [sp+30h] [bp-101Ch] BYREF
  _BYTE v36[4]; // [sp+32h] [bp-101Ah] BYREF
  unsigned __int8 v37; // [sp+36h] [bp-1016h]
  unsigned __int8 v38; // [sp+37h] [bp-1015h]
  char v39; // [sp+38h] [bp-1014h]
  _BYTE v40[2]; // [sp+3Ch] [bp-1010h] BYREF
  int v41; // [sp+3Eh] [bp-100Eh] BYREF
  unsigned int v42; // [sp+42h] [bp-100Ah]
  char v43; // [sp+46h] [bp-1006h]
  char v44[4088]; // [sp+48h] [bp-1004h] BYREF

  if ( !a1[9].__size[20] )
    return 4;
  v8 = *(_WORD *)(a2 + 10);
  v41 = 0;
  LOBYTE(v33) = v33 & 0xF0 | v8 & 0xF;
  LOWORD(v32) = 0;
  v12 = v33 & 0xF00F | (16 * *(unsigned __int8 *)(a2 + 12));
  v13 = *(_BYTE *)(a2 + 14);
  v14 = *(_BYTE *)(a2 + 8);
  BYTE2(v32) = v33 & 0xF | (16 * *(_BYTE *)(a2 + 12));
  v42 = 0;
  v15 = (16 * (v14 & 1)) | 1;
  v16 = *(_BYTE *)(a2 + 9);
  HIBYTE(v32) = HIBYTE(v12) & 0xF | ((v13 & 1) << 7);
  v40[0] = 85;
  LOBYTE(v41) = v15 & 0x1F | 0x40;
  v40[1] = -86;
  BYTE1(v41) = 9;
  BYTE2(v41) = v16;
  HIBYTE(v41) = 60;
  v43 = 0;
  v17 = reverse_byte_order_32(v32);
  v18 = *(_BYTE *)(a2 + 15);
  v42 = v17;
  v43 = 32 * (v18 & 3);
  v19 = BM_CRC5(&v41, 64);
  v20 = *(unsigned __int8 *)(a2 + 8);
  v43 = v43 & 0xE0 | v19 & 0x1F;
  if ( !v20 && !*(_BYTE *)(a2 + 14) )
    a3 = 1;
  v31 = a4;
  pthread_mutex_lock(a1 + 36);
  queue_clear(a1[35].__lock);
  v7 = 0;
  send_command_packet(a1, (int)v40, 0xBu);
  sub_12F2F4(a6, 0x3E8u);
  v34[1] = 1000000 * v21;
  v30 = 0;
  v34[0] = sub_12F2F4(a6, 0x3E8u);
  while ( a3 > v30 )
  {
    LOWORD(v22) = 1568;
    LOWORD(v23) = 1524;
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[35].__lock, v35, 9u, v34) == 110 )
      {
        v7 = 3;
        goto LABEL_16;
      }
      if ( (unsigned __int8)v35[0] != 170 || v35[1] != 85 || (v39 & 0xE0) != 0xC0 )
      {
        v7 = 1;
        goto LABEL_16;
      }
      if ( (v38 & 0x10) != 0 )
      {
        V_LOCK();
        HIWORD(v22) = (unsigned int)&unk_152190 >> 16;
        logfmt_raw(v44, 0x1000u, 0, v22, v37);
        V_UNLOCK();
        LOWORD(v25) = 1588;
        HIWORD(v25) = (unsigned int)&unk_1521A4 >> 16;
        HIWORD(v23) = (unsigned int)&unk_152164 >> 16;
        zlog(g_zc, v25, 175, v23, 21, 370, 100, v44);
      }
      v24 = v39;
      if ( (v24 & 0x1F) == BM_CRC5(v36, 51) )
        break;
      v7 = 2;
    }
    ++v30;
    v27 = v38;
    v28 = v37;
    v29 = (v36[0] << 16) | (((v38 >> 5) & 1) << 24) | v36[2] | (v36[1] << 8);
    *(_BYTE *)(v31 + 4) = v36[3];
    *(_DWORD *)v31 = v29;
    *(_WORD *)(v31 + 6) = v27 & 0xF;
    *(_BYTE *)(v31 + 9) = v27 >> 6;
    *(_BYTE *)(v31 + 8) = v28;
    v31 += 12;
  }
LABEL_16:
  *a5 = v30;
  pthread_mutex_unlock(a1 + 36);
  return v7;
}
