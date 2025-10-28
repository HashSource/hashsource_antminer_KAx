char *add_pool()
{
  char *v0; // r4
  int v1; // r6
  int v2; // r2
  void *v3; // r0
  _DWORD *v4; // r0
  int v5; // lr
  int v7; // r3
  int v8; // r1
  int v9; // r3
  int v10; // r1
  char v11[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = (char *)calloc(0x7D0u, 1u);
  if ( !v0 )
  {
    V_LOCK();
    LOWORD(v7) = 7756;
    HIWORD(v7) = (unsigned int)"lf" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "add_pool",
      8,
      123,
      100,
      v11);
    V_LOCK();
    LOWORD(v8) = 7792;
    LOWORD(v9) = 4752;
    HIWORD(v8) = (unsigned int)"8x %08x %08x %08x " >> 16;
    HIWORD(v9) = (unsigned int)&unk_132B50 >> 16;
    logfmt_raw(v11, 0x1000u, 0, v9, v8);
    V_UNLOCK();
    LOWORD(v10) = 7452;
    HIWORD(v10) = (unsigned int)"se" >> 16;
    zlog(g_zc, v10, 134, "add_pool", 8, 124, 100, v11);
    exit(1);
  }
  LOWORD(v1) = 16960;
  HIWORD(v1) = (unsigned int)&unk_175730 >> 16;
  v2 = *(_DWORD *)(v1 + 0x50);
  v3 = *(void **)(v1 + 0x54);
  *((_DWORD *)v0 + 1) = v2;
  *(_DWORD *)v0 = v2;
  v4 = realloc(v3, 4 * (v2 + 2));
  v5 = *(_DWORD *)(v1 + 0x50);
  *(_DWORD *)(v1 + 0x54) = v4;
  *(_DWORD *)(v1 + 0x50) = v5 + 1;
  v4[v5] = v0;
  *((_DWORD *)v0 + 9) = -1;
  *((_DWORD *)v0 + 11) = 0;
  v0[1648] = 0;
  v0[1656] = 0;
  *((_DWORD *)v0 + 437) = 0;
  *((_DWORD *)v0 + 439) = 0;
  v0[28] = 1;
  *((_QWORD *)v0 + 221) = 0;
  *((_DWORD *)v0 + 444) = 0;
  memset(v0 + 1684, 0, 0x40u);
  *((_QWORD *)v0 + 226) = 0;
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1592), 0);
  pthread_mutex_init((pthread_mutex_t *)v0 + 76, 0);
  pthread_condattr_init((pthread_condattr_t *)v0 + 462);
  pthread_condattr_setclock((pthread_condattr_t *)v0 + 462, 1);
  pthread_cond_init((pthread_cond_t *)(v0 + 1856), (const pthread_condattr_t *)v0 + 462);
  pthread_mutex_init((pthread_mutex_t *)v0 + 2, 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1592), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1780), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1660), 0);
  v0[1904] = 1;
  v0[1916] = 0;
  *((_DWORD *)v0 + 477) = -1;
  return v0;
}
