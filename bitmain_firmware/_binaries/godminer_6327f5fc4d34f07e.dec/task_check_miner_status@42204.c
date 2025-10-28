int task_check_miner_status()
{
  char *all_created_runtime; // r0
  int v1; // r7
  int v2; // r2
  bool v3; // zf
  __int64 v4; // r0
  int v5; // r0
  char *flag_from_monitor; // r0
  int v7; // r3
  char *v8; // r4
  int *v9; // r0
  char *v10; // r0
  int v11; // r7
  char *v12; // r0
  int *v13; // r5
  int v14; // r4
  int v15; // t1
  char *v16; // r0
  int v17; // r4
  __int64 v18; // r10
  int v19; // r9
  int v20; // r1
  int v21; // r4
  int v22; // r6
  int v23; // r6
  int v24; // r2
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int *v28; // r10
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r3
  int v33; // r4
  char *v34; // r0
  char *v35; // r10
  int v36; // t1
  int v37; // r0
  int v38; // r0
  char *v39; // r3
  char *v40; // r3
  char v41; // r2
  char v42; // r2
  int v43; // r2
  int v45; // r1
  int v46; // r2
  int v47; // r3
  int *v48; // r10
  int v49; // r1
  int v50; // r2
  int v51; // r3
  unsigned int v52; // r10
  int v53; // r9
  int v54; // r1
  int v55; // r2
  int v56; // r3
  int *v57; // r11
  int v58; // r1
  int v59; // r2
  int v60; // r3
  int v61; // r9
  int v62; // r1
  int v63; // r2
  int v64; // r3
  int *v65; // r12
  int v66; // r1
  int v67; // r2
  int v68; // r3
  int v69; // r1
  int v70; // r2
  int v71; // r3
  int *v72; // r12
  int v73; // r1
  int v74; // r2
  int v75; // r3
  unsigned int v76; // r9
  unsigned int v77; // r11
  int v78; // [sp+20h] [bp-1384h] BYREF
  int v79; // [sp+40h] [bp-1364h]
  const char *v80; // [sp+44h] [bp-1360h]
  int v81; // [sp+4Ch] [bp-1358h]
  __int64 v82; // [sp+50h] [bp-1354h]
  char *v83; // [sp+58h] [bp-134Ch]
  int v84; // [sp+5Ch] [bp-1348h]
  unsigned int v85; // [sp+60h] [bp-1344h]
  char *v86; // [sp+64h] [bp-1340h]
  __int64 v87; // [sp+68h] [bp-133Ch]
  unsigned int v88; // [sp+70h] [bp-1334h]
  int v89; // [sp+74h] [bp-1330h]
  __int64 v90; // [sp+78h] [bp-132Ch]
  int v91; // [sp+80h] [bp-1324h]
  int v92; // [sp+84h] [bp-1320h]
  int *v93; // [sp+88h] [bp-131Ch]
  const char *v94; // [sp+8Ch] [bp-1318h]
  int v95; // [sp+90h] [bp-1314h]
  int v96; // [sp+94h] [bp-1310h]
  int v97; // [sp+98h] [bp-130Ch]
  int v98; // [sp+9Ch] [bp-1308h]
  int *v99; // [sp+A0h] [bp-1304h]
  char *v100; // [sp+A4h] [bp-1300h]
  int v101; // [sp+A8h] [bp-12FCh]
  int v102; // [sp+ACh] [bp-12F8h]
  int v103; // [sp+B0h] [bp-12F4h]
  int v104; // [sp+B4h] [bp-12F0h]
  int v105; // [sp+B8h] [bp-12ECh]
  int v106; // [sp+BCh] [bp-12E8h]
  int v107; // [sp+C0h] [bp-12E4h]
  int v108; // [sp+C4h] [bp-12E0h]
  int v109; // [sp+C8h] [bp-12DCh]
  int v110; // [sp+CCh] [bp-12D8h]
  int v111; // [sp+D0h] [bp-12D4h]
  int v112; // [sp+D4h] [bp-12D0h]
  char *s; // [sp+D8h] [bp-12CCh]
  const char *v114; // [sp+DCh] [bp-12C8h]
  int v115; // [sp+E0h] [bp-12C4h]
  int v116; // [sp+E4h] [bp-12C0h]
  int v117; // [sp+E8h] [bp-12BCh]
  int v118; // [sp+ECh] [bp-12B8h]
  int v119; // [sp+F8h] [bp-12ACh]
  int v120; // [sp+FCh] [bp-12A8h]
  int v121; // [sp+100h] [bp-12A4h]
  int v122; // [sp+104h] [bp-12A0h]
  _DWORD v123[7]; // [sp+108h] [bp-129Ch] BYREF
  int v124; // [sp+124h] [bp-1280h]
  _DWORD v125[7]; // [sp+128h] [bp-127Ch] BYREF
  int v126; // [sp+144h] [bp-1260h]
  _DWORD v127[7]; // [sp+148h] [bp-125Ch] BYREF
  int v128; // [sp+164h] [bp-1240h]
  _DWORD v129[7]; // [sp+168h] [bp-123Ch] BYREF
  int v130; // [sp+184h] [bp-1220h]
  _DWORD v131[8]; // [sp+188h] [bp-121Ch] BYREF
  _DWORD v132[7]; // [sp+1A8h] [bp-11FCh] BYREF
  int v133; // [sp+1C4h] [bp-11E0h]
  _DWORD v134[8]; // [sp+1C8h] [bp-11DCh] BYREF
  _DWORD v135[7]; // [sp+1E8h] [bp-11BCh] BYREF
  int v136; // [sp+204h] [bp-11A0h]
  _DWORD v137[8]; // [sp+208h] [bp-119Ch] BYREF
  _DWORD v138[7]; // [sp+228h] [bp-117Ch] BYREF
  int v139; // [sp+244h] [bp-1160h]
  _DWORD v140[8]; // [sp+248h] [bp-115Ch] BYREF
  _DWORD v141[7]; // [sp+268h] [bp-113Ch] BYREF
  int v142; // [sp+284h] [bp-1120h]
  _DWORD v143[8]; // [sp+288h] [bp-111Ch] BYREF
  _DWORD v144[7]; // [sp+2A8h] [bp-10FCh] BYREF
  int v145; // [sp+2C4h] [bp-10E0h]
  __int64 v146; // [sp+2C8h] [bp-10DCh] BYREF
  int v147; // [sp+2D0h] [bp-10D4h]
  int v148; // [sp+2D4h] [bp-10D0h]
  int v149; // [sp+2D8h] [bp-10CCh]
  int v150; // [sp+2DCh] [bp-10C8h]
  int v151; // [sp+2E0h] [bp-10C4h]
  int v152; // [sp+2E4h] [bp-10C0h]
  float v153; // [sp+2E8h] [bp-10BCh]
  float v154; // [sp+2ECh] [bp-10B8h]
  float v155; // [sp+2F0h] [bp-10B4h]
  _DWORD v156[1025]; // [sp+3A0h] [bp-1004h] BYREF

  v86 = &byte_108930;
  if ( !byte_108930 )
  {
    byte_108934 = 0;
    byte_108935 = 0;
    byte_108936 = 0;
    byte_108937 = 0;
    byte_108938 = 0;
    byte_108939 = 0;
    byte_10893A = 0;
    byte_10893B = 0;
    byte_10893C = 0;
    byte_108930 = 1;
  }
  pthread_mutex_lock(&stru_108940);
  v129[0] = 0;
  v81 = (unsigned __int8)v86[12] ^ 1;
  all_created_runtime = (char *)get_all_created_runtime(v129);
  v146 = 0;
  v147 = 0;
  v148 = 0;
  if ( v129[0] <= 0 )
  {
    v93 = 0;
    v82 = 0;
    v88 = 0;
    goto LABEL_27;
  }
  v1 = 0;
  v100 = "chain";
  v114 = "uneffective temp exceed limit";
  s = "error";
  v85 = (unsigned int)(all_created_runtime - 4);
  do
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v85 + 4);
      v85 += 4;
      flag_from_monitor = get_flag_from_monitor(v5);
      v7 = *((_DWORD *)flag_from_monitor + 4);
      v8 = flag_from_monitor;
      v82 = v7 & 1;
      if ( (v7 & 1) == 0 )
      {
        v89 = 0;
        v88 = v7 & 2;
        if ( (v7 & 2) == 0 )
        {
          v102 = 0;
          v101 = v7 & 4;
          if ( (v7 & 4) != 0 )
          {
            v3 = v81 == 0;
            *((_DWORD *)flag_from_monitor + 6) |= 4u;
            if ( v3 )
              goto LABEL_10;
            v94 = "check_temp";
            v77 = HIDWORD(v146);
            v76 = v146;
            LODWORD(v90) = "%s";
            v99 = &g_zc;
            v93 = &v78;
            goto LABEL_98;
          }
          goto LABEL_21;
        }
        v3 = v81 == 0;
        *((_DWORD *)flag_from_monitor + 6) |= 2u;
        if ( v3 )
        {
          LODWORD(v87) = v7 & 4;
          HIDWORD(v87) = v81;
          if ( (unsigned int)v87 | v81 )
          {
LABEL_9:
            *((_DWORD *)v8 + 6) |= 4u;
LABEL_10:
            v97 = v7 & 8;
            v98 = 0;
            if ( (v7 & 8) != 0 )
              *((_DWORD *)v8 + 6) |= 8u;
LABEL_12:
            v83 = (char *)(v7 & 0x10);
            v84 = 0;
            if ( (v7 & 0x10) == 0 )
              goto LABEL_15;
            v3 = v81 == 0;
            *((_DWORD *)v8 + 6) |= 0x10u;
            if ( v3 )
              goto LABEL_15;
            v94 = "check_temp";
            LODWORD(v90) = "%s";
            v99 = &g_zc;
            v93 = &v78;
            goto LABEL_106;
          }
          goto LABEL_21;
        }
        v94 = "check_temp";
        v77 = HIDWORD(v146);
        v76 = v146;
        LODWORD(v90) = "%s";
        v99 = &g_zc;
        v93 = &v78;
        goto LABEL_96;
      }
      v2 = *((_DWORD *)flag_from_monitor + 6);
      v3 = v81 == 0;
      *((_DWORD *)flag_from_monitor + 6) = v2 | 1;
      if ( v3 )
        break;
      V_LOCK();
      v93 = &v78;
      v24 = *(_DWORD *)(*(_DWORD *)v85 + 200);
      LODWORD(v90) = "%s";
      v99 = &g_zc;
      v94 = "check_temp";
      V_INT((int)v144, v100, v24);
      V_STR(v143, s, "temp lost");
      v25 = v143[1];
      v26 = v143[2];
      v27 = v143[3];
      v28 = v93;
      v80 = "check_temp";
      v79 = v90;
      *v93 = v143[0];
      v28[1] = v25;
      v28[2] = v26;
      v28[3] = v27;
      v28 += 4;
      v29 = v143[5];
      v30 = v143[6];
      v31 = v143[7];
      *v28 = v143[4];
      v28[1] = v29;
      v28[2] = v30;
      v28[3] = v31;
      logfmt_raw((char *)v156, 0x1000u, 0, v145, v144[0], v144[1], v144[2], v144[3], v144[4], v144[5], v144[6], v145);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_temp",
        10,
        35,
        100,
        v156);
      v106 = 0;
      v77 = HIDWORD(v146);
      v76 = v146 | 1;
      LODWORD(v146) = v146 | 1;
      v32 = *((_DWORD *)v8 + 4);
      v105 = v32 & 2;
      if ( (v32 & 2) != 0 )
      {
        *((_DWORD *)v8 + 6) |= 2u;
LABEL_96:
        V_LOCK();
        v76 |= 2u;
        V_INT((int)v141, v100, *(int *)(*(_DWORD *)v85 + 200));
        V_STR(v140, s, "temp too high");
        v45 = v140[1];
        v46 = v140[2];
        v47 = v140[3];
        v80 = v94;
        v48 = v93;
        v79 = v90;
        *v93 = v140[0];
        v48[1] = v45;
        v48[2] = v46;
        v48[3] = v47;
        v48 += 4;
        v49 = v140[5];
        v50 = v140[6];
        v51 = v140[7];
        *v48 = v140[4];
        v48[1] = v49;
        v48[2] = v50;
        v48[3] = v51;
        logfmt_raw((char *)v156, 0x1000u, 0, v142, v141[0], v141[1], v141[2], v141[3], v141[4], v141[5], v141[6], v142);
        V_UNLOCK();
        zlog(
          *v99,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          173,
          "check_temp",
          10,
          43,
          100,
          v156);
        v146 = __PAIR64__(v77, v76);
        v7 = *((_DWORD *)v8 + 4);
        v107 = v7 & 4;
        v108 = 0;
        if ( (v7 & 4) != 0 )
          goto LABEL_97;
        goto LABEL_21;
      }
      v118 = 0;
      v117 = v32 & 4;
      if ( (v32 & 4) == 0 )
      {
        v120 = 0;
        v119 = v32 & 8;
        if ( (v32 & 8) == 0 )
        {
          v122 = 0;
          v121 = v32 & 0x10;
          if ( (v32 & 0x10) == 0 )
            goto LABEL_15;
          *((_DWORD *)v8 + 6) |= 0x10u;
LABEL_106:
          v52 = HIDWORD(v146);
          v61 = v146;
          goto LABEL_102;
        }
        *((_DWORD *)v8 + 6) |= 8u;
        goto LABEL_107;
      }
LABEL_97:
      *((_DWORD *)v8 + 6) |= 4u;
LABEL_98:
      V_LOCK();
      v52 = v77;
      v53 = v76 | 4;
      V_INT((int)v138, v100, *(int *)(*(_DWORD *)v85 + 200));
      V_STR(v137, s, "temp too low");
      v54 = v137[1];
      v55 = v137[2];
      v56 = v137[3];
      v80 = v94;
      v57 = v93;
      v79 = v90;
      *v93 = v137[0];
      v57[1] = v54;
      v57[2] = v55;
      v57[3] = v56;
      v57 += 4;
      v58 = v137[5];
      v59 = v137[6];
      v60 = v137[7];
      *v57 = v137[4];
      v57[1] = v58;
      v57[2] = v59;
      v57[3] = v60;
      logfmt_raw((char *)v156, 0x1000u, 0, v139, v138[0], v138[1], v138[2], v138[3], v138[4], v138[5], v138[6], v139);
      V_UNLOCK();
      zlog(
        *v99,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_temp",
        10,
        51,
        100,
        v156);
      v146 = __PAIR64__(v52, v53);
      v7 = *((_DWORD *)v8 + 4);
      v109 = v7 & 8;
      v110 = 0;
      if ( (v7 & 8) == 0 )
        goto LABEL_12;
      *((_DWORD *)v8 + 6) |= 8u;
LABEL_100:
      V_LOCK();
      v61 = v53 | 8;
      V_INT((int)v135, v100, *(int *)(*(_DWORD *)v85 + 200));
      V_STR(v134, s, "read no temp");
      v62 = v134[1];
      v63 = v134[2];
      v64 = v134[3];
      v65 = v93;
      v80 = v94;
      v79 = v90;
      *v93 = v134[0];
      v65[1] = v62;
      v65[2] = v63;
      v65[3] = v64;
      v65 += 4;
      v66 = v134[5];
      v67 = v134[6];
      v68 = v134[7];
      *v65 = v134[4];
      v65[1] = v66;
      v65[2] = v67;
      v65[3] = v68;
      logfmt_raw((char *)v156, 0x1000u, 0, v136, v135[0], v135[1], v135[2], v135[3], v135[4], v135[5], v135[6], v136);
      V_UNLOCK();
      zlog(
        *v99,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_temp",
        10,
        59,
        100,
        v156);
      v146 = __PAIR64__(v52, v61);
      v111 = *((_DWORD *)v8 + 4) & 0x10;
      v112 = 0;
      if ( v111 )
      {
        *((_DWORD *)v8 + 6) |= 0x10u;
LABEL_102:
        V_LOCK();
        V_INT((int)v132, v100, *(int *)(*(_DWORD *)v85 + 200));
        V_STR(v131, s, v114);
        v69 = v131[1];
        v70 = v131[2];
        v71 = v131[3];
        v72 = v93;
        v80 = v94;
        v79 = v90;
        *v93 = v131[0];
        v72[1] = v69;
        v72[2] = v70;
        v72[3] = v71;
        v72 += 4;
        v73 = v131[5];
        v74 = v131[6];
        v75 = v131[7];
        *v72 = v131[4];
        v72[1] = v73;
        v72[2] = v74;
        v72[3] = v75;
        logfmt_raw((char *)v156, 0x1000u, 0, v133, v132[0], v132[1], v132[2], v132[3], v132[4], v132[5], v132[6], v133);
        V_UNLOCK();
        zlog(
          *v99,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          173,
          "check_temp",
          10,
          67,
          100,
          v156);
        HIDWORD(v146) = v52;
        LODWORD(v146) = v61 | 0x10;
      }
LABEL_15:
      if ( ++v1 >= v129[0] )
        goto LABEL_26;
    }
    v95 = v7 & 2;
    LODWORD(v87) = v7 & 4;
    v96 = v81;
    HIDWORD(v87) = v81;
    if ( !(v95 | v81) )
    {
      if ( v87 )
      {
        *((_DWORD *)flag_from_monitor + 6) = v2 | 5;
        goto LABEL_10;
      }
      v115 = v7 & 8;
      v116 = v81;
      if ( !(v115 | v81) )
        goto LABEL_12;
      *((_DWORD *)flag_from_monitor + 6) = v2 | 9;
      goto LABEL_24;
    }
    v4 = v87;
    *((_DWORD *)v8 + 6) = v2 | 3;
    if ( v4 )
      goto LABEL_9;
LABEL_21:
    v91 = v7 & 8;
    v92 = 0;
    if ( (v7 & 8) == 0 )
      goto LABEL_12;
    v3 = v81 == 0;
    *((_DWORD *)v8 + 6) |= 8u;
    if ( !v3 )
    {
      v94 = "check_temp";
      LODWORD(v90) = "%s";
      v99 = &g_zc;
      v93 = &v78;
LABEL_107:
      v52 = HIDWORD(v146);
      v53 = v146;
      goto LABEL_100;
    }
LABEL_24:
    v103 = v7 & 0x10;
    v104 = 0;
    if ( (v7 & 0x10) == 0 )
      goto LABEL_15;
    ++v1;
    *((_DWORD *)v8 + 6) |= 0x10u;
  }
  while ( v1 < v129[0] );
LABEL_26:
  v82 = v146;
  v88 = ((unsigned int)v146 >> 2) & 1;
  v93 = (int *)((v146 >> 1) & 1);
LABEL_27:
  LODWORD(v146) = 0;
  v9 = (int *)get_all_created_runtime(&v146);
  v10 = get_flag_from_monitor(*v9);
  if ( (*((_DWORD *)v10 + 8) & 4) == 0 || (v3 = v81 == 0, *((_DWORD *)v10 + 10) |= 4u, v3) )
  {
    v85 = 0;
  }
  else
  {
    V_LOCK();
    V_STR(v129, "error", "fan error exceed limit");
    v85 = v81;
    logfmt_raw(
      (char *)v156,
      0x1000u,
      0,
      v130,
      v129[0],
      v129[1],
      v129[2],
      v129[3],
      v129[4],
      v129[5],
      v129[6],
      v130,
      "%s",
      "check_fan_err");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "check_fan_err",
      13,
      84,
      100,
      v156);
  }
  v11 = 0;
  v125[0] = 0;
  v12 = (char *)get_all_created_runtime(v125);
  if ( v125[0] > 0 )
  {
    v13 = (int *)(v12 - 4);
    v14 = 0;
    v83 = "chain";
    do
    {
      while ( 1 )
      {
        v15 = v13[1];
        ++v13;
        v16 = get_flag_from_monitor(v15);
        if ( (*(_DWORD *)v16 & 1) != 0 )
        {
          v3 = v81 == 0;
          *((_DWORD *)v16 + 2) |= 1u;
          if ( !v3 )
            break;
        }
        if ( ++v14 >= v125[0] )
          goto LABEL_37;
      }
      V_LOCK();
      ++v14;
      V_INT((int)v127, v83, *(int *)(*v13 + 200));
      v11 = v81;
      logfmt_raw(
        (char *)v156,
        0x1000u,
        0,
        v128,
        v127[0],
        v127[1],
        v127[2],
        v127[3],
        v127[4],
        v127[5],
        v127[6],
        v128,
        "%s low hashrate happened!",
        "check_low_hashrate");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_low_hashrate",
        18,
        103,
        80,
        v156);
      read_status_from_monitor(&v146, *v13);
      V_LOCK();
      logfmt_raw((char *)v156, 0x1000u, 0, "no ratio hashrate last_5s: %f", v153 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_low_hashrate",
        18,
        106,
        80,
        v156);
      V_LOCK();
      logfmt_raw((char *)v156, 0x1000u, 0, "no ratio hashrate last_30min: %f", v154 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_low_hashrate",
        18,
        107,
        80,
        v156);
      V_LOCK();
      logfmt_raw((char *)v156, 0x1000u, 0, "no ratio hashrate lifetime: %f", v155 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_low_hashrate",
        18,
        108,
        80,
        v156);
    }
    while ( v14 < v125[0] );
  }
LABEL_37:
  if ( !v86[40] )
  {
    clock_gettime(1, &stru_10895C);
    v86[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v17 = 0;
    do
    {
      while ( pool_tget(*(_DWORD *)(pools + 4 * v17), (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v17) + 1896))
           || !pools_active )
      {
        if ( ++v17 >= total_pools )
          goto LABEL_45;
      }
      clock_gettime(1, &stru_10895C);
      ++v17;
    }
    while ( v17 < total_pools );
  }
LABEL_45:
  clock_gettime(1, &stru_108964);
  v18 = 1000LL * (*((_DWORD *)v86 + 13) - *((_DWORD *)v86 + 11))
      + (*((_DWORD *)v86 + 14) - *((_DWORD *)v86 + 12)) / 1000000;
  if ( v18 <= 59999 )
    v19 = v86[60] & 1;
  else
    v19 = 0;
  if ( v19 )
  {
    V_LOCK();
    logfmt_raw(
      (char *)v156,
      0x1000u,
      0,
      "The pool connection recovered after the system poweroff. Exit and restart mining!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "check_lost_connection_to_pool",
      29,
      139,
      80,
      v156);
    exit(1);
  }
  v83 = (char *)(((unsigned int)v82 >> 4) & 1);
  v20 = v85;
  LODWORD(v87) = ((unsigned int)v82 >> 3) & 1;
  if ( (v82 & 0x1E) != 0 )
    v20 = v85 | 1;
  v21 = v20;
  LODWORD(v90) = v11 | v20;
  if ( !v81 )
    goto LABEL_70;
  if ( v18 <= 60000 )
  {
    *((_DWORD *)v86 + 16) = 0;
LABEL_70:
    LOBYTE(v23) = v86[12];
    if ( (_BYTE)v23 )
      goto LABEL_80;
    if ( !v20 )
    {
      if ( v11 )
      {
        LOBYTE(v19) = 0;
        goto LABEL_80;
      }
      goto LABEL_78;
    }
    v19 = (unsigned __int8)v86[12];
LABEL_73:
    v33 = 0;
    v156[0] = 0;
    v86[12] = 1;
    v34 = (char *)get_all_created_runtime(v156);
    if ( v156[0] > 0 )
    {
      v35 = v34 - 4;
      do
      {
        v36 = *((_DWORD *)v35 + 1);
        v35 += 4;
        ++v33;
        v37 = (*(int (**)(void))(v36 + 12))();
        v38 = dev_ctrl(v37);
        (*(void (__fastcall **)(_DWORD))(v38 + 28))(*(_DWORD *)(*(_DWORD *)v35 + 196));
      }
      while ( v33 < v156[0] );
    }
    power_off();
    V_LOCK();
    V_BOOL((int)v123, "poweroff", 1);
    logfmt_raw(
      (char *)v156,
      0x1000u,
      0,
      v124,
      v123[0],
      v123[1],
      v123[2],
      v123[3],
      v123[4],
      v123[5],
      v123[6],
      v124,
      "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d",
      v93,
      v88,
      v85,
      (_DWORD)v87,
      v83,
      v19);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "task_check_miner_status",
      23,
      292,
      120,
      v156);
    if ( (_DWORD)v90 || v86[12] )
      goto LABEL_79;
LABEL_78:
    LOBYTE(v19) = v23;
    v86[11] = 0;
    goto LABEL_81;
  }
  v22 = *((_DWORD *)v86 + 16);
  *((_DWORD *)v86 + 16) = v22 + 1;
  if ( !(v22 % 60) )
  {
    V_LOCK();
    V_STR(&v146, "error", "net lost");
    v90 = 274877907LL * (int)v18;
    logfmt_raw(
      (char *)v156,
      0x1000u,
      0,
      v152,
      v146,
      v147,
      v148,
      v149,
      v150,
      v151,
      v152,
      "lost internet for %d seconds",
      (int)v18 / 1000);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "check_lost_connection_to_pool",
      29,
      146,
      100,
      v156);
  }
  if ( v18 <= 1200000 )
  {
    v19 = (unsigned __int8)v86[12];
    if ( v86[12] )
      goto LABEL_80;
    if ( !v21 )
    {
      LOBYTE(v19) = v81;
      goto LABEL_80;
    }
LABEL_59:
    LODWORD(v90) = v21;
    LOBYTE(v23) = v21;
    goto LABEL_73;
  }
  v23 = (unsigned __int8)v86[60];
  if ( !v86[60] )
  {
    V_LOCK();
    V_STR(v125, "error", "net lost");
    logfmt_raw(
      (char *)v156,
      0x1000u,
      v23,
      v126,
      v125[0],
      v125[1],
      v125[2],
      v125[3],
      v125[4],
      v125[5],
      v125[6],
      v126,
      "lost internet %d seconds > 20 minutes, poweroff.",
      (int)v18 / 1000);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "check_lost_connection_to_pool",
      29,
      156,
      120,
      v156);
    v19 = (unsigned __int8)v86[12];
    v86[60] = 1;
    if ( v19 )
      goto LABEL_80;
    LOBYTE(v23) = v81;
    v19 = 1;
    LODWORD(v90) = v81;
    goto LABEL_73;
  }
  v19 = (unsigned __int8)v86[12];
  if ( !v86[12] )
  {
    if ( v21 )
      goto LABEL_59;
LABEL_79:
    LOBYTE(v19) = v23;
  }
LABEL_80:
  v86[11] = 1;
LABEL_81:
  if ( v81 )
  {
    v39 = v86;
    if ( !v11 )
      LOBYTE(v11) = v86[12];
    v86[4] = (char)v93;
    v39[5] = v88;
    v39[8] = v85;
    v40 = v86;
    v41 = v87;
    v86[9] = v11;
    v40[6] = v41;
    v42 = (char)v83;
    v40[10] = v19;
    v40[7] = v42;
  }
  pthread_mutex_unlock(&stru_108940);
  v43 = (unsigned __int8)v86[11];
  byte_10643C ^= 1u;
  if ( v43 )
  {
    green_led_off();
    if ( byte_10643C )
      red_led_on();
    else
      red_led_off();
  }
  else
  {
    red_led_off();
    if ( byte_10643C )
      green_led_on();
    else
      green_led_off();
  }
  if ( (v82 & 0x1A) != 0 )
    return fan_pwm_set_max();
  else
    return set_pwm_by_temp();
}
