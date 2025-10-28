int __fastcall stratum_disconnect(int *a1)
{
  pthread_mutex_t *v1; // r6
  int v3; // r0
  _BYTE *v4; // r3
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  char v8[4096]; // [sp+48h] [bp-1000h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 11);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 11));
  v3 = a1[8];
  if ( v3 != -1 )
  {
    shutdown(v3, 2);
    close(a1[8]);
    v4 = (_BYTE *)a1[10];
    a1[8] = -1;
    *v4 = 0;
    V_LOCK();
    V_INT((int)v6, "poolno", *a1);
    logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "pool disconnect");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_disconnect",
      18,
      214,
      20,
      v8);
  }
  return pthread_mutex_unlock(v1);
}
