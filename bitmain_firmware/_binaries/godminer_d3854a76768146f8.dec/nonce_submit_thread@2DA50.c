void __noreturn nonce_submit_thread()
{
  _DWORD *v0; // r9
  int v1; // r11
  int *all_created_runtime; // r5
  char *v3; // r4
  int v4; // r0
  int v5; // r3
  int v6; // r1
  int *v7; // r8
  pthread_t v8; // r0
  int v9; // r6
  int v10; // r2
  int v11; // r1
  int v12; // r4
  const char *v13; // r0
  double v14; // d7
  double v15; // d5
  int v16; // r2
  bool v17; // cf
  double v18; // d7
  int v19; // r1
  int v20; // [sp+14h] [bp-102Ch]
  int v21; // [sp+1Ch] [bp-1024h]
  int v22; // [sp+20h] [bp-1020h]
  int v23; // [sp+2Ch] [bp-1014h] BYREF
  void *dest[284]; // [sp+30h] [bp-1010h] BYREF
  _QWORD v25[375]; // [sp+4A0h] [bp-BA0h] BYREF
  char v26[4100]; // [sp+1058h] [bp+18h] BYREF

  LOWORD(v0) = 17044;
  v1 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v23);
  v3 = (char *)calloc(1u, 0x40u);
  snprintf(v3, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK();
  v4 = syscall(224);
  LOWORD(v5) = 4216;
  HIWORD(v5) = (unsigned int)&unk_132984 >> 16;
  logfmt_raw(v26, 0x1000u, 0, v5, v3, v4);
  V_UNLOCK();
  LOWORD(v6) = 4232;
  HIWORD(v6) = (unsigned int)&unk_132994 >> 16;
  LOWORD(v7) = 17040;
  zlog(g_zc, v6, 139, "nonce_submit_thread", 19, 306, 40, v26);
  prctl(15, v3);
  v8 = pthread_self();
  pthread_detach(v8);
  v9 = *all_created_runtime;
  LOWORD(v10) = 5136;
  LOWORD(v11) = 4232;
  HIWORD(v10) = (unsigned int)"le %f %s" >> 16;
  HIWORD(v11) = (unsigned int)&unk_132994 >> 16;
  v21 = v10;
  v22 = v11;
  while ( 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _QWORD *))(v9 + 40))(v9, v25);
      HIWORD(v7) = (unsigned int)&unk_175780 >> 16;
      if ( v25[0] < (unsigned __int64)*v7 )
      {
        HIWORD(v0) = (unsigned int)&unk_175784 >> 16;
        v12 = *(_DWORD *)(*v0 + 4 * LODWORD(v25[0]));
        if ( v12 )
          break;
      }
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, v21);
      V_UNLOCK();
      zlog(g_zc, v22, 139, "nonce_submit_thread", 19, 321, 80, v26);
    }
    pthread_mutex_lock((pthread_mutex_t *)(v12 + 1592));
    if ( dest[281] )
    {
      free(dest[281]);
      dest[281] = 0;
    }
    memcpy(dest, (const void *)(v12 + 456), sizeof(dest));
    v13 = *(const char **)(v12 + 1580);
    if ( v13 )
      dest[281] = _strdup(v13);
    v20 = (*(int (__fastcall **)(void **, int, _QWORD *))(*(_DWORD *)(v1 + 72) + 8))(dest, v12, v25);
    pthread_mutex_unlock((pthread_mutex_t *)(v12 + 1592));
    if ( v20 == 1 )
    {
      v14 = *(double *)(v12 + 1808);
      v15 = *(double *)(v12 + 1816) + v14;
      v16 = dword_18B2C4;
      v17 = __CFADD__(total_stale, 1);
      v18 = total_diff_stale + v14;
      v19 = *(_DWORD *)(v12 + 1640) + 1;
      ++total_stale;
      *(_DWORD *)(v12 + 1640) = v19;
      dword_18B2C4 = v17 + v16;
      *(double *)(v12 + 1816) = v15;
      total_diff_stale = v18;
    }
    else
    {
      workio_submit_work((int)dest, (pthread_mutex_t *)v12);
    }
  }
}
