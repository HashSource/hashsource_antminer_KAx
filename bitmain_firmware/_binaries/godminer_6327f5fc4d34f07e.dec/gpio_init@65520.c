int gpio_init()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_119968 )
  {
    strcpy(v1, "gpio re init\n");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      172,
      "gpio_init",
      9,
      98,
      80,
      v2);
  }
  else
  {
    pthread_mutex_init(&stru_11996C, 0);
    dword_119984 = (int)new_c_map(414992, 0, 0);
    pthread_mutex_init(&stru_119988, 0);
    dword_1199A0 = 1;
    pthread_create((pthread_t *)&dword_1199A4, 0, (void *(*)(void *))sub_666D4, 0);
    dword_119968 = 1;
  }
  return 0;
}
