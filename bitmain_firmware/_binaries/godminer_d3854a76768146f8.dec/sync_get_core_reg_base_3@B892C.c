int __fastcall sync_get_core_reg_base_3(pthread_mutex_t *a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  int v7; // r6
  char v11; // r0
  __int16 v12; // lr
  char v13; // r12
  char v14; // r0
  int v15; // r2
  int v16; // r2
  int v17; // r7
  int v18; // r1
  int v19; // r11
  __int16 v21; // r1
  int v22; // r3
  char v23; // r2
  int v24; // [sp+24h] [bp-1030h]
  int v25; // [sp+2Ch] [bp-1028h]
  _BYTE v26[2]; // [sp+34h] [bp-1020h] BYREF
  int v27; // [sp+36h] [bp-101Eh] BYREF
  char v28; // [sp+3Ah] [bp-101Ah]
  char v29; // [sp+3Bh] [bp-1019h]
  int v30[2]; // [sp+3Ch] [bp-1018h] BYREF
  unsigned __int8 v31; // [sp+44h] [bp-1010h] BYREF
  unsigned __int8 v32; // [sp+45h] [bp-100Fh]
  char v33; // [sp+46h] [bp-100Eh] BYREF
  unsigned __int8 v34; // [sp+47h] [bp-100Dh]
  unsigned __int8 v35; // [sp+48h] [bp-100Ch]
  unsigned __int8 v36; // [sp+49h] [bp-100Bh]
  unsigned __int8 v37; // [sp+4Ah] [bp-100Ah]
  unsigned __int8 v38; // [sp+4Bh] [bp-1009h]
  char v39; // [sp+4Ch] [bp-1008h]
  char v40[4080]; // [sp+50h] [bp-1004h] BYREF

  if ( !a1[9].__size[20] )
    return 4;
  v27 = 0;
  v11 = *(_BYTE *)(a2 + 8);
  v26[0] = 85;
  v26[1] = -86;
  v12 = *(_WORD *)(a2 + 10);
  v13 = *(_BYTE *)(a2 + 12);
  v29 = 0;
  v27 = (16 * (v11 & 1)) & 0x1A | 0x45;
  BYTE1(v27) = 6;
  HIBYTE(v27) = v12;
  v28 = v13;
  v14 = BM_CRC5(&v27, 40);
  v15 = *(unsigned __int8 *)(a2 + 8);
  v29 = v29 & 0xE0 | v14 & 0x1F;
  if ( !v15 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v25 = a4;
  pthread_mutex_lock(a1 + 36);
  queue_clear(a1[35].__lock);
  v7 = 0;
  send_command_packet(a1, (int)v26, 8u);
  sub_12F2F4(a6, 0x3E8u);
  v30[1] = 1000000 * v16;
  v24 = 0;
  v30[0] = sub_12F2F4(a6, 0x3E8u);
  while ( v24 < a3 )
  {
    LOWORD(v17) = 28936;
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[35].__lock, (char *)&v31, 9u, v30) == 110 )
      {
        v7 = 3;
        goto LABEL_14;
      }
      V_LOCK();
      HIWORD(v17) = (unsigned int)"ner-origin_godminer-new/common/general/http.c" >> 16;
      logfmt_raw(v40, 0x1000u, 0, v17, v31, v32, v37, v38, v34, v35, v36);
      V_UNLOCK();
      LOWORD(v18) = 28780;
      HIWORD(v18) = (unsigned int)"t_http_thread" >> 16;
      zlog(g_zc, v18, 154, "sync_get_core_reg_base_3", 24, 544, 20, v40);
      if ( v31 != 170 || v32 != 85 || (v39 & 0x40) == 0 )
      {
        v7 = 1;
        goto LABEL_14;
      }
      v19 = v39 & 0x1F;
      if ( v19 == BM_CRC5(&v33, 51) )
        break;
      v7 = 2;
    }
    ++v24;
    v21 = v38;
    v22 = (v35 << 16) | (v36 << 24) | v34;
    v23 = v33;
    *(_BYTE *)(v25 + 4) = v37;
    *(_WORD *)(v25 + 6) = v21;
    *(_BYTE *)(v25 + 8) = v23;
    *(_DWORD *)v25 = v22;
    v25 += 12;
  }
LABEL_14:
  *a5 = v24;
  pthread_mutex_unlock(a1 + 36);
  return v7;
}
