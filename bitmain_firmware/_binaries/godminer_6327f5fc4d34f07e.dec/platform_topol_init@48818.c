size_t platform_topol_init()
{
  double *file; // r0
  double *v1; // r10
  _DWORD *v2; // r0
  _DWORD *v3; // r9
  _DWORD *v4; // r0
  const char *v5; // r9
  void *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r9
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r9
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r8
  _DWORD *v15; // r0
  _DWORD *v16; // r8
  _DWORD *v17; // r0
  int v18; // r0
  int v19; // r2
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  int v24; // r0
  int v25; // r2
  _DWORD *v26; // r0
  _DWORD *v27; // r0
  int v28; // r9
  int v29; // r0
  size_t v30; // r9
  _DWORD *v31; // r0
  int v32; // r6
  int v33; // r0
  _DWORD *v34; // r0
  int v35; // r6
  int v36; // r0
  _DWORD *v37; // r0
  int v38; // r6
  int v39; // r0
  _DWORD *v40; // r0
  int v41; // r6
  int v42; // r0
  _DWORD *v43; // r0
  int v44; // r8
  int v45; // r0
  _DWORD *v46; // r0
  _DWORD *v47; // r8
  const char *v48; // r2
  _DWORD *v49; // r0
  int v50; // r8
  int v51; // r0
  _DWORD *v52; // r0
  int v53; // r8
  int v54; // r0
  size_t v55; // r0
  int v56; // r6
  void *v57; // r0
  _DWORD *v58; // r0
  int v59; // r6
  int v60; // r0
  _DWORD *v61; // r0
  int v62; // r6
  int v63; // r0
  _DWORD *v64; // r0
  int v65; // r6
  int v66; // r0
  _DWORD *v67; // r0
  int v68; // r6
  int v69; // r0
  int v70; // r3
  _DWORD *v71; // r0
  _DWORD *v72; // r0
  _DWORD *v73; // r11
  _DWORD *v74; // r0
  int v75; // r7
  int v76; // r0
  int v77; // r0
  int v78; // r9
  _DWORD *v79; // r9
  _DWORD *v80; // r0
  _DWORD *v81; // r7
  _DWORD *v82; // r0
  const char *v83; // r6
  int v84; // r3
  _DWORD *v85; // r0
  int v86; // r6
  int v87; // r0
  _DWORD *v88; // r0
  _DWORD *v89; // r6
  _DWORD *v90; // r0
  int v91; // r7
  char **v92; // r8
  const char *v93; // r0
  const char *v94; // r1
  const char *v95; // r10
  const char *v96; // t1
  int v97; // r6
  _DWORD *v98; // r0
  _DWORD *v99; // r8
  _DWORD *v100; // r0
  const char **v101; // r7
  const char *v102; // r0
  const char *v103; // r1
  const char *v104; // r8
  const char *v105; // t1
  int v106; // r0
  int v107; // r2
  int v108; // r0
  int v109; // r2
  _DWORD *v110; // r0
  _DWORD *v111; // r0
  int v112; // r8
  _DWORD *v113; // r0
  _DWORD *v114; // r0
  int v115; // r9
  char **v116; // r6
  int v117; // r4
  const char *v118; // r7
  const char *v119; // r1
  const char *v120; // t1
  int v121; // r2
  _DWORD *v122; // r0
  int v123; // r6
  int v124; // r0
  int v125; // r4
  int v126; // r5
  int v127; // r0
  int v128; // r3
  const void *v129; // r6
  int v130; // r4
  int v131; // r5
  void *v132; // r0
  unsigned int *v133; // r3
  unsigned int v134; // r2
  unsigned int v135; // r2
  int v136; // r0
  int v137; // r3
  _DWORD *v138; // r0
  _DWORD *v139; // r0
  _DWORD *v140; // r11
  _DWORD *v141; // r0
  int v142; // r7
  int v143; // r0
  int v144; // r0
  int v145; // r10
  _DWORD *v146; // r10
  _DWORD *v147; // r0
  _DWORD *v148; // r7
  _DWORD *v149; // r0
  const char *v150; // r6
  int v151; // r3
  _DWORD *v152; // r0
  int v153; // r6
  int v154; // r0
  _DWORD *v155; // r0
  _DWORD *v156; // r6
  _DWORD *v157; // r0
  int v158; // r7
  char **v159; // r8
  const char *v160; // r0
  const char *v161; // r1
  const char *v162; // r9
  const char *v163; // t1
  int v164; // r6
  _DWORD *v165; // r0
  _DWORD *v166; // r8
  _DWORD *v167; // r0
  const char **v168; // r7
  const char *v169; // r0
  const char *v170; // r1
  const char *v171; // r8
  const char *v172; // t1
  int v173; // r0
  int v174; // r0
  int v175; // r0
  size_t n; // [sp+10h] [bp-1124h]
  size_t na; // [sp+10h] [bp-1124h]
  _DWORD *v178; // [sp+14h] [bp-1120h]
  int v179; // [sp+14h] [bp-1120h]
  unsigned int v180; // [sp+18h] [bp-111Ch]
  _DWORD *v181; // [sp+18h] [bp-111Ch]
  unsigned int i; // [sp+18h] [bp-111Ch]
  _DWORD *v183; // [sp+1Ch] [bp-1118h]
  _DWORD *v184; // [sp+1Ch] [bp-1118h]
  double *v185; // [sp+1Ch] [bp-1118h]
  double *v186; // [sp+20h] [bp-1114h]
  _DWORD *v187; // [sp+20h] [bp-1114h]
  char v188[252]; // [sp+34h] [bp-1100h] BYREF
  char v189[4100]; // [sp+130h] [bp-1004h] BYREF

  file = json_load_file("/etc/topol.conf", 0, v188);
  v1 = file;
  if ( !file || *(_DWORD *)file )
  {
    V_LOCK();
    na = -1;
    logfmt_raw(v189, 0x1000u, 0, "load topol config file %s failed\n", "/etc/topol.conf");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "platform_topol_init",
      19,
      1487,
      20,
      v189);
    return na;
  }
  v2 = (_DWORD *)json_object_get(file, "machine");
  v3 = v2;
  if ( !v2 || *v2 != 2 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get machine failed\n");
    V_UNLOCK();
    v24 = g_zc;
    v25 = 138;
LABEL_26:
    zlog(
      v24,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_machine",
      14,
      v25,
      100,
      v189);
LABEL_27:
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "parse machine failed\n");
    V_UNLOCK();
    v18 = g_zc;
    v19 = 1494;
    goto LABEL_16;
  }
  V_LOCK();
  v4 = json_string_value(v3);
  logfmt_raw(v189, 0x1000u, 0, "load machine %s conf\n", v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_machine",
    14,
    141,
    20,
    v189);
  v5 = (const char *)json_string_value(v3);
  n = strlen(v5) + 1;
  v6 = calloc(n, 1u);
  dword_119754 = (int)v6;
  if ( !v6 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get machine failed, Cannot allocate space\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_machine",
      14,
      147,
      100,
      v189);
    goto LABEL_27;
  }
  memcpy(v6, v5, n);
  V_LOCK();
  logfmt_raw(v189, 0x1000u, 0, "machine : %s \n", dword_119754);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_machine",
    14,
    152,
    20,
    v189);
  v7 = (_DWORD *)json_object_get(v1, "hw_version");
  v8 = v7;
  if ( !v7 || *v7 != 2 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get hw_version failed\n");
    V_UNLOCK();
    v24 = g_zc;
    v25 = 157;
    goto LABEL_26;
  }
  V_LOCK();
  v9 = json_string_value(v8);
  logfmt_raw(v189, 0x1000u, 0, "hw_version: %s\n", v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_machine",
    14,
    160,
    20,
    v189);
  v10 = (_DWORD *)json_object_get(v1, "sw_version");
  v11 = v10;
  if ( !v10 || *v10 != 2 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get sw_version failed\n");
    V_UNLOCK();
    v24 = g_zc;
    v25 = 165;
    goto LABEL_26;
  }
  V_LOCK();
  v12 = json_string_value(v11);
  logfmt_raw(v189, 0x1000u, 0, "sw_version: %s\n", v12);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_machine",
    14,
    168,
    20,
    v189);
  v13 = (_DWORD *)json_object_get(v1, "processor");
  v14 = v13;
  if ( !v13 || *v13 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get processor failed\n");
    V_UNLOCK();
    v106 = g_zc;
    v107 = 180;
LABEL_94:
    zlog(
      v106,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_processor",
      16,
      v107,
      100,
      v189);
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "parse processor failed\n");
    V_UNLOCK();
    v18 = g_zc;
    v19 = 1501;
    goto LABEL_16;
  }
  V_LOCK();
  logfmt_raw(v189, 0x1000u, 0, "processor:\n");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_processor",
    16,
    183,
    20,
    v189);
  v15 = (_DWORD *)json_object_get(v14, "type");
  v16 = v15;
  if ( !v15 || *v15 != 2 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get type failed\n");
    V_UNLOCK();
    v106 = g_zc;
    v107 = 188;
    goto LABEL_94;
  }
  V_LOCK();
  v17 = json_string_value(v16);
  logfmt_raw(v189, 0x1000u, 0, "type: %s\n", v17);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_processor",
    16,
    191,
    20,
    v189);
  if ( sub_45E48(v1) )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "parse power failed\n");
    V_UNLOCK();
    v18 = g_zc;
    v19 = 1508;
    goto LABEL_16;
  }
  if ( sub_46544(v1) )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "parse fan failed\n");
    V_UNLOCK();
    v18 = g_zc;
    v19 = 1515;
    goto LABEL_16;
  }
  v26 = (_DWORD *)json_object_get(v1, "chain");
  v178 = v26;
  if ( !v26 || *v26 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get chain failed\n");
    V_UNLOCK();
    v108 = g_zc;
    v109 = 907;
    goto LABEL_96;
  }
  V_LOCK();
  logfmt_raw(v189, 0x1000u, 0, "chain:\n");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    910,
    20,
    v189);
  v27 = (_DWORD *)json_object_get(v178, "chain_num");
  v28 = (int)v27;
  if ( !v27 || *v27 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get chain_num failed\n");
    V_UNLOCK();
    v108 = g_zc;
    v109 = 915;
    goto LABEL_96;
  }
  V_LOCK();
  v29 = json_integer_value(v28);
  logfmt_raw(v189, 0x1000u, 0, "chain_num : %d\n", v29);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    918,
    20,
    v189);
  v30 = json_integer_value(v28);
  dword_119758 = v30;
  V_LOCK();
  logfmt_raw(v189, 0x1000u, 0, "chain_num %d\n", v30);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_alloc_chain",
    12,
    80,
    20,
    v189);
  dword_119778 = (int)calloc(v30, 0x78u);
  if ( !dword_119778 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "malloc %d chain_t failed\n", v30);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_alloc_chain",
      12,
      85,
      100,
      v189);
    goto LABEL_97;
  }
  v31 = (_DWORD *)json_object_get(v178, "chain_row");
  v32 = (int)v31;
  if ( !v31 || *v31 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get chain_row failed\n");
    V_UNLOCK();
    v108 = g_zc;
    v109 = 926;
LABEL_96:
    zlog(
      v108,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain",
      12,
      v109,
      100,
      v189);
LABEL_97:
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "parse chain failed\n");
    V_UNLOCK();
    v18 = g_zc;
    v19 = 1523;
LABEL_16:
    zlog(
      v18,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "platform_topol_init",
      19,
      v19,
      20,
      v189);
    if ( *((_DWORD *)v1 + 1) != -1 )
    {
      v20 = (unsigned int *)v1 + 1;
      __dmb(0xBu);
      do
      {
        v21 = __ldrex(v20);
        v22 = v21 - 1;
      }
      while ( __strex(v22, v20) );
      if ( !v22 )
        json_delete(v1);
    }
    return 34;
  }
  V_LOCK();
  v33 = json_integer_value(v32);
  logfmt_raw(v189, 0x1000u, 0, "chain_row: %d\n", v33);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    929,
    20,
    v189);
  dword_11975C = json_integer_value(v32);
  v34 = (_DWORD *)json_object_get(v178, "chain_column");
  v35 = (int)v34;
  if ( !v34 || *v34 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get chain_column failed\n");
    V_UNLOCK();
    v108 = g_zc;
    v109 = 935;
    goto LABEL_96;
  }
  V_LOCK();
  v36 = json_integer_value(v35);
  logfmt_raw(v189, 0x1000u, 0, "chain_column: %d\n", v36);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    938,
    20,
    v189);
  dword_119760 = json_integer_value(v35);
  v37 = (_DWORD *)json_object_get(v178, "chain_domain_num");
  v38 = (int)v37;
  if ( !v37 || *v37 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get chain_domain_num failed\n");
    V_UNLOCK();
    v108 = g_zc;
    v109 = 944;
    goto LABEL_96;
  }
  V_LOCK();
  v39 = json_integer_value(v38);
  logfmt_raw(v189, 0x1000u, 0, "chain_domain_num : %d\n", v39);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    947,
    20,
    v189);
  dword_119764 = json_integer_value(v38);
  v40 = (_DWORD *)json_object_get(v178, "chain_asic_num");
  v41 = (int)v40;
  if ( !v40 || *v40 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get chain_asic_num failed\n");
    V_UNLOCK();
    v108 = g_zc;
    v109 = 953;
    goto LABEL_96;
  }
  V_LOCK();
  v42 = json_integer_value(v41);
  logfmt_raw(v189, 0x1000u, 0, "chain_asic_num : %d\n", v42);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    956,
    20,
    v189);
  dword_119768 = json_integer_value(v41);
  v43 = (_DWORD *)json_object_get(v178, "domain_asic_num");
  v44 = (int)v43;
  if ( !v43 || *v43 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get domain_asic_num failed\n");
    V_UNLOCK();
    v108 = g_zc;
    v109 = 962;
    goto LABEL_96;
  }
  V_LOCK();
  v45 = json_integer_value(v44);
  logfmt_raw(v189, 0x1000u, 0, "domain_asic_num : %d\n", v45);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    965,
    20,
    v189);
  dword_11976C = json_integer_value(v44);
  v46 = (_DWORD *)json_object_get(v178, "pic_mcu_en");
  v47 = v46;
  if ( !v46 || (unsigned int)(*v46 - 5) > 1 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get pic_mcu_en failed!\n");
    V_UNLOCK();
    v136 = 971;
LABEL_132:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain",
      12,
      v136,
      100,
      v189);
    goto LABEL_97;
  }
  V_LOCK();
  v48 = "false";
  if ( *v47 == 5 )
    v48 = "true";
  logfmt_raw(v189, 0x1000u, 0, "pic_mcu_en: %s\n", v48);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    974,
    20,
    v189);
  byte_119770 = *v47 == 5;
  v49 = (_DWORD *)json_object_get(v178, "sensor_mode");
  v50 = (int)v49;
  if ( !v49 || *v49 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get sensor_mode failed\n");
    V_UNLOCK();
    v136 = 980;
    goto LABEL_132;
  }
  V_LOCK();
  v51 = json_integer_value(v50);
  logfmt_raw(v189, 0x1000u, 0, "sensor mode : %d\n", v51);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    983,
    20,
    v189);
  *(_DWORD *)(dword_119778 + 88) = json_integer_value(v50);
  v52 = (_DWORD *)json_object_get(v178, "sensor_num");
  v53 = (int)v52;
  if ( !v52 || *v52 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get sensor num failed\n");
    V_UNLOCK();
    v136 = 989;
    goto LABEL_132;
  }
  V_LOCK();
  v54 = json_integer_value(v53);
  logfmt_raw(v189, 0x1000u, 0, "sensor num : %d\n", v54);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    992,
    20,
    v189);
  v55 = json_integer_value(v53);
  v56 = dword_119778;
  *(_DWORD *)(dword_119778 + 92) = v55;
  v57 = calloc(v55, 0x18u);
  *(_DWORD *)(v56 + 84) = v57;
  if ( !v57 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "calloc sensor failed!\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_alloc_sensor",
      13,
      96,
      100,
      v189);
    goto LABEL_97;
  }
  v58 = (_DWORD *)json_object_get(v178, "max_chip_temp");
  v59 = (int)v58;
  if ( !v58 || *v58 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get max_chip_temp failed\n");
    V_UNLOCK();
    v136 = 1000;
    goto LABEL_132;
  }
  V_LOCK();
  v60 = json_integer_value(v59);
  logfmt_raw(v189, 0x1000u, 0, "max_chip_temp : %d\n", v60);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    1003,
    20,
    v189);
  *(_DWORD *)(dword_119778 + 96) = json_integer_value(v59);
  v61 = (_DWORD *)json_object_get(v178, "max_pcb_temp");
  v62 = (int)v61;
  if ( !v61 || *v61 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get max_pcb_temp failed\n");
    V_UNLOCK();
    v136 = 1009;
    goto LABEL_132;
  }
  V_LOCK();
  v63 = json_integer_value(v62);
  logfmt_raw(v189, 0x1000u, 0, "max_pcb_temp : %d\n", v63);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    1012,
    20,
    v189);
  *(_DWORD *)(dword_119778 + 100) = json_integer_value(v62);
  v64 = (_DWORD *)json_object_get(v178, "min_pcb_temp");
  v65 = (int)v64;
  if ( !v64 || *v64 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get min_pcb_temp failed\n");
    V_UNLOCK();
    v136 = 1018;
    goto LABEL_132;
  }
  V_LOCK();
  v66 = json_integer_value(v65);
  logfmt_raw(v189, 0x1000u, 0, "min_pcb_temp : %d\n", v66);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    1021,
    20,
    v189);
  *(_DWORD *)(dword_119778 + 104) = json_integer_value(v65);
  v67 = (_DWORD *)json_object_get(v178, "max_uneffective_count");
  v68 = (int)v67;
  if ( !v67 || *v67 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get max_uneffective_count failed\n");
    V_UNLOCK();
    v136 = 1027;
    goto LABEL_132;
  }
  V_LOCK();
  v69 = json_integer_value(v68);
  logfmt_raw(v189, 0x1000u, 0, "max_uneffective_count : %d\n", v69);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    1030,
    20,
    v189);
  *(_DWORD *)(dword_119778 + 108) = json_integer_value(v68);
  na = sub_473E4(v178);
  if ( na )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "parse asic failed\n");
    V_UNLOCK();
    v137 = 1036;
    goto LABEL_137;
  }
  if ( byte_119770 && sub_47BB4(v178) )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "parse chain pic failed\n");
    V_UNLOCK();
    v137 = 1044;
LABEL_137:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain",
      12,
      v137,
      100,
      v189);
    goto LABEL_97;
  }
  v70 = *(_DWORD *)(dword_119778 + 88);
  if ( v70 == 3 )
  {
    v138 = (_DWORD *)json_object_get(v178, "ctrlboard_sensor");
    v187 = v138;
    if ( !v138 || *v138 != 1 )
    {
      V_LOCK();
      logfmt_raw(v189, 0x1000u, 0, "get ctrlboard_sensor sensor failed\n");
      V_UNLOCK();
      v175 = 639;
LABEL_181:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        v175,
        100,
        v189);
      V_LOCK();
      logfmt_raw(v189, 0x1000u, 0, "parse chain ctrlboard failed\n");
      V_UNLOCK();
      v136 = 1053;
      goto LABEL_132;
    }
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "ctrlboard_sensor:\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_ctrlboard_sensor",
      29,
      642,
      20,
      v189);
    v185 = v1;
    for ( i = 0; i < (unsigned int)json_array_size(v187); ++i )
    {
      v139 = json_array_get(v187, i);
      v140 = v139;
      if ( !v139 || *v139 )
      {
        v1 = v185;
        V_LOCK();
        logfmt_raw(v189, 0x1000u, 0, "get array %d failed\n", i);
        V_UNLOCK();
        v175 = 649;
        goto LABEL_181;
      }
      v141 = (_DWORD *)json_object_get(v139, "index");
      v142 = (int)v141;
      if ( !v141 || *v141 != 3 )
      {
        v1 = v185;
        V_LOCK();
        logfmt_raw(v189, 0x1000u, 0, "get array %d index failed\n", i);
        V_UNLOCK();
        v175 = 656;
        goto LABEL_181;
      }
      V_LOCK();
      v143 = json_integer_value(v142);
      logfmt_raw(v189, 0x1000u, 0, "index: %d\n", v143);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        659,
        20,
        v189);
      v144 = json_integer_value(v142);
      v145 = *(_DWORD *)(dword_119778 + 84);
      *(_DWORD *)(v145 + 24 * v144) = v144;
      v146 = (_DWORD *)(v145 + 24 * v144);
      v146[2] = 2;
      v147 = (_DWORD *)json_object_get(v140, "type");
      v148 = v147;
      if ( !v147 || *v147 != 2 )
      {
        v1 = v185;
        V_LOCK();
        logfmt_raw(v189, 0x1000u, 0, "get array %d type failed\n", i);
        V_UNLOCK();
        v175 = 668;
        goto LABEL_181;
      }
      V_LOCK();
      v149 = json_string_value(v148);
      logfmt_raw(v189, 0x1000u, 0, "type: %s\n", v149);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        671,
        20,
        v189);
      v150 = (const char *)json_string_value(v148);
      v151 = strcmp(v150, "TMP451");
      if ( v151 )
      {
        if ( !strcmp(v150, "LM75A") )
          v151 = 1;
        else
          v151 = 2;
      }
      v146[1] = v151;
      v152 = (_DWORD *)json_object_get(v140, "iic");
      v153 = (int)v152;
      if ( !v152 || *v152 != 3 )
      {
        v1 = v185;
        V_LOCK();
        logfmt_raw(v189, 0x1000u, 0, "get array %d bind_asic failed\n", i);
        V_UNLOCK();
        v175 = 677;
        goto LABEL_181;
      }
      V_LOCK();
      v154 = json_integer_value(v153);
      logfmt_raw(v189, 0x1000u, 0, "iic: %d\n", v154);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        680,
        20,
        v189);
      v146[5] = json_integer_value(v153);
      v155 = (_DWORD *)json_object_get(v140, "x");
      v156 = v155;
      if ( !v155 || *v155 != 2 )
      {
        v1 = v185;
        V_LOCK();
        logfmt_raw(v189, 0x1000u, 0, "get array %d x failed\n", i);
        V_UNLOCK();
        v175 = 686;
        goto LABEL_181;
      }
      V_LOCK();
      v157 = json_string_value(v156);
      logfmt_raw(v189, 0x1000u, 0, "x: %s\n", v157);
      V_UNLOCK();
      v158 = 0;
      v159 = off_E4E38;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        689,
        20,
        v189);
      v160 = (const char *)json_string_value(v156);
      v161 = "air_in";
      v162 = v160;
      while ( strcmp(v162, v161) )
      {
        v163 = *v159++;
        v161 = v163;
        ++v158;
      }
      v164 = 0;
      v146[3] = v158;
      v165 = (_DWORD *)json_object_get(v140, "y");
      v166 = v165;
      if ( !v165 || *v165 != 2 )
      {
        v1 = v185;
        V_LOCK();
        logfmt_raw(v189, 0x1000u, 0, "get array %d y failed\n", i);
        V_UNLOCK();
        v175 = 695;
        goto LABEL_181;
      }
      V_LOCK();
      v167 = json_string_value(v166);
      logfmt_raw(v189, 0x1000u, 0, "y: %s\n", v167);
      V_UNLOCK();
      v168 = (const char **)&unk_E4E58;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        698,
        20,
        v189);
      v169 = (const char *)json_string_value(v166);
      v170 = "top";
      v171 = v169;
      while ( strcmp(v171, v170) )
      {
        v172 = *v168++;
        v170 = v172;
        ++v164;
      }
      v146[4] = v164;
    }
    v1 = v185;
    v70 = *(_DWORD *)(dword_119778 + 88);
  }
  if ( (v70 & 0xFFFFFFFD) == 0 )
  {
    v71 = (_DWORD *)json_object_get(v178, "asic_sensor");
    v183 = v71;
    if ( v71 && *v71 == 1 )
    {
      V_LOCK();
      v180 = 0;
      logfmt_raw(v189, 0x1000u, 0, "asic_sensor:\n");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_sensor",
        19,
        801,
        20,
        v189);
      v186 = v1;
      while ( 1 )
      {
        if ( v180 >= (unsigned int)json_array_size(v183) )
        {
          v1 = v186;
          goto LABEL_103;
        }
        v72 = json_array_get(v183, v180);
        v73 = v72;
        if ( !v72 || *v72 )
          break;
        v74 = (_DWORD *)json_object_get(v72, "index");
        v75 = (int)v74;
        if ( !v74 || *v74 != 3 )
        {
          v1 = v186;
          V_LOCK();
          logfmt_raw(v189, 0x1000u, 0, "get array %d index failed\n", v180);
          V_UNLOCK();
          v173 = 816;
          goto LABEL_168;
        }
        V_LOCK();
        v76 = json_integer_value(v75);
        logfmt_raw(v189, 0x1000u, 0, "index: %d\n", v76);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_sensor",
          19,
          819,
          20,
          v189);
        v77 = json_integer_value(v75);
        v78 = *(_DWORD *)(dword_119778 + 84);
        *(_DWORD *)(v78 + 24 * v77) = v77;
        v79 = (_DWORD *)(v78 + 24 * v77);
        v79[2] = 1;
        v80 = (_DWORD *)json_object_get(v73, "type");
        v81 = v80;
        if ( !v80 || *v80 != 2 )
        {
          v1 = v186;
          V_LOCK();
          logfmt_raw(v189, 0x1000u, 0, "get array %d type failed\n", v180);
          V_UNLOCK();
          v173 = 828;
          goto LABEL_168;
        }
        V_LOCK();
        v82 = json_string_value(v81);
        logfmt_raw(v189, 0x1000u, 0, "type: %s\n", v82);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_sensor",
          19,
          831,
          20,
          v189);
        v83 = (const char *)json_string_value(v81);
        v84 = strcmp(v83, "TMP451");
        if ( v84 )
        {
          if ( !strcmp(v83, "LM75A") )
            v84 = 1;
          else
            v84 = 2;
        }
        v79[1] = v84;
        v85 = (_DWORD *)json_object_get(v73, "bind_asic");
        v86 = (int)v85;
        if ( !v85 || *v85 != 3 )
        {
          v1 = v186;
          V_LOCK();
          logfmt_raw(v189, 0x1000u, 0, "get array %d bind_asic failed\n", v180);
          V_UNLOCK();
          v173 = 837;
          goto LABEL_168;
        }
        V_LOCK();
        v87 = json_integer_value(v86);
        logfmt_raw(v189, 0x1000u, 0, "bind_asic: %d\n", v87);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_sensor",
          19,
          840,
          20,
          v189);
        v79[5] = json_integer_value(v86);
        v88 = (_DWORD *)json_object_get(v73, "x");
        v89 = v88;
        if ( !v88 || *v88 != 2 )
        {
          v1 = v186;
          V_LOCK();
          logfmt_raw(v189, 0x1000u, 0, "get array %d x failed\n", v180);
          V_UNLOCK();
          v173 = 846;
          goto LABEL_168;
        }
        V_LOCK();
        v90 = json_string_value(v89);
        logfmt_raw(v189, 0x1000u, 0, "x: %s\n", v90);
        V_UNLOCK();
        v91 = 0;
        v92 = off_E4E38;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_sensor",
          19,
          849,
          20,
          v189);
        v93 = (const char *)json_string_value(v89);
        v94 = "air_in";
        v95 = v93;
        while ( strcmp(v95, v94) )
        {
          v96 = *v92++;
          v94 = v96;
          ++v91;
        }
        v97 = 0;
        v79[3] = v91;
        v98 = (_DWORD *)json_object_get(v73, "y");
        v99 = v98;
        if ( !v98 || *v98 != 2 )
        {
          v1 = v186;
          V_LOCK();
          logfmt_raw(v189, 0x1000u, 0, "get array %d y failed\n", v180);
          V_UNLOCK();
          v173 = 855;
          goto LABEL_168;
        }
        V_LOCK();
        v100 = json_string_value(v99);
        logfmt_raw(v189, 0x1000u, 0, "y: %s\n", v100);
        V_UNLOCK();
        v101 = (const char **)&unk_E4E58;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_sensor",
          19,
          858,
          20,
          v189);
        v102 = (const char *)json_string_value(v99);
        v103 = "top";
        v104 = v102;
        while ( strcmp(v104, v103) )
        {
          v105 = *v101++;
          v103 = v105;
          ++v97;
        }
        v79[4] = v97;
        ++v180;
      }
      v1 = v186;
      V_LOCK();
      logfmt_raw(v189, 0x1000u, 0, "get array %d failed\n", v180);
      V_UNLOCK();
      v173 = 809;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v189, 0x1000u, 0, "get sensor failed\n");
      V_UNLOCK();
      v173 = 798;
    }
LABEL_168:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_sensor",
      19,
      v173,
      100,
      v189);
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "parse chain sensor failed\n");
    V_UNLOCK();
    v136 = 1063;
    goto LABEL_132;
  }
LABEL_103:
  v110 = v178;
  v179 = dword_119758;
  v111 = (_DWORD *)json_object_get(v110, "eeprom");
  v181 = v111;
  if ( !v111 || (v112 = *v111) != 0 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get eeprom failed\n");
    V_UNLOCK();
    v174 = 759;
    goto LABEL_175;
  }
  V_LOCK();
  logfmt_raw(v189, 0x1000u, 0, "eeprom:\n");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_eeprom",
    19,
    762,
    20,
    v189);
  v113 = (_DWORD *)json_object_get(v181, "type");
  v184 = v113;
  if ( !v113 || *v113 != 2 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get type failed\n");
    V_UNLOCK();
    v174 = 767;
    goto LABEL_175;
  }
  V_LOCK();
  v114 = json_string_value(v184);
  logfmt_raw(v189, 0x1000u, 0, "type: %s\n", v114);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_eeprom",
    19,
    770,
    20,
    v189);
  if ( v179 > 0 )
  {
    v115 = 0;
    do
    {
      v116 = off_E4F24;
      v117 = 0;
      v118 = (const char *)json_string_value(v184);
      v119 = "AT24C02D";
      while ( strcmp(v118, v119) )
      {
        v120 = v116[1];
        ++v116;
        v119 = v120;
        ++v117;
      }
      ++v112;
      v121 = dword_119778 + v115;
      v115 += 120;
      *(_DWORD *)(v121 + 112) = v117;
    }
    while ( v179 != v112 );
  }
  v122 = (_DWORD *)json_object_get(v181, "i2c_addr");
  v123 = (int)v122;
  if ( !v122 || *v122 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "get i2c_addr failed\n");
    V_UNLOCK();
    v174 = 779;
LABEL_175:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_eeprom",
      19,
      v174,
      100,
      v189);
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "parse chain eeprom failed\n");
    V_UNLOCK();
    v136 = 1071;
    goto LABEL_132;
  }
  V_LOCK();
  v124 = json_integer_value(v123);
  logfmt_raw(v189, 0x1000u, 0, "i2c_addr: %d\n", v124);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_eeprom",
    19,
    782,
    20,
    v189);
  if ( v179 > 0 )
  {
    v125 = 0;
    v126 = 0;
    do
    {
      ++v125;
      v127 = json_integer_value(v123);
      v128 = dword_119778 + v126;
      v126 += 120;
      *(_DWORD *)(v128 + 116) = v127;
    }
    while ( v179 != v125 );
  }
  if ( dword_119758 > 1 )
  {
    v129 = (const void *)dword_119778;
    v130 = dword_119778 + 120;
    v131 = dword_119778 + 120 * dword_119758;
    do
    {
      v132 = (void *)v130;
      v130 += 120;
      memcpy(v132, v129, 0x78u);
    }
    while ( v130 != v131 );
  }
  if ( *((_DWORD *)v1 + 1) != -1 )
  {
    v133 = (unsigned int *)v1 + 1;
    __dmb(0xBu);
    do
    {
      v134 = __ldrex(v133);
      v135 = v134 - 1;
    }
    while ( __strex(v135, v133) );
    if ( !v135 )
      json_delete(v1);
  }
  return na;
}
