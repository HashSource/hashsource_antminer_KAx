int __fastcall send_command_packet_1(int a1, unsigned __int8 *a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r8
  int i; // r0
  int (**v8)(); // r0
  int (**v9)(); // r0
  int v10; // r5
  int v12; // r3
  int v13; // r1
  char v14[4096]; // [sp+10h] [bp-1000h] BYREF

  v3 = (pthread_mutex_t *)(a1 + 944);
  for ( i = pthread_mutex_lock((pthread_mutex_t *)(a1 + 944)); ; i = usleep(0x2710u) )
  {
    v8 = dev_ctrl(i);
    if ( ((int (__fastcall *)(int))v8[21])(14) >= a3 )
      break;
  }
  v9 = dev_ctrl(10000);
  v10 = ((int (__fastcall *)(int, unsigned __int8 *, unsigned int))v9[18])(14, a2, a3);
  pthread_mutex_unlock(v3);
  check_and_print_uart_debug_log(a1 + 1112, a3, a2, 14, 1);
  if ( v10 <= 0 )
  {
    V_LOCK();
    LOWORD(v12) = -31652;
    HIWORD(v12) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
    logfmt_raw(v14, 0x1000u, 0, v12, *(_DWORD *)(a1 + 252), v10);
    V_UNLOCK();
    LOWORD(v13) = -31612;
    HIWORD(v13) = (unsigned int)"uildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
    zlog(g_zc, v13, 159, "send_command_packet_1", 21, 62, 100, v14);
  }
  return v10;
}
