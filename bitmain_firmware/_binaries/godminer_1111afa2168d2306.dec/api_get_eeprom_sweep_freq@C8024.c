int __fastcall api_get_eeprom_sweep_freq(int a1)
{
  int *v2; // r5
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_1B4538[0] && *(_BYTE *)(dword_1B4538[0] + 80) )
  {
    v2 = &dword_1B4538[a1];
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, 1537256, *(unsigned __int16 *)(*(_DWORD *)(dword_1B4538[0] + 4 * v2[2]) + 191));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "api_get_eeprom_sweep_freq",
      25,
      1270,
      20,
      v4);
    return *(__int16 *)(*(_DWORD *)(dword_1B4538[0] + 4 * v2[2]) + 191);
  }
  else
  {
    snprintf(s, 0x800u, "%s: g_eeprom_data is not ready", "api_get_eeprom_sweep_freq");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "api_get_eeprom_sweep_freq",
      25,
      1265,
      20,
      v4);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, 1537228);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "api_get_eeprom_sweep_freq",
      25,
      1266,
      60,
      v4);
    return 0;
  }
}
