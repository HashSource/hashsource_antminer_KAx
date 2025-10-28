int *__fastcall sub_68E54(int *result, int *a2)
{
  int *v3; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v5[4100]; // [sp+818h] [bp-1004h] BYREF

  v3 = result;
  if ( a2 )
  {
    result = exists_c_map(a2, (int)&v3);
    if ( result == (int *)1 )
    {
      snprintf(s, 0x800u, "remove %d from flicker list\n", v3);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_ui.c",
        170,
        "remove_port_form_gpio_map",
        25,
        205,
        20,
        v5);
      return (int *)remove_c_map(a2, (int)&v3);
    }
  }
  return result;
}
