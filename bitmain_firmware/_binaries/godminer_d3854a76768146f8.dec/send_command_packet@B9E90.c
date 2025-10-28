int __fastcall send_command_packet(pthread_mutex_t *a1, int a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r6
  int i; // r0
  int (**v8)(); // r0
  int (**v9)(); // r0
  int v10; // r5
  char v12[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = a1 + 37;
  for ( i = pthread_mutex_lock(a1 + 37); ; i = usleep(0x2710u) )
  {
    v8 = dev_ctrl(i);
    if ( ((int (__fastcall *)(int))v8[16])(a1[9].__kind) >= a3 )
      break;
  }
  v9 = dev_ctrl(10000);
  v10 = ((int (__fastcall *)(int, int, unsigned int))v9[14])(a1[9].__kind, a2, a3);
  pthread_mutex_unlock(v3);
  if ( v10 <= 0 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "device %d send cmd failed, errcode %d ", a1[9].__kind, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_interface.c",
      159,
      "send_command_packet",
      19,
      44,
      100,
      v12);
  }
  return v10;
}
