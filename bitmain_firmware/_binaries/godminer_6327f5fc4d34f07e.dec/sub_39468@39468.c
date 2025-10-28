bool __fastcall sub_39468(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _BOOL4 v4; // r4
  _DWORD *v7; // r0
  const char *v8; // r5
  _DWORD *v9; // r0
  char *v10; // r6
  _DWORD *v11; // r0
  char *v12; // r8
  _DWORD *v13; // r0
  char *v14; // r7
  _DWORD *v15; // r0
  char *v16; // r9
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  char *v19; // r10
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  const char *kind; // r0
  size_t v23; // r0
  void *v24; // r4
  size_t v25; // r4
  size_t v26; // r0
  size_t v27; // r0
  size_t v28; // r4
  unsigned __int8 *v29; // r2
  char *v30; // r1
  bool v31; // cc
  _BOOL4 v32; // r0
  unsigned int v33; // r3
  int v34; // r3
  pthread_mutex_t *v35; // r10
  size_t lock; // r2
  const void *count; // r1
  size_t v38; // r0
  size_t v39; // r7
  unsigned __int8 *v40; // r0
  _BYTE *i; // r2
  char v42; // t1
  size_t v43; // r3
  char *v44; // r0
  _BYTE *j; // r2
  char v46; // t1
  size_t v47; // r3
  char *v48; // r0
  _BYTE *k; // r2
  char v50; // t1
  size_t v51; // r3
  _BYTE *v52; // r1
  unsigned __int64 *v53; // r2
  char v54; // t1
  int *v55; // r1
  char *v56; // r2
  char v57; // t1
  char *v58; // r1
  signed int v59; // r2
  char v60; // t1
  int v61; // r0
  size_t v62; // r7
  char *v63; // r1
  _BYTE *m; // r3
  char v65; // t1
  size_t v66; // r7
  _BYTE *v67; // r2
  unsigned __int64 *v68; // r3
  char v69; // t1
  size_t v70; // r3
  size_t v71; // r7
  size_t v72; // r7
  unsigned __int64 *v73; // r9
  int v74; // r0
  int v75; // r1
  int v76; // [sp+4h] [bp-10A0h]
  char *src; // [sp+10h] [bp-1094h]
  char *v78; // [sp+14h] [bp-1090h]
  char *s; // [sp+18h] [bp-108Ch]
  char *sa; // [sp+18h] [bp-108Ch]
  char *v81; // [sp+24h] [bp-1080h]
  char *v82; // [sp+28h] [bp-107Ch]
  unsigned __int8 *v83; // [sp+2Ch] [bp-1078h]
  void *v84; // [sp+30h] [bp-1074h]
  signed int v85; // [sp+34h] [bp-1070h]
  signed int v86; // [sp+38h] [bp-106Ch]
  signed int v87; // [sp+3Ch] [bp-1068h]
  signed int v88; // [sp+40h] [bp-1064h]
  void *v89; // [sp+44h] [bp-1060h]
  signed int v90; // [sp+48h] [bp-105Ch]
  size_t n; // [sp+4Ch] [bp-1058h]
  size_t nmemb; // [sp+50h] [bp-1054h]
  void *ptr; // [sp+58h] [bp-104Ch]
  _BYTE v94[20]; // [sp+6Ch] [bp-1038h] BYREF
  unsigned __int64 dest[4]; // [sp+80h] [bp-1024h] BYREF
  _DWORD v96[1025]; // [sp+A0h] [bp-1004h] BYREF

  if ( !a3 || *a3 != 1 )
    return 0;
  v7 = json_array_get(a3, 0);
  v8 = (const char *)json_string_value(v7);
  v9 = json_array_get(a3, 1u);
  v10 = (char *)json_string_value(v9);
  v11 = json_array_get(a3, 2u);
  v12 = (char *)json_string_value(v11);
  v13 = json_array_get(a3, 3u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 4u);
  v16 = (char *)json_string_value(v15);
  v17 = json_array_get(a3, 5u);
  s = (char *)json_string_value(v17);
  v18 = json_array_get(a3, 6u);
  v19 = (char *)json_string_value(v18);
  v20 = json_array_get(a3, 7u);
  v78 = (char *)json_string_value(v20);
  v21 = json_array_get(a3, 8u);
  src = (char *)json_string_value(v21);
  if ( valid_ascii(v8)
    && valid_hex(v10)
    && valid_hex(v14)
    && valid_hex(v12)
    && valid_hex(v16)
    && valid_hex(s)
    && valid_hex(v19)
    && valid_hex(v78)
    && valid_hex(src) )
  {
    if ( a2 == (pthread_mutex_t *)-448 )
      return 0;
    kind = (const char *)a2[65].__kind;
    if ( kind && !strcmp(kind, v8) )
    {
      V_LOCK();
      logfmt_raw((char *)v96, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[65].__kind, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_hns/frontend_hns.c",
        164,
        "stratum_notify_hns",
        18,
        140,
        80,
        v96);
    }
    if ( strlen(v8) > 0x1F )
    {
      V_LOCK();
      v23 = strlen(v8);
      logfmt_raw((char *)v96, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v8, v23);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_hns/frontend_hns.c",
        164,
        "stratum_notify_hns",
        18,
        143,
        80,
        v96);
    }
    pthread_mutex_lock(a2 + 66);
    v24 = (void *)a2[65].__kind;
    a2[65].__kind = (int)_strdup(v8);
    if ( v24 )
      free(v24);
    snprintf(&a2[3].__size[20], 0x41u, "%s", v10);
    v85 = strlen(v10) >> 1;
    v86 = strlen(v12) >> 1;
    v87 = strlen(v14) >> 1;
    v90 = strlen(v16) >> 1;
    v88 = strlen(s) >> 1;
    v25 = strlen(v19);
    nmemb = strlen(src) >> 1;
    n = v25 >> 1;
    snprintf(&a2[13].__size[12], v25 + 1, "%s", v19);
    v26 = strlen(v78);
    snprintf((char *)&a2[14], v26 + 1, "%s", v78);
    v27 = strlen(src);
    snprintf(&a2[14].__size[12], v27 + 1, "%s", src);
    strcpy(&a2[64].__size[12], src);
    a2[18].__size[4] = 1;
    v28 = strlen(v78);
    ptr = calloc(v28, 1u);
    v4 = hex2bin((int)ptr, (unsigned __int8 *)v78, v28 >> 1);
    if ( v4 )
    {
      v89 = calloc(nmemb, 1u);
      v4 = hex2bin((int)v89, (unsigned __int8 *)src, nmemb);
      if ( v4 )
      {
        v84 = calloc(n, 1u);
        v4 = hex2bin((int)v84, (unsigned __int8 *)v19, n);
        if ( v4 )
        {
          v83 = (unsigned __int8 *)calloc(v86, 1u);
          v4 = hex2bin((int)v83, (unsigned __int8 *)v12, v86);
          if ( v4 )
          {
            v29 = v83 + 32;
            v30 = (char *)(v83 + 160);
            while ( 1 )
            {
              v31 = 0;
              if ( *v29 != 255 )
                v31 = v30 > (char *)v29;
              if ( !v31 )
                break;
              ++v29;
            }
            while ( 1 )
            {
              v32 = *v29 == 255;
              if ( v30 <= (char *)v29 )
                v32 = 0;
              if ( !v32 )
                break;
              ++v29;
            }
            v33 = 0;
            if ( *(v29 - 1) == 255 && *(v29 - 2) == 255 )
            {
              v75 = v29[1];
              v33 = (unsigned __int16)(v29[2] + (v29[3] << 8));
              if ( v75 == 3 )
              {
                v33 += v29[4] << 16;
              }
              else if ( v75 == 4 )
              {
                v33 += (v29[4] + (v29[5] << 8)) << 16;
              }
            }
            a2[68].__count = v33;
            v82 = (char *)calloc(v87, 1u);
            v4 = hex2bin((int)v82, (unsigned __int8 *)v14, v87);
            if ( v4 )
            {
              v81 = (char *)calloc(v88, 1u);
              v4 = hex2bin((int)v81, (unsigned __int8 *)s, v88);
              if ( v4 )
              {
                sa = (char *)calloc(v90, 1u);
                v4 = hex2bin((int)sa, (unsigned __int8 *)v16, v90);
                if ( v4 )
                {
                  v73 = (unsigned __int64 *)calloc(v85, 1u);
                  v4 = hex2bin((int)v73, (unsigned __int8 *)v10, v85);
                  if ( v4 )
                  {
                    v34 = v73 == 0;
                    if ( !sa )
                      v34 = 1;
                    if ( v34 )
                    {
                      V_LOCK();
                      logfmt_raw((char *)v96, 0x1000u, 0, "%s input value error", "hns_padding");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                        164,
                        "hns_padding",
                        11,
                        82,
                        100,
                        v96);
                    }
                    else
                    {
                      do
                      {
                        v94[v34] = *((_BYTE *)v73 + v34) ^ sa[v34];
                        ++v34;
                      }
                      while ( v34 != 20 );
                    }
                    if ( memcmp(v73, &dword_108684, 0x20u) )
                    {
                      dword_108684 = *(_DWORD *)v73;
                      memset(dest, 0, sizeof(dest));
                      memset(&unk_1086A4, 0, 0x20u);
                      memset(v96, 0, 0xF0u);
                      hs_blake2b_init(v96, 32);
                      hs_blake2b_update((int)v96, v73, 0x20u);
                      hs_blake2b_update((int)v96, dest, 0x20u);
                      hs_blake2b_final((int)v96, &unk_1086A4, 0x20u);
                    }
                    v35 = a2 + 19;
                    lock = a2[3].__lock;
                    count = (const void *)a2[3].__count;
                    memset(dest, 0, 22);
                    memcpy(dest, count, lock);
                    memset(&a2[19], 0, 0x100u);
                    v38 = strlen(v78);
                    memcpy(&a2[19], ptr, v38 >> 1);
                    v39 = strlen(v78) >> 1;
                    memcpy((char *)&a2[19] + v39, v84, n);
                    v40 = &v83[v86];
                    for ( i = (char *)&a2[19] + v39 + n; v86 > i - ((char *)&a2[19] + v39 + n); ++i )
                    {
                      v42 = *--v40;
                      *i = v42;
                    }
                    v43 = v39 + n + v86;
                    v44 = &v82[v87];
                    for ( j = (char *)v35 + v43; j - ((char *)v35 + v43) < v87; ++j )
                    {
                      v46 = *--v44;
                      *j = v46;
                    }
                    v47 = v43 + v87;
                    v48 = &v81[v88];
                    for ( k = (char *)v35 + v47; v88 > k - ((char *)v35 + v47); ++k )
                    {
                      v50 = *--v48;
                      *k = v50;
                    }
                    v51 = v47 + v88;
                    v52 = (char *)v35 + v51;
                    v53 = (unsigned __int64 *)((char *)&dest[2] + 6);
                    do
                    {
                      v54 = *((_BYTE *)v53 - 1);
                      v53 = (unsigned __int64 *)((char *)v53 - 1);
                      *v52++ = v54;
                    }
                    while ( v53 != dest );
                    v55 = &dword_1086C4;
                    v56 = &v35->__size[v51 + 21];
                    do
                    {
                      v57 = *((_BYTE *)v55 - 1);
                      v55 = (int *)((char *)v55 - 1);
                      *++v56 = v57;
                    }
                    while ( v55 != (int *)&unk_1086A4 );
                    v58 = &sa[v90];
                    v59 = 0;
                    while ( 1 )
                    {
                      v31 = v90 <= v59;
                      v61 = (int)v35 + v51 + v59++;
                      if ( v31 )
                        break;
                      v60 = *--v58;
                      *(_BYTE *)(v61 + 54) = v60;
                    }
                    v62 = v51 + v90 + 54;
                    v63 = (char *)v73 + v85;
                    for ( m = (char *)v35 + v62; m - ((char *)v35 + v62) < v85; ++m )
                    {
                      v65 = *--v63;
                      *m = v65;
                    }
                    v66 = v62 + v85;
                    v67 = (char *)v35 + v66;
                    v68 = dest;
                    do
                    {
                      v69 = *((_BYTE *)v68 - 1);
                      v68 = (unsigned __int64 *)((char *)v68 - 1);
                      *v67++ = v69;
                    }
                    while ( v94 != (_BYTE *)v68 );
                    v70 = v66 + 20;
                    v71 = v66 + 24;
                    *(int *)((char *)&v35->__lock + v70) = 0;
                    memcpy((char *)v35 + v71, v89, nmemb);
                    v72 = v71 + nmemb;
                    *(int *)((char *)&v35->__lock + v72) = 0;
                    *(_WORD *)&v35->__size[v72 + 4] = 0;
                    *((_QWORD *)&a2[18].__align + 2) = a2->__lock;
                    goto LABEL_71;
                  }
                  V_LOCK();
                  logfmt_raw((char *)v96, 0x1000u, 0, "parse prev_hash failed!");
                  V_UNLOCK();
                  v74 = 229;
                }
                else
                {
                  V_LOCK();
                  v73 = 0;
                  logfmt_raw((char *)v96, 0x1000u, 0, "parse nameroot failed!");
                  V_UNLOCK();
                  v74 = 221;
                }
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                  164,
                  "stratum_notify_hns",
                  18,
                  v74,
                  100,
                  v96);
              }
              else
              {
                V_LOCK();
                sa = 0;
                v73 = 0;
                logfmt_raw((char *)v96, 0x1000u, 0, "parse reserved_root failed!");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                  164,
                  "stratum_notify_hns",
                  18,
                  213,
                  100,
                  v96);
              }
            }
            else
            {
              V_LOCK();
              v81 = 0;
              v73 = 0;
              logfmt_raw((char *)v96, 0x1000u, 0, "parse witness failed!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                164,
                "stratum_notify_hns",
                18,
                205,
                100,
                v96);
              sa = 0;
            }
          }
          else
          {
            V_LOCK();
            v81 = 0;
            v73 = 0;
            logfmt_raw((char *)v96, 0x1000u, 0, "parse merkle failed!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
              164,
              "stratum_notify_hns",
              18,
              195,
              100,
              v96);
            sa = 0;
            v82 = 0;
          }
        }
        else
        {
          V_LOCK();
          v81 = 0;
          v73 = 0;
          logfmt_raw((char *)v96, 0x1000u, 0, "parse bloc_version failed!");
          V_UNLOCK();
          sa = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
            164,
            "stratum_notify_hns",
            18,
            187,
            100,
            v96);
          v82 = 0;
          v83 = 0;
        }
LABEL_71:
        pthread_mutex_unlock(a2 + 66);
        V_LOCK();
        logfmt_raw((char *)v96, 0x1000u, 0, "job_id: %s", v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          164,
          "stratum_notify_hns",
          18,
          299,
          20,
          v96);
        V_LOCK();
        logfmt_raw((char *)v96, 0x1000u, 0, "prev_hash: %s", v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          164,
          "stratum_notify_hns",
          18,
          300,
          20,
          v96);
        V_LOCK();
        logfmt_raw((char *)v96, 0x1000u, 0, "nbit: %s", v78);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          164,
          "stratum_notify_hns",
          18,
          301,
          20,
          v96);
        V_LOCK();
        logfmt_raw((char *)v96, 0x1000u, 0, "ntime: %s", src);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          164,
          "stratum_notify_hns",
          18,
          302,
          20,
          v96);
        if ( ptr )
          free(ptr);
        if ( v89 )
          free(v89);
        if ( v84 )
          free(v84);
        if ( v83 )
          free(v83);
        if ( v82 )
          free(v82);
        if ( v81 )
          free(v81);
        if ( sa )
          free(sa);
        if ( v73 )
          free(v73);
        return v4;
      }
      V_LOCK();
      v81 = 0;
      logfmt_raw((char *)v96, 0x1000u, 0, "parse ntime failed!");
      V_UNLOCK();
      v76 = 179;
      sa = 0;
      v82 = 0;
    }
    else
    {
      V_LOCK();
      v89 = 0;
      logfmt_raw((char *)v96, 0x1000u, 0, "parse nbits failed!");
      V_UNLOCK();
      v76 = 171;
      v81 = 0;
      sa = 0;
      v82 = 0;
    }
    v73 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_hns/frontend_hns.c",
      164,
      "stratum_notify_hns",
      18,
      v76,
      100,
      v96);
    v83 = 0;
    v84 = 0;
    goto LABEL_71;
  }
  V_LOCK();
  logfmt_raw((char *)v96, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_hns/frontend_hns.c",
    164,
    "stratum_notify_hns",
    18,
    134,
    100,
    v96);
  return 0;
}
