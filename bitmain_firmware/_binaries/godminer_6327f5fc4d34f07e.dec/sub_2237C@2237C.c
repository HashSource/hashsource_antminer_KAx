int __fastcall sub_2237C(_DWORD *a1, int a2)
{
  int v3; // r5
  _DWORD *v4; // r4
  char *v5; // r0
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0
  int v9; // r8
  float v10; // s24
  float v11; // s18
  float v12; // s20
  double v13; // d11
  char *all_created_runtime; // r4
  __int64 v15; // r6
  _DWORD *v16; // r4
  _DWORD *v17; // r0
  char *v18; // r0
  _DWORD *v19; // r0
  double *v20; // r0
  double *v21; // r0
  double *v22; // r0
  double *v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  int *v26; // r3
  __int64 v27; // r0
  int v28; // r2
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  int v31; // r5
  int v32; // r6
  int v33; // t1
  _DWORD *v34; // r0
  int v35; // r12
  unsigned int v36; // r0
  char *v37; // r1
  int v38; // r2
  int v39; // r3
  _DWORD *v40; // r0
  int v41; // r10
  char *v42; // r5
  int v43; // r11
  int *v44; // r0
  int v45; // r9
  int v46; // r3
  int v47; // r8
  int v48; // r2
  _DWORD *v49; // r0
  int *v50; // r0
  int v51; // r2
  int v52; // r8
  _DWORD *v53; // r0
  size_t *v54; // r8
  char *v55; // r7
  int v56; // r5
  int v57; // t1
  int v58; // r1
  size_t v59; // t1
  char *v60; // r0
  char *v61; // r7
  char *v62; // r5
  int v63; // r6
  int v64; // t1
  char *v65; // r0
  char *v66; // r7
  char *v67; // r5
  int v68; // r6
  int v69; // t1
  char *v70; // r0
  char *v71; // r10
  char *v72; // r5
  int v73; // r6
  int v74; // t1
  char *v75; // r0
  _DWORD *v76; // r0
  char *v77; // r7
  int v78; // r6
  char *v79; // r9
  char *v80; // r8
  const char **v81; // r5
  int v82; // t1
  int v83; // r0
  _DWORD *v84; // r0
  int v85; // r6
  int v86; // t1
  char *v87; // r0
  char *v88; // r10
  char *v89; // r6
  int v90; // r8
  __int64 v91; // kr00_8
  int v92; // t1
  unsigned int v93; // r7
  unsigned int v94; // r11
  _DWORD *v95; // r0
  __int64 v96; // r0
  _DWORD *v97; // r0
  char *v98; // r7
  int v99; // r6
  char *v100; // r9
  char *v101; // r8
  char *v102; // r5
  int v103; // t1
  double *v104; // r0
  int v105; // r6
  int v106; // t1
  char *v107; // r0
  char *v108; // r10
  char *v109; // r7
  int v110; // r5
  int v111; // t1
  int v112; // r0
  _DWORD *v113; // r0
  char *v114; // r0
  char *v115; // r0
  _DWORD *v116; // r0
  char *v118; // r6
  char *v119; // r0
  char *v120; // r4
  char *v121; // r7
  int v122; // t1
  bool v123; // cc
  char *v124; // [sp+10h] [bp-1234h]
  int v125; // [sp+14h] [bp-1230h]
  int *v126; // [sp+18h] [bp-122Ch]
  char *ptr; // [sp+28h] [bp-121Ch]
  int v129; // [sp+30h] [bp-1214h]
  _DWORD *v130; // [sp+34h] [bp-1210h]
  __int64 v131; // [sp+38h] [bp-120Ch]
  int v132; // [sp+48h] [bp-11FCh] BYREF
  int v133; // [sp+4Ch] [bp-11F8h] BYREF
  int v134; // [sp+50h] [bp-11F4h] BYREF
  int v135; // [sp+54h] [bp-11F0h] BYREF
  double v136; // [sp+58h] [bp-11ECh] BYREF
  char v137[12]; // [sp+64h] [bp-11E0h] BYREF
  char v138[4]; // [sp+70h] [bp-11D4h] BYREF
  int v139; // [sp+74h] [bp-11D0h]
  int v140; // [sp+78h] [bp-11CCh]
  int v141; // [sp+7Ch] [bp-11C8h]
  char s[32]; // [sp+80h] [bp-11C4h] BYREF
  char v143[32]; // [sp+A0h] [bp-11A4h] BYREF
  char v144[32]; // [sp+C0h] [bp-1184h] BYREF
  char v145[32]; // [sp+E0h] [bp-1164h] BYREF
  char v146[32]; // [sp+100h] [bp-1144h] BYREF
  char v147[4]; // [sp+120h] [bp-1124h] BYREF
  char v148[256]; // [sp+140h] [bp-1104h] BYREF
  char v149[4]; // [sp+240h] [bp-1004h] BYREF
  int v150; // [sp+244h] [bp-1000h]
  int v151; // [sp+248h] [bp-FFCh]
  float v152; // [sp+24Ch] [bp-FF8h]
  float v153; // [sp+250h] [bp-FF4h]
  float v154; // [sp+254h] [bp-FF0h]
  double v155; // [sp+258h] [bp-FECh]

  v139 = 0;
  v140 = 0;
  v141 = 0;
  v3 = a1 == 0;
  *(_DWORD *)v138 = 0;
  memset(s, 0, sizeof(s));
  memset(v148, 0, sizeof(v148));
  v132 = 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK();
    logfmt_raw(v149, 0x1000u, 0, "%s: input bad api param\n", "get_stats_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_stats_old",
      13,
      1158,
      100,
      v149);
    return -2147483646;
  }
  else
  {
    sub_1F644(a1, 1, 70, *(const char **)(a2 + 8));
    v130 = json_array();
    v4 = json_object();
    v5 = BUFX_strdup("2.12");
    json_object_set_new(v4, "BMMiner", v5);
    v6 = BUFX_strdup(g_miner_version);
    json_object_set_new(v4, "Miner", v6);
    v7 = BUFX_strdup(g_miner_compiletime);
    json_object_set_new(v4, "CompileTime", v7);
    v8 = BUFX_strdup(g_miner_type);
    json_object_set_new(v4, "Type", v8);
    json_array_append_new(v130, v4);
    read_system_status_from_monitor((int)v149);
    v9 = v150;
    v10 = v152;
    v11 = v153;
    v12 = v154;
    v13 = v155;
    all_created_runtime = (char *)get_all_created_runtime(&v132);
    v129 = frontend_runtime_instance();
    if ( v132 > 0 )
    {
      v126 = (int *)malloc(216 * v132);
      v118 = (char *)v126;
      v119 = (char *)malloc(4 * v132);
      ptr = v119;
      if ( v132 <= 0 )
      {
        v15 = 0;
      }
      else
      {
        v120 = all_created_runtime - 4;
        v121 = v119 - 4;
        do
        {
          v122 = *((_DWORD *)v120 + 1);
          v120 += 4;
          read_status_from_monitor(v118, v122);
          ++v3;
          v118 += 216;
          v123 = v132 <= v3;
          *((_DWORD *)v121 + 1) = *(_DWORD *)(*(_DWORD *)v120 + 200) + 1;
          v121 += 4;
        }
        while ( !v123 );
        v15 = v3;
      }
    }
    else
    {
      v15 = 0;
      ptr = 0;
      v126 = 0;
    }
    v16 = json_object();
    v17 = json_integer(v15);
    json_object_set_new(v16, "STATS", v17);
    snprintf(v138, 0x10u, "BTM_SOC%d", v3);
    v18 = BUFX_strdup(v138);
    json_object_set_new(v16, "ID", v18);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v129 + 68) + 12), v143);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v129 + 68) + 12), v144);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v129 + 68) + 12), v145);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v129 + 68) + 12), v146);
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v129 + 68) + 12), &v136, v137);
    get_miner_elapsed_time();
    v19 = json_integer((__int64)v13);
    json_object_set_new(v16, "Elapsed", v19);
    sub_DD47C((__int64)(v10 * v13 * 100.0));
    v20 = json_real();
    json_object_set_new(v16, "GHS 5s", v20);
    sub_DD47C((__int64)(v12 * v13 * 100.0));
    v21 = json_real();
    json_object_set_new(v16, "GHS av", v21);
    sub_DD47C((__int64)(v11 * v13 * 100.0));
    v22 = json_real();
    json_object_set_new(v16, "rate_30m", v22);
    sub_DD47C((__int64)(v136 * 100.0));
    v23 = json_real();
    json_object_set_new(v16, "total_rateideal", v23);
    v24 = json_integer(opt_bitmain_work_mode);
    json_object_set_new(v16, "Mode", v24);
    v25 = json_integer(v132);
    json_object_set_new(v16, "miner_count", v25);
    if ( v132 <= 0 )
    {
      v27 = 0x7FFFFFFF;
    }
    else
    {
      v26 = v126;
      LODWORD(v27) = 0x7FFFFFFF;
      do
      {
        v28 = v26[18];
        v26 += 54;
        if ( (int)v27 >= v28 )
          LODWORD(v27) = v28;
      }
      while ( &v126[54 * v132] != v26 );
      v27 = (int)v27;
    }
    v29 = json_integer(v27);
    json_object_set_new(v16, "frequency", v29);
    v30 = json_integer(v9);
    json_object_set_new(v16, "fan_num", v30);
    if ( v9 > 0 )
    {
      v31 = 0;
      v32 = v151 - 4;
      do
      {
        ++v31;
        memset(s, 0, sizeof(s));
        snprintf(s, 0x20u, "fan%d", v31);
        v33 = *(_DWORD *)(v32 + 4);
        v32 += 4;
        v34 = json_integer(v33);
        json_object_set_new(v16, s, v34);
      }
      while ( v31 != v9 );
    }
    if ( v132 <= 0 )
    {
      v131 = -100;
      v36 = 0;
    }
    else
    {
      v35 = -100;
      LOBYTE(v36) = 0;
      v37 = (char *)v126;
      do
      {
        v38 = *((_DWORD *)v37 + 4);
        v39 = *((_DWORD *)v37 + 6);
        v37 += 216;
        if ( v35 < v38 )
          v35 = v38;
        LOBYTE(v36) = v36 + v39 + *((_DWORD *)v37 - 47);
      }
      while ( &v126[54 * v132] != (int *)v37 );
      v36 = (unsigned __int8)v36;
      v131 = v35;
    }
    v40 = json_integer(v36);
    json_object_set_new(v16, "temp_num", v40);
    if ( v132 > 0 )
    {
      v41 = 0;
      v42 = (char *)v126;
      v124 = ptr - 4;
      do
      {
        v43 = *((_DWORD *)v42 + 6);
        v44 = *(int **)v42;
        v133 = 0;
        ++v41;
        v134 = 0;
        v135 = 0;
        v42 += 216;
        *(_DWORD *)v147 = 0;
        find_min_and_max_int(v44, v43, &v133, &v134);
        v45 = *((_DWORD *)v42 - 47);
        find_min_and_max_int(*((int **)v42 - 52), v45, &v135, v147);
        v46 = *(_DWORD *)v147;
        v47 = *((_DWORD *)v124 + 1);
        if ( *(int *)v147 < v134 )
          v46 = v134;
        v48 = *((_DWORD *)v124 + 1);
        v124 += 4;
        v125 = v46;
        sprintf(s, "temp%d", v48);
        v49 = json_integer(v125);
        json_object_set_new(v16, s, v49);
        v50 = (int *)*((_DWORD *)v42 - 53);
        *(_DWORD *)v147 = 0;
        v135 = 0;
        v134 = 0;
        v133 = 0;
        find_min_and_max_int(v50, v43, &v133, &v134);
        find_min_and_max_int(*((int **)v42 - 51), v45, &v135, v147);
        v51 = v47;
        v52 = v134;
        if ( *(int *)v147 >= v134 )
          v52 = *(_DWORD *)v147;
        sprintf(s, "temp2_%d", v51);
        v53 = json_integer(v52);
        json_object_set_new(v16, s, v53);
      }
      while ( v132 > v41 );
      v54 = (size_t *)v126;
      if ( v132 > 0 )
      {
        v55 = ptr - 4;
        v56 = 0;
        do
        {
          ++v56;
          memset(s, 0, sizeof(s));
          memset(v148, 0, sizeof(v148));
          v57 = *((_DWORD *)v55 + 1);
          v55 += 4;
          snprintf(s, 0x20u, "temp_in_pcb_%d", v57);
          v58 = v54[6];
          v59 = *v54;
          v54 += 54;
          sub_1F978(v59, v58, v148);
          v60 = BUFX_strdup(v148);
          json_object_set_new(v16, s, v60);
        }
        while ( v132 > v56 );
        if ( v132 > 0 )
        {
          v61 = ptr - 4;
          v62 = (char *)v126;
          v63 = 0;
          do
          {
            ++v63;
            memset(s, 0, sizeof(s));
            v62 += 216;
            memset(v148, 0, sizeof(v148));
            v64 = *((_DWORD *)v61 + 1);
            v61 += 4;
            snprintf(s, 0x20u, "temp_out_pcb_%d", v64);
            sub_1F978(*((_DWORD *)v62 - 52), *((_DWORD *)v62 - 47), v148);
            v65 = BUFX_strdup(v148);
            json_object_set_new(v16, s, v65);
          }
          while ( v132 > v63 );
          if ( v132 > 0 )
          {
            v66 = ptr - 4;
            v67 = (char *)v126;
            v68 = 0;
            do
            {
              ++v68;
              memset(s, 0, sizeof(s));
              v67 += 216;
              memset(v148, 0, sizeof(v148));
              v69 = *((_DWORD *)v66 + 1);
              v66 += 4;
              snprintf(s, 0x20u, "temp_in_chip_%d", v69);
              sub_1F978(*((_DWORD *)v67 - 53), *((_DWORD *)v67 - 48), v148);
              v70 = BUFX_strdup(v148);
              json_object_set_new(v16, s, v70);
            }
            while ( v132 > v68 );
            if ( v132 > 0 )
            {
              v71 = ptr - 4;
              v72 = (char *)v126;
              v73 = 0;
              do
              {
                ++v73;
                memset(s, 0, sizeof(s));
                v72 += 216;
                memset(v148, 0, sizeof(v148));
                v74 = *((_DWORD *)v71 + 1);
                v71 += 4;
                snprintf(s, 0x20u, "temp_out_chip_%d", v74);
                sub_1F978(*((_DWORD *)v72 - 52), *((_DWORD *)v72 - 47), v148);
                v75 = BUFX_strdup(v148);
                json_object_set_new(v16, s, v75);
              }
              while ( v132 > v73 );
            }
          }
        }
      }
    }
    v76 = json_integer(v131);
    json_object_set_new(v16, "temp_max", v76);
    if ( v132 <= 0 )
      goto LABEL_67;
    v77 = (char *)v126;
    v78 = 0;
    v79 = ptr - 4;
    v80 = ptr - 4;
    v81 = (const char **)v126;
    do
    {
      ++v78;
      memset(s, 0, sizeof(s));
      v82 = *((_DWORD *)v79 + 1);
      v79 += 4;
      snprintf(s, 0x20u, "chain_acn%d", v82);
      v83 = *((_DWORD *)v77 + 16);
      v77 += 216;
      v84 = json_integer(v83);
      json_object_set_new(v16, s, v84);
    }
    while ( v132 > v78 );
    if ( v132 <= 0 )
      goto LABEL_67;
    v85 = 0;
    do
    {
      v86 = *((_DWORD *)v80 + 1);
      v80 += 4;
      ++v85;
      v81 += 54;
      sprintf(v147, "chain_acs%d", v86);
      memset(s, 0, sizeof(s));
      memset(v148, 0, sizeof(v148));
      snprintf(s, 0x20u, "chain_acs%d", v86);
      snprintf(v148, 0x100u, "%s", *(v81 - 37));
      v87 = BUFX_strdup(v148);
      json_object_set_new(v16, s, v87);
    }
    while ( v132 > v85 );
    if ( v132 <= 0 )
    {
LABEL_67:
      v96 = 0;
    }
    else
    {
      v88 = ptr - 4;
      v89 = (char *)v126;
      v90 = 0;
      v91 = 0;
      do
      {
        ++v90;
        memset(s, 0, sizeof(s));
        v92 = *((_DWORD *)v88 + 1);
        v88 += 4;
        snprintf(s, 0x20u, "chain_hw%d", v92);
        v93 = *((_DWORD *)v89 + 20);
        v89 += 216;
        v94 = *((_DWORD *)v89 - 33);
        v95 = json_integer(__SPAIR64__(v94, v93));
        json_object_set_new(v16, s, v95);
        v91 += __PAIR64__(v94, v93);
      }
      while ( v132 > v90 );
      v96 = v91;
    }
    v97 = json_integer(v96);
    json_object_set_new(v16, "no_matching_work", v97);
    if ( v132 > 0 )
    {
      v98 = (char *)v126;
      v99 = 0;
      v100 = ptr - 4;
      v101 = ptr - 4;
      v102 = (char *)v126;
      do
      {
        ++v99;
        memset(s, 0, sizeof(s));
        v103 = *((_DWORD *)v100 + 1);
        v100 += 4;
        snprintf(s, 0x20u, "chain_rate%d", v103);
        v98 += 216;
        v104 = json_real();
        json_object_set_new(v16, s, v104);
      }
      while ( v132 > v99 );
      if ( v132 > 0 )
      {
        v105 = 0;
        do
        {
          ++v105;
          v102 += 216;
          format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v129 + 68) + 12), v147);
          v106 = *((_DWORD *)v101 + 1);
          v101 += 4;
          snprintf(s, 0x20u, "CHAIN AVG HASHRATE%d", v106);
          v107 = BUFX_strdup(v147);
          json_object_set_new(v16, s, v107);
        }
        while ( v132 > v105 );
        if ( v132 > 0 )
        {
          v108 = ptr - 4;
          v109 = (char *)v126;
          v110 = 0;
          do
          {
            ++v110;
            memset(s, 0, sizeof(s));
            v111 = *((_DWORD *)v108 + 1);
            v108 += 4;
            snprintf(s, 0x20u, "freq%d", v111);
            v112 = *((_DWORD *)v109 + 18);
            v109 += 216;
            v113 = json_integer(v112);
            json_object_set_new(v16, s, v113);
          }
          while ( v132 > v110 );
        }
      }
    }
    v114 = BUFX_strdup(g_miner_version);
    json_object_set_new(v16, "miner_version", v114);
    v115 = BUFX_strdup(0);
    json_object_set_new(v16, "miner_id", v115);
    json_array_append_new(v130, v16);
    json_object_set_new(a1, "STATS", v130);
    v116 = json_integer(1);
    json_object_set_new(a1, "id", v116);
    if ( v132 > 0 )
    {
      free(ptr);
      free(v126);
    }
    return 0;
  }
}
