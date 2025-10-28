bool __fastcall sub_36F0C(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _BOOL4 v7; // r9
  signed int v9; // r8
  _DWORD *v10; // r0
  const char *v11; // r6
  _DWORD *v12; // r0
  const char *v13; // r7
  _DWORD *v14; // r0
  char *v15; // r11
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  bool v21; // r9
  const char *kind; // r0
  size_t v23; // r0
  void *v24; // r10
  int owner; // r1
  signed int count; // r2
  int v27; // r3
  int v28; // r3
  signed int i; // r9
  void *v30; // r10
  void *v31; // r0
  void *v32; // r8
  char *v33; // r2
  signed int v34; // r6
  _DWORD *v35; // r0
  unsigned __int8 *v36; // r0
  int v37; // r10
  unsigned __int8 *v38; // r9
  void *v39; // r0
  int v40; // r12
  char *s; // [sp+18h] [bp-113Ch]
  const char *v42; // [sp+1Ch] [bp-1138h]
  const char *v43; // [sp+20h] [bp-1134h]
  const char *v44; // [sp+24h] [bp-1130h]
  _BOOL4 v45; // [sp+28h] [bp-112Ch]
  void *src; // [sp+2Ch] [bp-1128h]
  size_t n; // [sp+30h] [bp-1124h]
  unsigned int v48; // [sp+34h] [bp-1120h]
  size_t nmemb; // [sp+3Ch] [bp-1118h]
  const char *v50; // [sp+40h] [bp-1114h]
  int v51; // [sp+58h] [bp-10FCh]
  char v52[228]; // [sp+6Ch] [bp-10E8h] BYREF
  char v53[4100]; // [sp+150h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v9 = (signed int)json_array_size(v5);
  v10 = json_array_get(a3, 0);
  v11 = (const char *)json_string_value(v10);
  v12 = json_array_get(a3, 1u);
  v13 = (const char *)json_string_value(v12);
  v14 = json_array_get(a3, 2u);
  v15 = (char *)json_string_value(v14);
  v16 = json_array_get(a3, 3u);
  s = (char *)json_string_value(v16);
  v17 = json_array_get(a3, 5u);
  v42 = (const char *)json_string_value(v17);
  v18 = json_array_get(a3, 6u);
  v44 = (const char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v43 = (const char *)json_string_value(v19);
  v20 = json_array_get(a3, 8u);
  v21 = (char)v20;
  if ( v20 )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v45 = v21;
  }
  else
  {
    v45 = 0;
  }
  if ( valid_ascii(v11)
    && valid_hex(v13)
    && valid_hex(v15)
    && valid_hex(s)
    && valid_hex(v42)
    && valid_hex(v44)
    && valid_hex(v43) )
  {
    if ( a2 != (pthread_mutex_t *)-448 )
    {
      kind = (const char *)a2[65].__kind;
      if ( kind && !strcmp(kind, v11) )
      {
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[65].__kind, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          86,
          80,
          v53);
      }
      if ( strlen(v11) > 0x3F )
      {
        V_LOCK();
        v23 = strlen(v11);
        logfmt_raw(v53, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 64", v11, v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          89,
          80,
          v53);
      }
      pthread_mutex_lock(a2 + 66);
      v24 = (void *)a2[65].__kind;
      a2[65].__kind = (int)_strdup(v11);
      if ( v24 )
        free(v24);
      snprintf(&a2[3].__size[20], 0x41u, "%s", v13);
      nmemb = strlen(v15) >> 1;
      n = strlen(s) >> 1;
      snprintf(&a2[13].__size[12], 9u, "%s", v42);
      snprintf((char *)&a2[14], 9u, "%s", v44);
      snprintf(&a2[14].__size[12], 9u, "%s", v43);
      owner = a2[3].__owner;
      count = a2[13].__count;
      v27 = nmemb + a2[3].__lock;
      a2[13].__lock = v27;
      a2[18].__size[4] = v21;
      v48 = n + owner + v27;
      a2[12].__lock = v48;
      if ( count > 0 )
      {
        v28 = a2[13].__owner;
        for ( i = 0; i < count; ++i )
        {
          if ( *(_DWORD *)(v28 + 4 * i) )
          {
            free(*(void **)(v28 + 4 * i));
            v28 = a2[13].__owner;
            count = a2[13].__count;
            *(_DWORD *)(v28 + 4 * i) = 0;
          }
        }
      }
      if ( v9 )
      {
        v50 = v11;
        v34 = 0;
        a2[13].__owner = (int)realloc((void *)a2[13].__owner, 4 * v9);
        while ( 1 )
        {
          v51 = 4 * v34;
          if ( v9 <= v34 )
            break;
          v35 = json_array_get(v6, v34);
          v36 = (unsigned __int8 *)json_string_value(v35);
          v37 = a2[13].__owner;
          v38 = v36;
          v39 = malloc(0x20u);
          *(_DWORD *)(v37 + 4 * v34) = v39;
          if ( !v39 )
          {
            V_LOCK();
            logfmt_raw(v53, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              166,
              "stratum_notify_dash",
              19,
              117,
              100,
              v53);
          }
          if ( opt_protocol )
          {
            V_LOCK();
            logfmt_raw(v53, 0x1000u, 0, "merkle %d: %s", v34, v38);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              166,
              "stratum_notify_dash",
              19,
              119,
              20,
              v53);
          }
          ++v34;
          if ( !hex2bin(*(_DWORD *)(a2[13].__owner + v51), v38, 32) )
          {
            v7 = 0;
            v11 = v50;
            V_LOCK();
            logfmt_raw(v53, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
            V_UNLOCK();
            v40 = 124;
            goto LABEL_58;
          }
        }
        v11 = v50;
      }
      a2[13].__count = v9;
      if ( v45 )
        *((_QWORD *)&a2[12].__align + 2) = 0;
      snprintf(
        v52,
        0xE1u,
        "%s%s%s%s%s%s%s",
        &a2[13].__size[12],
        &a2[3].__size[20],
        "0000000000000000000000000000000000000000000000000000000000000000",
        &a2[14].__size[12],
        (const char *)&a2[14],
        "00000000",
        workpadding);
      v7 = hex2bin((int)&a2[6].__nusers, (unsigned __int8 *)v52, 112);
      if ( v7 )
      {
        src = calloc(nmemb, 1u);
        v7 = hex2bin((int)src, (unsigned __int8 *)v15, nmemb);
        if ( v7 )
        {
          v30 = calloc(n, 1u);
          v7 = hex2bin((int)v30, (unsigned __int8 *)s, n);
          if ( v7 )
          {
            v31 = (void *)a2[12].__count;
            if ( v31 )
              free(v31);
            if ( (v48 & 3) != 0 )
              v48 = (v48 & 0xFFFFFFFC) + 4;
            v32 = calloc(v48, 1u);
            a2[12].__count = (unsigned int)v32;
            if ( !v32 )
            {
              V_LOCK();
              logfmt_raw(v53, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                166,
                "stratum_notify_dash",
                19,
                165,
                100,
                v53);
            }
            memcpy((void *)a2[12].__count, src, nmemb);
            memcpy((void *)(a2[12].__count + nmemb), (const void *)a2[3].__count, a2[3].__lock);
            memcpy((void *)(a2[12].__count + a2[3].__lock + a2[3].__owner + nmemb), v30, n);
            *((_QWORD *)&a2[18].__align + 2) = a2->__lock;
          }
          else
          {
            V_LOCK();
            logfmt_raw(v53, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              166,
              "stratum_notify_dash",
              19,
              158,
              100,
              v53);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v53, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
          V_UNLOCK();
          v30 = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            151,
            100,
            v53);
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "Failed to convert header to header_bin in parse_notify");
        V_UNLOCK();
        v40 = 144;
LABEL_58:
        v30 = 0;
        src = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          v40,
          100,
          v53);
      }
      pthread_mutex_unlock(a2 + 66);
      if ( opt_protocol )
      {
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "job_id: %s", v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          183,
          20,
          v53);
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "prev_hash: %s", v13);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          184,
          20,
          v53);
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "coinbase1: %s", v15);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          185,
          20,
          v53);
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "coinbase2: %s", s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          186,
          20,
          v53);
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "bbversion: %s", v42);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          187,
          20,
          v53);
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "nbit: %s", v44);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          188,
          20,
          v53);
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "ntime: %s", v43);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          189,
          20,
          v53);
        V_LOCK();
        v33 = "yes";
        if ( !v45 )
          v33 = "no";
        logfmt_raw(v53, 0x1000u, 0, "clean: %s", v33);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          190,
          20,
          v53);
      }
      if ( src )
        free(src);
      if ( v30 )
        free(v30);
      return v7;
    }
    return 0;
  }
  V_LOCK();
  logfmt_raw(v53, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_dash/frontend_dash.c",
    166,
    "stratum_notify_dash",
    19,
    80,
    100,
    v53);
  return 0;
}
