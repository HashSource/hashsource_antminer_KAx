int check_and_destroy_abnormal_runtime()
{
  pthread_mutex_t *v0; // r8
  int v1; // r7
  int v2; // r5
  int v3; // r3
  void **v4; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // t1
  int v7; // r1
  int v8; // r1
  int *v9; // r3
  _DWORD *v10; // r2
  int v11; // t1
  pthread_mutex_t *v12; // r0
  int v14; // [sp+14h] [bp-1408h]
  _DWORD s[256]; // [sp+18h] [bp-1404h] BYREF
  char v16[4100]; // [sp+418h] [bp-1004h] BYREF

  LOWORD(v0) = 8176;
  HIWORD(v0) = (unsigned int)&unk_1834B0 >> 16;
  memset(s, 0, sizeof(s));
  pthread_mutex_lock(v0);
  if ( v0[1].__lock > 0 )
  {
    v2 = 0;
    LOWORD(v3) = -27256;
    v1 = 0;
    v4 = (void **)&v0[1];
    HIWORD(v3) = (unsigned int)"02x, reg %02x, core_mode %08x" >> 16;
    v14 = v3;
    do
    {
      v6 = v4[1];
      ++v4;
      v5 = v6;
      if ( v6[100] == v6[78] )
      {
        s[v1++] = v5;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v16, 0x1000u, 0, v14, *((_DWORD *)*v4 + 58));
        V_UNLOCK();
        LOWORD(v7) = -27412;
        HIWORD(v7) = (unsigned int)"8x" >> 16;
        zlog(g_zc, v7, 155, "check_and_destroy_abnormal_runtime", 34, 113, 80, v16);
        V_LOCK();
        logfmt_raw(v16, 0x1000u, 0, "Sweep error string = J%d:2.", *((_DWORD *)*v4 + 58));
        V_UNLOCK();
        LOWORD(v8) = -27412;
        HIWORD(v8) = (unsigned int)"8x" >> 16;
        zlog(g_zc, v8, 155, "check_and_destroy_abnormal_runtime", 34, 114, 100, v16);
        (*((void (**)(void))*v4 + 5))();
        (*((void (**)(void))*v4 + 7))();
        free(*v4);
        *v4 = 0;
      }
      ++v2;
    }
    while ( v0[1].__lock > v2 );
    if ( v1 )
    {
      v9 = s;
      v10 = &unk_18200C;
      do
      {
        v11 = *v9++;
        *v10++ = v11;
      }
      while ( v9 != &s[v1] );
    }
  }
  else
  {
    v1 = 0;
  }
  LOWORD(v12) = 8176;
  v0[1].__lock = v1;
  HIWORD(v12) = (unsigned int)&unk_1834B0 >> 16;
  return pthread_mutex_unlock(v12);
}
