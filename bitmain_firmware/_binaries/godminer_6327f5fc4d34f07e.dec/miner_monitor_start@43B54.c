int miner_monitor_start()
{
  void *(*v0)(void *); // r2
  pthread_t newthread[2]; // [sp+4h] [bp-8h] BYREF

  LOWORD(v0) = 14504;
  HIWORD(v0) = (unsigned int)&loc_4DEA0 >> 16;
  pthread_create(newthread, 0, v0, 0);
  return pthread_detach(newthread[0]);
}
