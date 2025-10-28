int __fastcall send_command_packet(int a1, unsigned __int8 *a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r8
  int i; // r0
  int (**v8)(); // r0
  int (**v9)(); // r0
  int v10; // r6
  int v12; // r3
  int v13; // r3
  int v14; // r1
  char v15[4096]; // [sp+10h] [bp-1000h] BYREF

  v3 = (pthread_mutex_t *)(a1 + 944);
  for ( i = pthread_mutex_lock((pthread_mutex_t *)(a1 + 944)); ; i = usleep(0x2710u) )
  {
    v8 = dev_ctrl(i);
    if ( ((int (__fastcall *)(_DWORD))v8[21])(*(_DWORD *)(a1 + 248)) >= a3 )
      break;
  }
  v9 = dev_ctrl(10000);
  v10 = ((int (__fastcall *)(_DWORD, unsigned __int8 *, unsigned int))v9[17])(*(_DWORD *)(a1 + 248), a2, a3);
  pthread_mutex_unlock(v3);
  check_and_print_uart_debug_log(a1 + 1112, a3, a2, *(_DWORD *)(a1 + 256), 1);
  if ( v10 <= 0 )
  {
    V_LOCK();
    LOWORD(v12) = -31652;
    HIWORD(v12) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
    logfmt_raw(v15, 0x1000u, 0, v12, *(_DWORD *)(a1 + 248), v10);
    V_UNLOCK();
    LOWORD(v13) = -31696;
    LOWORD(v14) = -31612;
    HIWORD(v13) = (unsigned int)"t failed!" >> 16;
    HIWORD(v14) = (unsigned int)"uildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
    zlog(g_zc, v14, 159, v13, 19, 46, 100, v15);
  }
  return v10;
}
