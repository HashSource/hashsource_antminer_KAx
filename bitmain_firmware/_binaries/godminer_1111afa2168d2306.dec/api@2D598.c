void *api()
{
  void *result; // r0
  int v1; // r4
  int v2; // r3
  int v3; // r1
  struct addrinfo *v4; // r4
  const char *v5; // r1
  const char *v6; // r0
  struct addrinfo *i; // r3
  int v8; // r0
  int v9; // r6
  int v10; // r8
  time_t v11; // r9
  int *v12; // r0
  char *v13; // r5
  int v14; // r1
  _DWORD *v15; // r1
  _WORD *v16; // r0
  _DWORD *v17; // r10
  int v18; // r6
  int v19; // r0
  int v20; // r3
  int v21; // r1
  int v22; // r3
  int v23; // r1
  ssize_t v24; // r3
  int v25; // r3
  int v26; // r1
  double *v27; // r0
  double *v28; // r5
  _DWORD *v29; // r0
  _DWORD *v30; // r6
  unsigned int *v31; // r3
  unsigned int v32; // r2
  unsigned int v33; // r2
  _DWORD *v34; // r4
  double *v35; // r0
  double *v36; // r5
  const char *v37; // r2
  char *v38; // r0
  char *v39; // r5
  unsigned int *v40; // r3
  unsigned int v41; // r2
  unsigned int v42; // r2
  char *v43; // r1
  _DWORD *v44; // r0
  _DWORD *v45; // r0
  _DWORD *v46; // r8
  int v47; // r0
  int v48; // r6
  _WORD *v49; // r7
  size_t v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int *v54; // r4
  char **v55; // r6
  unsigned int v56; // r5
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // lr
  char *v61; // r7
  char *v62; // t1
  _DWORD *v63; // r0
  unsigned int *v64; // r3
  unsigned int v65; // r2
  unsigned int v66; // r2
  _DWORD *v67; // r0
  int v68; // r1
  unsigned int *v69; // r3
  unsigned int v70; // r2
  unsigned int v71; // r2
  int v72; // r3
  int v73; // r1
  const char *v74; // r3
  char *v75; // r1
  _DWORD *v76; // r0
  unsigned int v77; // r4
  _DWORD *v78; // r8
  _DWORD *v79; // r0
  bool v80; // zf
  int v81; // r7
  const char *v82; // r0
  const char *v83; // r1
  char *v84; // r0
  char *v85; // r4
  unsigned int *v86; // r3
  unsigned int v87; // r2
  unsigned int v88; // r2
  unsigned int *v89; // r3
  unsigned int v90; // r2
  unsigned int v91; // r2
  int *v92; // r0
  char *v93; // r0
  int v94; // r3
  int v95; // r1
  int v96; // r3
  int v97; // r1
  _DWORD *v98; // r8
  unsigned int v99; // r6
  _DWORD *v100; // r0
  _DWORD *v101; // r7
  int v102; // r3
  int v103; // r1
  int v104; // r3
  int v105; // r1
  int v106; // r0
  int v107; // r5
  size_t v108; // r0
  int v109; // r0
  int v110; // r0
  int v111; // r0
  int *v112; // r8
  char *v113; // r6
  int v114; // r12
  int v115; // r1
  const char *v116; // r1
  _DWORD *v117; // r0
  const char *v118; // r2
  char *v119; // r1
  _DWORD *v120; // r0
  char *v121; // r1
  _DWORD *v122; // r0
  unsigned int v123; // r1
  unsigned int *v124; // r3
  unsigned int v125; // r2
  unsigned int v126; // r2
  const char *v127; // r2
  _DWORD *v128; // r0
  const char *v129; // r2
  int *v130; // r0
  char *v131; // r0
  int v132; // r3
  int v133; // r1
  unsigned int v134; // [sp+10h] [bp-11574h]
  unsigned int protocol; // [sp+14h] [bp-11570h]
  _DWORD *v136; // [sp+18h] [bp-1156Ch]
  _DWORD *v137; // [sp+1Ch] [bp-11568h]
  unsigned int v138; // [sp+20h] [bp-11564h]
  int v139; // [sp+24h] [bp-11560h]
  _WORD *v140; // [sp+28h] [bp-1155Ch]
  _DWORD *v141; // [sp+2Ch] [bp-11558h]
  _DWORD *v142; // [sp+34h] [bp-11550h]
  _DWORD *v143; // [sp+40h] [bp-11544h]
  int v144; // [sp+48h] [bp-1153Ch] BYREF
  int fd; // [sp+4Ch] [bp-11538h] BYREF
  socklen_t addr_len; // [sp+50h] [bp-11534h] BYREF
  int v147; // [sp+54h] [bp-11530h] BYREF
  int v148; // [sp+58h] [bp-1152Ch] BYREF
  int v149; // [sp+5Ch] [bp-11528h] BYREF
  struct addrinfo *ai; // [sp+60h] [bp-11524h] BYREF
  int optval; // [sp+64h] [bp-11520h] BYREF
  _DWORD v152[2]; // [sp+68h] [bp-1151Ch] BYREF
  char service[12]; // [sp+70h] [bp-11514h] BYREF
  char v154[4]; // [sp+7Ch] [bp-11508h] BYREF
  int v155; // [sp+80h] [bp-11504h]
  int v156; // [sp+84h] [bp-11500h]
  int v157; // [sp+88h] [bp-114FCh]
  char s1[4]; // [sp+8Ch] [bp-114F8h] BYREF
  int v159; // [sp+90h] [bp-114F4h]
  int v160; // [sp+94h] [bp-114F0h]
  int v161; // [sp+98h] [bp-114ECh]
  _DWORD v162[5]; // [sp+9Ch] [bp-114E8h] BYREF
  char v163[32]; // [sp+B0h] [bp-114D4h] BYREF
  addrinfo req; // [sp+D0h] [bp-114B4h] BYREF
  struct sockaddr addr; // [sp+F0h] [bp-11494h] BYREF
  char v166[16]; // [sp+170h] [bp-11414h] BYREF
  char v167[252]; // [sp+26Ch] [bp-11318h] BYREF
  char src[256]; // [sp+368h] [bp-1121Ch] BYREF
  _DWORD v169[70]; // [sp+468h] [bp-1111Ch] BYREF
  char s[4096]; // [sp+580h] [bp-11004h] BYREF
  char v171[4096]; // [sp+1580h] [bp-10004h] BYREF
  char v172[4096]; // [sp+2580h] [bp-F004h] BYREF
  char v173[3968]; // [sp+3580h] [bp-E004h] BYREF
  char v174[3968]; // [sp+4580h] [bp-D004h] BYREF
  char v175[3968]; // [sp+5580h] [bp-C004h] BYREF
  char v176[3968]; // [sp+6580h] [bp-B004h] BYREF
  char v177[3968]; // [sp+7580h] [bp-A004h] BYREF
  char v178[3968]; // [sp+8580h] [bp-9004h] BYREF
  char v179[3968]; // [sp+9580h] [bp-8004h] BYREF
  char v180[3968]; // [sp+A580h] [bp-7004h] BYREF
  char v181[3968]; // [sp+B580h] [bp-6004h] BYREF
  char v182[3968]; // [sp+C580h] [bp-5004h] BYREF
  char v183[3968]; // [sp+D580h] [bp-4004h] BYREF
  char v184[3968]; // [sp+E580h] [bp-3004h] BYREF
  _BYTE v185[8196]; // [sp+F580h] [bp-2004h] BYREF

  v144 = -1;
  fd = -1;
  v134 = 2;
  memset(v185, 0, 0x2000u);
  memset(s, 0, sizeof(s));
  v155 = 0;
  v156 = 0;
  v157 = 0;
  *(_DWORD *)v154 = 0;
  result = memset(v163, 0, sizeof(v163));
  v1 = (unsigned __int8)byte_195898;
  if ( !byte_195898 )
  {
    V_LOCK();
    LOWORD(v2) = 28628;
    HIWORD(v2) = (unsigned int)"api" >> 16;
    logfmt_raw(v171, 0x1000u, v1, v2);
    V_UNLOCK();
    LOWORD(v3) = 25096;
    HIWORD(v3) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
    zlog(g_zc, v3, 137, "api", 3, 2880, 60, v171);
    v4 = (struct addrinfo *)_sigsetjmp((struct __jmp_buf_tag *)v169, v1);
    if ( v4 )
    {
      sub_28B90(&v144);
      _pthread_unwind_next((__pthread_unwind_buf_t *)v169);
    }
    else
    {
      _pthread_register_cancel((__pthread_unwind_buf_t *)v169);
      LOWORD(v5) = 27996;
      HIWORD(v5) = (unsigned int)"s: %lld" >> 16;
      sprintf(service, v5, 4028);
      LOWORD(v6) = 28648;
      memset(&req.ai_family, 0, 28);
      HIWORD(v6) = (unsigned int)": format error about command" >> 16;
      req.ai_flags = 1;
      protocol = getaddrinfo(v6, service, &req, &ai);
      if ( protocol )
      {
        V_LOCK();
        v113 = v179;
        logfmt_raw(v179, 0x1000u, 0, "%s: exec getaddrinfo() failed", "api_init_socket");
        V_UNLOCK();
        v114 = 2432;
LABEL_127:
        LOWORD(v115) = 25096;
        HIWORD(v115) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
        zlog(g_zc, v115, 137, "api_init_socket", 15, v114, 100, v113);
LABEL_117:
        V_LOCK();
        LOWORD(v104) = 28840;
        HIWORD(v104) = (unsigned int)"CGMiner versions" >> 16;
        logfmt_raw(v172, 0x1000u, 0, v104, "api");
        V_UNLOCK();
        LOWORD(v105) = 25096;
        HIWORD(v105) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
        return (void *)zlog(g_zc, v105, 137, "api", 3, 2887, 100, v172);
      }
      v4 = ai;
      if ( ai )
      {
        for ( i = ai; ; i = ai )
        {
          v8 = socket(i->ai_family, 1, protocol);
          if ( v8 > 0 )
          {
            v9 = v8;
            goto LABEL_10;
          }
          v4 = v4->ai_next;
          if ( !v4 )
            break;
        }
        v9 = v8;
        if ( v8 == -1 )
        {
          V_LOCK();
          v113 = v180;
          logfmt_raw(v180, 0x1000u, 0, "%s: exec socket() failed", "api_init_socket");
          V_UNLOCK();
          v114 = 2447;
          goto LABEL_127;
        }
        goto LABEL_10;
      }
    }
    v9 = (int)v4;
LABEL_10:
    optval = 1;
    setsockopt(v9, 1, 2, &optval, 4u);
    LOWORD(v10) = 28716;
    v11 = time(0);
    while ( bind(v9, v4->ai_addr, v4->ai_addrlen) < 0 )
    {
      v12 = _errno_location();
      v13 = strerror(*v12);
      if ( time(0) - v11 > 61 )
      {
        freeaddrinfo(ai);
        V_LOCK();
        LOWORD(v102) = 28772;
        HIWORD(v102) = (unsigned int)" !!!" >> 16;
        logfmt_raw(v182, 0x1000u, 0, v102, 4028, v13);
        V_UNLOCK();
        LOWORD(v103) = 25096;
        HIWORD(v103) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
        zlog(g_zc, v103, 137, "api_init_socket", 15, 2475, 100, v182);
        goto LABEL_117;
      }
      V_LOCK();
      HIWORD(v10) = (unsigned int)"format" >> 16;
      logfmt_raw(v181, 0x1000u, 0, v10, "api_init_socket", 4028);
      V_UNLOCK();
      LOWORD(v14) = 25096;
      HIWORD(v14) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
      zlog(g_zc, v14, 137, "api_init_socket", 15, 2465, 80, v181);
      sleep(0x1Eu);
    }
    freeaddrinfo(ai);
    if ( listen(v9, 100) >= 0 )
    {
      if ( v9 < 0 )
        goto LABEL_117;
      LOWORD(v15) = 24180;
      LOWORD(v16) = -6328;
      HIWORD(v15) = (unsigned int)"ad_config" >> 16;
      HIWORD(v16) = (unsigned int)"se adaptation" >> 16;
      v137 = v15;
      v144 = v9;
      byte_195898 = 1;
      v17 = v15 + 158;
      v140 = v16;
      while ( 1 )
      {
        v18 = (unsigned __int8)byte_195874;
        if ( byte_195874 )
        {
LABEL_107:
          _pthread_unregister_cancel((__pthread_unwind_buf_t *)v169);
          sub_28B90(&v144);
          byte_195898 = 0;
          V_LOCK();
          LOWORD(v96) = 29116;
          HIWORD(v96) = (unsigned int)"ereg" >> 16;
          logfmt_raw(v178, 0x1000u, 0, v96);
          V_UNLOCK();
          LOWORD(v97) = 25096;
          HIWORD(v97) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
          zlog(g_zc, v97, 137, "api", 3, 2988, 60, v178);
          return (void *)close(v144);
        }
        addr_len = 128;
        v19 = accept(v144, &addr, &addr_len);
        fd = v19;
        if ( v19 < 0 )
        {
          V_LOCK();
          v92 = _errno_location();
          v93 = strerror(*v92);
          LOWORD(v94) = 28864;
          HIWORD(v94) = (unsigned int)"ct" >> 16;
          logfmt_raw(v173, 0x1000u, v18, v94, "api", v93);
          V_UNLOCK();
          LOWORD(v95) = 25096;
          HIWORD(v95) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
          zlog(g_zc, v95, 137, "api", 3, 2900, 100, v173);
          goto LABEL_107;
        }
        v149 = 2;
        v147 = 1;
        v148 = 5;
        setsockopt(v19, 1, 9, &v147, 4u);
        setsockopt(fd, 6, 1, &v147, 4u);
        setsockopt(fd, 6, 6, &v147, 4u);
        setsockopt(fd, 6, 4, &v148, 4u);
        setsockopt(fd, 6, 5, &v149, 4u);
        v152[1] = v18;
        v152[0] = 10;
        if ( setsockopt(fd, 1, 21, v152, 8u) )
        {
          V_LOCK();
          LOWORD(v20) = 28892;
          HIWORD(v20) = (unsigned int)" timeout" >> 16;
          logfmt_raw(v174, 0x1000u, v18, v20, v17);
          V_UNLOCK();
          LOWORD(v21) = 25096;
          HIWORD(v21) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
          zlog(g_zc, v21, 137, v17, 3, 2919, 100, v174);
          close(fd);
        }
        if ( setsockopt(fd, 1, 20, v152, 8u) )
        {
          V_LOCK();
          LOWORD(v22) = 28928;
          HIWORD(v22) = (unsigned int)"num" >> 16;
          logfmt_raw(v175, 0x1000u, 0, v22, v17);
          V_UNLOCK();
          LOWORD(v23) = 25096;
          HIWORD(v23) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
          zlog(g_zc, v23, 137, v17, 3, 2925, 100, v175);
          close(fd);
        }
        v24 = recv(fd, v185, 0xFFFu, 0);
        if ( v24 < 0 )
        {
          v185[0] = 0;
          goto LABEL_18;
        }
        v185[v24] = 0;
        v155 = 0;
        v156 = 0;
        v157 = 0;
        *(_DWORD *)v154 = 0;
        memset(v163, 0, sizeof(v163));
        *(_DWORD *)::s1 = 0;
        dword_195868 = 0;
        dword_19586C = 0;
        dword_195870 = 0;
        dword_195860 = time(0);
        getnameinfo(&addr, 0x80u, ::s1, 0x10u, 0, 0, 1u);
        V_LOCK();
        LOWORD(v25) = 28964;
        HIWORD(v25) = (unsigned int)"ip reg" >> 16;
        logfmt_raw(v176, 0x1000u, 0, v25, ::s1);
        V_UNLOCK();
        LOWORD(v26) = 25096;
        HIWORD(v26) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
        zlog(g_zc, v26, 137, v17, 3, 2942, 20, v176);
        v159 = 0;
        *(_DWORD *)s1 = 0;
        v160 = 0;
        v161 = 0;
        v27 = json_loads((int)v185, 0, v166);
        v28 = v27;
        if ( v27 && !*(_DWORD *)v27 )
        {
          v29 = (_DWORD *)json_object_get(v27, "command");
          v30 = v29;
          if ( v29 && *v29 == 1 )
          {
            LOWORD(v75) = 28984;
            HIWORD(v75) = (unsigned int)"Return chip reg" >> 16;
            v76 = (_DWORD *)json_object_get(v28, v75);
            if ( v76 )
              v138 = *v76 != 5;
            else
              v138 = 1;
            v77 = protocol;
            v139 = protocol;
            v78 = json_object();
            while ( (unsigned int)json_array_size(v30) > v77 )
            {
              v79 = json_array_get(v30, v77);
              v80 = v79 == 0;
              if ( v79 )
                v80 = v77 == 11;
              v81 = v80;
              if ( v80 )
                break;
              if ( *v79 == 2 )
              {
                *(_DWORD *)s1 = v81;
                v159 = v81;
                v160 = v81;
                v161 = v81;
                v82 = (const char *)json_string_value(v79);
                snprintf(s1, 0x10u, "%s", v82);
                LOWORD(v83) = 28992;
                HIWORD(v83) = (unsigned int)"hip reg" >> 16;
                if ( strcmp(s1, v83) | v138 )
                {
                  v142 = json_object();
                  sub_28BD4(v142, s1, v81, v138);
                  json_object_set_new(v78, s1, v142);
                }
                else
                {
                  v139 = 1;
                }
              }
              ++v77;
            }
            v84 = json_dumps(v78, 24576);
            v85 = v84;
            if ( v84 )
              sub_29188(&fd, v84);
            free(v85);
            if ( v139 == 1 )
            {
              LOWORD(v116) = 28992;
              HIWORD(v116) = (unsigned int)"hip reg" >> 16;
              sub_28BD4(v78, v116, 0, 0);
            }
            if ( v78 )
            {
              if ( v78[1] != -1 )
              {
                v86 = v78 + 1;
                __dmb(0xBu);
                do
                {
                  v87 = __ldrex(v86);
                  v88 = v87 - 1;
                }
                while ( __strex(v88, v86) );
                if ( !v88 )
                  json_delete(v78);
              }
            }
            if ( *((_DWORD *)v28 + 1) != -1 )
            {
              v89 = (unsigned int *)v28 + 1;
              __dmb(0xBu);
              do
              {
                v90 = __ldrex(v89);
                v91 = v90 - 1;
              }
              while ( __strex(v91, v89) );
              if ( !v91 )
                json_delete(v28);
            }
            goto LABEL_18;
          }
          if ( *((_DWORD *)v28 + 1) != -1 )
          {
            v31 = (unsigned int *)v28 + 1;
            __dmb(0xBu);
            do
            {
              v32 = __ldrex(v31);
              v33 = v32 - 1;
            }
            while ( __strex(v33, v31) );
            if ( !v33 )
              json_delete(v28);
          }
        }
        v34 = json_object();
        v35 = json_loads((int)v185, 0, v167);
        v36 = v35;
        if ( !v35 || *(_DWORD *)v35 )
        {
          LOWORD(v37) = -27176;
          HIWORD(v37) = (unsigned int)"d" >> 16;
          v134 = 2;
          snprintf(v154, 0x10u, v37, v185);
          sub_28BD4(v34, v154, (int)v163, 2u);
          goto LABEL_38;
        }
        v67 = (_DWORD *)json_object_get(v35, "command");
        if ( v67 && *v67 == 2 )
        {
          v117 = json_string_value(v67);
          LOWORD(v118) = -27176;
          HIWORD(v118) = (unsigned int)"d" >> 16;
          snprintf(v154, 0x10u, v118, v117);
          LOWORD(v119) = 28984;
          HIWORD(v119) = (unsigned int)"Return chip reg" >> 16;
          v120 = (_DWORD *)json_object_get(v36, v119);
          if ( v120 && *v120 == 5 )
          {
            if ( *((_DWORD *)v36 + 1) == -1 )
            {
              v134 = protocol;
              sub_28BD4(v34, v154, (int)v163, protocol);
              goto LABEL_38;
            }
            v123 = protocol;
          }
          else
          {
            LOWORD(v121) = 29040;
            HIWORD(v121) = (unsigned int)"time" >> 16;
            v122 = (_DWORD *)json_object_get(v36, v121);
            if ( v122 && *v122 == 2 )
            {
              v128 = json_string_value(v122);
              LOWORD(v129) = -27176;
              HIWORD(v129) = (unsigned int)"d" >> 16;
              snprintf(v163, 0x20u, v129, v128);
            }
            if ( *((_DWORD *)v36 + 1) == -1 )
            {
              v134 = 1;
              sub_28BD4(v34, v154, (int)v163, 1u);
              goto LABEL_38;
            }
            v123 = 1;
          }
          v124 = (unsigned int *)v36 + 1;
          __dmb(0xBu);
          do
          {
            v125 = __ldrex(v124);
            v126 = v125 - 1;
          }
          while ( __strex(v126, v124) );
          v134 = v123;
          if ( v126 )
          {
            sub_28BD4(v34, v154, (int)v163, v123);
          }
          else
          {
            json_delete(v36);
            sub_28BD4(v34, v154, (int)v163, v134);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v184, 0x1000u, 0, "%s error: format error about command", v137 + 163);
          V_UNLOCK();
          LOWORD(v68) = 25096;
          HIWORD(v68) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
          zlog(g_zc, v68, 137, v137 + 163, 14, 2519, 100, v184);
          if ( *((_DWORD *)v36 + 1) != -1 )
          {
            v69 = (unsigned int *)v36 + 1;
            __dmb(0xBu);
            do
            {
              v70 = __ldrex(v69);
              v71 = v70 - 1;
            }
            while ( __strex(v71, v69) );
            if ( !v71 )
              json_delete(v36);
          }
          V_LOCK();
          LOWORD(v72) = 29052;
          HIWORD(v72) = (unsigned int)"uart print time" >> 16;
          logfmt_raw(v177, 0x1000u, 0, v72, v17);
          V_UNLOCK();
          LOWORD(v73) = 25096;
          HIWORD(v73) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
          zlog(g_zc, v73, 137, v17, 3, 2957, 100, v177);
          LOWORD(v74) = 29084;
          HIWORD(v74) = (unsigned int)"set uart print lines" >> 16;
          sub_25FCC(v34, 0, 24, v74);
        }
LABEL_38:
        if ( v134 == 2 )
        {
          memset(s, 0, sizeof(s));
          if ( v34 )
          {
            LOWORD(v43) = 24976;
            HIWORD(v43) = (unsigned int)"=====================================chain %d detect %d cores" >> 16;
            v44 = (_DWORD *)json_object_get(v34, v43);
            if ( v44 )
            {
              if ( *v44 == 1 )
              {
                v45 = json_array_get(v44, 0);
                v46 = v45;
                if ( v45 )
                {
                  if ( !*v45 )
                  {
                    v47 = json_object_iter(v45);
                    v48 = json_object_iter_key(v47);
                    if ( v48 )
                    {
                      LOWORD(v49) = 29108;
                      v141 = v34;
                      do
                      {
                        v53 = json_object_key_to_iter(v48);
                        v54 = (int *)json_object_iter_value(v53);
                        if ( !v54 )
                          break;
                        v50 = strlen(s);
                        *(_WORD *)stpcpy(&s[v50], v48) = *v140;
                        sub_28D98(s, v54);
                        HIWORD(v49) = (unsigned int)"gettacorereg" >> 16;
                        *(_WORD *)&s[strlen(s)] = *v49;
                        v51 = json_object_key_to_iter(v48);
                        v52 = json_object_iter_next(v46, v51);
                        v48 = json_object_iter_key(v52);
                      }
                      while ( v48 );
                      v34 = v141;
                    }
                    v55 = (char **)v162;
                    *((_BYTE *)&v169[69] + strlen(s) + 3) = 124;
                    memset(src, 0, sizeof(src));
                    v56 = protocol;
                    v57 = v137[168];
                    v58 = v137[169];
                    v59 = v137[170];
                    v60 = v137[171];
                    v162[0] = v137[167];
                    v162[1] = v57;
                    v162[2] = v58;
                    v162[3] = v59;
                    v162[4] = v60;
                    while ( 1 )
                    {
                      v62 = *v55++;
                      v61 = v62;
                      v63 = (_DWORD *)json_object_get(v34, v62);
                      if ( v63 )
                      {
                        if ( *v63 == 1 )
                          break;
                      }
                      if ( ++v56 == 5 )
                        goto LABEL_62;
                    }
                    v98 = v63;
                    if ( (v56 & 0xFFFFFFFB) == 0 )
                    {
                      LOWORD(v127) = 29112;
                      HIWORD(v127) = (unsigned int)"acorereg" >> 16;
                      snprintf(src, 0x100u, v127, v61);
                      strcat(s, src);
                    }
                    v136 = json_array_size(v98);
                    if ( (int)v136 > 0 )
                    {
                      v99 = protocol;
                      do
                      {
                        v100 = json_array_get(v98, v99);
                        v101 = v100;
                        if ( v100 && !*v100 )
                        {
                          v106 = json_object_iter(v100);
                          v107 = json_object_iter_key(v106);
                          if ( v107 )
                          {
                            v143 = v98;
                            do
                            {
                              v111 = json_object_key_to_iter(v107);
                              v112 = (int *)json_object_iter_value(v111);
                              if ( !v112 )
                                break;
                              v108 = strlen(s);
                              *(_WORD *)stpcpy(&s[v108], v107) = *v140;
                              sub_28D98(s, v112);
                              *(_WORD *)&s[strlen(s)] = 44;
                              v109 = json_object_key_to_iter(v107);
                              v110 = json_object_iter_next(v101, v109);
                              v107 = json_object_iter_key(v110);
                            }
                            while ( v107 );
                            v98 = v143;
                          }
                          *((_BYTE *)&v169[69] + strlen(s) + 3) = 124;
                          if ( (_DWORD *)((char *)v136 - 1) != (_DWORD *)v99 )
                            s[strlen(s)] = 44;
                        }
                        ++v99;
                      }
                      while ( v136 != (_DWORD *)v99 );
                    }
                  }
                }
              }
            }
          }
LABEL_62:
          sub_29188(&fd, s);
          if ( v34 )
          {
            if ( v34[1] != -1 )
            {
              v64 = v34 + 1;
              __dmb(0xBu);
              do
              {
                v65 = __ldrex(v64);
                v66 = v65 - 1;
              }
              while ( __strex(v66, v64) );
              if ( !v66 )
                json_delete(v34);
            }
          }
        }
        else
        {
          v38 = json_dumps(v34, 24576);
          v39 = v38;
          if ( v38 )
            sub_29188(&fd, v38);
          if ( v34 && v34[1] != -1 )
          {
            v40 = v34 + 1;
            __dmb(0xBu);
            do
            {
              v41 = __ldrex(v40);
              v42 = v41 - 1;
            }
            while ( __strex(v42, v40) );
            if ( !v42 )
              json_delete(v34);
          }
          free(v39);
        }
LABEL_18:
        close(fd);
      }
    }
    V_LOCK();
    v130 = _errno_location();
    v131 = strerror(*v130);
    LOWORD(v132) = 28808;
    HIWORD(v132) = (unsigned int)"ary" >> 16;
    logfmt_raw(v183, 0x1000u, 0, v132, "api_init_socket", v131);
    V_UNLOCK();
    LOWORD(v133) = 25096;
    HIWORD(v133) = (unsigned int)"=================================chain %d detect %d chips" >> 16;
    zlog(g_zc, v133, 137, "api_init_socket", 15, 2481, 100, v183);
    close(v9);
    goto LABEL_117;
  }
  return result;
}
