int __fastcall start_freq_compensate_thread_base(void *arg)
{
  void *(*v1)(void *); // r2
  int v2; // r3
  int v3; // r1
  int v5; // r3
  int v6; // r1
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = 9724;
  HIWORD(v1) = (unsigned int)&loc_52718 >> 16;
  if ( pthread_create((pthread_t *)&dword_196850, 0, v1, arg) )
  {
    V_LOCK();
    LOWORD(v5) = -10736;
    HIWORD(v5) = (unsigned int)"ot in lists" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v5);
    V_UNLOCK();
    LOWORD(v6) = -11348;
    HIWORD(v6) = (unsigned int)"ck it, and reboot system" >> 16;
    zlog(g_zc, v6, 166, "start_freq_compensate_thread_base", 33, 436, 100, v7);
    return 5;
  }
  else
  {
    pthread_detach(dword_196850);
    V_LOCK();
    LOWORD(v2) = -10696;
    HIWORD(v2) = (unsigned int)" failed!" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = -11348;
    HIWORD(v3) = (unsigned int)"ck it, and reboot system" >> 16;
    zlog(g_zc, v3, 166, "start_freq_compensate_thread_base", 33, 440, 60, v7);
    return 0;
  }
}
