void *__fastcall machine_runtime_init(int a1, int a2)
{
  void *result; // r0
  char v4[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "machine_runtime_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_interface.c",
    171,
    "machine_runtime_init",
    20,
    23,
    60,
    v4);
  switch ( a2 )
  {
    case 1:
      result = machine_runtime_ctrl_ckb_2042();
      break;
    case 2:
      result = machine_runtime_ctrl_kda_2110();
      break;
    case 3:
      result = machine_runtime_ctrl_hns_2130();
      break;
    case 4:
      result = machine_runtime_ctrl_dcr_1727();
      break;
    case 5:
      result = machine_runtime_ctrl_dash_1766();
      break;
    default:
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "not support miner type: %d", 1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_interface.c",
        171,
        "machine_runtime_init",
        20,
        43,
        100,
        v4);
      result = 0;
      break;
  }
  return result;
}
