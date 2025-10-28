bool __fastcall stratum_connect(int a1)
{
  pthread_mutex_t *v1; // r7
  int v3; // r4
  _BOOL4 server_port_from_url; // r8
  int v5; // r4
  int v6; // r1
  int v8; // r3
  int v9; // r1
  _BYTE *v10; // r0
  int v11; // r0
  int *v12; // r0
  char *v13; // r0
  int v14; // r3
  int v15; // r1
  int v16; // r0
  int *v17; // r0
  char *v18; // r0
  int v19; // r3
  int v20; // r1
  struct hostent *v21; // r0
  char *v22; // r3
  int v23; // r3
  int v24; // r0
  int v25; // r12
  int v26; // r2
  int v27; // r1
  int v28; // r3
  int v29; // r3
  unsigned __int16 v30; // [sp+2Eh] [bp-1136h] BYREF
  struct sockaddr addr; // [sp+30h] [bp-1134h] BYREF
  _DWORD optval[7]; // [sp+40h] [bp-1124h] BYREF
  int v33; // [sp+5Ch] [bp-1108h]
  char cp[256]; // [sp+60h] [bp-1104h] BYREF
  char v35[4100]; // [sp+160h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 48);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 48));
  v3 = *(_DWORD *)(a1 + 32);
  if ( strncasecmp((const char *)v3, "stratum+tcp://", 0xEu)
    || !(server_port_from_url = get_server_port_from_url((char *)(v3 + 14), cp, &v30)) )
  {
    server_port_from_url = 0;
    V_LOCK();
    V_STR(optval, "pool", *(const char **)(a1 + 32));
    LOWORD(v5) = 9228;
    HIWORD(v5) = (unsigned int)"\",\"%s\"]}" >> 16;
    logfmt_raw(
      v35,
      0x1000u,
      0,
      v33,
      optval[0],
      optval[1],
      optval[2],
      optval[3],
      optval[4],
      optval[5],
      optval[6],
      v33,
      v5);
    V_UNLOCK();
    LOWORD(v6) = 8820;
    HIWORD(v6) = (unsigned int)"once2_size" >> 16;
    zlog(g_zc, v6, 145, "stratum_connect", 15, 117, 100, v35);
    goto LABEL_4;
  }
  V_LOCK();
  LOWORD(v8) = 9244;
  HIWORD(v8) = (unsigned int)"tum_parse_extranonce_dash" >> 16;
  logfmt_raw(v35, 0x1000u, 0, v8, *(_DWORD *)(a1 + 32), cp, v30);
  V_UNLOCK();
  LOWORD(v9) = 8820;
  HIWORD(v9) = (unsigned int)"once2_size" >> 16;
  zlog(g_zc, v9, 145, "stratum_connect", 15, 120, 20, v35);
  v10 = *(_BYTE **)(a1 + 44);
  if ( !v10 )
  {
    v10 = calloc(0x4000u, 1u);
    *(_DWORD *)(a1 + 44) = v10;
    *(_DWORD *)(a1 + 40) = 0x4000;
  }
  *v10 = 0;
  if ( *(_DWORD *)(a1 + 36) == -1 )
  {
    v16 = socket(2, 1, 6);
    *(_DWORD *)(a1 + 36) = v16;
    if ( v16 == -1 )
    {
      V_LOCK();
      LOWORD(v23) = 9276;
      HIWORD(v23) = (unsigned int)"tum_notify_dash" >> 16;
      server_port_from_url = 0;
      logfmt_raw(v35, 0x1000u, 0, v23);
      V_UNLOCK();
      v24 = g_zc;
      v25 = 100;
      v26 = 135;
      goto LABEL_24;
    }
    optval[0] = 1;
    if ( setsockopt(v16, 1, 2, optval, 4u) )
    {
      V_LOCK();
      v17 = _errno_location();
      v18 = strerror(*v17);
      LOWORD(v19) = 9304;
      HIWORD(v19) = (unsigned int)"enkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c" >> 16;
      logfmt_raw(v35, 0x1000u, 0, v19, v18);
      V_UNLOCK();
      LOWORD(v20) = 8820;
      HIWORD(v20) = (unsigned int)"once2_size" >> 16;
      zlog(g_zc, v20, 145, "stratum_connect", 15, 145, 100, v35);
    }
  }
  if ( inet_addr(cp) == -1 )
  {
    if ( _res_init() < 0 )
    {
      server_port_from_url = 0;
      close(*(_DWORD *)(a1 + 36));
      *(_DWORD *)(a1 + 36) = -1;
      V_LOCK();
      LOWORD(v28) = 9356;
      HIWORD(v28) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c" >> 16;
      logfmt_raw(v35, 0x1000u, 0, v28, *(_DWORD *)a1);
      V_UNLOCK();
      v24 = g_zc;
      v25 = 100;
      v26 = 160;
    }
    else
    {
      v21 = gethostbyname(cp);
      if ( v21 )
      {
        v22 = *v21->h_addr_list;
        if ( v22 )
          *(_DWORD *)&addr.sa_data[2] = *(_DWORD *)v22;
        goto LABEL_10;
      }
      server_port_from_url = 0;
      close(*(_DWORD *)(a1 + 36));
      *(_DWORD *)(a1 + 36) = -1;
      V_LOCK();
      LOWORD(v29) = 9384;
      HIWORD(v29) = (unsigned int)"/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c" >> 16;
      logfmt_raw(v35, 0x1000u, 0, v29);
      V_UNLOCK();
      v24 = g_zc;
      v25 = 20;
      v26 = 169;
    }
LABEL_24:
    LOWORD(v27) = 8820;
    HIWORD(v27) = (unsigned int)"once2_size" >> 16;
    zlog(v24, v27, 145, "stratum_connect", 15, v26, v25, v35);
    goto LABEL_4;
  }
  *(_DWORD *)&addr.sa_data[2] = inet_addr(cp);
LABEL_10:
  addr.sa_family = 2;
  v11 = *(_DWORD *)(a1 + 36);
  *(_WORD *)addr.sa_data = __rev16(v30);
  if ( connect(v11, &addr, 0x10u) >= 0 )
  {
    keep_sockalive(*(_DWORD *)(a1 + 36));
  }
  else
  {
    if ( dword_174CCC <= 3 )
    {
      V_LOCK();
      v12 = _errno_location();
      v13 = strerror(*v12);
      LOWORD(v14) = 9408;
      HIWORD(v14) = (unsigned int)"odminer-new/frontend/frontend_dash/frontend_dash.c" >> 16;
      logfmt_raw(v35, 0x1000u, 0, v14, v13);
      V_UNLOCK();
      LOWORD(v15) = 8820;
      HIWORD(v15) = (unsigned int)"once2_size" >> 16;
      zlog(g_zc, v15, 145, "stratum_connect", 15, 197, 100, v35);
    }
    server_port_from_url = 0;
    close(*(_DWORD *)(a1 + 36));
    *(_DWORD *)(a1 + 36) = -1;
  }
LABEL_4:
  pthread_mutex_unlock(v1);
  return server_port_from_url;
}
