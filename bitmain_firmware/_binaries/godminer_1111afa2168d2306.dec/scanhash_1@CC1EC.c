int __fastcall scanhash_1(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r3
  int v5; // r1
  int v6; // r5
  void *v7; // r8
  void *v8; // r11
  int v10; // r3
  unsigned int v11; // r10
  int v12; // r10
  int v13; // r9
  int v15; // r1
  int v16; // r0
  int v17; // r3
  int v18; // r1
  int v19; // r3
  char v20; // [sp+0h] [bp-1234h]
  int v21; // [sp+10h] [bp-1224h]
  unsigned int v22; // [sp+14h] [bp-1220h]
  char v23; // [sp+1Ch] [bp-1218h]
  char v24; // [sp+27h] [bp-120Dh] BYREF
  int v25; // [sp+28h] [bp-120Ch] BYREF
  int v26; // [sp+2Ch] [bp-1208h] BYREF
  char s[512]; // [sp+30h] [bp-1204h] BYREF
  char v28[4100]; // [sp+230h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash_1", *(_DWORD *)(a1 + 248));
  V_LOCK();
  v3 = syscall(224);
  LOWORD(v4) = -31096;
  HIWORD(v4) = (unsigned int)"tum_threads" >> 16;
  logfmt_raw(v28, 0x1000u, 0, v4, v2, v3);
  V_UNLOCK();
  LOWORD(v5) = 32276;
  HIWORD(v5) = (unsigned int)"esp_packet_queue is false" >> 16;
  zlog(g_zc, v5, 150, "scanhash_1", 10, 118, 40, v28);
  v22 = 1;
  prctl(15, v2);
  v21 = 0;
  v6 = *(_DWORD *)(a1 + 876);
  v7 = calloc(1u, *(_DWORD *)(a1 + 848));
  v8 = calloc(1u, *(_DWORD *)(a1 + 852));
LABEL_2:
  memset(s, 0, sizeof(s));
  queue_dequeue(v6, s, 1u);
  if ( !*(_BYTE *)(a1 + 914) )
  {
    while ( 1 )
    {
      while ( (unsigned __int8)s[0] != 170 )
      {
        queue_dequeue(v6, s, 1u);
        check_and_print_uart_debug_log(a1 + 1040, 1, (unsigned __int8 *)s, *(_DWORD *)(a1 + 256), 0);
        if ( *(_BYTE *)(a1 + 914) )
          goto LABEL_5;
      }
      queue_dequeue(v6, &s[1], 1u);
      if ( *(_BYTE *)(a1 + 914) )
        break;
      if ( s[1] == 85 )
      {
        v23 = *(_BYTE *)(a1 + 914);
        queue_dequeue(v6, &s[2], 1u);
        v11 = (*(int (__fastcall **)(_DWORD))(a1 + 176))((unsigned __int8)s[2]);
        queue_dequeue(v6, &s[3], v11);
        v12 = v11 + 3;
        check_and_print_uart_debug_log(a1 + 1040, v12, (unsigned __int8 *)s, *(_DWORD *)(a1 + 256), v23);
        v13 = *(unsigned __int8 *)(a1 + 914);
        if ( *(_BYTE *)(a1 + 914) )
          break;
        memset(v7, *(unsigned __int8 *)(a1 + 914), *(_DWORD *)(a1 + 848));
        v25 = v13;
        v26 = v13;
        v24 = v13;
        if ( (*(int (__fastcall **)(int, char *, void *, char *, void *, int *, int *))(a1 + 72))(
               a1,
               s,
               v7,
               &v24,
               v8,
               &v25,
               &v26) == 10
          && !queue_enqueue(*(_DWORD *)(a1 + 884), s, v12)
          && v22 <= ++v21 )
        {
          V_LOCK();
          logfmt_raw(
            v28,
            0x1000u,
            0,
            "chain[%d], queue_enqueue of __low_priority_dag_packet_queue is false",
            *(_DWORD *)(a1 + 256));
          V_UNLOCK();
          LOWORD(v15) = 32276;
          HIWORD(v15) = (unsigned int)"esp_packet_queue is false" >> 16;
          zlog(g_zc, v15, 150, "scanhash_1", 10, 174, 40, v28);
          V_LOCK();
          v16 = v21;
          LOWORD(v17) = 32760;
          HIWORD(v17) = (unsigned int)"se5" >> 16;
          v21 = 0;
          logfmt_raw(v28, 0x1000u, 0, v17, v16, v22);
          V_UNLOCK();
          LOWORD(v18) = 32276;
          HIWORD(v18) = (unsigned int)"esp_packet_queue is false" >> 16;
          zlog(g_zc, v18, 150, "scanhash_1", 10, 175, 40, v28);
          v19 = 10 * v22;
          if ( 10 * v22 >= 0x989680 )
            v19 = 10000000;
          v22 = v19;
        }
        goto LABEL_2;
      }
      v10 = *(_DWORD *)(a1 + 256);
      v20 = *(_BYTE *)(a1 + 914);
      s[0] = s[1];
      check_and_print_uart_debug_log(a1 + 1040, 2, (unsigned __int8 *)s, v10, v20);
    }
  }
LABEL_5:
  *(_BYTE *)(a1 + 914) = 0;
  free(v7);
  free(v8);
  return 0;
}
