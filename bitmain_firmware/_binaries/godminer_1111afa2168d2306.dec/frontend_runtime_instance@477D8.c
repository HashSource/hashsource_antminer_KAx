int frontend_runtime_instance()
{
  int v0; // r4
  int v2; // r3
  int v3; // r1
  char v4[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = dword_196694;
  if ( !dword_196694 )
  {
    V_LOCK();
    LOWORD(v2) = -17928;
    HIWORD(v2) = (unsigned int)"RED" >> 16;
    logfmt_raw(v4, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = -18088;
    HIWORD(v3) = (unsigned int)"enkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c" >> 16;
    zlog(g_zc, v3, 157, "frontend_runtime_instance", 25, 79, 100, v4);
  }
  return v0;
}
