int __fastcall sub_5473C(int a1)
{
  _DWORD v3[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw((char *)v3, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_DCR_1727", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_software_reset_DCR_1727",
    35,
    95,
    20,
    v3);
  v3[2] = 4456449;
  v3[3] = 0;
  v3[1] = 0;
  v3[0] = 3;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 216))(a1, v3);
}
