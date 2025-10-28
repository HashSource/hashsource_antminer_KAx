int __fastcall setup_count_sync_rvn(int a1, unsigned __int8 a2)
{
  char v5[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "setup_count_sync_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    171,
    "setup_count_sync_rvn",
    20,
    295,
    20,
    v5);
  sub_931E4(a1, a2, 202, 0);
  sub_931E4(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_931E4(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  return 0;
}
