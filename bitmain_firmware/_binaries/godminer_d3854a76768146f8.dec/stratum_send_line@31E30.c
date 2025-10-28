int __fastcall stratum_send_line(pthread_mutex_t *a1, char *a2)
{
  _BYTE *v2; // r3
  char *v5; // r1
  int v6; // r4
  int v7; // r3
  int v8; // r1
  pthread_mutex_t *v9; // r4
  int v10; // r5
  _DWORD v12[7]; // [sp+28h] [bp-1024h] BYREF
  int v13; // [sp+44h] [bp-1008h]
  char v14[4100]; // [sp+48h] [bp-1004h] BYREF

  LOWORD(v2) = 16744;
  HIWORD(v2) = (unsigned int)&unk_175658 >> 16;
  if ( *v2 )
  {
    V_LOCK();
    LOWORD(v5) = 5040;
    HIWORD(v5) = (unsigned int)"ot a valid byte!" >> 16;
    V_INT((int)v12, v5, a1->__lock);
    LOWORD(v6) = 8812;
    HIWORD(v6) = (unsigned int)"t extranonce2_size" >> 16;
    logfmt_raw(v14, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, v6, a2);
    V_UNLOCK();
    LOWORD(v7) = 8684;
    LOWORD(v8) = 8820;
    HIWORD(v7) = (unsigned int)"lease/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_ckb/frontend_ckb.c" >> 16;
    HIWORD(v8) = (unsigned int)"once2_size" >> 16;
    zlog(g_zc, v8, 145, v7, 17, 31, 60, v14);
  }
  v9 = a1 + 2;
  pthread_mutex_lock(a1 + 2);
  v10 = send_line(a1[1].__kind, a2);
  pthread_mutex_unlock(v9);
  return v10;
}
