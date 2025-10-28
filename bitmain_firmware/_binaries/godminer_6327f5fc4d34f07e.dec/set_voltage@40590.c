int __fastcall set_voltage(int a1, int a2)
{
  char v4[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a2 )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "set_voltage to %d", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage",
      11,
      382,
      40,
      v4);
    return sub_403C8(a1);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "set_voltage power is not inited");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage",
      11,
      379,
      100,
      v4);
    return -1;
  }
}
