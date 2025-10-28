int __fastcall stratum_thread(int a1)
{
  int v2; // r7
  pthread_t v3; // r0
  pthread_mutex_t *v4; // r4
  int v5; // r3
  int v6; // r1
  char *v7; // r5
  int v8; // r0
  int v9; // r3
  int v10; // r1
  char *v11; // r0
  int v12; // r3
  int v13; // r5
  _BYTE *v14; // r6
  int v15; // r10
  _DWORD *v16; // r3
  int v17; // r12
  unsigned int v18; // r6
  int v19; // r10
  unsigned int v20; // r5
  int v21; // r0
  bool v22; // zf
  pthread_mutex_t *v23; // r1
  signed __int64 v24; // r0
  int v25; // r0
  void *v26; // r5
  char *v27; // r1
  int owner; // r8
  _DWORD *current_pool; // r0
  int v30; // r1
  int v31; // r1
  int v32; // r3
  void (__fastcall *v33)(pthread_mutex_t *); // r2
  char *v34; // r1
  int v35; // r1
  char *v36; // r1
  int v37; // r4
  int v38; // r1
  char *v40; // [sp+30h] [bp-108Ch]
  int lock; // [sp+34h] [bp-1088h]
  int v42; // [sp+38h] [bp-1084h]
  int v43; // [sp+3Ch] [bp-1080h]
  __time_t v44; // [sp+40h] [bp-107Ch]
  _BYTE *v45; // [sp+44h] [bp-1078h]
  int v46; // [sp+48h] [bp-1074h]
  int v47; // [sp+50h] [bp-106Ch]
  int v48; // [sp+54h] [bp-1068h]
  _DWORD v49[7]; // [sp+58h] [bp-1064h] BYREF
  int v50; // [sp+74h] [bp-1048h]
  _DWORD v51[7]; // [sp+78h] [bp-1044h] BYREF
  int v52; // [sp+94h] [bp-1028h]
  int v53; // [sp+98h] [bp-1024h] BYREF
  int v54; // [sp+9Ch] [bp-1020h]
  int v55; // [sp+A0h] [bp-101Ch]
  int v56; // [sp+A4h] [bp-1018h]
  int v57; // [sp+A8h] [bp-1014h]
  int v58; // [sp+ACh] [bp-1010h]
  int v59; // [sp+B0h] [bp-100Ch]
  int v60; // [sp+B4h] [bp-1008h]
  char v61[4100]; // [sp+B8h] [bp-1004h] BYREF

  v2 = frontend_runtime_instance();
  v3 = pthread_self();
  pthread_detach(v3);
  v44 = *(_DWORD *)(*(_DWORD *)(v2 + 72) + 20);
  v4 = (pthread_mutex_t *)tq_pop(*(_DWORD *)(a1 + 44), 0);
  if ( v4 )
  {
    V_LOCK();
    LOWORD(v5) = 9468;
    HIWORD(v5) = (unsigned int)"tum notify: new job's job_id doesnot change, %s, %s" >> 16;
    logfmt_raw(v61, 0x1000u, 0, v5, v4->__kind);
    V_UNLOCK();
    LOWORD(v6) = 8820;
    HIWORD(v6) = (unsigned int)"once2_size" >> 16;
    zlog(g_zc, v6, 145, "stratum_thread", 14, 249, 20, v61);
    v7 = (char *)calloc(1u, 0x40u);
    snprintf(v7, 0x40u, "%.10s_%d", "stratum_thread", v4->__lock);
    V_LOCK();
    v8 = syscall(224);
    LOWORD(v9) = 4216;
    HIWORD(v9) = (unsigned int)&unk_132984 >> 16;
    logfmt_raw(v61, 0x1000u, 0, v9, v7, v8);
    V_UNLOCK();
    LOWORD(v10) = 8820;
    HIWORD(v10) = (unsigned int)"once2_size" >> 16;
    zlog(g_zc, v10, 145, "stratum_thread", 14, 251, 40, v61);
    prctl(15, v7);
    v11 = _strdup((const char *)v4->__kind);
    v4[1].__owner = (int)v11;
    if ( v11 )
    {
      v40 = &v4[79].__size[20];
      pool_tset((int)v4, &v4[79].__size[8], 0);
      LOWORD(v12) = 9492;
      HIWORD(v12) = (unsigned int)"b_id doesnot change, %s, %s" >> 16;
      v42 = v12;
      LOWORD(v13) = 9580;
      LOWORD(v14) = 17345;
      pool_tclear((int)v4, &v4[79].__size[20], 0);
      LOWORD(v15) = 9608;
      LOWORD(v16) = 19660;
      LOWORD(v17) = 9532;
      HIWORD(v13) = (unsigned int)"lloc pool swork merkle_bin" >> 16;
      HIWORD(v14) = (unsigned int)&unk_1758B1 >> 16;
      HIWORD(v15) = (unsigned int)"merkle %d: %s" >> 16;
      HIWORD(v17) = (unsigned int)"fy: job_id len = %s, len %d >= 64" >> 16;
      v43 = 1;
      HIWORD(v16) = (unsigned int)&unk_1761BC >> 16;
      v48 = v13;
      v45 = v14;
      v47 = v15;
      v46 = v17;
      *v16 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          LOWORD(v19) = 8820;
          v18 = 0;
          HIWORD(v19) = (unsigned int)"once2_size" >> 16;
          v20 = 0;
          while ( 1 )
          {
            v21 = (int)v4;
            if ( v4[1].__kind != -1 )
              break;
            while ( 1 )
            {
              v22 = (*(int (__fastcall **)(int))v2)(v21) == 0;
              v23 = v4;
              if ( !v22 )
              {
                if ( (*(int (__fastcall **)(int, pthread_mutex_t *))(v2 + 16))(v2, v4) )
                  break;
              }
              (*(void (__fastcall **)(pthread_mutex_t *, pthread_mutex_t *))(v2 + 4))(v4, v23);
              pool_tclear((int)v4, v40, 0);
              pool_died(&v4->__lock);
              v24 = __PAIR64__(v20, v18);
              v20 = (__PAIR64__(v20, v18) + 1) >> 32;
              if ( !(v24 % 50) )
              {
                V_LOCK();
                LOWORD(v27) = 5040;
                HIWORD(v27) = (unsigned int)"ot a valid byte!" >> 16;
                V_INT((int)v49, v27, v4->__lock);
                logfmt_raw(
                  v61,
                  0x1000u,
                  0,
                  v50,
                  v49[0],
                  v49[1],
                  v49[2],
                  v49[3],
                  v49[4],
                  v49[5],
                  v49[6],
                  v50,
                  v42,
                  30,
                  v18 + 1,
                  v20);
                V_UNLOCK();
                zlog(g_zc, v19, 145, "stratum_thread", 14, 284, 100, v61);
              }
              ++v18;
              sleep(0x1Eu);
              v21 = (int)v4;
              if ( v4[1].__kind != -1 )
                goto LABEL_11;
            }
            V_LOCK();
            owner = v4[1].__owner;
            lock = v4->__lock;
            current_pool = (_DWORD *)get_current_pool();
            logfmt_raw(v61, 0x1000u, 0, v46, lock, owner, *current_pool);
            V_UNLOCK();
            zlog(g_zc, v19, 145, "stratum_thread", 14, 290, 20, v61);
            pool_alive(v4);
            if ( v43 )
            {
              v43 = 0;
              switch_pools();
            }
          }
LABEL_11:
          wait_pool_to_be_current_timeout(v21);
          if ( stratum_socket_full((int)v4, v44) )
            break;
          V_LOCK();
          V_INT((int)v51, "poolno", v4->__lock);
          logfmt_raw(v61, 0x1000u, 0, v52, v51[0], v51[1], v51[2], v51[3], v51[4], v51[5], v51[6], v52, v48);
          V_UNLOCK();
          LOWORD(v30) = 8820;
          HIWORD(v30) = (unsigned int)"once2_size" >> 16;
          zlog(g_zc, v30, 145, "stratum_thread", 14, 304, 100, v61);
LABEL_19:
          v31 = total_go;
          v32 = v4[81].__count + 1;
          *v45 = 0;
          v33 = *(void (__fastcall **)(pthread_mutex_t *))(v2 + 4);
          total_go = v31 + 1;
          v4[81].__count = v32;
          v33(v4);
          pool_tclear((int)v4, v40, 0);
          pool_died(&v4->__lock);
          V_LOCK();
          LOWORD(v34) = 5040;
          HIWORD(v34) = (unsigned int)"ot a valid byte!" >> 16;
          V_INT((int)&v53, v34, v4->__lock);
          logfmt_raw(v61, 0x1000u, 0, v60, v53, v54, v55, v56, v57, v58, v59, v60, v47);
          V_UNLOCK();
          LOWORD(v35) = 8820;
          HIWORD(v35) = (unsigned int)"once2_size" >> 16;
          zlog(g_zc, v35, 145, "stratum_thread", 14, 332, 20, v61);
          sleep(0x1Eu);
        }
        v25 = (*(int (__fastcall **)(pthread_mutex_t *))(v2 + 8))(v4);
        v26 = (void *)v25;
        if ( !v25 )
          goto LABEL_19;
        if ( !(*(int (__fastcall **)(int, pthread_mutex_t *, int))(v2 + 20))(v2, v4, v25) )
          (*(void (__fastcall **)(int, void *, pthread_mutex_t *))(v2 + 28))(v2, v26, v4);
        free(v26);
        *v45 = 1;
      }
    }
  }
  V_LOCK();
  LOWORD(v36) = 5040;
  HIWORD(v36) = (unsigned int)"ot a valid byte!" >> 16;
  V_INT((int)&v53, v36, v4->__lock);
  LOWORD(v37) = 9640;
  HIWORD(v37) = (unsigned int)"t merkle to merkle_bin in parse_notify" >> 16;
  logfmt_raw(v61, 0x1000u, 0, v60, v53, v54, v55, v56, v57, v58, v59, v60, v37);
  V_UNLOCK();
  LOWORD(v38) = 8820;
  HIWORD(v38) = (unsigned int)"once2_size" >> 16;
  zlog(g_zc, v38, 145, "stratum_thread", 14, 339, 60, v61);
  return 0;
}
