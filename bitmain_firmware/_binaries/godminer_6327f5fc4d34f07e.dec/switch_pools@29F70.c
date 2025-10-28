int switch_pools()
{
  char *v0; // r8
  int v1; // r6
  _DWORD *v2; // r7
  int v3; // r12
  int v4; // r4
  int v5; // r3
  int v6; // r2
  int *v7; // r11
  int *v8; // t1
  int v9; // r9
  _DWORD *v10; // r4
  int result; // r0
  int v12; // [sp+14h] [bp-1010h]
  char v13[4100]; // [sp+20h] [bp-1004h] BYREF

  pthread_mutex_lock(&mutex);
  v1 = dword_107B6C;
  v2 = (_DWORD *)(unsigned __int16)&g_zc;
  v3 = total_pools;
  if ( total_pools <= 0 )
  {
    v0 = v13;
    HIWORD(v2) = (unsigned int)&g_zc >> 16;
  }
  v12 = *(_DWORD *)dword_107B6C;
  if ( total_pools > 0 )
  {
    HIWORD(v2) = 17;
    v4 = 0;
    v0 = v13;
    while ( 1 )
    {
      v5 = 0;
      v6 = pools - 4;
      while ( 1 )
      {
        v8 = *(int **)(v6 + 4);
        v6 += 4;
        v7 = v8;
        ++v5;
        if ( v8[1] == v4 )
          break;
        if ( v3 <= v5 )
        {
          V_LOCK();
          logfmt_raw(v13, 0x1000u, 0, "WTF No pool %d found!", v4);
          V_UNLOCK();
          zlog(
            *v2,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/pool.c",
            134,
            "priority_pool",
            13,
            249,
            100,
            v13);
          v7 = *(int **)(pools + 4 * v4);
          break;
        }
      }
      pthread_mutex_lock((pthread_mutex_t *)(v7 + 454));
      v9 = *((unsigned __int8 *)v7 + 1896);
      pthread_mutex_unlock((pthread_mutex_t *)(v7 + 454));
      if ( !v9 )
        break;
      v3 = total_pools;
      if ( total_pools <= ++v4 )
        goto LABEL_11;
    }
    v12 = *v7;
  }
LABEL_11:
  v10 = *(_DWORD **)(pools + 4 * v12);
  pthread_mutex_unlock(&mutex);
  set_current_pool((int)v10);
  V_LOCK();
  logfmt_raw(v0, 0x1000u, 0, "Switching pool %d to pool %d", *(_DWORD *)v1, *v10);
  V_UNLOCK();
  result = zlog(
             *v2,
             "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/pool.c",
             134,
             "switch_pools",
             12,
             361,
             40,
             v0);
  if ( (_DWORD *)v1 != v10 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(v1 + 1816));
    pthread_cond_broadcast((pthread_cond_t *)(v1 + 1848));
    return pthread_mutex_unlock((pthread_mutex_t *)(v1 + 1816));
  }
  return result;
}
