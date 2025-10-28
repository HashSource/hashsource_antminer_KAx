int __fastcall push_work_base(int a1, int a2)
{
  unsigned __int8 *v4; // r5
  unsigned int v5; // r0
  int (**v6)(); // r0
  int (**v7)(); // r0
  int v8; // r6
  int v10; // r1
  unsigned int v11; // [sp+14h] [bp-101Ch] BYREF
  char v12[4120]; // [sp+18h] [bp-1018h] BYREF

  if ( !*(_BYTE *)(a1 + 265) && !*(_BYTE *)(a1 + 264) )
    return 13;
  v4 = (unsigned __int8 *)calloc(1u, *(_DWORD *)(a1 + 856));
  v11 = 0;
  (*(void (__fastcall **)(int, int, unsigned __int8 *, unsigned int *))(a1 + 68))(a1, a2, v4, &v11);
  v5 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 968));
  do
  {
    v6 = dev_ctrl(v5);
    v5 = ((int (__fastcall *)(_DWORD))v6[22])(*(_DWORD *)(a1 + 248));
  }
  while ( v5 < v11 );
  v7 = dev_ctrl(v5);
  v8 = ((int (__fastcall *)(_DWORD, unsigned __int8 *, unsigned int))v7[16])(*(_DWORD *)(a1 + 248), v4, v11);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 968));
  check_and_print_uart_debug_log(a1 + 1112, v11, v4, *(_DWORD *)(a1 + 256), 1);
  if ( v8 <= 0 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 248), v8);
    V_UNLOCK();
    LOWORD(v10) = 32276;
    HIWORD(v10) = (unsigned int)"esp_packet_queue is false" >> 16;
    zlog(g_zc, v10, 150, "push_work_base", 14, 551, 100, v12);
  }
  else
  {
    ++*(_QWORD *)(a1 + 456);
  }
  free(v4);
  return 0;
}
