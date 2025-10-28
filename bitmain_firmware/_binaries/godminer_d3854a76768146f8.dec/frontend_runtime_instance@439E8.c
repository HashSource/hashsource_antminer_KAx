int frontend_runtime_instance()
{
  int *v0; // r3
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v0) = 20072;
  HIWORD(v0) = (unsigned int)&unk_176358 >> 16;
  v1 = *v0;
  if ( !*v0 )
  {
    V_LOCK();
    LOWORD(v3) = 19664;
    HIWORD(v3) = (unsigned int)"d times:%d" >> 16;
    logfmt_raw(v5, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v4) = 19504;
    HIWORD(v4) = (unsigned int)"%.2f, sweep_level_freq: %d  sweep_matrix:\n%s" >> 16;
    zlog(g_zc, v4, 157, "frontend_runtime_instance", 25, 74, 100, v5);
  }
  return v1;
}
