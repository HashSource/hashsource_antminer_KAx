int sub_5C050()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "Unable to set thread to low priority");
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/miner_util/check_pool.c",
           151,
           "set_lowprio",
           11,
           18,
           20,
           v1);
}
