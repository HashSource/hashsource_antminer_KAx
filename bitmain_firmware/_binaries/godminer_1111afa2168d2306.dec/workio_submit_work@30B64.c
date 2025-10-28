int __fastcall workio_submit_work(int a1, pthread_mutex_t *a2)
{
  int v4; // r7
  int v5; // r5
  int v6; // r6
  int lock; // r2
  char *v9; // r1
  int v10; // r4
  int v11; // r1
  int v12; // r3
  int v13; // r1
  __int64 v14; // r2
  char *v15; // r1
  int v16; // lr
  int v17; // r3
  int v18; // r1
  _DWORD v19[7]; // [sp+38h] [bp-1C24h] BYREF
  int v20; // [sp+54h] [bp-1C08h]
  _DWORD v21[7]; // [sp+58h] [bp-1C04h] BYREF
  int v22; // [sp+74h] [bp-1BE8h]
  char v23[4100]; // [sp+C58h] [bp-1004h] BYREF

  v4 = frontend_runtime_instance();
  v5 = pool_tget(a2, (unsigned __int8 *)&a2[79].__size[8]);
  if ( v5 )
  {
    V_LOCK();
    lock = a2->__lock;
    LOWORD(v9) = -31340;
    HIWORD(v9) = (unsigned int)"has come" >> 16;
    LOWORD(v10) = -31332;
    V_INT((int)v21, v9, lock);
    HIWORD(v10) = (unsigned int)"" >> 16;
    logfmt_raw(v23, 0x1000u, 0, v22, v21[0], v21[1], v21[2], v21[3], v21[4], v21[5], v21[6], v22, v10);
    V_UNLOCK();
    LOWORD(v11) = -31304;
    LOWORD(v12) = -31460;
    HIWORD(v12) = (unsigned int)"" >> 16;
    HIWORD(v11) = (unsigned int)" cancel %d" >> 16;
    zlog(g_zc, v11, 135, v12, 18, 18, 20, v23);
    return 0;
  }
  else
  {
    update_pool_diff1_of_all_runtimes(&a2->__lock);
    (*(void (__fastcall **)(int, pthread_mutex_t *, _DWORD *))(v4 + 32))(a1, a2, v21);
    while ( 1 )
    {
      v6 = (*(int (__fastcall **)(pthread_mutex_t *, _DWORD *))(v4 + 12))(a2, v21);
      if ( v6 )
        break;
      v13 = dword_195A14;
      v14 = 3518437209LL * (unsigned int)dword_195A14;
      LODWORD(v14) = a2[81].__owner;
      ++total_ro;
      ++dword_195A14;
      a2[81].__owner = v14 + 1;
      if ( v13 == 10000 * (HIDWORD(v14) >> 13) )
      {
        V_LOCK();
        LOWORD(v15) = -31340;
        HIWORD(v15) = (unsigned int)"has come" >> 16;
        V_INT((int)v19, v15, a2->__lock);
        LOWORD(v16) = -31168;
        HIWORD(v16) = (unsigned int)" is NULL" >> 16;
        logfmt_raw(v23, 0x1000u, 0, v20, v19[0], v19[1], v19[2], v19[3], v19[4], v19[5], v19[6], v20, v16, 0, v5);
        V_UNLOCK();
        LOWORD(v17) = -31460;
        LOWORD(v18) = -31304;
        HIWORD(v17) = (unsigned int)"" >> 16;
        HIWORD(v18) = (unsigned int)" cancel %d" >> 16;
        zlog(g_zc, v18, 135, v17, 18, 34, 100, v23);
        if ( v5 == 3 )
          return v6;
      }
      else if ( v5 == 3 )
      {
        return v6;
      }
      ++v5;
    }
    return v6;
  }
}
