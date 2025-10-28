time_t set_miner_start_time()
{
  const char *v0; // r1
  int v1; // r3
  int v2; // r1
  time_t result; // r0
  int v4; // r4
  char *v5; // r0
  const char *v6; // r1
  struct sysinfo info; // [sp+10h] [bp-1140h] BYREF
  char s[256]; // [sp+50h] [bp-1100h] BYREF
  char v9[4096]; // [sp+150h] [bp-1000h] BYREF

  if ( sysinfo(&info) )
  {
    v4 = *_errno_location();
    v5 = strerror(v4);
    LOWORD(v6) = 26824;
    HIWORD(v6) = (unsigned int)"temp%d" >> 16;
    sprintf(s, v6, v4, v5);
    result = time(0);
    dword_195878 = result + 1;
    dword_19587C = result;
  }
  else
  {
    LOWORD(v0) = 26868;
    dword_19587C = info.uptime;
    HIWORD(v0) = (unsigned int)"_pcb_%d" >> 16;
    dword_195878 = info.uptime + 1;
    sprintf(s, v0, "set_miner_start_time");
    V_LOCK();
    LOWORD(v1) = -27176;
    HIWORD(v1) = (unsigned int)"d" >> 16;
    logfmt_raw(v9, 0x1000u, 0, v1, s);
    V_UNLOCK();
    LOWORD(v2) = 25096;
    HIWORD(v2) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
    return zlog(g_zc, v2, 137, "set_miner_start_time", 20, 355, 60, v9);
  }
  return result;
}
