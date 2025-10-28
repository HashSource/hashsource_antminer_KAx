int gpio_init()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_1B4194 )
  {
    strcpy(v1, "gpio re init");
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
    pthread_mutex_init(&stru_1B4198, 0);
    dword_1B41B0 = (int)new_c_map(784440, 0, 0);
    pthread_mutex_init(&stru_1B41B4, 0);
    dword_1B41CC = 1;
    pthread_create((pthread_t *)&dword_1B41D0, 0, (void *(*)(void *))sub_C0A08, 0);
    dword_1B4194 = 1;
  }
  return 0;
}
