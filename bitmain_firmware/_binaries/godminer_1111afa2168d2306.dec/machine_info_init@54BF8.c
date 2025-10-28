int machine_info_init()
{
  int v0; // r3
  int v1; // r1
  int v2; // r0
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v0) = -10344;
  HIWORD(v0) = (unsigned int)"bringup temperature too low! refuse to start mining" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v0);
  V_UNLOCK();
  LOWORD(v1) = -11348;
  HIWORD(v1) = (unsigned int)"ck it, and reboot system" >> 16;
  zlog(g_zc, v1, 166, "machine_info_init", 17, 925, 60, v6);
  v2 = platform_topol_init();
  if ( v2 )
    exit(v2);
  V_LOCK();
  LOWORD(v3) = -10324;
  HIWORD(v3) = (unsigned int)"too low! refuse to start mining" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3);
  V_UNLOCK();
  LOWORD(v4) = -11348;
  HIWORD(v4) = (unsigned int)"ck it, and reboot system" >> 16;
  zlog(g_zc, v4, 166, "machine_info_init", 17, 929, 60, v6);
  return 0;
}
