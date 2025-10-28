int __fastcall pool_died(int *a1)
{
  pthread_mutex_t *v1; // r5
  int v3; // r6
  int result; // r0
  int *v5; // r7
  char *v6; // r1
  int v7; // r4
  int v8; // r1
  int v9; // r2
  char *v10; // r1
  int v11; // r4
  int v12; // r1
  _DWORD v13[7]; // [sp+28h] [bp-1044h] BYREF
  int v14; // [sp+44h] [bp-1028h]
  _DWORD v15[7]; // [sp+48h] [bp-1024h] BYREF
  int v16; // [sp+64h] [bp-1008h]
  char v17[4100]; // [sp+68h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 456);
  pthread_mutex_lock((pthread_mutex_t *)a1 + 76);
  v3 = *((unsigned __int8 *)a1 + 1904);
  *((_BYTE *)a1 + 1904) = 1;
  result = pthread_mutex_unlock(v1);
  if ( !v3 )
  {
    cgtime((struct timeval *)(a1 + 477));
    sub_31C1C(a1, 1);
    pthread_mutex_lock(&mutex);
    v5 = (int *)dword_195A34;
    pthread_mutex_unlock(&mutex);
    V_LOCK();
    if ( a1 == v5 )
    {
      v9 = *a1;
      LOWORD(v10) = -31340;
      HIWORD(v10) = (unsigned int)"has come" >> 16;
      LOWORD(v11) = -30148;
      V_INT((int)v13, v10, v9);
      HIWORD(v11) = (unsigned int)"%s" >> 16;
      logfmt_raw(v17, 0x1000u, 0, v14, v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v14, v11);
      V_UNLOCK();
      LOWORD(v12) = -30544;
      HIWORD(v12) = (unsigned int)" pool %d" >> 16;
      zlog(g_zc, v12, 134, "pool_died", 9, 406, 80, v17);
      return switch_pools();
    }
    else
    {
      LOWORD(v6) = -31340;
      HIWORD(v6) = (unsigned int)"has come" >> 16;
      V_INT((int)v15, v6, *a1);
      LOWORD(v7) = -30132;
      HIWORD(v7) = (unsigned int)"after removed = %d" >> 16;
      logfmt_raw(v17, 0x1000u, 0, v16, v15[0], v15[1], v15[2], v15[3], v15[4], v15[5], v15[6], v16, v7);
      V_UNLOCK();
      LOWORD(v8) = -30544;
      HIWORD(v8) = (unsigned int)" pool %d" >> 16;
      return zlog(g_zc, v8, 134, "pool_died", 9, 409, 20, v17);
    }
  }
  return result;
}
