char *__fastcall stratum_recv_line(int *a1)
{
  pthread_mutex_t *v1; // r7
  char *v3; // r10
  signed int v4; // r5
  char *v5; // r0
  char *v6; // r6
  size_t v7; // r0
  _BYTE *v8; // r3
  ssize_t v10; // r10
  int *v11; // r11
  int v12; // r0
  int v13; // r2
  time_t v14; // [sp+2Ch] [bp-5028h] BYREF
  _DWORD v15[7]; // [sp+30h] [bp-5024h] BYREF
  int v16; // [sp+4Ch] [bp-5008h]
  _DWORD v17[7]; // [sp+50h] [bp-5004h] BYREF
  int v18; // [sp+6Ch] [bp-4FE8h]
  char v19[16388]; // [sp+1050h] [bp-4004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 11);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 11));
  v3 = (char *)a1[10];
  if ( !strchr(v3, 10) && a1[8] != -1 )
  {
    time(&v14);
    while ( 1 )
    {
      memset(v19, 0, 0x4000u);
      v10 = recv(a1[8], v19, 0x3FFCu, 0);
      if ( !v10 )
      {
        V_LOCK();
        logfmt_raw((char *)v17, 0x1000u, 0, "stratum_recv_line read 0 bytes");
        V_UNLOCK();
        v12 = g_zc;
        v13 = 53;
        goto LABEL_20;
      }
      if ( v10 < 0 )
      {
        V_LOCK();
        v11 = _errno_location();
        logfmt_raw((char *)v17, 0x1000u, 0, "stratum_recv_line recv failed err %zd %d", v10, *v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/stratum_handler.c",
          145,
          "stratum_recv_line",
          17,
          58,
          20,
          v17);
        if ( *v11 != 11 || !socket_full(a1[8], 1) )
        {
          V_LOCK();
          logfmt_raw((char *)v17, 0x1000u, 0, "stratum_recv_line recv failed detailed error %d", *v11);
          V_UNLOCK();
          v12 = g_zc;
          v13 = 60;
LABEL_20:
          zlog(
            v12,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/stratum_handler.c",
            145,
            "stratum_recv_line",
            17,
            v13,
            20,
            v17);
          V_LOCK();
          V_INT((int)v15, "poolno", *a1);
          logfmt_raw(
            v19,
            0x1000u,
            0,
            v16,
            v15[0],
            v15[1],
            v15[2],
            v15[3],
            v15[4],
            v15[5],
            v15[6],
            v16,
            "stratum_recv_line failed");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/stratum_handler.c",
            145,
            "stratum_recv_line",
            17,
            69,
            20,
            v19);
          goto LABEL_21;
        }
      }
      else
      {
        stratum_buffer_append((int)a1, v19);
      }
      if ( time(0) - v14 > 59 )
        break;
      v3 = (char *)a1[10];
      if ( strchr(v3, 10) )
        goto LABEL_2;
    }
    v3 = (char *)a1[10];
  }
LABEL_2:
  v4 = strlen(v3);
  v5 = strtok(v3, "\n");
  if ( v5 )
  {
    v6 = _strdup(v5);
    v7 = strlen(v6);
    v8 = (_BYTE *)a1[10];
    if ( (int)(v7 + 1) < v4 )
      memmove((void *)a1[10], &v8[v7 + 1], v4 - v7 + 1);
    else
      *v8 = 0;
    pthread_mutex_unlock(v1);
    if ( opt_protocol )
    {
      V_LOCK();
      V_INT((int)v17, "poolno", *a1);
      logfmt_raw(v19, 0x1000u, 0, v18, v17[0], v17[1], v17[2], v17[3], v17[4], v17[5], v17[6], v18, "< %s", v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/stratum_handler.c",
        145,
        "stratum_recv_line",
        17,
        91,
        60,
        v19);
    }
    return v6;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, "stratum_recv_line failed to parse a newline-terminated string");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_recv_line",
      17,
      77,
      100,
      v19);
LABEL_21:
    pthread_mutex_unlock(v1);
    return 0;
  }
}
