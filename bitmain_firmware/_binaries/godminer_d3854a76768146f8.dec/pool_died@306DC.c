int __fastcall pool_died(int *a1)
{
  pthread_mutex_t *v1; // r5
  int v3; // r6
  int result; // r0
  int v5; // r5
  int *v6; // r7
  char *v7; // r1
  int v8; // r4
  int v9; // r1
  int v10; // r2
  char *v11; // r1
  int v12; // r4
  int v13; // r1
  _DWORD v14[7]; // [sp+28h] [bp-1044h] BYREF
  int v15; // [sp+44h] [bp-1028h]
  _DWORD v16[7]; // [sp+48h] [bp-1024h] BYREF
  int v17; // [sp+64h] [bp-1008h]
  char v18[4100]; // [sp+68h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 456);
  pthread_mutex_lock((pthread_mutex_t *)a1 + 76);
  v3 = *((unsigned __int8 *)a1 + 1904);
  *((_BYTE *)a1 + 1904) = 1;
  result = pthread_mutex_unlock(v1);
  if ( !v3 )
  {
    LOWORD(v5) = 16960;
    HIWORD(v5) = (unsigned int)&unk_175730 >> 16;
    cgtime((struct timeval *)(a1 + 477));
    sub_2FD8C(a1, 1);
    pthread_mutex_lock((pthread_mutex_t *)(v5 + 4));
    v6 = *(int **)(v5 + 0x1C);
    pthread_mutex_unlock((pthread_mutex_t *)(v5 + 4));
    V_LOCK();
    if ( a1 == v6 )
    {
      v10 = *a1;
      LOWORD(v11) = 5040;
      HIWORD(v11) = (unsigned int)"ot a valid byte!" >> 16;
      LOWORD(v12) = 7852;
      V_INT((int)v14, v11, v10);
      HIWORD(v12) = (unsigned int)"ms" >> 16;
      logfmt_raw(v18, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, v12);
      V_UNLOCK();
      LOWORD(v13) = 7452;
      HIWORD(v13) = (unsigned int)"se" >> 16;
      zlog(g_zc, v13, 134, "pool_died", 9, 402, 80, v18);
      return switch_pools();
    }
    else
    {
      LOWORD(v7) = 5040;
      HIWORD(v7) = (unsigned int)"ot a valid byte!" >> 16;
      V_INT((int)v16, v7, *a1);
      LOWORD(v8) = 7868;
      HIWORD(v8) = (unsigned int)"ng.notify" >> 16;
      logfmt_raw(v18, 0x1000u, 0, v17, v16[0], v16[1], v16[2], v16[3], v16[4], v16[5], v16[6], v17, v8);
      V_UNLOCK();
      LOWORD(v9) = 7452;
      HIWORD(v9) = (unsigned int)"se" >> 16;
      return zlog(g_zc, v9, 134, "pool_died", 9, 405, 20, v18);
    }
  }
  return result;
}
