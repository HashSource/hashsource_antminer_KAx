int __fastcall clear_uart_rx_fifo(int a1)
{
  pthread_mutex_t *v2; // r4
  size_t v3; // r0
  unsigned int v4; // r6
  void *v5; // r0
  void *v6; // r7
  unsigned int v7; // r0
  const char *v8; // r2
  int v9; // r1
  const char *v11; // r2
  int v12; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v14[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = (pthread_mutex_t *)((char *)&unk_1B437C + 24 * a1);
  pthread_mutex_lock(v2);
  v3 = sub_C1FB4((unsigned __int8)a1);
  v4 = v3;
  if ( !v3 )
    return pthread_mutex_unlock(v2);
  v5 = malloc(v3);
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_C23B4(a1, (int)v5, v4);
    if ( v4 != v7 )
    {
      LOWORD(v8) = 26108;
      HIWORD(v8) = (unsigned int)" is not a supported key" >> 16;
      snprintf(s, 0x800u, v8, "clear_uart_rx_fifo", a1, v4, v7);
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v9) = 25628;
      HIWORD(v9) = (unsigned int)"%d malloc buffer error" >> 16;
      zlog(g_zc, v9, 172, "clear_uart_rx_fifo", 18, 721, 100, v14);
    }
    free(v6);
    usleep(0x2710u);
    return pthread_mutex_unlock(v2);
  }
  LOWORD(v11) = 26076;
  HIWORD(v11) = (unsigned int)"orm/7007/7007_ui.c" >> 16;
  snprintf(s, 0x800u, v11, "clear_uart_rx_fifo", a1);
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v12) = 25628;
  HIWORD(v12) = (unsigned int)"%d malloc buffer error" >> 16;
  zlog(g_zc, v12, 172, "clear_uart_rx_fifo", 18, 711, 100, v14);
  set_miner_6060info_malloc_failed_err(1);
  usleep(0x7A120u);
  return pthread_mutex_unlock(v2);
}
