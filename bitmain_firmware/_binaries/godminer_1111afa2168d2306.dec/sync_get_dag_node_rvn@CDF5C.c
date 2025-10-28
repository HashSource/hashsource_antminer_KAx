int __fastcall sync_get_dag_node_rvn(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v5; // r6
  pthread_mutex_t *v6; // r11
  int v8; // r10
  int v9; // r2
  int v10; // r7
  int v11; // r1
  unsigned int v12; // r0
  unsigned int v14; // r0
  char *v15; // r2
  int v16; // r1
  int v17; // r0
  int v18; // lr
  int v19; // r12
  int v20; // r0
  int v23; // [sp+1Ch] [bp-1120h]
  int v24[2]; // [sp+24h] [bp-1118h] BYREF
  unsigned __int8 v25; // [sp+2Ch] [bp-1110h] BYREF
  unsigned __int8 v26; // [sp+2Dh] [bp-110Fh]
  unsigned __int8 v27[2]; // [sp+2Eh] [bp-110Eh] BYREF
  unsigned __int8 v28; // [sp+30h] [bp-110Ch]
  unsigned int v29; // [sp+31h] [bp-110Bh]
  char v30; // [sp+35h] [bp-1107h] BYREF
  _WORD v31[97]; // [sp+75h] [bp-10C7h] BYREF
  char var1004[4104]; // [sp+138h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  v6 = (pthread_mutex_t *)(a1 + 920);
  v23 = a3 + 8;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 920));
  v5 = 0;
  queue_clear(*(_DWORD *)(a1 + 884));
  sub_145C6C(a5, 0x3E8u);
  v8 = 0;
  v24[1] = (_DWORD)&loc_F4240 * v9;
  v24[0] = sub_145C6C(a5, 0x3E8u);
  while ( v8 < a2 )
  {
    LOWORD(v10) = -32316;
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 884), (char *)&v25, 0x10Bu, v24) == 110 )
      {
        v5 = 3;
        goto LABEL_12;
      }
      V_LOCK();
      HIWORD(v10) = (unsigned int)"r %02x reg addr %02x reg value %02x%02x%02x" >> 16;
      logfmt_raw(var1004, 0x1000u, 0, v10, v25, v26, v28);
      V_UNLOCK();
      LOWORD(v11) = -32276;
      HIWORD(v11) = (unsigned int)"02x" >> 16;
      zlog(g_zc, v11, 154, "sync_get_dag_node_rvn", 21, 299, 20, var1004);
      if ( v25 != 170 || v26 != 85 )
      {
        v5 = 1;
        *a4 = v8;
        pthread_mutex_unlock(v6);
        return v5;
      }
      v12 = BM_CRC16(v27, 263);
      if ( v31[96] == (unsigned __int16)__rev16(v12) )
        break;
      v5 = 2;
    }
    *(_BYTE *)(v23 - 6) = v28;
    v14 = reverse_byte_order_32(v29);
    v15 = &v30;
    v16 = v23;
    *(_DWORD *)(v23 - 4) = v14;
    do
    {
      v17 = *(_DWORD *)v15;
      v15 += 16;
      v18 = *((_DWORD *)v15 - 3);
      v16 += 16;
      v19 = *((_DWORD *)v15 - 2);
      *(_DWORD *)(v16 - 16) = v17;
      v20 = *((_DWORD *)v15 - 1);
      *(_DWORD *)(v16 - 12) = v18;
      *(_DWORD *)(v16 - 8) = v19;
      *(_DWORD *)(v16 - 4) = v20;
    }
    while ( v15 != (char *)v31 );
    ++v8;
    v23 += 268;
  }
LABEL_12:
  *a4 = v8;
  pthread_mutex_unlock(v6);
  return v5;
}
