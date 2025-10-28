int __fastcall stratum_disconnect(pthread_mutex_t *a1)
{
  pthread_mutex_t *v1; // r6
  int kind; // r0
  _BYTE *spins; // r3
  char *v5; // r1
  int v6; // r4
  int v7; // r1
  _DWORD v9[7]; // [sp+28h] [bp-1020h] BYREF
  int v10; // [sp+44h] [bp-1004h]
  char v11[4096]; // [sp+48h] [bp-1000h] BYREF

  v1 = a1 + 2;
  pthread_mutex_lock(a1 + 2);
  kind = a1[1].__kind;
  if ( kind != -1 )
  {
    shutdown(kind, 2);
    close(a1[1].__kind);
    spins = (_BYTE *)a1[1].__spins;
    a1[1].__kind = -1;
    *spins = 0;
    V_LOCK();
    LOWORD(v5) = 5040;
    HIWORD(v5) = (unsigned int)"ot a valid byte!" >> 16;
    V_INT((int)v9, v5, a1->__lock);
    LOWORD(v6) = 9452;
    HIWORD(v6) = (unsigned int)"dash.c" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, v6);
    V_UNLOCK();
    LOWORD(v7) = 8820;
    HIWORD(v7) = (unsigned int)"once2_size" >> 16;
    zlog(g_zc, v7, 145, "stratum_disconnect", 18, 227, 20, v11);
  }
  return pthread_mutex_unlock(v1);
}
