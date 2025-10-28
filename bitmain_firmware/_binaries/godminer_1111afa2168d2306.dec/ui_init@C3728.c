int ui_init()
{
  int v0; // r5
  char v2[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_1B4530 )
    return 0;
  if ( gpio_init() )
  {
    v0 = -1;
    strcpy(v2, "gpio init failed");
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
  gpio_reg_callback(921, 799520);
  gpio_reg_callback(943, 799520);
  pthread_mutex_init(&stru_1B4500, 0);
  off_1B451C = 0;
  dword_1B4520 = 0;
  dword_1B4524 = 0;
  dword_1B4528 = 0;
  dword_1B452C = 0;
  dword_1B4518 = (int)new_c_map(798860, 0, 0);
  dword_1B44FC[0] = 1;
  pthread_create((pthread_t *)&dword_1B4534, 0, (void *(*)(void *))sub_C309C, 0);
  dword_1B4530 = 1;
  return 0;
}
