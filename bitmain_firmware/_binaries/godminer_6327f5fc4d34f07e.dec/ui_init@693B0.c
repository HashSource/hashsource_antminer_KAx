int ui_init()
{
  int v0; // r5
  char v2[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_119D04 )
    return 0;
  if ( gpio_init() )
  {
    v0 = -1;
    strcpy(v2, "gpio init failed\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_ui.c",
      170,
      "ui_init",
      7,
      152,
      100,
      v3);
    return v0;
  }
  gpio_export(941);
  gpio_export(942);
  gpio_export(921);
  gpio_export(943);
  gpio_reg_callback(921, 430000);
  gpio_reg_callback(943, 430000);
  pthread_mutex_init(&stru_119CD4, 0);
  off_119CF0 = 0;
  dword_119CF4 = 0;
  dword_119CF8 = 0;
  dword_119CFC = 0;
  dword_119D00 = 0;
  dword_119CEC = (int)new_c_map(429340, 0, 0);
  dword_119CD0[0] = 1;
  pthread_create((pthread_t *)&dword_119D08, 0, (void *(*)(void *))sub_68D2C, 0);
  dword_119D04 = 1;
  return 0;
}
