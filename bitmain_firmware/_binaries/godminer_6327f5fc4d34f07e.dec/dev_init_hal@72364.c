int dev_init_hal()
{
  int v0; // r4
  unsigned int hash_on_plug; // r8
  int v2; // r3
  int v4; // r0
  int v5; // r3
  unsigned __int8 v6; // [sp+1Fh] [bp-1005h] BYREF
  char v7[4100]; // [sp+20h] [bp-1004h] BYREF

  v0 = platform_init();
  if ( v0 )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "platform init failed!\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/platform_device_hal.c",
      164,
      "dev_init_hal",
      12,
      55,
      100,
      v7);
    return -1;
  }
  total_chain = 0;
  hash_on_plug = get_hash_on_plug();
  while ( 1 )
  {
    while ( ((hash_on_plug >> v0) & 1) == 0 )
    {
      if ( ++v0 == 16 )
        goto LABEL_7;
    }
    v2 = total_chain;
    g_chain_info[2 * total_chain] = v0;
    LOBYTE(g_chain_info[2 * v2 + 1]) = 1;
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "chain_offset %d, chain %d", total_chain, g_chain_info[2 * total_chain]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/platform_device_hal.c",
      164,
      "dev_init_hal",
      12,
      65,
      60,
      v7);
    if ( platform_is_pic_mcu_en() )
      break;
LABEL_6:
    ++v0;
    ++total_chain;
    if ( v0 == 16 )
    {
LABEL_7:
      fpga_reset();
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "reset fpga");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/platform_device_hal.c",
        164,
        "dev_init_hal",
        12,
        95,
        60,
        v7);
      enable_bypass_mode();
      dev_config_hal((int)"_nonce_num_hns");
      return 0;
    }
  }
  if ( open_pic((unsigned __int8)v0) < 0 )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "chain_offset %d, chain %d, open pic error!", total_chain, g_chain_info[2 * total_chain]);
    V_UNLOCK();
    v4 = g_zc;
    v5 = 69;
    goto LABEL_12;
  }
  pic1704_reset(v0);
  usleep(0x493E0u);
  pic1704_jump_to_app(v0);
  usleep(0x493E0u);
  if ( pic1704_get_sw_version(g_chain_info[2 * total_chain], &v6) )
  {
    V_LOCK();
    logfmt_raw(
      v7,
      0x1000u,
      0,
      "chain_offset %d, chain %d, pic firmware verion = 0x%02x",
      total_chain,
      g_chain_info[2 * total_chain],
      v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/platform_device_hal.c",
      164,
      "dev_init_hal",
      12,
      86,
      60,
      v7);
    goto LABEL_6;
  }
  V_LOCK();
  logfmt_raw(
    v7,
    0x1000u,
    0,
    "chain_offset %d, chain %d, get_sw_version error!",
    total_chain,
    g_chain_info[2 * total_chain]);
  V_UNLOCK();
  v4 = g_zc;
  v5 = 80;
LABEL_12:
  zlog(
    v4,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/platform_device_hal.c",
    164,
    "dev_init_hal",
    12,
    v5,
    100,
    v7);
  return -1;
}
