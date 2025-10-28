int __fastcall send_line(int a1, char *s)
{
  int v3; // r9
  size_t v5; // r0
  int v6; // r8
  int v7; // r3
  int v8; // r8
  signed int v9; // r7
  fd_set *p_tv_usec; // r3
  ssize_t v11; // r0
  int v13; // [sp+14h] [bp-1010h]
  struct timeval timeout; // [sp+18h] [bp-100Ch] BYREF
  fd_set writefds; // [sp+20h] [bp-1004h] BYREF

  if ( a1 == -1 )
  {
    V_LOCK();
    logfmt_raw((char *)&writefds, 0x1000u, 0, 971548);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/common/general/socket.c",
      151,
      "send_line",
      9,
      12,
      20,
      &writefds);
    return 0;
  }
  else
  {
    v3 = 0;
    v5 = strlen(s);
    v6 = a1 + 31;
    if ( a1 >= 0 )
      v6 = a1;
    LOBYTE(v7) = a1 & 0x1F;
    if ( a1 <= 0 )
      v7 = -(-a1 & 0x1F);
    v8 = v6 >> 5;
    v9 = v5 + 1;
    v13 = 1 << v7;
    s[v5] = 10;
    while ( 1 )
    {
      timeout.tv_sec = 0;
      timeout.tv_usec = 0;
      p_tv_usec = (fd_set *)&timeout.tv_usec;
      do
      {
        p_tv_usec->__fds_bits[1] = 0;
        p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
      }
      while ( &writefds.__fds_bits[31] != (__fd_mask *)p_tv_usec );
      writefds.__fds_bits[v8] |= v13;
      if ( select(a1 + 1, 0, &writefds, 0, &timeout) <= 0 )
        break;
      v11 = send(a1, &s[v3], v9, 0x4000);
      if ( v11 < 0 )
      {
        if ( *_errno_location() != 11 )
          return 0;
      }
      else
      {
        v9 -= v11;
        v3 += v11;
        if ( v9 <= 0 )
          return 1;
      }
    }
    return 0;
  }
}
