int bitmain_power_fw_version()
{
  int v0; // r5
  int v2; // [sp+10h] [bp-1810h] BYREF
  __int16 v3; // [sp+14h] [bp-180Ch]
  int v4; // [sp+18h] [bp-1808h] BYREF
  int v5; // [sp+1Ch] [bp-1804h]
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v7[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_119DF4 || (v0 = sub_6D270(), v0 >= 0) )
  {
    v5 = 0;
    v4 = 0;
    v2 = 17082965;
    v3 = 5;
    if ( sub_6C9B8((void *)dword_119DF0, (unsigned __int8 *)&v2, 6u, (unsigned __int8 *)&v4, 8u) )
    {
      v0 = -2147482880;
      strcpy(s, "get power version failed\n");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "_bitmain_get_power_fw_version",
        29,
        224,
        100,
        v7);
    }
    else
    {
      return (unsigned __int16)v5;
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_fw_version");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "bitmain_power_fw_version",
      24,
      636,
      100,
      v7);
  }
  return v0;
}
