int start_dag_gen_engine()
{
  void *(*v0)(void *); // r2
  pthread_t *v1; // r0
  int v3; // r3
  int v4; // r3
  char v5[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    LOWORD(v3) = 24492;
    HIWORD(v3) = (unsigned int)&unk_137A00 >> 16;
    logfmt_raw(v5, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v4) = 29064;
    HIWORD(v4) = (unsigned int)&unk_138CE8 >> 16;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/eth/eth_dhash_common.c",
      164,
      v4,
      20,
      326,
      100,
      v5);
    return 1;
  }
  else
  {
    LOWORD(v0) = 3056;
    LOWORD(v1) = 9928;
    HIWORD(v0) = (unsigned int)diff_to_target_kda >> 16;
    HIWORD(v1) = (unsigned int)&unk_1736E8 >> 16;
    pthread_create(v1, 0, v0, 0);
    return 0;
  }
}
