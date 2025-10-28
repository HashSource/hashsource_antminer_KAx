int __fastcall set_miner_6060info_malloc_failed_err(int a1)
{
  int v3; // r3
  int v4; // r1
  int v5[32]; // [sp+10h] [bp-1080h] BYREF
  struct timeval tv; // [sp+90h] [bp-1000h] BYREF

  pthread_mutex_lock(&miner_6060info_lock);
  byte_196DB0 = a1;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  if ( a1 )
  {
    gettimeofday(&tv, 0);
    LOBYTE(a1) = byte_196DB0;
    dword_196DB4 = tv.tv_sec;
    if ( !byte_196FB8 )
    {
      if ( byte_196DB0 )
      {
        v5[0] = 3226189;
        V_LOCK();
        LOWORD(v3) = -32084;
        HIWORD(v3) = (unsigned int)"miner_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_monitor.c" >> 16;
        logfmt_raw((char *)&tv, 0x1000u, 0, v3, v5);
        V_UNLOCK();
        LOWORD(v4) = -32308;
        HIWORD(v4) = (unsigned int)"%s" >> 16;
        zlog(g_zc, v4, 169, "set_miner_6060info_malloc_failed_err", 36, 133, 100, &tv);
        LOBYTE(a1) = byte_196DB0;
      }
    }
  }
  byte_196FB8 = a1;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
