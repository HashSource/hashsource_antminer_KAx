int start_dag_gen_engine_2282()
{
  void *(*v0)(void *); // r2
  int v2; // r3
  int v3; // r1
  char v4[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    LOWORD(v2) = -13172;
    HIWORD(v2) = (unsigned int)&unk_14CE54 >> 16;
    logfmt_raw(v4, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = -7328;
    HIWORD(v3) = (unsigned int)"size %llx, dag size %llx" >> 16;
    zlog(g_zc, v3, 174, "start_dag_gen_engine_2282", 25, 270, 100, v4);
    return 1;
  }
  else
  {
    LOWORD(v0) = 32244;
    HIWORD(v0) = (unsigned int)&loc_57FAC >> 16;
    pthread_create(&dword_19370C, 0, v0, 0);
    return 0;
  }
}
