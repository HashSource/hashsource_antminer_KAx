void __noreturn work_generator_thread()
{
  int v0; // r5
  int *all_created_runtime; // r6
  int *v2; // r0
  unsigned __int64 v3; // r2
  int v4; // t1
  unsigned __int64 v5; // r8
  char *v6; // r0
  int v7; // r9
  int v8; // r3
  const char *v9; // r2
  char *v10; // r7
  int v11; // r0
  int v12; // r3
  int v13; // r3
  int v14; // r1
  int v15; // r3
  pthread_mutex_t *current_pool; // r0
  pthread_mutex_t *v17; // r7
  int v18; // r0
  int v19; // r3
  int v20; // r12
  int v21; // r3
  int v22; // r1
  int v23; // r6
  char *v24; // r8
  int v25; // r2
  time_t v26; // r0
  int v27; // r3
  int v28; // t1
  int v29; // r3
  int v30; // r1
  int v31; // r12
  unsigned __int64 *v32; // r2
  int v33; // r3
  unsigned __int64 v34; // r6
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r0
  unsigned __int64 v37; // t1
  bool v38; // cf
  int v39; // r3
  int v40; // r3
  int v41; // r1
  int v42; // r3
  int v43; // r12
  int v44; // r0
  int v45; // r3
  int v46; // r1
  int v47; // r3
  int v48; // r1
  int v49; // r3
  int v50; // r3
  int v51; // r3
  int v52; // r1
  void *v53; // r0
  int lock; // r2
  const char *spins; // r0
  int v56; // [sp+1Ch] [bp-14B0h]
  int v57; // [sp+20h] [bp-14ACh]
  char *v58; // [sp+3Ch] [bp-1490h]
  int v59; // [sp+40h] [bp-148Ch]
  int v60; // [sp+4Ch] [bp-1480h] BYREF
  struct timespec v61; // [sp+50h] [bp-147Ch] BYREF
  _DWORD s[284]; // [sp+58h] [bp-1474h] BYREF
  struct timespec v63[512]; // [sp+4C8h] [bp-1004h] BYREF

  v60 = 0;
  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v60);
  memset(s, 0, sizeof(s));
  if ( v60 <= 0 )
  {
    v57 = 0;
    v56 = -1000;
  }
  else
  {
    v2 = all_created_runtime;
    v3 = -1;
    do
    {
      v4 = *v2++;
      v5 = *(_QWORD *)(v4 + 960);
      if ( v3 > v5 )
        v3 = v5;
    }
    while ( &all_created_runtime[v60] != v2 );
    v57 = (int)v3 / 1000000;
    v56 = 1000 * ((int)v3 % 1000000);
  }
  v6 = (char *)calloc(1u, 0x40u);
  v7 = 0;
  LOWORD(v8) = 2380;
  LOWORD(v9) = 4204;
  HIWORD(v8) = (unsigned int)"stratum_connect" >> 16;
  HIWORD(v9) = (unsigned int)&unk_132978 >> 16;
  v10 = v6;
  snprintf(v6, 0x40u, v9, v8, 0);
  V_LOCK();
  v11 = syscall(224);
  LOWORD(v12) = 4216;
  HIWORD(v12) = (unsigned int)&unk_132984 >> 16;
  logfmt_raw((char *)v63, 0x1000u, 0, v12, v10, v11);
  V_UNLOCK();
  LOWORD(v13) = 2380;
  LOWORD(v14) = 4232;
  HIWORD(v13) = (unsigned int)"stratum_connect" >> 16;
  HIWORD(v14) = (unsigned int)&unk_132994 >> 16;
  zlog(g_zc, v14, 139, v13, 21, 203, 40, v63);
  v58 = (char *)(all_created_runtime - 1);
  prctl(15, v10);
  LOWORD(v15) = 16584;
  HIWORD(v15) = (unsigned int)&unk_1755B8 >> 16;
  v59 = v15;
  clock_gettime(1, (struct timespec *)&send_job_timer);
  while ( 1 )
  {
LABEL_9:
    while ( 1 )
    {
      current_pool = (pthread_mutex_t *)get_current_pool();
      v17 = current_pool;
      if ( current_pool )
        break;
LABEL_34:
      V_LOCK();
      LOWORD(v39) = 4372;
      HIWORD(v39) = (unsigned int)&unk_132A20 >> 16;
      logfmt_raw((char *)v63, 0x1000u, (int)v17, v39);
      V_UNLOCK();
      LOWORD(v40) = 2380;
      LOWORD(v41) = 4232;
      HIWORD(v40) = (unsigned int)"stratum_connect" >> 16;
      HIWORD(v41) = (unsigned int)&unk_132994 >> 16;
      zlog(g_zc, v41, 139, v40, 21, 222, 20, v63);
    }
    while ( 1 )
    {
      if ( pool_tget(current_pool, (unsigned __int8 *)&v17[79].__size[8]) )
        goto LABEL_37;
      clock_gettime(1, v63);
      v61.tv_nsec = (v56 + v63[0].tv_nsec) % 1000000000;
      v61.tv_sec = (v56 + v63[0].tv_nsec) / 1000000000 + v63[0].tv_sec + v57;
      v18 = pool_twait_to_be_expected_and_set((int)v17, &v17[79].__size[20], 1, 0, &v61);
      if ( v18 == 1 )
        break;
      if ( v18 == 110 )
      {
        V_LOCK();
        LOWORD(v50) = 4436;
        HIWORD(v50) = (unsigned int)&unk_132A60 >> 16;
        logfmt_raw((char *)v63, 0x1000u, 0, v50);
        V_UNLOCK();
        v20 = 238;
      }
      else
      {
        V_LOCK();
        LOWORD(v19) = 4464;
        HIWORD(v19) = (unsigned int)&unk_132A7C >> 16;
        logfmt_raw((char *)v63, 0x1000u, 0, v19);
        V_UNLOCK();
        v20 = 240;
      }
      LOWORD(v21) = 2380;
      LOWORD(v22) = 4232;
      HIWORD(v21) = (unsigned int)"stratum_connect" >> 16;
      HIWORD(v22) = (unsigned int)&unk_132994 >> 16;
      zlog(g_zc, v22, 139, v21, 21, v20, 20, v63);
      pthread_mutex_lock((pthread_mutex_t *)((char *)v17 + 1592));
      if ( pool_tget(v17, (unsigned __int8 *)&v17[66]) )
      {
        pthread_mutex_unlock((pthread_mutex_t *)((char *)v17 + 1592));
        V_LOCK();
        logfmt_raw(
          (char *)v63,
          0x1000u,
          0,
          "work generator: jobid %p cancel %d",
          v17[65].__spins,
          (unsigned __int8)v17[66].__size[0]);
        V_UNLOCK();
        v43 = 246;
        v44 = g_zc;
        goto LABEL_36;
      }
      if ( (*(int (__fastcall **)(_DWORD *, pthread_mutex_t *))(v0 + 36))(s, v17) == 2 )
      {
        V_LOCK();
        logfmt_raw(
          (char *)v63,
          0x1000u,
          0,
          "poolno=%d work generator switched to new job %s",
          v17->__lock,
          v17[65].__spins);
        V_UNLOCK();
        LOWORD(v51) = 2380;
        LOWORD(v52) = 4232;
        HIWORD(v51) = (unsigned int)"stratum_connect" >> 16;
        HIWORD(v52) = (unsigned int)&unk_132994 >> 16;
        zlog(g_zc, v52, 139, v51, 21, 253, 20, v63);
        v53 = (void *)s[281];
        lock = v17[68].__lock;
        ++*(_QWORD *)&total_getworks;
        v17[68].__lock = lock + 1;
        if ( v53 )
        {
          free(v53);
          s[281] = 0;
        }
        v7 = 1;
        memcpy(s, &v17[19], sizeof(s));
        spins = (const char *)v17[65].__spins;
        if ( spins )
          s[281] = _strdup(spins);
      }
      pthread_mutex_unlock((pthread_mutex_t *)((char *)v17 + 1592));
      if ( !s[281] )
        goto LABEL_9;
      s[274] = v17[3].__owner;
      if ( v60 > 0 )
      {
        v23 = 0;
        v24 = v58;
        do
        {
          if ( v23 )
            v25 = 0;
          else
            v25 = v7;
          ++v23;
          (**(void (__fastcall ***)(_DWORD *, pthread_mutex_t *, int))(v0 + 72))(s, v17, v25);
          ++local_work;
          v26 = time(0);
          v27 = *(_DWORD *)(v0 + 72);
          last_getwork = v26;
          v28 = *((_DWORD *)v24 + 1);
          v24 += 4;
          (*(void (__fastcall **)(int, _DWORD *))(v27 + 4))(v28, s);
        }
        while ( v60 > v23 );
      }
      V_LOCK();
      clock_gettime(1, &tp);
      if ( v7 )
      {
        logfmt_raw(
          (char *)v63,
          0x1000u,
          0,
          "New job pushed after %lld ms",
          1000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_18B324) / 1000000);
        V_UNLOCK();
        LOWORD(v29) = 2380;
        LOWORD(v30) = 4232;
        HIWORD(v29) = (unsigned int)"stratum_connect" >> 16;
        HIWORD(v30) = (unsigned int)&unk_132994 >> 16;
        zlog(g_zc, v30, 139, v29, 21, 278, 20, v63);
      }
      else
      {
        LOWORD(v47) = 4600;
        HIWORD(v47) = (unsigned int)&unk_132B04 >> 16;
        logfmt_raw(
          (char *)v63,
          0x1000u,
          0,
          v47,
          1000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_18B324) / 1000000);
        V_UNLOCK();
        LOWORD(v48) = 4232;
        LOWORD(v49) = 2380;
        HIWORD(v49) = (unsigned int)"stratum_connect" >> 16;
        HIWORD(v48) = (unsigned int)&unk_132994 >> 16;
        zlog(g_zc, v48, 139, v49, 21, 280, 20, v63);
      }
      clock_gettime(1, &tp);
      LOWORD(v32) = 16584;
      v31 = 0;
      HIWORD(v32) = (unsigned int)&unk_1755B8 >> 16;
      v33 = 0;
      v34 = -1;
      v35 = (int)&loc_F4240 * (__int64)(tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_18B324) / 1000;
      do
      {
        v37 = *v32++;
        v36 = v37;
        v38 = v37 >= v34;
        if ( v37 < v34 )
          v31 = v33;
        ++v33;
        if ( !v38 )
          v34 = v36;
      }
      while ( v33 != 10 );
      if ( v35 > v34 )
        *(_QWORD *)(v59 + 8 * v31) = v35;
      v7 = 0;
      clock_gettime(1, (struct timespec *)&send_job_timer);
      current_pool = (pthread_mutex_t *)get_current_pool();
      v17 = current_pool;
      if ( !current_pool )
        goto LABEL_34;
    }
    V_LOCK();
    LOWORD(v42) = 4412;
    HIWORD(v42) = (unsigned int)&unk_132A48 >> 16;
    logfmt_raw((char *)v63, 0x1000u, 0, v42);
    V_UNLOCK();
    v43 = 234;
    v44 = g_zc;
LABEL_36:
    LOWORD(v45) = 2380;
    LOWORD(v46) = 4232;
    HIWORD(v45) = (unsigned int)"stratum_connect" >> 16;
    HIWORD(v46) = (unsigned int)&unk_132994 >> 16;
    zlog(v44, v46, 139, v45, 21, v43, 20, v63);
LABEL_37:
    sleep(0);
  }
}
