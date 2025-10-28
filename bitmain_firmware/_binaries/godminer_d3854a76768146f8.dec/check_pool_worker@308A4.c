int check_pool_worker()
{
  int v0; // r4
  int v1; // r8
  int v2; // r6
  int v3; // r3
  _BYTE *v4; // r3
  int v5; // r10
  int v6; // r1
  int v8; // r3
  int v9; // r1
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( total_pools <= 0 )
    goto LABEL_10;
  v0 = 0;
  LOWORD(v1) = 7940;
  v2 = 0;
  do
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(pools + 4 * v0);
      if ( **(_BYTE **)(v3 + 12) )
        break;
LABEL_3:
      if ( total_pools <= ++v0 )
        goto LABEL_8;
    }
    v4 = *(_BYTE **)(v3 + 16);
    v5 = (unsigned __int8)*v4;
    if ( *v4 )
    {
      ++v2;
      goto LABEL_3;
    }
    ++v0;
    V_LOCK();
    HIWORD(v1) = (unsigned int)"nonce" >> 16;
    logfmt_raw(v10, 0x1000u, v5, v1);
    V_UNLOCK();
    LOWORD(v6) = 7452;
    HIWORD(v6) = (unsigned int)"se" >> 16;
    zlog(g_zc, v6, 134, "check_pool_worker", 17, 419, 100, v10);
  }
  while ( total_pools > v0 );
LABEL_8:
  if ( v2 )
    return 0;
LABEL_10:
  V_LOCK();
  LOWORD(v8) = 7892;
  HIWORD(v8) = (unsigned int)"ifficulty" >> 16;
  logfmt_raw(v10, 0x1000u, 0, v8);
  V_UNLOCK();
  LOWORD(v9) = 7452;
  HIWORD(v9) = (unsigned int)"se" >> 16;
  zlog(g_zc, v9, 134, "check_pool_worker", 17, 425, 100, v10);
  return -1;
}
