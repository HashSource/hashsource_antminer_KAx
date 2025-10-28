int __fastcall sync_get_dag_base_2282(int a1, int a2, int a3, int *a4, unsigned int a5)
{
  int v5; // r7
  int v8; // r11
  int v9; // r8
  int v10; // r1
  unsigned int v11; // r0
  unsigned int *v13; // r8
  unsigned int v14; // r0
  int v15; // r3
  int v16; // r1
  pthread_mutex_t *mutex; // [sp+14h] [bp-10A8h]
  int v20; // [sp+1Ch] [bp-10A0h]
  int v21[2]; // [sp+24h] [bp-1098h] BYREF
  unsigned __int8 v22; // [sp+2Ch] [bp-1090h] BYREF
  unsigned __int8 v23; // [sp+2Dh] [bp-108Fh]
  unsigned __int8 v24; // [sp+2Eh] [bp-108Eh] BYREF
  unsigned __int8 v25; // [sp+2Fh] [bp-108Dh]
  unsigned int v26; // [sp+30h] [bp-108Ch]
  _BYTE v27[128]; // [sp+34h] [bp-1088h] BYREF
  unsigned __int16 v28; // [sp+B4h] [bp-1008h]
  char var1004[4104]; // [sp+B8h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  mutex = (pthread_mutex_t *)(a1 + 920);
  v5 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 920));
  v20 = a3;
  queue_clear(*(_DWORD *)(a1 + 884));
  v8 = 0;
  v21[0] = a5 / 0x3E8;
  v21[1] = (_DWORD)&loc_F4240 * (a5 % 0x3E8);
  while ( v8 < a2 )
  {
    LOWORD(v9) = -32316;
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 884), (char *)&v22, 0x8Au, v21) == 110 )
      {
        v5 = 3;
        goto LABEL_12;
      }
      V_LOCK();
      HIWORD(v9) = (unsigned int)"r %02x reg addr %02x reg value %02x%02x%02x" >> 16;
      logfmt_raw(var1004, 0x1000u, 0, v9, v22, v23, v25);
      V_UNLOCK();
      LOWORD(v10) = -32276;
      HIWORD(v10) = (unsigned int)"02x" >> 16;
      zlog(g_zc, v10, 154, "sync_get_dag_base_2282", 22, 433, 20, var1004);
      if ( v22 != 170 || v23 != 85 )
      {
        v5 = 1;
        *a4 = v8;
        pthread_mutex_unlock(mutex);
        return v5;
      }
      v11 = BM_CRC16(&v24, 134);
      if ( v28 == (unsigned __int16)__rev16(v11) )
        break;
      v5 = 2;
    }
    ++v8;
    v13 = (unsigned int *)v20;
    *(_BYTE *)(v20 + 5) = v25;
    v20 += 140;
    *v13 = reverse_byte_order_32(v26);
    V_LOCK();
    v14 = reverse_byte_order_32(v26);
    LOWORD(v15) = -31908;
    HIWORD(v15) = (unsigned int)"dev_config_hal" >> 16;
    logfmt_raw(var1004, 0x1000u, 0, v15, v14);
    V_UNLOCK();
    LOWORD(v16) = -32276;
    HIWORD(v16) = (unsigned int)"02x" >> 16;
    zlog(g_zc, v16, 154, "sync_get_dag_base_2282", 22, 447, 40, var1004);
    memcpy((char *)v13 + 10, v27, 0x80u);
  }
LABEL_12:
  *a4 = v8;
  pthread_mutex_unlock(mutex);
  return v5;
}
