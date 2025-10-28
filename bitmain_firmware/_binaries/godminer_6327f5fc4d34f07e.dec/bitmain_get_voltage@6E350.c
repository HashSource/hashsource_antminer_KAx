void bitmain_get_voltage()
{
  int v0; // [sp+10h] [bp-1814h] BYREF
  __int16 v1; // [sp+14h] [bp-1810h]
  _DWORD v2[2]; // [sp+18h] [bp-180Ch] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v4[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( dword_119DF4 || sub_6D270() >= 0 )
  {
    v2[1] = 0;
    v2[0] = 0;
    v0 = 50637397;
    v1 = 7;
    if ( sub_6C9B8((void *)dword_119DF0, (unsigned __int8 *)&v0, 6u, (unsigned __int8 *)v2, 8u) )
    {
      strcpy(s, "get AD conversion N failed\n");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "_bitmain_get_AD_conversion_N",
        28,
        329,
        100,
        v4);
      strcpy(s, "can nont get voltage\n");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "bitmain_get_voltage",
        19,
        661,
        100,
        v4);
    }
    else
    {
      bitmain_convert_N_to_V();
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_voltage");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "bitmain_get_voltage",
      19,
      657,
      100,
      v4);
  }
}
