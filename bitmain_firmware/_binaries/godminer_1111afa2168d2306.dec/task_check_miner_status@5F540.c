int task_check_miner_status()
{
  int v0; // r7
  char *all_created_runtime; // r0
  char *v2; // r3
  const char *v3; // r2
  char *v4; // r1
  char *v5; // r5
  int v6; // r11
  int v7; // t1
  char *flag_from_monitor; // r0
  int v9; // r3
  char *v10; // r4
  int v11; // r2
  bool v12; // zf
  __int64 v13; // r4
  int *v14; // r0
  char *v15; // r0
  int *v16; // r0
  int *v17; // r2
  int v18; // t1
  int v19; // r5
  char *v20; // r0
  char *v21; // r8
  int v22; // r6
  int v23; // t1
  char *v24; // r0
  int v25; // r4
  __int64 v26; // r10
  int v27; // r4
  int v28; // r2
  int v29; // r3
  int v30; // r6
  char *v31; // r3
  char *v32; // r3
  char v33; // r2
  int v34; // r2
  int v36; // r3
  int v37; // r2
  const char *v38; // r2
  int v39; // r1
  int v40; // r3
  const char *v41; // r2
  int v42; // r1
  int v43; // r2
  int v44; // r3
  int *v45; // r10
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int v49; // r1
  int v50; // r3
  int v51; // r8
  const char *v52; // r2
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int *v56; // r7
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r1
  int v61; // r3
  const char *v62; // r2
  int v63; // r1
  int v64; // r2
  int v65; // r3
  int *v66; // r7
  int v67; // r1
  int v68; // r2
  int v69; // r3
  int v70; // r1
  int v71; // r1
  int v72; // r2
  int v73; // r3
  int *v74; // r4
  int v75; // r1
  int v76; // r2
  int v77; // r3
  int v78; // r1
  char v79; // r3
  int v80; // r3
  int v81; // r11
  int v82; // r10
  char *v83; // r0
  char *v84; // r8
  int v85; // t1
  int v86; // r0
  int v87; // r0
  char *v88; // r1
  int v89; // r1
  int v90; // r7
  const char *v91; // r3
  int v92; // r2
  const char *v93; // r3
  int v94; // r2
  const char *v95; // r2
  char *v96; // r1
  int v97; // r6
  int v98; // r1
  const char *v99; // r2
  char *v100; // r1
  int v101; // r2
  int v102; // r1
  const char *v103; // r2
  char *v104; // r1
  int v105; // lr
  int v106; // r1
  int v107; // r0
  int v108; // r1
  unsigned int v109; // r4
  int v110; // r3
  int v111; // r1
  int v112; // [sp+20h] [bp-12B4h] BYREF
  int v113; // [sp+40h] [bp-1294h]
  const char *v114; // [sp+44h] [bp-1290h]
  unsigned int v115; // [sp+48h] [bp-128Ch]
  int v116; // [sp+4Ch] [bp-1288h]
  int v117; // [sp+54h] [bp-1280h]
  int v118; // [sp+58h] [bp-127Ch]
  int v119; // [sp+5Ch] [bp-1278h]
  __int64 v120; // [sp+60h] [bp-1274h]
  int v121; // [sp+68h] [bp-126Ch]
  int v122; // [sp+6Ch] [bp-1268h]
  char *v123; // [sp+70h] [bp-1264h]
  int v124; // [sp+74h] [bp-1260h]
  int v125; // [sp+78h] [bp-125Ch]
  int v126; // [sp+7Ch] [bp-1258h]
  int *v127; // [sp+80h] [bp-1254h]
  int *v128; // [sp+84h] [bp-1250h]
  int v129; // [sp+88h] [bp-124Ch]
  int v130; // [sp+8Ch] [bp-1248h]
  int v131; // [sp+90h] [bp-1244h]
  int v132; // [sp+94h] [bp-1240h]
  const char *v133; // [sp+98h] [bp-123Ch]
  char *v134; // [sp+9Ch] [bp-1238h]
  int v135; // [sp+A0h] [bp-1234h]
  int v136; // [sp+A4h] [bp-1230h]
  char *s; // [sp+A8h] [bp-122Ch]
  int v138; // [sp+ACh] [bp-1228h]
  int v139; // [sp+B0h] [bp-1224h]
  int v140; // [sp+B4h] [bp-1220h]
  int v141; // [sp+B8h] [bp-121Ch]
  int v142; // [sp+BCh] [bp-1218h]
  int v143; // [sp+C0h] [bp-1214h]
  int v144; // [sp+C4h] [bp-1210h]
  int v145; // [sp+C8h] [bp-120Ch]
  int v146; // [sp+CCh] [bp-1208h]
  int v147; // [sp+D0h] [bp-1204h]
  int v148; // [sp+D4h] [bp-1200h]
  int v149; // [sp+D8h] [bp-11FCh]
  const char *v150; // [sp+DCh] [bp-11F8h]
  int v151; // [sp+E0h] [bp-11F4h]
  int v152; // [sp+E4h] [bp-11F0h]
  int v153; // [sp+E8h] [bp-11ECh]
  int v154; // [sp+ECh] [bp-11E8h]
  int v155; // [sp+F8h] [bp-11DCh]
  int v156; // [sp+FCh] [bp-11D8h]
  int v157; // [sp+100h] [bp-11D4h]
  int v158; // [sp+104h] [bp-11D0h]
  int v159; // [sp+10Ch] [bp-11C8h] BYREF
  _DWORD v160[7]; // [sp+110h] [bp-11C4h] BYREF
  int v161; // [sp+12Ch] [bp-11A8h]
  _DWORD v162[8]; // [sp+130h] [bp-11A4h] BYREF
  _DWORD v163[7]; // [sp+150h] [bp-1184h] BYREF
  int v164; // [sp+16Ch] [bp-1168h]
  _DWORD v165[8]; // [sp+170h] [bp-1164h] BYREF
  _DWORD v166[7]; // [sp+190h] [bp-1144h] BYREF
  int v167; // [sp+1ACh] [bp-1128h]
  _DWORD v168[8]; // [sp+1B0h] [bp-1124h] BYREF
  _DWORD v169[7]; // [sp+1D0h] [bp-1104h] BYREF
  int v170; // [sp+1ECh] [bp-10E8h]
  _DWORD v171[8]; // [sp+1F0h] [bp-10E4h] BYREF
  _DWORD v172[7]; // [sp+210h] [bp-10C4h] BYREF
  int v173; // [sp+22Ch] [bp-10A8h]
  _DWORD v174[8]; // [sp+230h] [bp-10A4h] BYREF
  _DWORD v175[7]; // [sp+250h] [bp-1084h] BYREF
  int v176; // [sp+26Ch] [bp-1068h]
  _DWORD v177[7]; // [sp+270h] [bp-1064h] BYREF
  int v178; // [sp+28Ch] [bp-1048h]
  _DWORD v179[7]; // [sp+290h] [bp-1044h] BYREF
  int v180; // [sp+2ACh] [bp-1028h]
  int v181; // [sp+2B0h] [bp-1024h] BYREF
  int v182; // [sp+2B4h] [bp-1020h]
  int v183; // [sp+2B8h] [bp-101Ch]
  int v184; // [sp+2BCh] [bp-1018h]
  int v185; // [sp+2C0h] [bp-1014h]
  int v186; // [sp+2C4h] [bp-1010h]
  int v187; // [sp+2C8h] [bp-100Ch]
  int v188; // [sp+2CCh] [bp-1008h]
  _DWORD v189[1025]; // [sp+2D0h] [bp-1004h] BYREF

  v123 = &byte_196B74;
  if ( !byte_196B74 )
  {
    byte_196B78 = 0;
    byte_196B79 = 0;
    byte_196B7A = 0;
    byte_196B7B = 0;
    byte_196B7C = 0;
    byte_196B7D = 0;
    byte_196B7E = 0;
    byte_196B7F = 0;
    byte_196B80 = 0;
    byte_196B74 = 1;
  }
  pthread_mutex_lock(&stru_196B84);
  v179[0] = 0;
  v0 = (unsigned __int8)v123[12] ^ 1;
  all_created_runtime = (char *)get_all_created_runtime(v179);
  v181 = 0;
  v182 = 0;
  v183 = 0;
  v184 = 0;
  if ( v179[0] <= 0 )
  {
    v124 = 0;
    v115 = 0;
    v121 = 0;
    goto LABEL_24;
  }
  LOWORD(v2) = 27796;
  LOWORD(v3) = 32320;
  LOWORD(v4) = 31628;
  v5 = all_created_runtime - 4;
  v6 = 0;
  HIWORD(v2) = (unsigned int)"%1.f" >> 16;
  HIWORD(v3) = (unsigned int)"emp_err" >> 16;
  HIWORD(v4) = (unsigned int)"pwm value error!" >> 16;
  v134 = v2;
  v150 = v3;
  s = v4;
  v117 = v0;
  do
  {
    v7 = *((_DWORD *)v5 + 1);
    v5 += 4;
    flag_from_monitor = get_flag_from_monitor(v7);
    v9 = *((_DWORD *)flag_from_monitor + 4);
    v10 = flag_from_monitor;
    v116 = 0;
    v115 = v9 & 1;
    if ( (v9 & 1) == 0 )
    {
      v122 = 0;
      v121 = v9 & 2;
      if ( (v9 & 2) == 0 )
      {
        v136 = 0;
        v135 = v9 & 4;
        if ( (v9 & 4) == 0 )
          goto LABEL_75;
        v12 = v117 == 0;
        *((_DWORD *)flag_from_monitor + 6) |= 4u;
        if ( !v12 )
        {
          v133 = "check_temp";
          v138 = v182;
          v90 = v181;
          v124 = (int)"%s";
          v127 = &g_zc;
          v128 = &v112;
          goto LABEL_88;
        }
LABEL_13:
        v131 = v9 & 8;
        v132 = 0;
        if ( (v9 & 8) != 0 )
          *((_DWORD *)flag_from_monitor + 6) |= 8u;
LABEL_15:
        v118 = v9 & 0x10;
        v119 = 0;
        if ( (v9 & 0x10) != 0 )
        {
          v12 = v117 == 0;
          *((_DWORD *)v10 + 6) |= 0x10u;
          if ( !v12 )
          {
            LOWORD(v91) = 32000;
            LOWORD(v92) = -27176;
            HIWORD(v91) = (unsigned int)"(%d)!" >> 16;
            v133 = v91;
            HIWORD(v92) = (unsigned int)"d" >> 16;
            v124 = v92;
            v127 = &g_zc;
            v128 = &v112;
            goto LABEL_115;
          }
        }
        goto LABEL_18;
      }
      v12 = v117 == 0;
      *((_DWORD *)flag_from_monitor + 6) |= 2u;
      if ( !v12 )
      {
        v133 = "check_temp";
        v138 = v182;
        v90 = v181;
        v124 = (int)"%s";
        v127 = &g_zc;
        v128 = &v112;
        goto LABEL_86;
      }
      LODWORD(v120) = v9 & 4;
      HIDWORD(v120) = v117;
LABEL_73:
      if ( !v120 )
        goto LABEL_75;
      *((_DWORD *)flag_from_monitor + 6) |= 4u;
      goto LABEL_13;
    }
    v11 = *((_DWORD *)flag_from_monitor + 6);
    v12 = v117 == 0;
    *((_DWORD *)flag_from_monitor + 6) = v11 | 1;
    if ( v12 )
    {
      v129 = v9 & 2;
      LODWORD(v120) = v9 & 4;
      v130 = v117;
      HIDWORD(v120) = v117;
      if ( !(v129 | v117) )
      {
        if ( !v120 )
        {
          v151 = v9 & 8;
          v152 = v117;
          if ( v151 | v117 )
          {
            *((_DWORD *)flag_from_monitor + 6) = v11 | 9;
LABEL_78:
            v139 = v9 & 0x10;
            v140 = 0;
            if ( (v9 & 0x10) != 0 )
              *((_DWORD *)v10 + 6) |= 0x10u;
            goto LABEL_18;
          }
          goto LABEL_15;
        }
        *((_DWORD *)flag_from_monitor + 6) = v11 | 5;
        goto LABEL_13;
      }
      *((_DWORD *)flag_from_monitor + 6) = v11 | 3;
      goto LABEL_73;
    }
    V_LOCK();
    v36 = *(_DWORD *)v5;
    v133 = "check_temp";
    v37 = *(_DWORD *)(v36 + 256);
    v124 = (int)"%s";
    v127 = &g_zc;
    v128 = &v112;
    V_INT((int)v175, v134, v37);
    LOWORD(v38) = 32084;
    HIWORD(v38) = (unsigned int)"nutes, poweroff." >> 16;
    V_STR(v174, s, v38);
    logfmt_raw(
      (char *)v189,
      0x1000u,
      0,
      v176,
      v175[0],
      v175[1],
      v175[2],
      v175[3],
      v175[4],
      v175[5],
      v175[6],
      v176,
      v174[0],
      v174[1],
      v174[2],
      v174[3],
      v174[4],
      v174[5],
      v174[6],
      v174[7],
      v124,
      "check_temp",
      v115,
      v116);
    V_UNLOCK();
    LOWORD(v39) = 32096;
    HIWORD(v39) = (unsigned int)"off." >> 16;
    zlog(*v127, v39, 173, "check_temp", 10, 36, 100, v189);
    v142 = 0;
    v90 = v181 | 1;
    v138 = v182;
    v181 |= 1u;
    v40 = *((_DWORD *)v10 + 4);
    v141 = v40 & 2;
    if ( (v40 & 2) != 0 )
    {
      *((_DWORD *)v10 + 6) |= 2u;
LABEL_86:
      V_LOCK();
      v90 |= 2u;
      V_INT((int)v172, v134, *(int *)(*(_DWORD *)v5 + 256));
      LOWORD(v41) = 32272;
      HIWORD(v41) = (unsigned int)"tatus_fan_err" >> 16;
      V_STR(v171, s, v41);
      v42 = v171[1];
      v43 = v171[2];
      v44 = v171[3];
      v114 = v133;
      v45 = v128;
      v113 = v124;
      *v128 = v171[0];
      v45[1] = v42;
      v45[2] = v43;
      v45[3] = v44;
      v45 += 4;
      v46 = v171[5];
      v47 = v171[6];
      v48 = v171[7];
      *v45 = v171[4];
      v45[1] = v46;
      v45[2] = v47;
      v45[3] = v48;
      logfmt_raw((char *)v189, 0x1000u, 0, v173, v172[0], v172[1], v172[2], v172[3], v172[4], v172[5], v172[6], v173);
      V_UNLOCK();
      LOWORD(v49) = 32096;
      HIWORD(v49) = (unsigned int)"off." >> 16;
      zlog(*v127, v49, 173, "check_temp", 10, 44, 100, v189);
      v181 = v90;
      v182 = v138;
      v9 = *((_DWORD *)v10 + 4);
      v143 = v9 & 4;
      v144 = 0;
      if ( (v9 & 4) != 0 )
      {
LABEL_87:
        *((_DWORD *)v10 + 6) |= 4u;
LABEL_88:
        V_LOCK();
        v50 = *(_DWORD *)v5;
        v149 = v90 | 4;
        v51 = v138;
        V_INT((int)v169, v134, *(int *)(v50 + 256));
        LOWORD(v52) = 32288;
        HIWORD(v52) = (unsigned int)"set_miner_6060info_status_high_temp_err" >> 16;
        V_STR(v168, s, v52);
        v53 = v168[1];
        v54 = v168[2];
        v55 = v168[3];
        v114 = v133;
        v56 = v128;
        v113 = v124;
        *v128 = v168[0];
        v56[1] = v53;
        v56[2] = v54;
        v56[3] = v55;
        v56 += 4;
        v57 = v168[5];
        v58 = v168[6];
        v59 = v168[7];
        *v56 = v168[4];
        v56[1] = v57;
        v56[2] = v58;
        v56[3] = v59;
        logfmt_raw((char *)v189, 0x1000u, 0, v170, v169[0], v169[1], v169[2], v169[3], v169[4], v169[5], v169[6], v170);
        V_UNLOCK();
        LOWORD(v60) = 32096;
        HIWORD(v60) = (unsigned int)"off." >> 16;
        zlog(*v127, v60, 173, "check_temp", 10, 52, 100, v189);
        v182 = v51;
        v181 = v149;
        v9 = *((_DWORD *)v10 + 4);
        v145 = v9 & 8;
        v146 = 0;
        if ( (v9 & 8) != 0 )
        {
          *((_DWORD *)v10 + 6) |= 8u;
          goto LABEL_90;
        }
        goto LABEL_15;
      }
LABEL_75:
      v125 = v9 & 8;
      v126 = 0;
      if ( (v9 & 8) != 0 )
      {
        v12 = v117 == 0;
        *((_DWORD *)v10 + 6) |= 8u;
        if ( !v12 )
        {
          LOWORD(v93) = 32000;
          LOWORD(v94) = -27176;
          HIWORD(v93) = (unsigned int)"(%d)!" >> 16;
          v133 = v93;
          HIWORD(v94) = (unsigned int)"d" >> 16;
          v124 = v94;
          v127 = &g_zc;
          v128 = &v112;
          goto LABEL_116;
        }
        goto LABEL_78;
      }
      goto LABEL_15;
    }
    v154 = 0;
    v153 = v40 & 4;
    if ( (v40 & 4) != 0 )
      goto LABEL_87;
    v156 = 0;
    v155 = v40 & 8;
    if ( (v40 & 8) != 0 )
    {
      *((_DWORD *)v10 + 6) |= 8u;
LABEL_116:
      v51 = v182;
      v149 = v181;
LABEL_90:
      V_LOCK();
      v61 = *(_DWORD *)v5;
      v138 = v149 | 8;
      V_INT((int)v166, v134, *(int *)(v61 + 256));
      LOWORD(v62) = 32304;
      HIWORD(v62) = (unsigned int)"fo_status_high_temp_err" >> 16;
      V_STR(v165, s, v62);
      v63 = v165[1];
      v64 = v165[2];
      v65 = v165[3];
      v114 = v133;
      v66 = v128;
      v113 = v124;
      *v128 = v165[0];
      v66[1] = v63;
      v66[2] = v64;
      v66[3] = v65;
      v66 += 4;
      v67 = v165[5];
      v68 = v165[6];
      v69 = v165[7];
      *v66 = v165[4];
      v66[1] = v67;
      v66[2] = v68;
      v66[3] = v69;
      logfmt_raw((char *)v189, 0x1000u, 0, v167, v166[0], v166[1], v166[2], v166[3], v166[4], v166[5], v166[6], v167);
      V_UNLOCK();
      LOWORD(v70) = 32096;
      HIWORD(v70) = (unsigned int)"off." >> 16;
      zlog(*v127, v70, 173, "check_temp", 10, 60, 100, v189);
      v182 = v51;
      v181 = v138;
      v147 = *((_DWORD *)v10 + 4) & 0x10;
      v148 = 0;
      if ( !v147 )
        goto LABEL_18;
      *((_DWORD *)v10 + 6) |= 0x10u;
      goto LABEL_92;
    }
    v158 = 0;
    v157 = v40 & 0x10;
    if ( (v40 & 0x10) != 0 )
    {
      *((_DWORD *)v10 + 6) |= 0x10u;
LABEL_115:
      v51 = v182;
      v138 = v181;
LABEL_92:
      V_LOCK();
      V_INT((int)v163, v134, *(int *)(*(_DWORD *)v5 + 256));
      V_STR(v162, s, v150);
      v71 = v162[1];
      v72 = v162[2];
      v73 = v162[3];
      v114 = v133;
      v74 = v128;
      v113 = v124;
      *v128 = v162[0];
      v74[1] = v71;
      v74[2] = v72;
      v74[3] = v73;
      v74 += 4;
      v75 = v162[5];
      v76 = v162[6];
      v77 = v162[7];
      *v74 = v162[4];
      v74[1] = v75;
      v74[2] = v76;
      v74[3] = v77;
      logfmt_raw((char *)v189, 0x1000u, 0, v164, v163[0], v163[1], v163[2], v163[3], v163[4], v163[5], v163[6], v164);
      V_UNLOCK();
      LOWORD(v78) = 32096;
      HIWORD(v78) = (unsigned int)"off." >> 16;
      zlog(*v127, v78, 173, "check_temp", 10, 68, 100, v189);
      v182 = v51;
      v181 = v138 | 0x10;
    }
LABEL_18:
    ++v6;
  }
  while ( v6 < v179[0] );
  v0 = v117;
  v13 = v181 & 4;
  v115 = v181;
  v121 = (v181 & 4) != 0;
  if ( (v181 & 2) != 0 )
  {
    v124 = 1;
    set_miner_6060info_status_high_temp_err(1);
  }
  else
  {
    v124 = 0;
  }
  if ( v13 )
    set_miner_6060info_status_low_temp_err(1);
LABEL_24:
  v181 = 0;
  v14 = (int *)get_all_created_runtime(&v181);
  v15 = get_flag_from_monitor(*v14);
  if ( (*((_DWORD *)v15 + 8) & 4) != 0 && (*((_DWORD *)v15 + 10) |= 4u, v0) )
  {
    V_LOCK();
    LOWORD(v95) = 32352;
    LOWORD(v96) = 31628;
    HIWORD(v95) = (unsigned int)"ective_temp_err" >> 16;
    HIWORD(v96) = (unsigned int)"pwm value error!" >> 16;
    LOWORD(v97) = -27176;
    V_STR(v177, v96, v95);
    HIWORD(v97) = (unsigned int)"d" >> 16;
    v118 = v0;
    logfmt_raw(
      (char *)v189,
      0x1000u,
      0,
      v178,
      v177[0],
      v177[1],
      v177[2],
      v177[3],
      v177[4],
      v177[5],
      v177[6],
      v178,
      v97,
      "check_fan_err");
    V_UNLOCK();
    LOWORD(v98) = 32096;
    HIWORD(v98) = (unsigned int)"off." >> 16;
    zlog(g_zc, v98, 173, "check_fan_err", 13, 85, 100, v189);
  }
  else
  {
    v118 = 0;
  }
  v159 = 0;
  v16 = (int *)get_all_created_runtime(&v159);
  if ( v159 > 0 )
  {
    v17 = &v16[v159];
    do
    {
      v18 = *v16++;
      v0 = (unsigned __int8)(v0 & *(_BYTE *)(v18 + 265));
    }
    while ( v17 != v16 );
  }
  v19 = 0;
  v189[0] = 0;
  v20 = (char *)get_all_created_runtime(v189);
  if ( v189[0] > 0 )
  {
    v21 = v20 - 4;
    v22 = 0;
    do
    {
      v23 = *((_DWORD *)v21 + 1);
      v21 += 4;
      v24 = get_flag_from_monitor(v23);
      if ( (*(_DWORD *)v24 & 1) != 0 )
      {
        if ( v0 )
          v19 = v0;
        *((_DWORD *)v24 + 2) |= 1u;
      }
      ++v22;
    }
    while ( v22 < v189[0] );
  }
  if ( !v123[40] )
  {
    clock_gettime(1, &stru_196BA0);
    v123[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v25 = 0;
    do
    {
      while ( pool_tget(
                *(pthread_mutex_t **)(pools + 4 * v25),
                (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v25) + 1904))
           || !pools_active )
      {
        if ( ++v25 >= total_pools )
          goto LABEL_45;
      }
      clock_gettime(1, &stru_196BA0);
      ++v25;
      set_miner_6060info_network_lost_err(0);
    }
    while ( v25 < total_pools );
  }
LABEL_45:
  clock_gettime(1, &stru_196BA8);
  v26 = 1000LL * (*((_DWORD *)v123 + 13) - *((_DWORD *)v123 + 11))
      + (*((_DWORD *)v123 + 14) - *((_DWORD *)v123 + 12)) / 1000000;
  if ( v26 <= 59999 )
    v27 = v123[60] & 1;
  else
    v27 = 0;
  if ( v27 )
  {
    v107 = rand();
    sub_14561C(v107, 0x78u);
    v109 = v108 + 60;
    V_LOCK();
    LOWORD(v110) = 32376;
    HIWORD(v110) = (unsigned int)"r_6060info_status_low_temp_err" >> 16;
    logfmt_raw((char *)v189, 0x1000u, 0, v110, v109);
    V_UNLOCK();
    LOWORD(v111) = 32096;
    HIWORD(v111) = (unsigned int)"off." >> 16;
    zlog(g_zc, v111, 173, "check_lost_connection_to_pool", 29, 150, 80, v189);
    sleep(v109);
    exit(1);
  }
  v117 = (v115 & 0xA) != 0;
  if ( v0 )
  {
    if ( v26 <= 60000 )
    {
      v127 = 0;
      LODWORD(v120) = 0;
      *((_DWORD *)v123 + 16) = 0;
    }
    else
    {
      v28 = *((_DWORD *)v123 + 16);
      *((_DWORD *)v123 + 16) = v28 + 1;
      if ( v28 == 60 * (v28 / 60) )
      {
        V_LOCK();
        LOWORD(v103) = 32464;
        LOWORD(v104) = 31628;
        HIWORD(v103) = (unsigned int)"untime_bad_asic_err" >> 16;
        HIWORD(v104) = (unsigned int)"pwm value error!" >> 16;
        V_STR(&v181, v104, v103);
        LOWORD(v105) = 32476;
        HIWORD(v105) = (unsigned int)"sic_err" >> 16;
        v120 = 274877907LL * (int)v26;
        logfmt_raw(
          (char *)v189,
          0x1000u,
          0,
          v188,
          v181,
          v182,
          v183,
          v184,
          v185,
          v186,
          v187,
          v188,
          v105,
          (int)v26 / 1000);
        V_UNLOCK();
        LOWORD(v106) = 32096;
        HIWORD(v106) = (unsigned int)"off." >> 16;
        zlog(g_zc, v106, 173, "check_lost_connection_to_pool", 29, 158, 100, v189);
        set_miner_6060info_network_lost_err(1);
      }
      if ( (unsigned int)&loc_124F80 >= v26 )
      {
        LODWORD(v120) = v0;
        v127 = 0;
      }
      else
      {
        v29 = (unsigned __int8)v123[60];
        LODWORD(v120) = v29;
        if ( v29 )
        {
          v127 = 0;
        }
        else
        {
          V_LOCK();
          LOWORD(v99) = 32464;
          LOWORD(v100) = 31628;
          HIWORD(v99) = (unsigned int)"untime_bad_asic_err" >> 16;
          HIWORD(v100) = (unsigned int)"pwm value error!" >> 16;
          v117 = v0;
          V_STR(v179, v100, v99);
          v127 = (int *)v0;
          v101 = v120;
          LODWORD(v120) = v0;
          logfmt_raw(
            (char *)v189,
            0x1000u,
            v101,
            v180,
            v179[0],
            v179[1],
            v179[2],
            v179[3],
            v179[4],
            v179[5],
            v179[6],
            v180,
            "lost internet %d seconds > 20 minutes, poweroff.",
            (int)v26 / 1000);
          V_UNLOCK();
          LOWORD(v102) = 32096;
          HIWORD(v102) = (unsigned int)"off." >> 16;
          zlog(g_zc, v102, 173, "check_lost_connection_to_pool", 29, 169, 120, v189);
          v123[60] = 1;
        }
      }
    }
  }
  else
  {
    v127 = 0;
    LODWORD(v120) = 0;
  }
  v30 = (v115 >> 3) & 1;
  if ( (v115 & 0x10) != 0 )
  {
    set_miner_6060info_uneffective_temp_err(1);
    LOBYTE(v27) = v123[12];
    if ( (_BYTE)v27 )
    {
      v117 = (unsigned __int8)v123[12];
    }
    else
    {
      LOBYTE(v27) = 1;
      v117 = 1;
      v81 = 1;
      v115 = 1;
LABEL_106:
      v82 = 0;
      v189[0] = 0;
      v123[12] = 1;
      v83 = (char *)get_all_created_runtime(v189);
      if ( v189[0] > 0 )
      {
        v84 = v83 - 4;
        do
        {
          v85 = *((_DWORD *)v84 + 1);
          v84 += 4;
          ++v82;
          v86 = (*(int (**)(void))(v85 + 24))();
          v87 = dev_ctrl(v86);
          (*(void (__fastcall **)(_DWORD))(v87 + 32))(*(_DWORD *)(*(_DWORD *)v84 + 248));
        }
        while ( v82 < v189[0] );
      }
      power_off();
      V_LOCK();
      LOWORD(v88) = 32560;
      HIWORD(v88) = (unsigned int)"sign_err" >> 16;
      V_BOOL((int)v160, v88, 1);
      logfmt_raw(
        (char *)v189,
        0x1000u,
        0,
        v161,
        v160[0],
        v160[1],
        v160[2],
        v160[3],
        v160[4],
        v160[5],
        v160[6],
        v161,
        "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d",
        v124,
        v121,
        v118,
        v30,
        v115,
        v127);
      V_UNLOCK();
      LOWORD(v89) = 32096;
      HIWORD(v89) = (unsigned int)"off." >> 16;
      zlog(g_zc, v89, 173, "task_check_miner_status", 23, 332, 120, v189);
      if ( !v81 && !v123[12] )
        goto LABEL_121;
    }
    goto LABEL_60;
  }
  if ( v123[12] )
    goto LABEL_60;
  v79 = v118;
  if ( (v115 & 0xE) != 0 )
    v79 = v118 | 1;
  v27 = (unsigned __int8)((unsigned __int8)v127 | v79);
  v80 = (unsigned __int8)(v120 | v19 | v79);
  v81 = v80;
  if ( v27 )
  {
    LOBYTE(v27) = v123[12];
    v115 = (unsigned __int8)v27;
    goto LABEL_106;
  }
  if ( v80 )
  {
LABEL_60:
    v123[11] = 1;
    goto LABEL_61;
  }
LABEL_121:
  v123[11] = 0;
LABEL_61:
  if ( v0 )
  {
    v31 = v123;
    if ( !v19 )
      LOBYTE(v19) = v123[12];
    v123[4] = v124;
    v31[5] = v121;
    v31[8] = v118;
    v32 = v123;
    v33 = v120;
    v123[9] = v19;
    v32[10] = v33;
    v32[6] = v30;
    v32[7] = v27;
  }
  pthread_mutex_unlock(&stru_196B84);
  v34 = (unsigned __int8)v123[11];
  byte_193754 ^= 1u;
  if ( v34 )
  {
    green_led_off();
    if ( byte_193754 )
    {
      red_led_on();
      if ( !v117 )
        return set_pwm_by_temp();
      return fan_pwm_set_max();
    }
    red_led_off();
  }
  else
  {
    red_led_off();
    if ( byte_193754 )
      green_led_on();
    else
      green_led_off();
  }
  if ( v117 )
    return fan_pwm_set_max();
  return set_pwm_by_temp();
}
