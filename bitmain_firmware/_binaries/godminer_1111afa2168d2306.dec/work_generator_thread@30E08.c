void __noreturn work_generator_thread()
{
  int v0; // r5
  int *all_created_runtime; // r6
  int *v2; // r0
  unsigned __int64 v3; // r2
  int v4; // t1
  unsigned __int64 v5; // r8
  int v6; // r9
  char *v7; // r7
  int v8; // r0
  int v9; // r3
  int v10; // r1
  pthread_mutex_t *current_pool; // r0
  pthread_mutex_t *v12; // r7
  int v13; // r0
  int v14; // r3
  int v15; // r2
  int v16; // r1
  int v17; // r6
  char *v18; // r8
  int v19; // r2
  time_t v20; // r0
  int v21; // r3
  int v22; // t1
  int v23; // r2
  int v24; // r1
  unsigned __int64 *v25; // r2
  int v26; // r12
  int v27; // r3
  unsigned __int64 v28; // r6
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r0
  unsigned __int64 v31; // t1
  bool v32; // cf
  int v33; // r3
  int v34; // r3
  int v35; // r2
  int v36; // r0
  int v37; // r1
  int v38; // r3
  int v39; // r3
  void *v40; // r0
  int lock; // r2
  const char *spins; // r0
  int v43; // [sp+1Ch] [bp-14B0h]
  int v44; // [sp+20h] [bp-14ACh]
  char *v45; // [sp+38h] [bp-1494h]
  int v46; // [sp+4Ch] [bp-1480h] BYREF
  struct timespec v47; // [sp+50h] [bp-147Ch] BYREF
  _DWORD s[284]; // [sp+58h] [bp-1474h] BYREF
  struct timespec v49[512]; // [sp+4C8h] [bp-1004h] BYREF

  v46 = 0;
  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v46);
  memset(s, 0, sizeof(s));
  if ( v46 <= 0 )
  {
    v44 = 0;
    v43 = -1000;
  }
  else
  {
    v2 = all_created_runtime;
    v3 = -1;
    do
    {
      v4 = *v2++;
      v5 = *(_QWORD *)(v4 + 1016);
      if ( v3 > v5 )
        v3 = v5;
    }
    while ( &all_created_runtime[v46] != v2 );
    v44 = (int)v3 / 1000000;
    v43 = 1000 * ((int)v3 % 1000000);
  }
  v6 = 0;
  v7 = (char *)calloc(1u, 0x40u);
  snprintf(v7, 0x40u, "%.10s_%d", "work_generator_thread", 0);
  V_LOCK();
  v8 = syscall(224);
  LOWORD(v9) = -31096;
  HIWORD(v9) = (unsigned int)"tum_threads" >> 16;
  logfmt_raw((char *)v49, 0x1000u, 0, v9, v7, v8);
  V_UNLOCK();
  LOWORD(v10) = -31304;
  HIWORD(v10) = (unsigned int)" cancel %d" >> 16;
  zlog(g_zc, v10, 135, "work_generator_thread", 21, 112, 40, v49);
  v45 = (char *)(all_created_runtime - 1);
  prctl(15, v7);
  clock_gettime(1, (struct timespec *)&send_job_timer);
  while ( 1 )
  {
LABEL_9:
    while ( 1 )
    {
      current_pool = (pthread_mutex_t *)get_current_pool();
      v12 = current_pool;
      if ( current_pool )
        break;
LABEL_34:
      V_LOCK();
      LOWORD(v33) = -31080;
      HIWORD(v33) = (unsigned int)"pool" >> 16;
      logfmt_raw((char *)v49, 0x1000u, (int)v12, v33);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner.c",
        135,
        "work_generator_thread",
        21,
        133,
        20,
        v49);
    }
    while ( 1 )
    {
      if ( pool_tget(current_pool, (unsigned __int8 *)&v12[79].__size[8]) )
        goto LABEL_37;
      clock_gettime(1, v49);
      v47.tv_nsec = (v43 + v49[0].tv_nsec) % 1000000000;
      v47.tv_sec = (v43 + v49[0].tv_nsec) / 1000000000 + v49[0].tv_sec + v44;
      v13 = pool_twait_to_be_expected_and_set((int)v12, &v12[79].__size[20], 1, 0, &v47);
      if ( v13 == 1 )
        break;
      if ( v13 == 110 )
      {
        V_LOCK();
        LOWORD(v39) = -31016;
        HIWORD(v39) = (unsigned int)"orker" >> 16;
        logfmt_raw((char *)v49, 0x1000u, 0, v39);
        V_UNLOCK();
        v15 = 153;
      }
      else
      {
        V_LOCK();
        LOWORD(v14) = -30988;
        HIWORD(v14) = (unsigned int)"_change_function" >> 16;
        logfmt_raw((char *)v49, 0x1000u, 0, v14);
        V_UNLOCK();
        v15 = 157;
      }
      LOWORD(v16) = -31304;
      HIWORD(v16) = (unsigned int)" cancel %d" >> 16;
      zlog(g_zc, v16, 135, "work_generator_thread", 21, v15, 20, v49);
      pthread_mutex_lock((pthread_mutex_t *)((char *)v12 + 1592));
      if ( pool_tget(v12, (unsigned __int8 *)&v12[66]) )
      {
        pthread_mutex_unlock((pthread_mutex_t *)((char *)v12 + 1592));
        V_LOCK();
        logfmt_raw(
          (char *)v49,
          0x1000u,
          0,
          "work generator: jobid %p cancel %d",
          v12[65].__spins,
          (unsigned __int8)v12[66].__size[0]);
        V_UNLOCK();
        v35 = 164;
        v36 = g_zc;
        goto LABEL_36;
      }
      if ( (*(int (__fastcall **)(_DWORD *, pthread_mutex_t *))(v0 + 36))(s, v12) == 2 )
      {
        V_LOCK();
        logfmt_raw(
          (char *)v49,
          0x1000u,
          0,
          "poolno=%d work generator switched to new job %s",
          v12->__lock,
          v12[65].__spins);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner.c",
          135,
          "work_generator_thread",
          21,
          172,
          20,
          v49);
        v40 = (void *)s[281];
        lock = v12[68].__lock;
        ++*(_QWORD *)&total_getworks;
        v12[68].__lock = lock + 1;
        if ( v40 )
        {
          free(v40);
          s[281] = 0;
        }
        v6 = 1;
        memcpy(s, &v12[19], sizeof(s));
        spins = (const char *)v12[65].__spins;
        if ( spins )
          s[281] = _strdup(spins);
      }
      pthread_mutex_unlock((pthread_mutex_t *)((char *)v12 + 1592));
      if ( !s[281] )
        goto LABEL_9;
      s[274] = v12[3].__owner;
      if ( v46 > 0 )
      {
        v17 = 0;
        v18 = v45;
        do
        {
          if ( v17 )
            v19 = 0;
          else
            v19 = v6;
          ++v17;
          (**(void (__fastcall ***)(_DWORD *, pthread_mutex_t *, int))(v0 + 72))(s, v12, v19);
          ++local_work;
          v20 = time(0);
          v21 = *(_DWORD *)(v0 + 72);
          last_getwork = v20;
          v22 = *((_DWORD *)v18 + 1);
          v18 += 4;
          (*(void (__fastcall **)(int, _DWORD *))(v21 + 4))(v22, s);
        }
        while ( v46 > v17 );
      }
      V_LOCK();
      clock_gettime(1, &tp);
      if ( v6 )
      {
        logfmt_raw(
          (char *)v49,
          0x1000u,
          0,
          "New job pushed after %lld ms",
          1000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_1B52EC) / 1000000);
        V_UNLOCK();
        v23 = 200;
      }
      else
      {
        LOWORD(v38) = -30852;
        HIWORD(v38) = (unsigned int)"lease/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/pool.c" >> 16;
        logfmt_raw(
          (char *)v49,
          0x1000u,
          0,
          v38,
          1000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_1B52EC) / 1000000);
        V_UNLOCK();
        v23 = 204;
      }
      LOWORD(v24) = -31304;
      HIWORD(v24) = (unsigned int)" cancel %d" >> 16;
      zlog(g_zc, v24, 135, "work_generator_thread", 21, v23, 20, v49);
      clock_gettime(1, &tp);
      v25 = max_timeout_value;
      v26 = 0;
      v27 = 0;
      v28 = -1;
      v29 = (int)&loc_F4240 * (__int64)(tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_1B52EC) / 1000;
      do
      {
        v31 = *v25++;
        v30 = v31;
        v32 = v31 >= v28;
        if ( v31 < v28 )
          v26 = v27;
        ++v27;
        if ( !v32 )
          v28 = v30;
      }
      while ( v27 != 10 );
      if ( v29 > v28 )
        max_timeout_value[v26] = v29;
      v6 = 0;
      clock_gettime(1, (struct timespec *)&send_job_timer);
      current_pool = (pthread_mutex_t *)get_current_pool();
      v12 = current_pool;
      if ( !current_pool )
        goto LABEL_34;
    }
    V_LOCK();
    LOWORD(v34) = -31040;
    HIWORD(v34) = (unsigned int)"pool_died" >> 16;
    logfmt_raw((char *)v49, 0x1000u, 0, v34);
    V_UNLOCK();
    v35 = 147;
    v36 = g_zc;
LABEL_36:
    LOWORD(v37) = -31304;
    HIWORD(v37) = (unsigned int)" cancel %d" >> 16;
    zlog(v36, v37, 135, "work_generator_thread", 21, v35, 20, v49);
LABEL_37:
    sleep(0);
  }
}
