int __fastcall workio_submit_work(int a1, pthread_mutex_t *a2)
{
  int v4; // r7
  int v5; // r5
  int v6; // r10
  int v7; // r6
  int lock; // r2
  char *v10; // r1
  int v11; // r4
  int v12; // r1
  unsigned int v13; // r1
  int owner; // r2
  char *v15; // r1
  int v16; // lr
  int v17; // r1
  _DWORD v18[7]; // [sp+38h] [bp-1C24h] BYREF
  int v19; // [sp+54h] [bp-1C08h]
  _DWORD v20[7]; // [sp+58h] [bp-1C04h] BYREF
  int v21; // [sp+74h] [bp-1BE8h]
  char v22[4100]; // [sp+C58h] [bp-1004h] BYREF

  v4 = frontend_runtime_instance();
  v5 = pool_tget(a2, (unsigned __int8 *)&a2[79].__size[8]);
  if ( v5 )
  {
    V_LOCK();
    lock = a2->__lock;
    LOWORD(v10) = 5040;
    HIWORD(v10) = (unsigned int)"ot a valid byte!" >> 16;
    LOWORD(v11) = 5048;
    V_INT((int)v20, v10, lock);
    HIWORD(v11) = (unsigned int)"id byte!" >> 16;
    logfmt_raw(v22, 0x1000u, 0, v21, v20[0], v20[1], v20[2], v20[3], v20[4], v20[5], v20[6], v21, v11);
    V_UNLOCK();
    LOWORD(v12) = 4232;
    HIWORD(v12) = (unsigned int)&unk_132994 >> 16;
    zlog(g_zc, v12, 139, "workio_submit_work", 18, 143, 20, v22);
    return 0;
  }
  else
  {
    LOWORD(v6) = 16584;
    HIWORD(v6) = (unsigned int)&unk_1755B8 >> 16;
    update_pool_diff1_of_all_runtimes(&a2->__lock);
    (*(void (__fastcall **)(int, pthread_mutex_t *, _DWORD *))(v4 + 32))(a1, a2, v20);
    while ( 1 )
    {
      v7 = (*(int (__fastcall **)(pthread_mutex_t *, _DWORD *))(v4 + 12))(a2, v20);
      if ( v7 )
        break;
      v13 = *(_DWORD *)(v6 + 0x90);
      owner = a2[81].__owner;
      ++total_ro;
      *(_DWORD *)(v6 + 0x90) = v13 + 1;
      a2[81].__owner = owner + 1;
      if ( v13 % 0x2710 )
      {
        if ( v5 == 3 )
          return v7;
      }
      else
      {
        V_LOCK();
        LOWORD(v15) = 5040;
        HIWORD(v15) = (unsigned int)"ot a valid byte!" >> 16;
        V_INT((int)v18, v15, a2->__lock);
        LOWORD(v16) = 5076;
        HIWORD(v16) = (unsigned int)"string %f %s" >> 16;
        logfmt_raw(v22, 0x1000u, 0, v19, v18[0], v18[1], v18[2], v18[3], v18[4], v18[5], v18[6], v19, v16, 0, v5);
        V_UNLOCK();
        LOWORD(v17) = 4232;
        HIWORD(v17) = (unsigned int)&unk_132994 >> 16;
        zlog(g_zc, v17, 139, "workio_submit_work", 18, 157, 100, v22);
        if ( v5 == 3 )
          return v7;
      }
      ++v5;
    }
    return v7;
  }
}
