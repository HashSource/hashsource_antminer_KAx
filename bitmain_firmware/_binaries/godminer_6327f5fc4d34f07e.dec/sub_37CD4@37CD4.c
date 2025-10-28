int __fastcall sub_37CD4(int a1, pthread_mutex_t *a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  int v11; // r6
  void *count; // r0
  size_t v13; // r7
  void *v14; // r0
  struct __pthread_internal_slist *next; // r0
  _DWORD *v16; // r0
  size_t lock; // r2
  int v19; // r12
  int v20; // r0
  int v21; // r3
  char v22[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v19 = 249;
    v20 = g_zc;
    LOWORD(v21) = 8508;
    goto LABEL_13;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to get extranonce2_size");
    V_UNLOCK();
    v19 = 254;
    goto LABEL_12;
  }
  if ( (unsigned int)(v10 - 2) > 0xE )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to get valid n2size in parse_extranonce, xn2_size=%d", v11);
    V_UNLOCK();
    v19 = 258;
LABEL_12:
    v20 = g_zc;
    LOWORD(v21) = (unsigned __int16)"stratum_parse_extranonce_dcr";
LABEL_13:
    HIWORD(v21) = (unsigned int)"stratum_parse_extranonce_dcr" >> 16;
    zlog(
      v20,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
      164,
      v21,
      28,
      v19,
      100,
      v22);
    return 0;
  }
  pthread_mutex_lock(a2 + 66);
  count = (void *)a2[3].__count;
  if ( count )
  {
    free(count);
    a2[3].__count = 0;
  }
  v13 = strlen(v8) >> 1;
  a2[3].__lock = v13;
  v14 = calloc(1u, v13);
  a2[3].__count = (unsigned int)v14;
  if ( v14 )
  {
    hex2bin((int)v14, (unsigned __int8 *)v8, v13);
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "save xnonce1 into work->xnonce2 to submit");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
      164,
      "stratum_parse_extranonce_dcr",
      28,
      274,
      20,
      v22);
    next = a2[65].__list.__next;
    if ( next )
      free(next);
    v16 = calloc(1u, 0x10u);
    a2[65].__spins = (int)v16;
    if ( v16 )
    {
      lock = a2[3].__lock;
      *v16 = lock;
      memset(v16 + 1, 0, lock);
      pthread_mutex_unlock(a2 + 66);
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v8, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        164,
        "stratum_parse_extranonce_dcr",
        28,
        283,
        20,
        v22);
      return 1;
    }
    else
    {
      printf("invalid pointer(%s)!\n", "work->private");
      return 0;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
      164,
      "stratum_parse_extranonce_dcr",
      28,
      267,
      100,
      v22);
    pthread_mutex_unlock(a2 + 66);
    return 0;
  }
}
