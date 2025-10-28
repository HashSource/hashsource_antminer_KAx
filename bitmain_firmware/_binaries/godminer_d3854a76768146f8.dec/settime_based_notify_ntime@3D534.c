int __fastcall settime_based_notify_ntime(const char *a1)
{
  _BYTE *v1; // r5
  int v2; // r0
  int v3; // r4
  unsigned int v5; // r6
  int v6; // r3
  int v7; // r1
  struct timeval tv; // [sp+10h] [bp-1008h] BYREF
  char v9[4096]; // [sp+18h] [bp-1000h] BYREF

  LOWORD(v1) = 19669;
  HIWORD(v1) = (unsigned int)&unk_1761C5 >> 16;
  v2 = strtol(a1, 0, 16);
  if ( v2 )
    v3 = (*v1 ^ 1) & 1;
  else
    v3 = 0;
  if ( v3 )
  {
    v5 = v2;
    tv.tv_usec = 0;
    tv.tv_sec = 0;
    gettimeofday(&tv, 0);
    if ( tv.tv_sec < v5 )
    {
      tv.tv_sec = v5;
      settimeofday(&tv, 0);
      V_LOCK();
      LOWORD(v6) = 15216;
      HIWORD(v6) = (unsigned int)"/frontend_zec/frontend_zec.c" >> 16;
      logfmt_raw(v9, 0x1000u, 0, v6);
      V_UNLOCK();
      LOWORD(v7) = 14256;
      HIWORD(v7) = (unsigned int)",\"%s\",\"%s\",\"%s\",\"%s\"]}" >> 16;
      zlog(g_zc, v7, 152, "settime_based_notify_ntime", 26, 383, 60, v9);
      *v1 = 1;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
