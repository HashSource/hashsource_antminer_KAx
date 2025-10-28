int __fastcall sync_get_status_base(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v5; // r6
  int v7; // r10
  int v8; // r2
  int v9; // r7
  int v10; // r1
  int v11; // r11
  __int16 v13; // r2
  int v14; // r3
  pthread_mutex_t *mutex; // [sp+1Ch] [bp-1028h]
  int v19[2]; // [sp+2Ch] [bp-1018h] BYREF
  unsigned __int8 v20; // [sp+34h] [bp-1010h] BYREF
  unsigned __int8 v21; // [sp+35h] [bp-100Fh]
  char v22; // [sp+36h] [bp-100Eh] BYREF
  int v23; // [sp+37h] [bp-100Dh]
  unsigned __int8 v24; // [sp+3Bh] [bp-1009h]
  unsigned __int8 v25; // [sp+3Ch] [bp-1008h]
  char v26; // [sp+3Dh] [bp-1007h]
  char v27[4096]; // [sp+40h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  mutex = (pthread_mutex_t *)(a1 + 920);
  v5 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 920));
  queue_clear(*(_DWORD *)(a1 + 884));
  v7 = 0;
  sub_145C6C(a5, 0x3E8u);
  v19[1] = 1000000 * v8;
  v19[0] = sub_145C6C(a5, 0x3E8u);
  while ( v7 < a2 )
  {
    LOWORD(v9) = -31816;
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 884), (char *)&v20, 0xAu, v19) == 110 )
      {
        v5 = 3;
        goto LABEL_14;
      }
      V_LOCK();
      HIWORD(v9) = (unsigned int)"_one_chain" >> 16;
      logfmt_raw(v27, 0x1000u, 0, v9, v20, v21, v24, v23, v25);
      V_UNLOCK();
      LOWORD(v10) = -32276;
      HIWORD(v10) = (unsigned int)"02x" >> 16;
      zlog(g_zc, v10, 154, "sync_get_status_base", 20, 1485, 20, v27);
      if ( v20 != 170 || v21 != 85 || v22 != 8 || (v26 & 0x40) != 0 )
      {
        v5 = 1;
        *a4 = v7;
        pthread_mutex_unlock(mutex);
        return v5;
      }
      v11 = v26 & 0x1F;
      if ( v11 == BM_CRC5(&v22, 59) )
        break;
      v5 = 2;
    }
    ++v7;
    v13 = v25;
    v14 = v23;
    *(_BYTE *)(a3 + 4) = v24;
    *(_WORD *)(a3 + 6) = v13;
    *(_DWORD *)a3 = v14;
    a3 += 12;
  }
LABEL_14:
  *a4 = v7;
  pthread_mutex_unlock(mutex);
  return v5;
}
