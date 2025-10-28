bool __fastcall sub_3800C(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _BOOL4 v7; // r4
  _DWORD *v9; // r0
  const char *v10; // r7
  _DWORD *v11; // r0
  char *v12; // r8
  _DWORD *v13; // r0
  char *v14; // r9
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  char *v17; // r11
  _DWORD *v18; // r0
  const char *v19; // r10
  _DWORD *v20; // r0
  bool v21; // r4
  const char *kind; // r0
  size_t v23; // r0
  int owner; // r3
  signed int count; // r1
  int v26; // r2
  int v27; // r2
  signed int i; // r7
  char *v29; // r5
  void *v30; // r10
  unsigned __int8 *v31; // r7
  unsigned __int8 *v32; // r3
  unsigned __int8 *v33; // r1
  bool v34; // cf
  unsigned int v35; // t1
  bool v36; // cc
  _BOOL4 v37; // r2
  int v38; // t1
  _BOOL4 v39; // r2
  unsigned int v40; // r2
  void *v41; // r8
  void *v42; // r0
  void *v43; // r9
  unsigned int *v44; // r2
  int *v45; // r1
  unsigned int v46; // t1
  unsigned int v47; // r10
  _DWORD *v48; // r0
  unsigned __int8 *v49; // r4
  void *v50; // r0
  int v51; // r1
  int v52; // lr
  signed int v53; // [sp+14h] [bp-1040h]
  const char *v54; // [sp+18h] [bp-103Ch]
  unsigned int v55; // [sp+18h] [bp-103Ch]
  char *s; // [sp+1Ch] [bp-1038h]
  _BOOL4 v57; // [sp+20h] [bp-1034h]
  pthread_mutex_t *mutex; // [sp+28h] [bp-102Ch]
  void *ptr; // [sp+2Ch] [bp-1028h]
  char *ptra; // [sp+2Ch] [bp-1028h]
  size_t n; // [sp+30h] [bp-1024h]
  size_t v62; // [sp+34h] [bp-1020h]
  size_t nmemb; // [sp+38h] [bp-101Ch]
  int v64; // [sp+3Ch] [bp-1018h]
  int v65; // [sp+4Ch] [bp-1008h] BYREF
  char v66[4100]; // [sp+50h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v53 = (signed int)json_array_size(v5);
  v9 = json_array_get(a3, 0);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 1u);
  v12 = (char *)json_string_value(v11);
  v13 = json_array_get(a3, 2u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 3u);
  s = (char *)json_string_value(v15);
  v16 = json_array_get(a3, 5u);
  v17 = (char *)json_string_value(v16);
  v18 = json_array_get(a3, 6u);
  v19 = (const char *)json_string_value(v18);
  v20 = json_array_get(a3, 7u);
  v54 = (const char *)json_string_value(v20);
  if ( json_array_get(a3, 8u) )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v57 = v21;
  }
  else
  {
    v21 = 0;
    v57 = 0;
  }
  if ( valid_ascii(v10) && valid_hex(v12) && valid_hex(v14) && valid_hex(v17) && valid_hex(v19) && valid_hex(v54) )
  {
    if ( a2 == (pthread_mutex_t *)-448 )
      return 0;
    kind = (const char *)a2[65].__kind;
    if ( kind && !strcmp(kind, v10) )
    {
      V_LOCK();
      logfmt_raw(v66, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[65].__kind, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        164,
        "stratum_notify_dcr",
        18,
        110,
        80,
        v66);
    }
    if ( strlen(v10) > 0x1F )
    {
      V_LOCK();
      v23 = strlen(v10);
      logfmt_raw(v66, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v10, v23);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        164,
        "stratum_notify_dcr",
        18,
        113,
        80,
        v66);
    }
    mutex = a2 + 66;
    pthread_mutex_lock(a2 + 66);
    ptr = (void *)a2[65].__kind;
    a2[65].__kind = (int)_strdup(v10);
    if ( ptr )
      free(ptr);
    snprintf(&a2[3].__size[20], 0x41u, "%s", v12);
    ptra = (char *)(strlen(v12) >> 1);
    nmemb = strlen(v17) >> 1;
    n = strlen(v14) >> 1;
    v62 = strlen(s) >> 1;
    snprintf(&a2[13].__size[12], 9u, "%s", v17);
    snprintf((char *)&a2[14], 9u, "%s", v19);
    snprintf(&a2[14].__size[12], 9u, "%s", v54);
    strcpy(&a2[64].__size[12], v54);
    owner = a2[3].__owner;
    count = a2[13].__count;
    v26 = n + a2[3].__lock;
    a2[18].__size[4] = v21;
    a2[13].__lock = v26;
    v55 = v62 + owner + v26;
    a2[12].__lock = v55;
    if ( count > 0 )
    {
      v27 = a2[13].__owner;
      for ( i = 0; i < count; ++i )
      {
        if ( *(_DWORD *)(v27 + 4 * i) )
        {
          free(*(void **)(v27 + 4 * i));
          v27 = a2[13].__owner;
          count = a2[13].__count;
          *(_DWORD *)(v27 + 4 * i) = 0;
        }
      }
    }
    if ( v53 )
    {
      a2[13].__owner = (int)realloc((void *)a2[13].__owner, 4 * v53);
      if ( v53 > 0 )
      {
        v47 = 0;
        while ( 1 )
        {
          v48 = json_array_get(v6, v47);
          v49 = (unsigned __int8 *)json_string_value(v48);
          v65 = a2[13].__owner;
          v64 = 4 * v47;
          v50 = malloc(0x20u);
          *(_DWORD *)(v65 + 4 * v47) = v50;
          if ( !v50 )
          {
            V_LOCK();
            logfmt_raw(v66, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
              164,
              "stratum_notify_dcr",
              18,
              144,
              100,
              v66);
          }
          if ( opt_protocol )
          {
            V_LOCK();
            logfmt_raw(v66, 0x1000u, 0, "merkle %d: %s", v47, v49);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
              164,
              "stratum_notify_dcr",
              18,
              146,
              20,
              v66);
          }
          ++v47;
          if ( !hex2bin(*(_DWORD *)(a2[13].__owner + v64), v49, 32) )
            break;
          if ( v53 == v47 )
            goto LABEL_29;
        }
        v7 = 0;
        V_LOCK();
        logfmt_raw(v66, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
          164,
          "stratum_notify_dcr",
          18,
          151,
          100,
          v66);
        pthread_mutex_unlock(mutex);
        return v7;
      }
    }
LABEL_29:
    a2[13].__count = v53;
    if ( v57 )
      *((_QWORD *)&a2[12].__align + 2) = 0;
    v29 = (char *)calloc((size_t)ptra, 1u);
    v7 = hex2bin((int)v29, (unsigned __int8 *)v12, (int)ptra);
    if ( v7 )
    {
      v30 = calloc(nmemb, 1u);
      if ( hex2bin((int)v30, (unsigned __int8 *)v17, nmemb) )
      {
        v31 = (unsigned __int8 *)calloc(n, 1u);
        if ( hex2bin((int)v31, (unsigned __int8 *)v14, n) )
        {
          v32 = v31 + 32;
          v33 = v31 + 160;
          v34 = v31[32] == 255;
          if ( v31[32] != 255 )
            v34 = v32 >= v33;
          if ( !v34 )
          {
            do
            {
              v35 = *++v32;
              v36 = v35 > 0xFF;
              if ( v35 != 255 )
                v36 = v33 > v32;
            }
            while ( v36 );
          }
          v37 = *v32 == 255;
          if ( v32 >= v33 )
            v37 = 0;
          if ( v37 )
          {
            do
            {
              v38 = *++v32;
              v39 = v38 == 255;
              if ( v33 <= v32 )
                v39 = 0;
            }
            while ( v39 );
          }
          if ( *(v32 - 1) == 255 && *(v32 - 2) == 255 )
          {
            v51 = v32[1];
            v40 = (unsigned __int16)(v32[2] + (v32[3] << 8));
            if ( v51 == 3 )
            {
              v40 += v32[4] << 16;
            }
            else if ( v51 == 4 )
            {
              v40 += (v32[4] + (v32[5] << 8)) << 16;
            }
          }
          else
          {
            v40 = 0;
          }
          a2[68].__count = v40;
          v41 = calloc(v62, 1u);
          v7 = hex2bin((int)v41, (unsigned __int8 *)s, v62);
          if ( v7 )
          {
            v42 = (void *)a2[12].__count;
            if ( v42 )
              free(v42);
            if ( (v55 & 3) != 0 )
              v55 = (v55 & 0xFFFFFFFC) + 4;
            v43 = calloc(v55, 1u);
            a2[12].__count = (unsigned int)v43;
            if ( !v43 )
            {
              V_LOCK();
              logfmt_raw(v66, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                164,
                "stratum_notify_dcr",
                18,
                195,
                100,
                v66);
            }
            v44 = (unsigned int *)(v29 - 4);
            v45 = &v65;
            do
            {
              v46 = v44[1];
              ++v44;
              v45[1] = bswap32(v46);
              ++v45;
            }
            while ( v29 + 28 != (char *)v44 );
            memcpy((void *)a2[12].__count, v31, n);
            memcpy(&a2[19], v30, nmemb);
            memcpy((char *)&a2[19] + nmemb, v66, (size_t)ptra);
            memcpy(&ptra[nmemb + (_DWORD)(a2 + 19)], v31, n);
            memcpy(&a2[25], (const void *)a2[3].__count, a2[3].__lock);
            memcpy(&a2[26].__align + 2, v41, v62);
            *((_QWORD *)&a2[18].__align + 2) = a2->__lock;
            pthread_mutex_unlock(mutex);
            if ( !v29 )
              goto LABEL_60;
            goto LABEL_58;
          }
          V_LOCK();
          logfmt_raw(v66, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
          V_UNLOCK();
          v52 = 188;
        }
        else
        {
          V_LOCK();
          v41 = 0;
          logfmt_raw(v66, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
          V_UNLOCK();
          v52 = 180;
        }
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
          164,
          "stratum_notify_dcr",
          18,
          v52,
          100,
          v66);
      }
      else
      {
        V_LOCK();
        v41 = 0;
        logfmt_raw(v66, 0x1000u, 0, "Failed to convert block_version to block_version_bin in parse_notify");
        V_UNLOCK();
        v31 = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
          164,
          "stratum_notify_dcr",
          18,
          172,
          100,
          v66);
      }
      pthread_mutex_unlock(mutex);
      if ( !v29 )
      {
        v7 = 0;
LABEL_59:
        if ( !v30 )
        {
LABEL_61:
          if ( v31 )
            free(v31);
          if ( v41 )
            free(v41);
          return v7;
        }
LABEL_60:
        free(v30);
        goto LABEL_61;
      }
      v7 = 0;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v66, 0x1000u, 0, "Failed to convert prev_bloc_hash to prev_bloc_hash_bin in parse_notify");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        164,
        "stratum_notify_dcr",
        18,
        164,
        100,
        v66);
      pthread_mutex_unlock(mutex);
      if ( !v29 )
        return v7;
      v41 = 0;
      v31 = 0;
      v30 = 0;
    }
LABEL_58:
    free(v29);
    goto LABEL_59;
  }
  V_LOCK();
  logfmt_raw(v66, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_dcr/frontend_dcr.c",
    164,
    "stratum_notify_dcr",
    18,
    104,
    100,
    v66);
  return 0;
}
