int __fastcall socket_full(int a1, __time_t a2)
{
  int v2; // r4
  fd_set *p_tv_usec; // r3
  int v4; // r3
  int v5; // r1
  int v6; // r3
  int v7; // r1
  int v9; // r3
  int v10; // r1
  int v11; // r3
  int v12; // r1
  struct timeval timeout; // [sp+10h] [bp-108Ch] BYREF
  fd_set readfds; // [sp+18h] [bp-1084h] BYREF
  char v15[4100]; // [sp+98h] [bp-1004h] BYREF

  if ( a1 == -1 )
  {
    V_LOCK();
    LOWORD(v11) = -27836;
    HIWORD(v11) = (unsigned int)&unk_15B044 >> 16;
    logfmt_raw(v15, 0x1000u, 0, v11);
    V_UNLOCK();
    LOWORD(v12) = -27820;
    HIWORD(v12) = (unsigned int)&unk_15B054 >> 16;
    zlog(g_zc, v12, 151, "socket_full", 11, 53, 20, v15);
    return 0;
  }
  else
  {
    v2 = a1;
    p_tv_usec = (fd_set *)&timeout.tv_usec;
    do
    {
      p_tv_usec->__fds_bits[1] = 0;
      p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
    }
    while ( p_tv_usec != (fd_set *)&readfds.__fds_bits[31] );
    timeout.tv_usec = 0;
    timeout.tv_sec = a2;
    LOBYTE(a1) = a1 & 0x1F;
    if ( v2 <= 0 )
      a1 = -(-v2 & 0x1F);
    readfds.__fds_bits[v2 / 32] |= 1 << a1;
    V_LOCK();
    LOWORD(v4) = -27668;
    HIWORD(v4) = (unsigned int)&unk_15B0EC >> 16;
    logfmt_raw(v15, 0x1000u, 0, v4);
    V_UNLOCK();
    LOWORD(v5) = -27820;
    HIWORD(v5) = (unsigned int)&unk_15B054 >> 16;
    zlog(g_zc, v5, 151, "socket_full", 11, 61, 20, v15);
    if ( select(v2 + 1, &readfds, 0, 0, &timeout) <= 0 )
    {
      V_LOCK();
      LOWORD(v9) = -27616;
      HIWORD(v9) = (unsigned int)&unk_15B120 >> 16;
      logfmt_raw(v15, 0x1000u, 0, v9);
      V_UNLOCK();
      LOWORD(v10) = -27820;
      HIWORD(v10) = (unsigned int)&unk_15B054 >> 16;
      zlog(g_zc, v10, 151, "socket_full", 11, 66, 20, v15);
      return 0;
    }
    else
    {
      V_LOCK();
      LOWORD(v6) = -27640;
      HIWORD(v6) = (unsigned int)&unk_15B108 >> 16;
      logfmt_raw(v15, 0x1000u, 0, v6);
      V_UNLOCK();
      LOWORD(v7) = -27820;
      HIWORD(v7) = (unsigned int)&unk_15B054 >> 16;
      zlog(g_zc, v7, 151, "socket_full", 11, 63, 20, v15);
      return 1;
    }
  }
}
