int start_dag_gen_engine_rvn()
{
  void *(*v0)(void *); // r2
  pthread_t *v1; // r0
  int v3; // r3
  int v4; // r1
  char v5[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    LOWORD(v3) = 24492;
    HIWORD(v3) = (unsigned int)&unk_137A00 >> 16;
    logfmt_raw(v5, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v4) = 30260;
    HIWORD(v4) = (unsigned int)"s" >> 16;
    zlog(g_zc, v4, 164, "start_dag_gen_engine_rvn", 24, 452, 100, v5);
    return 1;
  }
  else
  {
    LOWORD(v0) = 10548;
    LOWORD(v1) = 9932;
    HIWORD(v0) = ((unsigned int)&dbl_535F0 + 4) >> 16;
    HIWORD(v1) = (unsigned int)&unk_1736EC >> 16;
    pthread_create(v1, 0, v0, 0);
    return 0;
  }
}
