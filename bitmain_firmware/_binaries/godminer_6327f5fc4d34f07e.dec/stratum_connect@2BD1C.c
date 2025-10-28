bool __fastcall stratum_connect(int a1)
{
  pthread_mutex_t *v1; // r7
  int v3; // r4
  _BOOL4 server_port_from_url; // r8
  _BYTE *v6; // r0
  int v7; // r0
  bool v8; // nf
  int v9; // r0
  int v10; // r0
  int *v11; // r0
  char *v12; // r0
  struct hostent *v13; // r0
  char *v14; // r3
  unsigned __int16 v15; // [sp+2Eh] [bp-1126h] BYREF
  _DWORD optval[7]; // [sp+30h] [bp-1124h] BYREF
  int v17; // [sp+4Ch] [bp-1108h]
  char cp[256]; // [sp+50h] [bp-1104h] BYREF
  struct sockaddr v19[256]; // [sp+150h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 44);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  v3 = *(_DWORD *)(a1 + 28);
  if ( !strncasecmp((const char *)v3, "stratum+tcp://", 0xEu)
    && (server_port_from_url = get_server_port_from_url((char *)(v3 + 14), cp, &v15)) )
  {
    V_LOCK();
    logfmt_raw((char *)v19, 0x1000u, 0, "url: %s, server: %s, port: %d", *(_DWORD *)(a1 + 28), cp, v15);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_connect",
      15,
      113,
      20,
      v19);
    v6 = *(_BYTE **)(a1 + 40);
    if ( !v6 )
    {
      v6 = calloc(0x4000u, 1u);
      *(_DWORD *)(a1 + 40) = v6;
      *(_DWORD *)(a1 + 36) = 0x4000;
    }
    *v6 = 0;
    if ( *(_DWORD *)(a1 + 32) == -1 )
    {
      v10 = socket(2, 1, 6);
      *(_DWORD *)(a1 + 32) = v10;
      if ( v10 == -1 )
      {
        server_port_from_url = 0;
        goto LABEL_4;
      }
      optval[0] = 1;
      if ( setsockopt(v10, 1, 2, optval, 4u) )
      {
        V_LOCK();
        v11 = _errno_location();
        v12 = strerror(*v11);
        logfmt_raw((char *)v19, 0x1000u, 0, "API setsockopt SO_REUSEADDR failed (ignored): %s", v12);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/stratum_handler.c",
          145,
          "stratum_connect",
          15,
          137,
          100,
          v19);
      }
    }
    if ( inet_addr(cp) == -1 )
    {
      if ( _res_init() < 0 )
      {
        server_port_from_url = 0;
        close(*(_DWORD *)(a1 + 32));
        *(_DWORD *)(a1 + 32) = -1;
        V_LOCK();
        logfmt_raw((char *)v19, 0x1000u, 0, "poolno %d res_init error", *(_DWORD *)a1);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/stratum_handler.c",
          145,
          "stratum_connect",
          15,
          152,
          100,
          v19);
        goto LABEL_4;
      }
      v13 = gethostbyname(cp);
      if ( !v13 )
      {
        server_port_from_url = 0;
        close(*(_DWORD *)(a1 + 32));
        *(_DWORD *)(a1 + 32) = -1;
        goto LABEL_4;
      }
      v14 = *v13->h_addr_list;
      if ( v14 )
        *(_DWORD *)&v19[0].sa_data[2] = *(_DWORD *)v14;
    }
    else
    {
      *(_DWORD *)&v19[0].sa_data[2] = inet_addr(cp);
    }
    v19[0].sa_family = 2;
    v7 = *(_DWORD *)(a1 + 32);
    *(_WORD *)v19[0].sa_data = __rev16(v15);
    v8 = connect(v7, v19, 0x10u) < 0;
    v9 = *(_DWORD *)(a1 + 32);
    if ( v8 )
    {
      close(v9);
      server_port_from_url = 0;
      *(_DWORD *)(a1 + 32) = -1;
    }
    else
    {
      keep_sockalive(v9);
    }
  }
  else
  {
    server_port_from_url = 0;
    V_LOCK();
    V_STR(optval, "pool", *(const char **)(a1 + 28));
    logfmt_raw(
      (char *)v19,
      0x1000u,
      0,
      v17,
      optval[0],
      optval[1],
      optval[2],
      optval[3],
      optval[4],
      optval[5],
      optval[6],
      v17,
      "prase url err!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_connect",
      15,
      110,
      100,
      v19);
  }
LABEL_4:
  pthread_mutex_unlock(v1);
  return server_port_from_url;
}
