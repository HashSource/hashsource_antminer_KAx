int __fastcall high_speed_uart_set_config(int a1, int a2, _DWORD *a3)
{
  pthread_mutex_t *v5; // r6
  const char *v7; // r2
  int v8; // r1
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v10[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !a3 )
    return -3;
  v5 = (pthread_mutex_t *)((char *)&unk_1B41FC + 24 * a1);
  pthread_mutex_lock(v5);
  if ( a2 )
  {
    LOWORD(v7) = 26044;
    HIWORD(v7) = (unsigned int)"ner-new/backend/device/hal/platform/7007/7007_ui.c" >> 16;
    snprintf(s, 0x800u, v7, a2);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v8) = 25628;
    HIWORD(v8) = (unsigned int)"%d malloc buffer error" >> 16;
    zlog(g_zc, v8, 172, "high_speed_uart_set_config", 26, 622, 80, v10);
  }
  else
  {
    fpga_write(60, *a3 << 16);
  }
  pthread_mutex_unlock(v5);
  return -5;
}
