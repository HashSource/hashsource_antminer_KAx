int __fastcall sync_get_core_reg_base_3(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  int v7; // r6
  char v11; // r0
  __int16 v12; // lr
  unsigned __int8 v13; // r12
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
  unsigned __int8 v26[2]; // [sp+34h] [bp-1020h] BYREF
  int v27; // [sp+36h] [bp-101Eh] BYREF
  __int16 v28; // [sp+3Ah] [bp-101Ah]
  int v29[2]; // [sp+3Ch] [bp-1018h] BYREF
  unsigned __int8 v30; // [sp+44h] [bp-1010h] BYREF
  unsigned __int8 v31; // [sp+45h] [bp-100Fh]
  char v32; // [sp+46h] [bp-100Eh] BYREF
  unsigned __int8 v33; // [sp+47h] [bp-100Dh]
  unsigned __int8 v34; // [sp+48h] [bp-100Ch]
  unsigned __int8 v35; // [sp+49h] [bp-100Bh]
  unsigned __int8 v36; // [sp+4Ah] [bp-100Ah]
  unsigned __int8 v37; // [sp+4Bh] [bp-1009h]
  char v38; // [sp+4Ch] [bp-1008h]
  char v39[4080]; // [sp+50h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  v27 = 0;
  v11 = *(_BYTE *)(a2 + 8);
  v26[0] = 85;
  v26[1] = -86;
  v12 = *(_WORD *)(a2 + 10);
  v13 = *(_BYTE *)(a2 + 12);
  v27 = (16 * (v11 & 1)) & 0x1A | 0x45;
  BYTE1(v27) = 6;
  HIBYTE(v27) = v12;
  v28 = v13;
  v14 = BM_CRC5(&v27, 40);
  v15 = *(unsigned __int8 *)(a2 + 8);
  HIBYTE(v28) = HIBYTE(v28) & 0xE0 | v14 & 0x1F;
  if ( !v15 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v25 = a4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 920));
  queue_clear(*(_DWORD *)(a1 + 884));
  v7 = 0;
  send_command_packet(a1, v26, 8u);
  sub_145C6C(a6, 0x3E8u);
  v29[1] = 1000000 * v16;
  v24 = 0;
  v29[0] = sub_145C6C(a6, 0x3E8u);
  while ( v24 < a3 )
  {
    LOWORD(v17) = -31888;
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 884), (char *)&v30, 9u, v29) == 110 )
      {
        v7 = 3;
        goto LABEL_14;
      }
      V_LOCK();
      HIWORD(v17) = (unsigned int)"init_hal" >> 16;
      logfmt_raw(v39, 0x1000u, 0, v17, v30, v31, v36, v37, v33, v34, v35);
      V_UNLOCK();
      LOWORD(v18) = -32276;
      HIWORD(v18) = (unsigned int)"02x" >> 16;
      zlog(g_zc, v18, 154, "sync_get_core_reg_base_3", 24, 785, 20, v39);
      if ( v30 != 170 || v31 != 85 || (v38 & 0x40) == 0 )
      {
        v7 = 1;
        goto LABEL_14;
      }
      v19 = v38 & 0x1F;
      if ( v19 == BM_CRC5(&v32, 51) )
        break;
      v7 = 2;
    }
    ++v24;
    v21 = v37;
    v22 = (v34 << 16) | (v35 << 24) | v33;
    v23 = v32;
    *(_BYTE *)(v25 + 4) = v36;
    *(_WORD *)(v25 + 6) = v21;
    *(_BYTE *)(v25 + 8) = v23;
    *(_DWORD *)v25 = v22;
    v25 += 12;
  }
LABEL_14:
  *a5 = v24;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 920));
  return v7;
}
