void __noreturn nonce_submit_thread()
{
  int v0; // r11
  int *all_created_runtime; // r5
  char *v2; // r4
  int v3; // r0
  int v4; // r3
  int v5; // r1
  pthread_t v6; // r0
  int v7; // r6
  int v8; // r2
  int v9; // r1
  int v10; // r4
  const char *v11; // r0
  double v12; // d7
  double v13; // d5
  int v14; // r2
  bool v15; // cf
  double v16; // d7
  int v17; // r1
  int v18; // [sp+14h] [bp-102Ch]
  int v19; // [sp+1Ch] [bp-1024h]
  int v20; // [sp+20h] [bp-1020h]
  int v21; // [sp+2Ch] [bp-1014h] BYREF
  void *dest[284]; // [sp+30h] [bp-1010h] BYREF
  _QWORD v23[375]; // [sp+4A0h] [bp-BA0h] BYREF
  char v24[4100]; // [sp+1058h] [bp+18h] BYREF

  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v21);
  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK();
  v3 = syscall(224);
  LOWORD(v4) = -31096;
  HIWORD(v4) = (unsigned int)"tum_threads" >> 16;
  logfmt_raw(v24, 0x1000u, 0, v4, v2, v3);
  V_UNLOCK();
  LOWORD(v5) = -31304;
  HIWORD(v5) = (unsigned int)" cancel %d" >> 16;
  zlog(g_zc, v5, 135, "nonce_submit_thread", 19, 230, 40, v24);
  prctl(15, v2);
  v6 = pthread_self();
  pthread_detach(v6);
  v7 = *all_created_runtime;
  LOWORD(v8) = -30816;
  LOWORD(v9) = -31304;
  HIWORD(v8) = (unsigned int)"ease/build/godminer-origin_godminer-new/pool.c" >> 16;
  HIWORD(v9) = (unsigned int)" cancel %d" >> 16;
  v19 = v8;
  v20 = v9;
  while ( 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _QWORD *))(v7 + 44))(v7, v23);
      if ( v23[0] < (unsigned __int64)total_pools )
      {
        v10 = *(_DWORD *)(pools + 4 * LODWORD(v23[0]));
        if ( v10 )
          break;
      }
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, v19);
      V_UNLOCK();
      zlog(g_zc, v20, 135, "nonce_submit_thread", 19, 250, 80, v24);
    }
    pthread_mutex_lock((pthread_mutex_t *)(v10 + 1592));
    if ( dest[281] )
    {
      free(dest[281]);
      dest[281] = 0;
    }
    memcpy(dest, (const void *)(v10 + 456), sizeof(dest));
    v11 = *(const char **)(v10 + 1580);
    if ( v11 )
      dest[281] = _strdup(v11);
    v18 = (*(int (__fastcall **)(void **, int, _QWORD *))(*(_DWORD *)(v0 + 72) + 8))(dest, v10, v23);
    pthread_mutex_unlock((pthread_mutex_t *)(v10 + 1592));
    if ( v18 == 1 )
    {
      v12 = *(double *)(v10 + 1808);
      v13 = *(double *)(v10 + 1816) + v12;
      v14 = dword_1B506C;
      v15 = __CFADD__(total_stale, 1);
      v16 = total_diff_stale + v12;
      v17 = *(_DWORD *)(v10 + 1640) + 1;
      ++total_stale;
      *(_DWORD *)(v10 + 1640) = v17;
      dword_1B506C = v15 + v14;
      *(double *)(v10 + 1816) = v13;
      total_diff_stale = v16;
    }
    else
    {
      workio_submit_work((int)dest, (pthread_mutex_t *)v10);
    }
  }
}
