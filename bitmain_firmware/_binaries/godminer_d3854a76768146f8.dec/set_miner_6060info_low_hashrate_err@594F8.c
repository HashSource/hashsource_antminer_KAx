int __fastcall set_miner_6060info_low_hashrate_err(int result, char a2)
{
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( result > 15 )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "check_chain_num_valid failed, chain_num >= PLATFORM_MAX_CHAIN_NUM");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/miner_6060info.c",
      169,
      "set_miner_6060info_low_hashrate_err",
      35,
      42,
      40,
      v3);
    result = 0;
  }
  byte_1752F0[result + 18] = a2;
  return result;
}
