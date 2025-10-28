int start_dag_gen_engine_rvn()
{
  void *(*v0)(void *); // r2
  char v2[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, 1363084);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/rvn/rvn_dhash_common.c",
      164,
      "start_dag_gen_engine_rvn",
      24,
      452,
      100,
      v2);
    return 1;
  }
  else
  {
    LOWORD(v0) = -24708;
    HIWORD(v0) = (unsigned int)&loc_535F4 >> 16;
    pthread_create((pthread_t *)&dword_193710, 0, v0, 0);
    return 0;
  }
}
