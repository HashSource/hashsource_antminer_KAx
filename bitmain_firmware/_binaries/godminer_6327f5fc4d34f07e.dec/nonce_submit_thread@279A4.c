void __noreturn nonce_submit_thread()
{
  int v0; // r11
  int *all_created_runtime; // r7
  char *v2; // r4
  int v3; // r0
  pthread_t v4; // r0
  int v5; // r7
  int v6; // r4
  const char *v7; // r0
  double v8; // d7
  double v9; // d5
  double v10; // d7
  __int64 v11; // kr08_8
  int v12; // [sp+14h] [bp-1890h]
  int v13; // [sp+2Ch] [bp-1878h] BYREF
  _QWORD v14[128]; // [sp+30h] [bp-1874h] BYREF
  void *dest[284]; // [sp+430h] [bp-1474h] BYREF
  char v16[4100]; // [sp+8A0h] [bp-1004h] BYREF

  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v13);
  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v16, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/god-miner.c",
    139,
    "nonce_submit_thread",
    19,
    301,
    40,
    v16);
  prctl(15, v2);
  v4 = pthread_self();
  pthread_detach(v4);
  v5 = *all_created_runtime;
  while ( 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _QWORD *))(v5 + 32))(v5, v14);
      if ( v14[0] < (unsigned __int64)total_pools )
      {
        v6 = *(_DWORD *)(pools + 4 * LODWORD(v14[0]));
        if ( v6 )
          break;
      }
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, "the pool is NULL");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "nonce_submit_thread",
        19,
        316,
        80,
        v16);
    }
    pthread_mutex_lock((pthread_mutex_t *)(v6 + 1584));
    if ( dest[281] )
    {
      free(dest[281]);
      dest[281] = 0;
    }
    memcpy(dest, (const void *)(v6 + 448), sizeof(dest));
    v7 = *(const char **)(v6 + 1572);
    if ( v7 )
      dest[281] = _strdup(v7);
    v12 = (*(int (__fastcall **)(void **, int, _QWORD *))(*(_DWORD *)(v0 + 68) + 8))(dest, v6, v14);
    pthread_mutex_unlock((pthread_mutex_t *)(v6 + 1584));
    if ( v12 == 1 )
    {
      v8 = *(double *)(v6 + 1800);
      v9 = total_diff_stale + v8;
      v10 = *(double *)(v6 + 1808) + v8;
      v11 = *(_QWORD *)&total_stale + 1LL;
      ++*(_DWORD *)(v6 + 1632);
      total_stale = v11;
      total_diff_stale = v9;
      *(double *)(v6 + 1808) = v10;
      dword_11A7DC = HIDWORD(v11);
    }
    else
    {
      workio_submit_work((int)dest, (unsigned __int8 *)v6);
    }
  }
}
