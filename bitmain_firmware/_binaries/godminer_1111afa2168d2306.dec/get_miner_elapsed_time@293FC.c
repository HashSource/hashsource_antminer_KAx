time_t get_miner_elapsed_time()
{
  time_t result; // r0
  int v1; // r5
  char *v2; // r0
  int v3; // r3
  int v4; // r1
  struct sysinfo info; // [sp+10h] [bp-1044h] BYREF
  char v6[4100]; // [sp+50h] [bp-1004h] BYREF

  if ( sysinfo(&info) )
  {
    V_LOCK();
    v1 = *_errno_location();
    v2 = strerror(v1);
    LOWORD(v3) = 26824;
    HIWORD(v3) = (unsigned int)"temp%d" >> 16;
    logfmt_raw(v6, 0x1000u, 0, v3, v1, v2);
    V_UNLOCK();
    LOWORD(v4) = 25096;
    HIWORD(v4) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
    zlog(g_zc, v4, 137, "get_miner_elapsed_time", 22, 320, 40, v6);
    result = time(0);
    dword_195878 = result;
  }
  else
  {
    dword_195878 = info.uptime;
    return info.uptime;
  }
  return result;
}
