int platform_topol_init()
{
  char *v0; // r0
  double *file; // r0
  double *v2; // r11
  _DWORD *v3; // r0
  _DWORD *v4; // r9
  _DWORD *v5; // r0
  int v6; // r3
  int v7; // r1
  const char *v8; // r9
  size_t v9; // r0
  char *v10; // r0
  int v11; // r1
  char *v12; // r1
  _DWORD *v13; // r0
  _DWORD *v14; // r9
  _DWORD *v15; // r0
  int v16; // r3
  int v17; // r1
  char *v18; // r1
  _DWORD *v19; // r0
  _DWORD *v20; // r9
  _DWORD *v21; // r0
  int v22; // r3
  int v23; // r1
  char *v24; // r1
  _DWORD *v25; // r0
  _DWORD *v26; // r8
  int v27; // r3
  int v28; // r1
  char *v29; // r1
  _DWORD *v30; // r0
  _DWORD *v31; // r8
  _DWORD *v32; // r0
  int v33; // r3
  int v34; // r1
  int v35; // r3
  int v36; // r0
  int v37; // r2
  int v38; // r1
  unsigned int *v39; // r3
  unsigned int v40; // r2
  unsigned int v41; // r2
  int v43; // r3
  int v44; // r3
  int v45; // r0
  int v46; // r2
  int v47; // r1
  int v48; // r3
  int v49; // r3
  int v50; // r3
  char *v51; // r1
  _DWORD *v52; // r0
  int v53; // r3
  int v54; // r1
  char *v55; // r1
  _DWORD *v56; // r0
  int v57; // r9
  int v58; // r0
  int v59; // r3
  int v60; // r1
  size_t v61; // r9
  int v62; // r3
  int v63; // r1
  char *v64; // r1
  _DWORD *v65; // r0
  int v66; // r6
  int v67; // r0
  int v68; // r3
  int v69; // r1
  int v70; // r0
  char *v71; // r1
  _DWORD *v72; // r0
  int v73; // r6
  int v74; // r0
  int v75; // r3
  int v76; // r1
  int v77; // r0
  char *v78; // r1
  _DWORD *v79; // r0
  int v80; // r6
  int v81; // r0
  int v82; // r3
  int v83; // r1
  int v84; // r0
  char *v85; // r1
  _DWORD *v86; // r0
  int v87; // r6
  int v88; // r0
  int v89; // r3
  int v90; // r1
  int v91; // r0
  char *v92; // r1
  _DWORD *v93; // r0
  int v94; // r8
  int v95; // r0
  int v96; // r3
  int v97; // r1
  int v98; // r0
  char *v99; // r1
  _DWORD *v100; // r0
  _DWORD *v101; // r8
  char *v102; // r2
  int v103; // r3
  int v104; // r1
  _DWORD *v105; // r0
  int v106; // r8
  int v107; // r0
  int v108; // r3
  int v109; // r1
  _DWORD *v110; // r0
  int v111; // r8
  int v112; // r0
  int v113; // r3
  int v114; // r1
  size_t v115; // r0
  int v116; // r6
  void *v117; // r0
  char *v118; // r1
  _DWORD *v119; // r0
  int v120; // r6
  int v121; // r0
  int v122; // r3
  int v123; // r1
  _DWORD *v124; // r0
  int v125; // r6
  int v126; // r0
  int v127; // r3
  int v128; // r1
  _DWORD *v129; // r0
  int v130; // r6
  int v131; // r0
  int v132; // r3
  int v133; // r1
  _DWORD *v134; // r0
  int v135; // r6
  int v136; // r0
  int v137; // r3
  int v138; // r1
  int v139; // r3
  char *v140; // r1
  _DWORD *v141; // r0
  int v142; // r3
  int v143; // r1
  char *v144; // r12
  _DWORD *v145; // r0
  _DWORD *v146; // r10
  int v147; // r6
  _DWORD *v148; // r0
  int v149; // r7
  int v150; // r0
  int v151; // r3
  int v152; // r1
  int v153; // r0
  int v154; // r9
  _DWORD *v155; // r9
  _DWORD *v156; // r0
  _DWORD *v157; // r7
  _DWORD *v158; // r0
  int v159; // r3
  int v160; // r1
  const char *v161; // r0
  const char *v162; // r1
  const char *v163; // r7
  char *v164; // r1
  _DWORD *v165; // r0
  int v166; // r6
  int v167; // r0
  int v168; // r3
  int v169; // r1
  int v170; // r0
  char *v171; // r1
  _DWORD *v172; // r0
  _DWORD *v173; // r6
  _DWORD *v174; // r0
  int v175; // r3
  int v176; // r1
  int v177; // r7
  char **v178; // r8
  const char *v179; // r0
  const char *v180; // r11
  const char *v181; // r1
  const char *v182; // t1
  char *v183; // r1
  int v184; // r6
  _DWORD *v185; // r0
  _DWORD *v186; // r7
  _DWORD *v187; // r0
  int v188; // r3
  int v189; // r1
  _DWORD *v190; // r0
  char **v191; // r7
  const char *v192; // r0
  const char *v193; // r8
  const char *v194; // r1
  const char *v195; // t1
  int v196; // r3
  int v197; // r0
  int v198; // r2
  int v199; // r1
  int v200; // r3
  int v201; // r3
  int v202; // r0
  int v203; // r2
  int v204; // r1
  int v205; // r3
  int v206; // r2
  int v207; // r3
  int v208; // r1
  int v209; // r3
  int v210; // r3
  int v211; // r1
  int v212; // r3
  int v213; // r3
  char *v214; // r1
  _DWORD *v215; // r0
  _DWORD *v216; // r0
  int v217; // r8
  int v218; // r3
  int v219; // r1
  char *v220; // r1
  _DWORD *v221; // r0
  _DWORD *v222; // r0
  int v223; // r3
  int v224; // r1
  const char *v225; // r3
  int v226; // r9
  const char *v227; // r11
  char **v228; // r6
  int v229; // r4
  const char *v230; // r7
  const char *v231; // r1
  const char *v232; // t1
  int v233; // r2
  char *v234; // r1
  _DWORD *v235; // r0
  int v236; // r6
  int v237; // r0
  int v238; // r3
  int v239; // r1
  int v240; // r4
  int v241; // r5
  int v242; // r0
  int v243; // r3
  int v244; // r6
  int v245; // r5
  int v246; // r4
  void *v247; // r0
  unsigned int *v248; // r3
  unsigned int v249; // r2
  unsigned int v250; // r2
  int v251; // r3
  int v252; // r3
  int v253; // r3
  int v254; // r3
  int v255; // r3
  int v256; // r0
  int v257; // r1
  int v258; // r3
  int v259; // r3
  int v260; // r3
  int v261; // r3
  int v262; // r1
  char *v263; // r1
  _DWORD *v264; // r0
  int v265; // r3
  int v266; // r1
  char *v267; // r12
  _DWORD *v268; // r0
  _DWORD *v269; // r11
  int v270; // r6
  _DWORD *v271; // r0
  int v272; // r7
  int v273; // r0
  int v274; // r3
  int v275; // r1
  int v276; // r0
  int v277; // r10
  _DWORD *v278; // r10
  _DWORD *v279; // r0
  _DWORD *v280; // r7
  _DWORD *v281; // r0
  int v282; // r3
  int v283; // r1
  const char *v284; // r0
  const char *v285; // r1
  const char *v286; // r7
  char *v287; // r1
  _DWORD *v288; // r0
  int v289; // r6
  int v290; // r0
  int v291; // r3
  int v292; // r1
  int v293; // r0
  char *v294; // r1
  _DWORD *v295; // r0
  _DWORD *v296; // r6
  _DWORD *v297; // r0
  int v298; // r3
  int v299; // r1
  int v300; // r7
  char **v301; // r8
  const char *v302; // r0
  const char *v303; // r9
  const char *v304; // r1
  const char *v305; // t1
  char *v306; // r1
  int v307; // r6
  _DWORD *v308; // r0
  _DWORD *v309; // r7
  _DWORD *v310; // r0
  int v311; // r3
  int v312; // r1
  _DWORD *v313; // r0
  char **v314; // r7
  const char *v315; // r0
  const char *v316; // r8
  const char *v317; // r1
  const char *v318; // t1
  int v319; // r3
  int v320; // r3
  int v321; // r3
  int v322; // r1
  int v323; // r2
  int v324; // r3
  int v325; // r1
  int v326; // r3
  int v327; // r3
  int v328; // r3
  int v329; // r0
  int v330; // r3
  int v331; // r3
  int v332; // r3
  int v333; // r0
  int v334; // r3
  int v335; // r3
  int v336; // r3
  int v337; // r3
  int v338; // r3
  int v339; // r3
  int v340; // r3
  int v341; // r3
  int v342; // r3
  int v343; // r0
  int v344; // r3
  int v345; // r3
  int v346; // r3
  int v347; // r3
  int v348; // r3
  int v349; // r3
  int v350; // r1
  int v351; // r3
  int v352; // r3
  int v353; // [sp+14h] [bp-1120h]
  _DWORD *v354; // [sp+18h] [bp-111Ch]
  int v355; // [sp+18h] [bp-111Ch]
  unsigned int v356; // [sp+1Ch] [bp-1118h]
  _DWORD *v357; // [sp+1Ch] [bp-1118h]
  unsigned int i; // [sp+1Ch] [bp-1118h]
  _DWORD *v359; // [sp+20h] [bp-1114h]
  _DWORD *v360; // [sp+20h] [bp-1114h]
  double *v361; // [sp+20h] [bp-1114h]
  double *v362; // [sp+24h] [bp-1110h]
  double *v363; // [sp+24h] [bp-1110h]
  _DWORD *v364; // [sp+24h] [bp-1110h]
  char *v365; // [sp+28h] [bp-110Ch]
  char *v366; // [sp+2Ch] [bp-1108h]
  char v367[252]; // [sp+34h] [bp-1100h] BYREF
  char v368[4100]; // [sp+130h] [bp-1004h] BYREF

  LOWORD(v0) = -26356;
  HIWORD(v0) = (unsigned int)"chain_num : %d" >> 16;
  file = json_load_file(v0, 0, v367);
  v2 = file;
  if ( !file || *(_DWORD *)file )
  {
    V_LOCK();
    LOWORD(v206) = -26356;
    HIWORD(v206) = (unsigned int)"chain_num : %d" >> 16;
    LOWORD(v207) = -26340;
    HIWORD(v207) = (unsigned int)"chain_num %d" >> 16;
    v353 = -1;
    logfmt_raw(v368, 0x1000u, 0, v207, v206);
    V_UNLOCK();
    LOWORD(v208) = -28848;
    HIWORD(v208) = (unsigned int)"oltage: %d" >> 16;
    zlog(g_zc, v208, 149, "platform_topol_init", 19, 1489, 20, v368);
    return v353;
  }
  v3 = (_DWORD *)json_object_get(file, "machine");
  v4 = v3;
  if ( !v3 || *v3 != 2 )
  {
    V_LOCK();
    LOWORD(v44) = -26296;
    HIWORD(v44) = (unsigned int)"chain_row" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v44);
    V_UNLOCK();
    v45 = g_zc;
    v46 = 140;
LABEL_26:
    LOWORD(v47) = -28848;
    HIWORD(v47) = (unsigned int)"oltage: %d" >> 16;
    zlog(v45, v47, 149, "_parse_machine", 14, v46, 100, v368);
LABEL_27:
    V_LOCK();
    LOWORD(v48) = -26076;
    HIWORD(v48) = (unsigned int)"ailed" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v48);
    V_UNLOCK();
    v36 = g_zc;
    v37 = 1496;
    goto LABEL_16;
  }
  V_LOCK();
  v5 = json_string_value(v4);
  LOWORD(v6) = -26276;
  HIWORD(v6) = (unsigned int)"n_row failed" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v6, v5);
  V_UNLOCK();
  LOWORD(v7) = -28848;
  HIWORD(v7) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v7, 149, "_parse_machine", 14, 143, 20, v368);
  v8 = (const char *)json_string_value(v4);
  v9 = strlen(v8);
  v10 = (char *)calloc(v9 + 1, 1u);
  topol_machine = (int)v10;
  if ( !v10 )
  {
    V_LOCK();
    LOWORD(v210) = -26252;
    HIWORD(v210) = (unsigned int)"w: %d" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v210);
    V_UNLOCK();
    LOWORD(v211) = -28848;
    HIWORD(v211) = (unsigned int)"oltage: %d" >> 16;
    zlog(g_zc, v211, 149, "_parse_machine", 14, 149, 100, v368);
    goto LABEL_27;
  }
  strcpy(v10, v8);
  V_LOCK();
  logfmt_raw(v368, 0x1000u, 0, "machine : %s ", topol_machine);
  V_UNLOCK();
  LOWORD(v11) = -28848;
  HIWORD(v11) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v11, 149, "_parse_machine", 14, 154, 20, v368);
  LOWORD(v12) = -26192;
  HIWORD(v12) = (unsigned int)": %d" >> 16;
  v13 = (_DWORD *)json_object_get(v2, v12);
  v14 = v13;
  if ( !v13 || *v13 != 2 )
  {
    V_LOCK();
    LOWORD(v49) = -26180;
    HIWORD(v49) = (unsigned int)"n_domain_num" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v49);
    V_UNLOCK();
    v45 = g_zc;
    v46 = 159;
    goto LABEL_26;
  }
  V_LOCK();
  v15 = json_string_value(v14);
  LOWORD(v16) = -26156;
  HIWORD(v16) = (unsigned int)"n_domain_num failed" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v16, v15);
  V_UNLOCK();
  LOWORD(v17) = -28848;
  HIWORD(v17) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v17, 149, "_parse_machine", 14, 162, 20, v368);
  LOWORD(v18) = -26140;
  HIWORD(v18) = (unsigned int)"led" >> 16;
  v19 = (_DWORD *)json_object_get(v2, v18);
  v20 = v19;
  if ( !v19 || *v19 != 2 )
  {
    V_LOCK();
    LOWORD(v50) = -26128;
    HIWORD(v50) = (unsigned int)"main_num : %d" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v50);
    V_UNLOCK();
    v45 = g_zc;
    v46 = 167;
    goto LABEL_26;
  }
  V_LOCK();
  v21 = json_string_value(v20);
  LOWORD(v22) = -26104;
  HIWORD(v22) = (unsigned int)"ic_num" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v22, v21);
  V_UNLOCK();
  LOWORD(v23) = -28848;
  HIWORD(v23) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v23, 149, "_parse_machine", 14, 170, 20, v368);
  LOWORD(v24) = -26088;
  HIWORD(v24) = (unsigned int)"n_asic_num failed" >> 16;
  v25 = (_DWORD *)json_object_get(v2, v24);
  v26 = v25;
  if ( !v25 || *v25 )
  {
    V_LOCK();
    LOWORD(v196) = -26052;
    HIWORD(v196) = (unsigned int)" %d" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v196);
    V_UNLOCK();
    v197 = g_zc;
    v198 = 182;
LABEL_93:
    LOWORD(v199) = -28848;
    HIWORD(v199) = (unsigned int)"oltage: %d" >> 16;
    zlog(v197, v199, 149, "_parse_processor", 16, v198, 100, v368);
    V_LOCK();
    LOWORD(v200) = -26016;
    HIWORD(v200) = (unsigned int)"num failed" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v200);
    V_UNLOCK();
    v36 = g_zc;
    v37 = 1503;
    goto LABEL_16;
  }
  V_LOCK();
  LOWORD(v27) = -26028;
  HIWORD(v27) = (unsigned int)"domain_asic_num failed" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v27);
  V_UNLOCK();
  LOWORD(v28) = -28848;
  HIWORD(v28) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v28, 149, "_parse_processor", 16, 185, 20, v368);
  LOWORD(v29) = -28060;
  HIWORD(v29) = (unsigned int)"%d" >> 16;
  v30 = (_DWORD *)json_object_get(v26, v29);
  v31 = v30;
  if ( !v30 || *v30 != 2 )
  {
    V_LOCK();
    LOWORD(v209) = -28688;
    HIWORD(v209) = (unsigned int)"" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v209);
    V_UNLOCK();
    v197 = g_zc;
    v198 = 190;
    goto LABEL_93;
  }
  V_LOCK();
  v32 = json_string_value(v31);
  LOWORD(v33) = -28672;
  HIWORD(v33) = (unsigned int)"mode: %d" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v33, v32);
  V_UNLOCK();
  LOWORD(v34) = -28848;
  HIWORD(v34) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v34, 149, "_parse_processor", 16, 193, 20, v368);
  if ( sub_65280(v2) )
  {
    V_LOCK();
    LOWORD(v35) = -25992;
    HIWORD(v35) = (unsigned int)"num : %d" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v35);
    V_UNLOCK();
    v36 = g_zc;
    v37 = 1510;
    goto LABEL_16;
  }
  if ( sub_6597C(v2) )
  {
    V_LOCK();
    LOWORD(v43) = -25972;
    HIWORD(v43) = (unsigned int)"en" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v43);
    V_UNLOCK();
    v36 = g_zc;
    v37 = 1517;
    goto LABEL_16;
  }
  LOWORD(v51) = 27796;
  HIWORD(v51) = (unsigned int)"%1.f" >> 16;
  v52 = (_DWORD *)json_object_get(v2, v51);
  v354 = v52;
  if ( !v52 || *v52 )
  {
    V_LOCK();
    LOWORD(v213) = -25952;
    HIWORD(v213) = (unsigned int)"ailed!" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v213);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 909;
    goto LABEL_95;
  }
  V_LOCK();
  LOWORD(v53) = -25932;
  HIWORD(v53) = (unsigned int)"%s" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v53);
  V_UNLOCK();
  LOWORD(v54) = -28848;
  HIWORD(v54) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v54, 149, "_parse_chain", 12, 912, 20, v368);
  LOWORD(v55) = 27680;
  HIWORD(v55) = (unsigned int)"lld" >> 16;
  v56 = (_DWORD *)json_object_get(v354, v55);
  v57 = (int)v56;
  if ( !v56 || *v56 != 3 )
  {
    V_LOCK();
    LOWORD(v212) = -25924;
    HIWORD(v212) = (unsigned int)"or_mode" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v212);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 917;
    goto LABEL_95;
  }
  V_LOCK();
  v58 = json_integer_value(v57);
  LOWORD(v59) = -25900;
  HIWORD(v59) = (unsigned int)"failed" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v59, v58);
  V_UNLOCK();
  LOWORD(v60) = -28848;
  HIWORD(v60) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v60, 149, "_parse_chain", 12, 920, 20, v368);
  v61 = json_integer_value(v57);
  dword_1B5918 = v61;
  V_LOCK();
  LOWORD(v62) = -25884;
  HIWORD(v62) = (unsigned int)"ode : %d" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v62, v61);
  V_UNLOCK();
  LOWORD(v63) = -28848;
  HIWORD(v63) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v63, 149, "_alloc_chain", 12, 81, 20, v368);
  dword_1B5938 = (int)calloc(v61, 0x78u);
  if ( !dword_1B5938 )
  {
    V_LOCK();
    LOWORD(v321) = -25868;
    HIWORD(v321) = (unsigned int)"or_num" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v321, v61);
    V_UNLOCK();
    LOWORD(v322) = -28848;
    HIWORD(v322) = (unsigned int)"oltage: %d" >> 16;
    zlog(g_zc, v322, 149, "_alloc_chain", 12, 86, 100, v368);
    V_LOCK();
    LOWORD(v323) = -31748;
    LOWORD(v324) = 31656;
    HIWORD(v323) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c" >> 16;
    HIWORD(v324) = (unsigned int)"e: %d!" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v324, v323);
    V_UNLOCK();
    LOWORD(v325) = -28848;
    HIWORD(v325) = (unsigned int)"oltage: %d" >> 16;
    zlog(g_zc, v325, 149, "_alloc_chain", 12, 87, 100, v368);
    goto LABEL_96;
  }
  LOWORD(v64) = -25840;
  HIWORD(v64) = (unsigned int)"d" >> 16;
  v65 = (_DWORD *)json_object_get(v354, v64);
  v66 = (int)v65;
  if ( !v65 || *v65 != 3 )
  {
    V_LOCK();
    LOWORD(v201) = -25828;
    HIWORD(v201) = (unsigned int)"um : %d" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v201);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 928;
LABEL_95:
    LOWORD(v204) = -28848;
    HIWORD(v204) = (unsigned int)"oltage: %d" >> 16;
    zlog(v202, v204, 149, "_parse_chain", 12, v203, 100, v368);
LABEL_96:
    V_LOCK();
    LOWORD(v205) = -24748;
    HIWORD(v205) = (unsigned int)"ChipSetting_nonce_counter_CKB_2042" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v205);
    V_UNLOCK();
    v36 = g_zc;
    v37 = 1525;
LABEL_16:
    LOWORD(v38) = -28848;
    HIWORD(v38) = (unsigned int)"oltage: %d" >> 16;
    zlog(v36, v38, 149, "platform_topol_init", 19, v37, 20, v368);
    if ( *((_DWORD *)v2 + 1) != -1 )
    {
      v39 = (unsigned int *)v2 + 1;
      __dmb(0xBu);
      do
      {
        v40 = __ldrex(v39);
        v41 = v40 - 1;
      }
      while ( __strex(v41, v39) );
      if ( !v41 )
        json_delete(v2);
    }
    return 34;
  }
  V_LOCK();
  v67 = json_integer_value(v66);
  LOWORD(v68) = -25804;
  HIWORD(v68) = (unsigned int)"iled!" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v68, v67);
  V_UNLOCK();
  LOWORD(v69) = -28848;
  HIWORD(v69) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v69, 149, "_parse_chain", 12, 931, 20, v368);
  v70 = json_integer_value(v66);
  LOWORD(v71) = -25788;
  dword_1B591C = v70;
  HIWORD(v71) = (unsigned int)"_temp" >> 16;
  v72 = (_DWORD *)json_object_get(v354, v71);
  v73 = (int)v72;
  if ( !v72 || *v72 != 3 )
  {
    V_LOCK();
    LOWORD(v251) = -25772;
    HIWORD(v251) = (unsigned int)"chip_temp failed" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v251);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 937;
    goto LABEL_95;
  }
  V_LOCK();
  v74 = json_integer_value(v73);
  LOWORD(v75) = -25748;
  HIWORD(v75) = (unsigned int)"chip_temp : %d" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v75, v74);
  V_UNLOCK();
  LOWORD(v76) = -28848;
  HIWORD(v76) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v76, 149, "_parse_chain", 12, 940, 20, v368);
  v77 = json_integer_value(v73);
  LOWORD(v78) = -25728;
  dword_1B5920 = v77;
  HIWORD(v78) = (unsigned int)"pcb_temp" >> 16;
  v79 = (_DWORD *)json_object_get(v354, v78);
  v80 = (int)v79;
  if ( !v79 || *v79 != 3 )
  {
    V_LOCK();
    LOWORD(v252) = -25708;
    HIWORD(v252) = (unsigned int)"pcb_temp failed" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v252);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 946;
    goto LABEL_95;
  }
  V_LOCK();
  v81 = json_integer_value(v80);
  LOWORD(v82) = -25680;
  HIWORD(v82) = (unsigned int)" : %d" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v82, v81);
  V_UNLOCK();
  LOWORD(v83) = -28848;
  HIWORD(v83) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v83, 149, "_parse_chain", 12, 949, 20, v368);
  v84 = json_integer_value(v80);
  LOWORD(v85) = -25656;
  dword_1B5924 = v84;
  HIWORD(v85) = (unsigned int)"get min_pcb_temp failed" >> 16;
  v86 = (_DWORD *)json_object_get(v354, v85);
  v87 = (int)v86;
  if ( !v86 || *v86 != 3 )
  {
    V_LOCK();
    LOWORD(v253) = -25640;
    HIWORD(v253) = (unsigned int)" failed" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v253);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 955;
    goto LABEL_95;
  }
  V_LOCK();
  v88 = json_integer_value(v87);
  LOWORD(v89) = -25612;
  HIWORD(v89) = (unsigned int)"max_uneffective_count" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v89, v88);
  V_UNLOCK();
  LOWORD(v90) = -28848;
  HIWORD(v90) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v90, 149, "_parse_chain", 12, 958, 20, v368);
  v91 = json_integer_value(v87);
  LOWORD(v92) = -25592;
  dword_1B5928 = v91;
  HIWORD(v92) = (unsigned int)"t" >> 16;
  v93 = (_DWORD *)json_object_get(v354, v92);
  v94 = (int)v93;
  if ( !v93 || *v93 != 3 )
  {
    V_LOCK();
    LOWORD(v254) = -25576;
    HIWORD(v254) = (unsigned int)"fective_count failed" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v254);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 964;
    goto LABEL_95;
  }
  V_LOCK();
  v95 = json_integer_value(v94);
  LOWORD(v96) = -25548;
  HIWORD(v96) = (unsigned int)"uneffective_count : %d" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v96, v95);
  V_UNLOCK();
  LOWORD(v97) = -28848;
  HIWORD(v97) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v97, 149, "_parse_chain", 12, 967, 20, v368);
  v98 = json_integer_value(v94);
  LOWORD(v99) = -25524;
  dword_1B592C = v98;
  HIWORD(v99) = (unsigned int)"parse asic failed" >> 16;
  v100 = (_DWORD *)json_object_get(v354, v99);
  v101 = v100;
  if ( !v100 || (unsigned int)(*v100 - 5) > 1 )
  {
    V_LOCK();
    LOWORD(v259) = -25512;
    HIWORD(v259) = (unsigned int)"ailed" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v259);
    V_UNLOCK();
    v256 = 973;
    goto LABEL_133;
  }
  V_LOCK();
  v102 = "false";
  LOWORD(v103) = -25488;
  if ( *v101 == 5 )
    v102 = "true";
  HIWORD(v103) = (unsigned int)"failed" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v103, v102);
  V_UNLOCK();
  LOWORD(v104) = -28848;
  HIWORD(v104) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v104, 149, "_parse_chain", 12, 976, 20, v368);
  byte_1B5930 = *v101 == 5;
  v105 = (_DWORD *)json_object_get(v354, "sensor_mode");
  v106 = (int)v105;
  if ( !v105 || *v105 != 3 )
  {
    V_LOCK();
    LOWORD(v258) = -25460;
    HIWORD(v258) = (unsigned int)"get ctrlboard_sensor sensor failed" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v258);
    V_UNLOCK();
    v256 = 982;
    goto LABEL_133;
  }
  V_LOCK();
  v107 = json_integer_value(v106);
  LOWORD(v108) = -25436;
  HIWORD(v108) = (unsigned int)"sor failed" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v108, v107);
  V_UNLOCK();
  LOWORD(v109) = -28848;
  HIWORD(v109) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v109, 149, "_parse_chain", 12, 985, 20, v368);
  *(_DWORD *)(dword_1B5938 + 88) = json_integer_value(v106);
  v110 = (_DWORD *)json_object_get(v354, "sensor_num");
  v111 = (int)v110;
  if ( !v110 || *v110 != 3 )
  {
    V_LOCK();
    LOWORD(v255) = -25404;
    HIWORD(v255) = (unsigned int)"parse chain ctrlboard failed" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v255);
    V_UNLOCK();
    v256 = 991;
LABEL_133:
    LOWORD(v257) = -28848;
    HIWORD(v257) = (unsigned int)"oltage: %d" >> 16;
    zlog(g_zc, v257, 149, "_parse_chain", 12, v256, 100, v368);
    goto LABEL_96;
  }
  V_LOCK();
  v112 = json_integer_value(v111);
  LOWORD(v113) = -25380;
  HIWORD(v113) = (unsigned int)"iled" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v113, v112);
  V_UNLOCK();
  LOWORD(v114) = -28848;
  HIWORD(v114) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v114, 149, "_parse_chain", 12, 994, 20, v368);
  v115 = json_integer_value(v111);
  v116 = dword_1B5938;
  *(_DWORD *)(dword_1B5938 + 92) = v115;
  v117 = calloc(v115, 0x18u);
  *(_DWORD *)(v116 + 84) = v117;
  if ( !v117 )
  {
    V_LOCK();
    logfmt_raw(v368, 0x1000u, 0, "calloc sensor failed!");
    V_UNLOCK();
    LOWORD(v350) = -28848;
    HIWORD(v350) = (unsigned int)"oltage: %d" >> 16;
    zlog(g_zc, v350, 149, "_alloc_sensor", 13, 98, 100, v368);
    goto LABEL_96;
  }
  LOWORD(v118) = -25340;
  HIWORD(v118) = (unsigned int)"asic_sensor:" >> 16;
  v119 = (_DWORD *)json_object_get(v354, v118);
  v120 = (int)v119;
  if ( !v119 || *v119 != 3 )
  {
    V_LOCK();
    LOWORD(v320) = -25324;
    HIWORD(v320) = (unsigned int)"bind_asic" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v320);
    V_UNLOCK();
    v256 = 1002;
    goto LABEL_133;
  }
  V_LOCK();
  v121 = json_integer_value(v120);
  LOWORD(v122) = -25296;
  HIWORD(v122) = (unsigned int)"parse chain sensor failed" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v122, v121);
  V_UNLOCK();
  LOWORD(v123) = -28848;
  HIWORD(v123) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v123, 149, "_parse_chain", 12, 1005, 20, v368);
  *(_DWORD *)(dword_1B5938 + 96) = json_integer_value(v120);
  v124 = (_DWORD *)json_object_get(v354, "max_pcb_temp");
  v125 = (int)v124;
  if ( !v124 || *v124 != 3 )
  {
    V_LOCK();
    LOWORD(v319) = -25260;
    HIWORD(v319) = (unsigned int)"get eeprom failed" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v319);
    V_UNLOCK();
    v256 = 1011;
    goto LABEL_133;
  }
  V_LOCK();
  v126 = json_integer_value(v125);
  LOWORD(v127) = -25236;
  HIWORD(v127) = (unsigned int)"om:" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v127, v126);
  V_UNLOCK();
  LOWORD(v128) = -28848;
  HIWORD(v128) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v128, 149, "_parse_chain", 12, 1014, 20, v368);
  *(_DWORD *)(dword_1B5938 + 100) = json_integer_value(v125);
  v129 = (_DWORD *)json_object_get(v354, "min_pcb_temp");
  v130 = (int)v129;
  if ( !v129 || *v129 != 3 )
  {
    V_LOCK();
    LOWORD(v327) = -25200;
    HIWORD(v327) = (unsigned int)"e chain failed" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v327);
    V_UNLOCK();
    v256 = 1020;
    goto LABEL_133;
  }
  V_LOCK();
  v131 = json_integer_value(v130);
  LOWORD(v132) = -25176;
  HIWORD(v132) = (unsigned int)"air_out" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v132, v131);
  V_UNLOCK();
  LOWORD(v133) = -28848;
  HIWORD(v133) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v133, 149, "_parse_chain", 12, 1023, 20, v368);
  *(_DWORD *)(dword_1B5938 + 104) = json_integer_value(v130);
  v134 = (_DWORD *)json_object_get(v354, "max_uneffective_count");
  v135 = (int)v134;
  if ( !v134 || *v134 != 3 )
  {
    V_LOCK();
    LOWORD(v326) = -25132;
    HIWORD(v326) = (unsigned int)"_plldivider" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v326);
    V_UNLOCK();
    v256 = 1029;
    goto LABEL_133;
  }
  V_LOCK();
  v136 = json_integer_value(v135);
  LOWORD(v137) = -25096;
  HIWORD(v137) = (unsigned int)"et_CKB_2042" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v137, v136);
  V_UNLOCK();
  LOWORD(v138) = -28848;
  HIWORD(v138) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v138, 149, "_parse_chain", 12, 1032, 20, v368);
  *(_DWORD *)(dword_1B5938 + 108) = json_integer_value(v135);
  v353 = sub_6681C(v354);
  if ( v353 )
  {
    V_LOCK();
    LOWORD(v351) = -25068;
    HIWORD(v351) = (unsigned int)"ware_reset_CKB_2042" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v351);
    V_UNLOCK();
    v261 = 1038;
    goto LABEL_138;
  }
  if ( byte_1B5930 && sub_66FEC(v354) )
  {
    V_LOCK();
    LOWORD(v260) = -25048;
    HIWORD(v260) = (unsigned int)"ChipSetting_core_ticket_mask_CKB_2042" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v260);
    V_UNLOCK();
    v261 = 1046;
LABEL_138:
    LOWORD(v262) = -28848;
    HIWORD(v262) = (unsigned int)"oltage: %d" >> 16;
    zlog(g_zc, v262, 149, "_parse_chain", 12, v261, 100, v368);
    goto LABEL_96;
  }
  v139 = *(_DWORD *)(dword_1B5938 + 88);
  if ( v139 == 3 )
  {
    LOWORD(v263) = -25024;
    HIWORD(v263) = (unsigned int)"mask_CKB_2042" >> 16;
    v264 = (_DWORD *)json_object_get(v354, v263);
    v364 = v264;
    if ( !v264 || *v264 != 1 )
    {
      V_LOCK();
      LOWORD(v352) = -25004;
      HIWORD(v352) = (unsigned int)"_2_packet_ckb" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v352);
      V_UNLOCK();
      v343 = 641;
LABEL_183:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        v343,
        100,
        v368);
      V_LOCK();
      LOWORD(v344) = -24948;
      HIWORD(v344) = (unsigned int)"_CKB_2042" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v344);
      V_UNLOCK();
      v256 = 1055;
      goto LABEL_133;
    }
    V_LOCK();
    LOWORD(v265) = -24968;
    HIWORD(v265) = (unsigned int)"Setting_bridge_reset_CKB_2042" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v265);
    V_UNLOCK();
    LOWORD(v266) = -28848;
    LOWORD(v267) = 26916;
    HIWORD(v267) = (unsigned int)"_max" >> 16;
    HIWORD(v266) = (unsigned int)"oltage: %d" >> 16;
    v365 = v267;
    zlog(g_zc, v266, 149, "_parse_chain_ctrlboard_sensor", 29, 644, 20, v368);
    v361 = v2;
    for ( i = 0; i < (unsigned int)json_array_size(v364); ++i )
    {
      v268 = json_array_get(v364, i);
      v269 = v268;
      if ( !v268 || (v270 = *v268) != 0 )
      {
        v2 = v361;
        V_LOCK();
        LOWORD(v347) = -27460;
        HIWORD(v347) = (unsigned int)"d" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v347, i);
        V_UNLOCK();
        v343 = 651;
        goto LABEL_183;
      }
      v271 = (_DWORD *)json_object_get(v268, v365);
      v272 = (int)v271;
      if ( !v271 || *v271 != 3 )
      {
        v2 = v361;
        V_LOCK();
        LOWORD(v346) = -26544;
        HIWORD(v346) = (unsigned int)"processor" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v346, i);
        V_UNLOCK();
        v343 = 658;
        goto LABEL_183;
      }
      V_LOCK();
      v273 = json_integer_value(v272);
      LOWORD(v274) = -26516;
      HIWORD(v274) = (unsigned int)"iled" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v274, v273);
      V_UNLOCK();
      LOWORD(v275) = -28848;
      HIWORD(v275) = (unsigned int)"oltage: %d" >> 16;
      zlog(g_zc, v275, 149, "_parse_chain_ctrlboard_sensor", 29, 661, 20, v368);
      v276 = json_integer_value(v272);
      v277 = *(_DWORD *)(dword_1B5938 + 84);
      *(_DWORD *)(v277 + 24 * v276) = v276;
      v278 = (_DWORD *)(v277 + 24 * v276);
      v278[2] = 2;
      v279 = (_DWORD *)json_object_get(v269, "type");
      v280 = v279;
      if ( !v279 || *v279 != 2 )
      {
        v2 = v361;
        V_LOCK();
        LOWORD(v345) = -26504;
        HIWORD(v345) = (unsigned int)"processor failed" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v345, i);
        V_UNLOCK();
        v343 = 670;
        goto LABEL_183;
      }
      V_LOCK();
      v281 = json_string_value(v280);
      LOWORD(v282) = -28672;
      HIWORD(v282) = (unsigned int)"mode: %d" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v282, v281);
      V_UNLOCK();
      LOWORD(v283) = -28848;
      HIWORD(v283) = (unsigned int)"oltage: %d" >> 16;
      zlog(g_zc, v283, 149, "_parse_chain_ctrlboard_sensor", 29, 673, 20, v368);
      v284 = (const char *)json_string_value(v280);
      LOWORD(v285) = -26692;
      v286 = v284;
      HIWORD(v285) = (unsigned int)"ed, Cannot allocate space" >> 16;
      if ( strcmp(v284, v285) )
      {
        do
          ++v270;
        while ( v270 != 5 && strcmp(v286, off_168DCC[v270]) );
      }
      LOWORD(v287) = -26476;
      v278[1] = v270;
      HIWORD(v287) = (unsigned int)"r:" >> 16;
      v288 = (_DWORD *)json_object_get(v269, v287);
      v289 = (int)v288;
      if ( !v288 || *v288 != 3 )
      {
        v2 = v361;
        V_LOCK();
        LOWORD(v342) = -26472;
        HIWORD(v342) = (unsigned int)"parse processor failed" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v342, i);
        V_UNLOCK();
        v343 = 679;
        goto LABEL_183;
      }
      V_LOCK();
      v290 = json_integer_value(v289);
      LOWORD(v291) = -26440;
      HIWORD(v291) = (unsigned int)"wer failed" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v291, v290);
      V_UNLOCK();
      LOWORD(v292) = -28848;
      HIWORD(v292) = (unsigned int)"oltage: %d" >> 16;
      zlog(g_zc, v292, 149, "_parse_chain_ctrlboard_sensor", 29, 682, 20, v368);
      v293 = json_integer_value(v289);
      LOWORD(v294) = 22368;
      v278[5] = v293;
      HIWORD(v294) = (unsigned int)"ld/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_fpga.c" >> 16;
      v295 = (_DWORD *)json_object_get(v269, v294);
      v296 = v295;
      if ( !v295 || *v295 != 2 )
      {
        v2 = v361;
        V_LOCK();
        LOWORD(v348) = -26432;
        HIWORD(v348) = (unsigned int)"ed" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v348, i);
        V_UNLOCK();
        v343 = 688;
        goto LABEL_183;
      }
      V_LOCK();
      v297 = json_string_value(v296);
      LOWORD(v298) = -26408;
      HIWORD(v298) = (unsigned int)"get chain failed" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v298, v297);
      V_UNLOCK();
      LOWORD(v299) = -28848;
      HIWORD(v299) = (unsigned int)"oltage: %d" >> 16;
      v300 = 0;
      zlog(g_zc, v299, 149, "_parse_chain_ctrlboard_sensor", 29, 691, 20, v368);
      v301 = off_168E10;
      v302 = (const char *)json_string_value(v296);
      LOWORD(v304) = -26684;
      v303 = v302;
      HIWORD(v304) = (unsigned int)"ot allocate space" >> 16;
      while ( strcmp(v303, v304) )
      {
        v305 = *v301++;
        v304 = v305;
        ++v300;
      }
      LOWORD(v306) = -24176;
      v278[3] = v300;
      v307 = 0;
      HIWORD(v306) = (unsigned int)"based_notify_ntime" >> 16;
      v308 = (_DWORD *)json_object_get(v269, v306);
      v309 = v308;
      if ( !v308 || *v308 != 2 )
      {
        v2 = v361;
        V_LOCK();
        LOWORD(v349) = -26400;
        HIWORD(v349) = (unsigned int)"n failed" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v349, i);
        V_UNLOCK();
        v343 = 697;
        goto LABEL_183;
      }
      V_LOCK();
      v310 = json_string_value(v309);
      LOWORD(v311) = -26376;
      HIWORD(v311) = (unsigned int)"chain_num failed" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v311, v310);
      V_UNLOCK();
      LOWORD(v312) = -28848;
      HIWORD(v312) = (unsigned int)"oltage: %d" >> 16;
      zlog(g_zc, v312, 149, "_parse_chain_ctrlboard_sensor", 29, 700, 20, v368);
      v313 = v309;
      v314 = off_168E30;
      v315 = (const char *)json_string_value(v313);
      LOWORD(v317) = -26676;
      v316 = v315;
      HIWORD(v317) = (unsigned int)"ate space" >> 16;
      while ( strcmp(v316, v317) )
      {
        v318 = *v314++;
        v317 = v318;
        ++v307;
      }
      v278[4] = v307;
    }
    v2 = v361;
    v139 = *(_DWORD *)(dword_1B5938 + 88);
  }
  if ( (v139 & 0xFFFFFFFD) == 0 )
  {
    LOWORD(v140) = -24916;
    HIWORD(v140) = (unsigned int)"eset_CKB_2042" >> 16;
    v141 = (_DWORD *)json_object_get(v354, v140);
    v359 = v141;
    if ( v141 && *v141 == 1 )
    {
      V_LOCK();
      LOWORD(v142) = -24884;
      HIWORD(v142) = (unsigned int)"_CKB_2042" >> 16;
      v356 = 0;
      logfmt_raw(v368, 0x1000u, 0, v142);
      V_UNLOCK();
      LOWORD(v143) = -28848;
      HIWORD(v143) = (unsigned int)"oltage: %d" >> 16;
      zlog(g_zc, v143, 149, "_parse_chain_sensor", 19, 803, 20, v368);
      LOWORD(v144) = 26916;
      v362 = v2;
      HIWORD(v144) = (unsigned int)"_max" >> 16;
      v366 = v144;
      while ( 1 )
      {
        if ( v356 >= (unsigned int)json_array_size(v359) )
        {
          v2 = v362;
          goto LABEL_103;
        }
        v145 = json_array_get(v359, v356);
        v146 = v145;
        if ( !v145 )
          break;
        v147 = *v145;
        if ( *v145 )
          break;
        v148 = (_DWORD *)json_object_get(v145, v366);
        v149 = (int)v148;
        if ( !v148 || *v148 != 3 )
        {
          v2 = v362;
          V_LOCK();
          LOWORD(v338) = -26544;
          HIWORD(v338) = (unsigned int)"processor" >> 16;
          logfmt_raw(v368, 0x1000u, 0, v338, v356);
          V_UNLOCK();
          v333 = 818;
          goto LABEL_174;
        }
        V_LOCK();
        v150 = json_integer_value(v149);
        LOWORD(v151) = -26516;
        HIWORD(v151) = (unsigned int)"iled" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v151, v150);
        V_UNLOCK();
        LOWORD(v152) = -28848;
        HIWORD(v152) = (unsigned int)"oltage: %d" >> 16;
        zlog(g_zc, v152, 149, "_parse_chain_sensor", 19, 821, 20, v368);
        v153 = json_integer_value(v149);
        v154 = *(_DWORD *)(dword_1B5938 + 84);
        *(_DWORD *)(v154 + 24 * v153) = v153;
        v155 = (_DWORD *)(v154 + 24 * v153);
        v155[2] = 1;
        v156 = (_DWORD *)json_object_get(v146, "type");
        v157 = v156;
        if ( !v156 || *v156 != 2 )
        {
          v2 = v362;
          V_LOCK();
          LOWORD(v337) = -26504;
          HIWORD(v337) = (unsigned int)"processor failed" >> 16;
          logfmt_raw(v368, 0x1000u, 0, v337, v356);
          V_UNLOCK();
          v333 = 830;
          goto LABEL_174;
        }
        V_LOCK();
        v158 = json_string_value(v157);
        LOWORD(v159) = -28672;
        HIWORD(v159) = (unsigned int)"mode: %d" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v159, v158);
        V_UNLOCK();
        LOWORD(v160) = -28848;
        HIWORD(v160) = (unsigned int)"oltage: %d" >> 16;
        zlog(g_zc, v160, 149, "_parse_chain_sensor", 19, 833, 20, v368);
        v161 = (const char *)json_string_value(v157);
        LOWORD(v162) = -26692;
        v163 = v161;
        HIWORD(v162) = (unsigned int)"ed, Cannot allocate space" >> 16;
        if ( strcmp(v161, v162) )
        {
          do
            ++v147;
          while ( v147 != 5 && strcmp(v163, off_168DCC[v147]) );
        }
        LOWORD(v164) = -24868;
        v155[1] = v147;
        HIWORD(v164) = (unsigned int)"Setting_analog_mux_CKB_2042" >> 16;
        v165 = (_DWORD *)json_object_get(v146, v164);
        v166 = (int)v165;
        if ( !v165 || *v165 != 3 )
        {
          v2 = v362;
          V_LOCK();
          LOWORD(v336) = -26472;
          HIWORD(v336) = (unsigned int)"parse processor failed" >> 16;
          logfmt_raw(v368, 0x1000u, 0, v336, v356);
          V_UNLOCK();
          v333 = 839;
          goto LABEL_174;
        }
        V_LOCK();
        v167 = json_integer_value(v166);
        LOWORD(v168) = -24856;
        HIWORD(v168) = (unsigned int)"og_mux_CKB_2042" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v168, v167);
        V_UNLOCK();
        LOWORD(v169) = -28848;
        HIWORD(v169) = (unsigned int)"oltage: %d" >> 16;
        zlog(g_zc, v169, 149, "_parse_chain_sensor", 19, 842, 20, v368);
        v170 = json_integer_value(v166);
        LOWORD(v171) = 22368;
        v155[5] = v170;
        HIWORD(v171) = (unsigned int)"ld/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_fpga.c" >> 16;
        v172 = (_DWORD *)json_object_get(v146, v171);
        v173 = v172;
        if ( !v172 || *v172 != 2 )
        {
          v2 = v362;
          V_LOCK();
          LOWORD(v335) = -26432;
          HIWORD(v335) = (unsigned int)"ed" >> 16;
          logfmt_raw(v368, 0x1000u, 0, v335, v356);
          V_UNLOCK();
          v333 = 848;
          goto LABEL_174;
        }
        V_LOCK();
        v174 = json_string_value(v173);
        LOWORD(v175) = -26408;
        HIWORD(v175) = (unsigned int)"get chain failed" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v175, v174);
        V_UNLOCK();
        LOWORD(v176) = -28848;
        HIWORD(v176) = (unsigned int)"oltage: %d" >> 16;
        v177 = 0;
        zlog(g_zc, v176, 149, "_parse_chain_sensor", 19, 851, 20, v368);
        v178 = off_168E10;
        v179 = (const char *)json_string_value(v173);
        LOWORD(v181) = -26684;
        v180 = v179;
        HIWORD(v181) = (unsigned int)"ot allocate space" >> 16;
        while ( strcmp(v180, v181) )
        {
          v182 = *v178++;
          v181 = v182;
          ++v177;
        }
        LOWORD(v183) = -24176;
        v155[3] = v177;
        v184 = 0;
        HIWORD(v183) = (unsigned int)"based_notify_ntime" >> 16;
        v185 = (_DWORD *)json_object_get(v146, v183);
        v186 = v185;
        if ( !v185 || *v185 != 2 )
        {
          v2 = v362;
          V_LOCK();
          LOWORD(v332) = -26400;
          HIWORD(v332) = (unsigned int)"n failed" >> 16;
          logfmt_raw(v368, 0x1000u, 0, v332, v356);
          V_UNLOCK();
          v333 = 857;
          goto LABEL_174;
        }
        V_LOCK();
        v187 = json_string_value(v186);
        LOWORD(v188) = -26376;
        HIWORD(v188) = (unsigned int)"chain_num failed" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v188, v187);
        V_UNLOCK();
        LOWORD(v189) = -28848;
        HIWORD(v189) = (unsigned int)"oltage: %d" >> 16;
        zlog(g_zc, v189, 149, "_parse_chain_sensor", 19, 860, 20, v368);
        v190 = v186;
        v191 = off_168E30;
        v192 = (const char *)json_string_value(v190);
        LOWORD(v194) = -26676;
        v193 = v192;
        HIWORD(v194) = (unsigned int)"ate space" >> 16;
        while ( strcmp(v193, v194) )
        {
          v195 = *v191++;
          v194 = v195;
          ++v184;
        }
        v155[4] = v184;
        ++v356;
      }
      v2 = v362;
      V_LOCK();
      LOWORD(v339) = -27460;
      HIWORD(v339) = (unsigned int)"d" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v339, v356);
      V_UNLOCK();
      v333 = 811;
    }
    else
    {
      V_LOCK();
      LOWORD(v341) = -24904;
      HIWORD(v341) = (unsigned int)"2" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v341);
      V_UNLOCK();
      v333 = 800;
    }
LABEL_174:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_sensor",
      19,
      v333,
      100,
      v368);
    V_LOCK();
    LOWORD(v334) = -24840;
    HIWORD(v334) = (unsigned int)"read_temperature_ckb" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v334);
    V_UNLOCK();
    v256 = 1065;
    goto LABEL_133;
  }
LABEL_103:
  LOWORD(v214) = -24812;
  v215 = v354;
  HIWORD(v214) = (unsigned int)"Setting_clock_delay_CKB_2042" >> 16;
  v355 = dword_1B5918;
  v216 = (_DWORD *)json_object_get(v215, v214);
  v357 = v216;
  if ( !v216 || (v217 = *v216) != 0 )
  {
    V_LOCK();
    LOWORD(v340) = -24804;
    HIWORD(v340) = (unsigned int)"clock_delay_CKB_2042" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v340);
    V_UNLOCK();
    v329 = 761;
    goto LABEL_171;
  }
  V_LOCK();
  LOWORD(v218) = -24784;
  HIWORD(v218) = (unsigned int)"" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v218);
  V_UNLOCK();
  LOWORD(v219) = -28848;
  HIWORD(v219) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v219, 149, "_parse_chain_eeprom", 19, 764, 20, v368);
  LOWORD(v220) = -28060;
  HIWORD(v220) = (unsigned int)"%d" >> 16;
  v221 = (_DWORD *)json_object_get(v357, v220);
  v360 = v221;
  if ( !v221 || *v221 != 2 )
  {
    V_LOCK();
    LOWORD(v328) = -28688;
    HIWORD(v328) = (unsigned int)"" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v328);
    V_UNLOCK();
    v329 = 769;
LABEL_171:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_eeprom",
      19,
      v329,
      100,
      v368);
    V_LOCK();
    LOWORD(v330) = -24776;
    HIWORD(v330) = (unsigned int)"Setting_same_nonce_CKB_2042" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v330);
    V_UNLOCK();
    v256 = 1073;
    goto LABEL_133;
  }
  V_LOCK();
  v222 = json_string_value(v360);
  LOWORD(v223) = -28672;
  HIWORD(v223) = (unsigned int)"mode: %d" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v223, v222);
  V_UNLOCK();
  LOWORD(v224) = -28848;
  HIWORD(v224) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v224, 149, "_parse_chain_eeprom", 19, 772, 20, v368);
  if ( v355 > 0 )
  {
    LOWORD(v225) = -26368;
    HIWORD(v225) = (unsigned int)"m failed" >> 16;
    v363 = v2;
    v226 = 0;
    v227 = v225;
    do
    {
      v228 = off_168EFC;
      v229 = 0;
      v230 = (const char *)json_string_value(v360);
      v231 = v227;
      while ( strcmp(v230, v231) )
      {
        v232 = v228[1];
        ++v228;
        v231 = v232;
        ++v229;
      }
      ++v217;
      v233 = dword_1B5938 + v226;
      v226 += 120;
      *(_DWORD *)(v233 + 112) = v229;
    }
    while ( v355 != v217 );
    v2 = v363;
  }
  LOWORD(v234) = -28380;
  HIWORD(v234) = (unsigned int)"target_temp_type" >> 16;
  v235 = (_DWORD *)json_object_get(v357, v234);
  v236 = (int)v235;
  if ( !v235 || *v235 != 3 )
  {
    V_LOCK();
    LOWORD(v331) = -28368;
    HIWORD(v331) = (unsigned int)"type" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v331);
    V_UNLOCK();
    v329 = 781;
    goto LABEL_171;
  }
  V_LOCK();
  v237 = json_integer_value(v236);
  LOWORD(v238) = -28348;
  HIWORD(v238) = (unsigned int)"emp_type failed!" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v238, v237);
  V_UNLOCK();
  LOWORD(v239) = -28848;
  HIWORD(v239) = (unsigned int)"oltage: %d" >> 16;
  zlog(g_zc, v239, 149, "_parse_chain_eeprom", 19, 784, 20, v368);
  if ( v355 > 0 )
  {
    v240 = 0;
    v241 = 0;
    do
    {
      ++v240;
      v242 = json_integer_value(v236);
      v243 = dword_1B5938 + v241;
      v241 += 120;
      *(_DWORD *)(v243 + 116) = v242;
    }
    while ( v355 != v240 );
  }
  v244 = dword_1B5918;
  if ( dword_1B5918 > 1 )
  {
    v245 = 120;
    v246 = 1;
    do
    {
      ++v246;
      v247 = (void *)(dword_1B5938 + v245);
      v245 += 120;
      memcpy(v247, (const void *)dword_1B5938, 0x78u);
    }
    while ( v244 != v246 );
  }
  if ( *((_DWORD *)v2 + 1) != -1 )
  {
    v248 = (unsigned int *)v2 + 1;
    __dmb(0xBu);
    do
    {
      v249 = __ldrex(v248);
      v250 = v249 - 1;
    }
    while ( __strex(v250, v248) );
    if ( !v250 )
      json_delete(v2);
  }
  return v353;
}
