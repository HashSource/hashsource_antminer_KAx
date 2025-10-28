int __fastcall set_miner_6060info_asic_num_less_than_design_err(int a1, int a2)
{
  int v3; // r6
  char *v4; // r8
  int v6; // r10
  const char *v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r3
  int v11; // r1
  char s[128]; // [sp+10h] [bp-1080h] BYREF
  struct timeval v13[512]; // [sp+90h] [bp-1000h] BYREF

  if ( a1 > 15 )
  {
    V_LOCK();
    LOWORD(v10) = -32060;
    HIWORD(v10) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_monitor.c" >> 16;
    logfmt_raw((char *)v13, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v11) = -32308;
    HIWORD(v11) = (unsigned int)"%s" >> 16;
    v3 = 0;
    zlog(g_zc, v11, 169, "set_miner_6060info_asic_num_less_than_design_err", 48, 122, 40, v13);
  }
  else
  {
    v3 = a1;
  }
  v4 = (char *)&stru_196BB8 + 8 * v3 + 344;
  pthread_mutex_lock(&miner_6060info_lock);
  v4[24] = a2;
  v13[0].tv_sec = 0;
  v13[0].tv_usec = 0;
  if ( a2 )
  {
    gettimeofday(v13, 0);
    v6 = (unsigned __int8)v4[544];
    a2 = (unsigned __int8)v4[24];
    *((_DWORD *)v4 + 7) = v13[0].tv_sec;
    if ( !v6 )
    {
      if ( a2 )
      {
        LOWORD(v7) = -31980;
        HIWORD(v7) = (unsigned int)"_monitor/miner_monitor.c" >> 16;
        snprintf(s, 0x80u, v7, v3);
        V_LOCK();
        LOWORD(v8) = -32084;
        HIWORD(v8) = (unsigned int)"miner_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_monitor.c" >> 16;
        logfmt_raw((char *)v13, 0x1000u, 0, v8, s);
        V_UNLOCK();
        LOWORD(v9) = -32308;
        HIWORD(v9) = (unsigned int)"%s" >> 16;
        zlog(g_zc, v9, 169, "set_miner_6060info_asic_num_less_than_design_err", 48, 125, 100, v13);
        LOBYTE(a2) = v4[24];
      }
    }
  }
  *((_BYTE *)&stru_196BB8 + 8 * v3 + 888) = a2;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
