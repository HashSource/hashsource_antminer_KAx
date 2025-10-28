int start_dag_gen_engine()
{
  void *(*v0)(void *); // r2
  int v2; // r3
  int v3; // r3
  int v4; // r1
  char v5[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    LOWORD(v2) = -13172;
    HIWORD(v2) = (unsigned int)&unk_14CE54 >> 16;
    logfmt_raw(v5, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = -7808;
    LOWORD(v4) = 24984;
    HIWORD(v3) = (unsigned int)&unk_14E348 >> 16;
    HIWORD(v4) = (unsigned int)&unk_156360 >> 16;
    zlog(g_zc, v4, 164, v3, 20, 345, 100, v5);
    return 1;
  }
  else
  {
    LOWORD(v0) = 29824;
    HIWORD(v0) = (unsigned int)&loc_57638 >> 16;
    pthread_create((pthread_t *)&dword_193704, 0, v0, 0);
    return 0;
  }
}
