int sub_21EFC()
{
  char v1[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "%s: input bad api param\n", "reset_fpga_baud_old");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "reset_fpga_baud_old",
    19,
    1687,
    100,
    v1);
  return -2147483646;
}
