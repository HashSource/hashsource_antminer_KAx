int __fastcall sub_72B7C(int a1)
{
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( open_pic(LOBYTE(g_chain_info[2 * a1])) < 0 )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "chain_offset %d, chain %, open pic error!", total_chain, g_chain_info[2 * total_chain]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/platform_device_hal.c",
      164,
      "dev_init_pic_for_one_chain",
      26,
      139,
      100,
      v3);
    return -1;
  }
  else if ( pic1704_reset(g_chain_info[2 * a1]) )
  {
    usleep(0x493E0u);
    if ( pic1704_jump_to_app(g_chain_info[2 * a1]) )
    {
      usleep(0x493E0u);
      return 0;
    }
    else
    {
      printf("chain_offset %d, chain %, pic jump to app error!", total_chain, g_chain_info[2 * total_chain]);
      return -1;
    }
  }
  else
  {
    printf("chain_offset %d, chain %, reset pic error!", total_chain, g_chain_info[2 * total_chain]);
    return -1;
  }
}
