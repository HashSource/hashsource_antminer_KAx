int __fastcall sync_get_core_reg_base5(int a1, int a2, int a3, int *a4, int *a5, unsigned __int64 a6)
{
  int v7; // r6
  char v10; // r12
  char v12; // r1
  unsigned int v13; // r0
  __int16 v14; // r0
  char v15; // r3
  char v16; // r2
  _BYTE *v17; // r11
  char v18; // r0
  int v19; // r11
  int v20; // r7
  int v21; // r2
  char v22; // r10
  int v24; // r3
  int v25; // r1
  int v26; // r1
  int v27; // r1
  int v28; // r1
  int v29; // r1
  int v30; // r0
  int v31; // r1
  int v32; // [sp+0h] [bp-104Ch]
  int *v33; // [sp+1Ch] [bp-1030h]
  int v34[2]; // [sp+28h] [bp-1024h] BYREF
  unsigned __int8 v35[2]; // [sp+30h] [bp-101Ch] BYREF
  __int64 v36; // [sp+32h] [bp-101Ah] BYREF
  unsigned __int8 v37; // [sp+3Ch] [bp-1010h] BYREF
  unsigned __int8 v38; // [sp+3Dh] [bp-100Fh]
  _BYTE v39[2]; // [sp+3Eh] [bp-100Eh] BYREF
  int v40; // [sp+40h] [bp-100Ch]
  unsigned int v41; // [sp+44h] [bp-1008h]
  char v42[4088]; // [sp+48h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  LODWORD(v36) = 0;
  v10 = *(_BYTE *)(a2 + 8);
  v35[0] = 85;
  v35[1] = -86;
  v12 = *(_BYTE *)(a2 + 9);
  v13 = *(unsigned __int16 *)(a2 + 10);
  BYTE1(v36) = 8;
  LOBYTE(v36) = (16 * (v10 & 1)) & 0x1A | 0x45;
  HIDWORD(v36) = 0;
  BYTE2(v36) = v12;
  v14 = reverse_byte_order_16(v13);
  v15 = *(_BYTE *)(a2 + 13);
  v16 = *(_BYTE *)(a2 + 12);
  *(_WORD *)((char *)&v36 + 3) = v14;
  BYTE6(v36) = v15;
  BYTE5(v36) = v16;
  v17 = calloc(7u, 1u);
  memcpy(v17, &v36, 7u);
  v18 = BM_CRC5(v17, 56);
  HIBYTE(v36) = HIBYTE(v36) & 0xE0 | v18 & 0x1F;
  free(v17);
  if ( !*(_BYTE *)(a2 + 8) && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v33 = a4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 920));
  v7 = 0;
  queue_clear(*(_DWORD *)(a1 + 884));
  LOWORD(v19) = -32120;
  send_command_packet(a1, v35, 0xAu);
  v20 = 0;
  sub_145C6C(a6, 0x3E8u);
  v34[1] = (_DWORD)&loc_F4240 * v21;
  v34[0] = sub_145C6C(a6, 0x3E8u);
  while ( v20 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 884), (char *)&v37, 0xCu, v34) == 110 )
      {
        v7 = 3;
        goto LABEL_13;
      }
      if ( v37 != 170 || v38 != 85 )
      {
        V_LOCK();
        LOWORD(v24) = -32120;
        HIWORD(v24) = (unsigned int)"_packet_1" >> 16;
        v7 = 1;
        logfmt_raw(
          v42,
          0x1000u,
          0,
          v24,
          v37,
          v38,
          v39[0],
          v40,
          (unsigned __int8)v41,
          *(unsigned __int16 *)((char *)&v41 + 1));
        V_UNLOCK();
        LOWORD(v25) = -32276;
        HIWORD(v25) = (unsigned int)"02x" >> 16;
        zlog(g_zc, v25, 154, "sync_get_core_reg_base5", 23, 1907, 20, v42);
        goto LABEL_13;
      }
      v22 = HIBYTE(v41);
      if ( (v22 & 0x1F) == BM_CRC5(v39, 75) )
        break;
      v7 = 2;
    }
    V_LOCK();
    HIWORD(v19) = (unsigned int)"_packet_1" >> 16;
    logfmt_raw(
      v42,
      0x1000u,
      0,
      v19,
      v37,
      v38,
      v39[0],
      v40,
      (unsigned __int8)v41,
      *(unsigned __int16 *)((char *)&v41 + 1));
    V_UNLOCK();
    LOWORD(v26) = -32276;
    HIWORD(v26) = (unsigned int)"02x" >> 16;
    zlog(g_zc, v26, 154, "sync_get_core_reg_base5", 23, 1914, 20, v42);
    *((_BYTE *)v33 + 4) = v41;
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, "ret_array[%d].chip_addr %02x", v20, *((unsigned __int8 *)v33 + 4));
    V_UNLOCK();
    LOWORD(v27) = -32276;
    HIWORD(v27) = (unsigned int)"02x" >> 16;
    zlog(g_zc, v27, 154, "sync_get_core_reg_base5", 23, 1916, 20, v42);
    *((_WORD *)v33 + 3) = v41 >> 8;
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, "ret_array[%d].reg_addr %02x", v20, *((unsigned __int16 *)v33 + 3));
    V_UNLOCK();
    LOWORD(v28) = -32276;
    HIWORD(v28) = (unsigned int)"02x" >> 16;
    zlog(g_zc, v28, 154, "sync_get_core_reg_base5", 23, 1918, 20, v42);
    *((_BYTE *)v33 + 8) = v39[1];
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, "ret_array[%d].core_id %02x", v20, *((unsigned __int8 *)v33 + 8));
    V_UNLOCK();
    LOWORD(v29) = -32276;
    HIWORD(v29) = (unsigned int)"02x" >> 16;
    zlog(g_zc, v29, 154, "sync_get_core_reg_base5", 23, 1920, 20, v42);
    *v33 = v40;
    V_LOCK();
    v30 = *v33;
    v32 = v20++;
    v33 += 3;
    logfmt_raw(v42, 0x1000u, 0, "ret_array[%d].reg_data %08x", v32, v30);
    V_UNLOCK();
    LOWORD(v31) = -32276;
    HIWORD(v31) = (unsigned int)"02x" >> 16;
    zlog(g_zc, v31, 154, "sync_get_core_reg_base5", 23, 1922, 20, v42);
  }
LABEL_13:
  *a5 = v20;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 920));
  return v7;
}
