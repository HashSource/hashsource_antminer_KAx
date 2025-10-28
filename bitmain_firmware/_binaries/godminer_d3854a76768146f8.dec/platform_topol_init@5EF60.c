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
  int v144; // r3
  _DWORD *v145; // r0
  _DWORD *v146; // r11
  _DWORD *v147; // r0
  int v148; // r7
  int v149; // r0
  int v150; // r1
  int v151; // r0
  int v152; // r9
  _DWORD *v153; // r9
  _DWORD *v154; // r0
  _DWORD *v155; // r7
  _DWORD *v156; // r0
  int v157; // r3
  int v158; // r1
  const char *v159; // r0
  const char *v160; // r1
  const char *v161; // r6
  int v162; // r3
  const char *v163; // r1
  const char *v164; // r1
  char *v165; // r1
  _DWORD *v166; // r0
  int v167; // r6
  int v168; // r0
  int v169; // r3
  int v170; // r1
  int v171; // r0
  char *v172; // r1
  _DWORD *v173; // r0
  _DWORD *v174; // r6
  _DWORD *v175; // r0
  int v176; // r3
  int v177; // r1
  int v178; // r7
  char **v179; // r8
  const char *v180; // r0
  const char *v181; // r10
  const char *v182; // r1
  const char *v183; // t1
  char *v184; // r1
  int v185; // r6
  _DWORD *v186; // r0
  _DWORD *v187; // r8
  _DWORD *v188; // r0
  int v189; // r3
  int v190; // r1
  const char **v191; // r7
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
  int v266; // r0
  int v267; // r1
  _DWORD *v268; // r0
  _DWORD *v269; // r11
  _DWORD *v270; // r0
  int v271; // r7
  int v272; // r0
  int v273; // r1
  int v274; // r0
  int v275; // r10
  _DWORD *v276; // r10
  _DWORD *v277; // r0
  _DWORD *v278; // r7
  _DWORD *v279; // r0
  int v280; // r3
  int v281; // r1
  const char *v282; // r0
  const char *v283; // r1
  const char *v284; // r6
  int v285; // r3
  const char *v286; // r1
  const char *v287; // r1
  char *v288; // r1
  _DWORD *v289; // r0
  int v290; // r6
  int v291; // r0
  int v292; // r3
  int v293; // r1
  int v294; // r0
  char *v295; // r1
  _DWORD *v296; // r0
  _DWORD *v297; // r6
  _DWORD *v298; // r0
  int v299; // r3
  int v300; // r1
  int v301; // r7
  char **v302; // r8
  const char *v303; // r0
  const char *v304; // r9
  const char *v305; // r1
  const char *v306; // t1
  char *v307; // r1
  int v308; // r6
  _DWORD *v309; // r0
  _DWORD *v310; // r8
  _DWORD *v311; // r0
  int v312; // r3
  int v313; // r1
  const char **v314; // r7
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
  int v327; // r0
  int v328; // r3
  int v329; // r3
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
  int v342; // r0
  int v343; // r3
  int v344; // r3
  int v345; // r3
  int v346; // r3
  int v347; // r3
  int v348; // r3
  int v349; // r3
  int v350; // r3
  int v351; // r1
  int v352; // r3
  int v353; // [sp+10h] [bp-1124h]
  _DWORD *v354; // [sp+14h] [bp-1120h]
  int v355; // [sp+14h] [bp-1120h]
  unsigned int v356; // [sp+18h] [bp-111Ch]
  _DWORD *v357; // [sp+18h] [bp-111Ch]
  unsigned int i; // [sp+18h] [bp-111Ch]
  _DWORD *v359; // [sp+1Ch] [bp-1118h]
  _DWORD *v360; // [sp+1Ch] [bp-1118h]
  double *v361; // [sp+1Ch] [bp-1118h]
  double *v362; // [sp+20h] [bp-1114h]
  double *v363; // [sp+20h] [bp-1114h]
  _DWORD *v364; // [sp+20h] [bp-1114h]
  int v365; // [sp+2Ch] [bp-1108h]
  int v366; // [sp+2Ch] [bp-1108h]
  char v367[252]; // [sp+34h] [bp-1100h] BYREF
  char v368[4100]; // [sp+130h] [bp-1004h] BYREF

  LOWORD(v0) = -24256;
  HIWORD(v0) = (unsigned int)"end/backend_dash_1766/backend_dash_1766.c" >> 16;
  file = json_load_file(v0, 0, v367);
  v2 = file;
  if ( !file || *(_DWORD *)file )
  {
    V_LOCK();
    LOWORD(v206) = -24256;
    HIWORD(v206) = (unsigned int)"end/backend_dash_1766/backend_dash_1766.c" >> 16;
    LOWORD(v207) = -24240;
    HIWORD(v207) = (unsigned int)"_1766/backend_dash_1766.c" >> 16;
    v353 = -1;
    logfmt_raw(v368, 0x1000u, 0, v207, v206);
    V_UNLOCK();
    LOWORD(v208) = -26764;
    HIWORD(v208) = (unsigned int)"x, reg %02x state %08x" >> 16;
    zlog(g_zc, v208, 149, "platform_topol_init", 19, 1488, 20, v368);
    return v353;
  }
  v3 = (_DWORD *)json_object_get(file, "machine");
  v4 = v3;
  if ( !v3 || *v3 != 2 )
  {
    V_LOCK();
    LOWORD(v44) = -24196;
    HIWORD(v44) = (unsigned int)"obid %s, work count %d" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v44);
    V_UNLOCK();
    v45 = g_zc;
    v46 = 139;
LABEL_26:
    LOWORD(v47) = -26764;
    HIWORD(v47) = (unsigned int)"x, reg %02x state %08x" >> 16;
    zlog(v45, v47, 149, "_parse_machine", 14, v46, 100, v368);
LABEL_27:
    V_LOCK();
    LOWORD(v48) = -23976;
    HIWORD(v48) = (unsigned int)"d" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v48);
    V_UNLOCK();
    v36 = g_zc;
    v37 = 1495;
    goto LABEL_16;
  }
  V_LOCK();
  v5 = json_string_value(v4);
  LOWORD(v6) = -24176;
  HIWORD(v6) = (unsigned int)"%d" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v6, v5);
  V_UNLOCK();
  LOWORD(v7) = -26764;
  HIWORD(v7) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v7, 149, "_parse_machine", 14, 142, 20, v368);
  v8 = (const char *)json_string_value(v4);
  v9 = strlen(v8);
  v10 = (char *)calloc(v9 + 1, 1u);
  topol_machine = (int)v10;
  if ( !v10 )
  {
    V_LOCK();
    LOWORD(v210) = -24152;
    HIWORD(v210) = (unsigned int)"iff %d ans diff %d TICKET_MASK_DASH_1766 %d" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v210);
    V_UNLOCK();
    LOWORD(v211) = -26764;
    HIWORD(v211) = (unsigned int)"x, reg %02x state %08x" >> 16;
    zlog(g_zc, v211, 149, "_parse_machine", 14, 148, 100, v368);
    goto LABEL_27;
  }
  strcpy(v10, v8);
  V_LOCK();
  logfmt_raw(v368, 0x1000u, 0, "machine : %s ", topol_machine);
  V_UNLOCK();
  LOWORD(v11) = -26764;
  HIWORD(v11) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v11, 149, "_parse_machine", 14, 153, 20, v368);
  LOWORD(v12) = -24092;
  HIWORD(v12) = (unsigned int)"pic info lost" >> 16;
  v13 = (_DWORD *)json_object_get(v2, v12);
  v14 = v13;
  if ( !v13 || *v13 != 2 )
  {
    V_LOCK();
    LOWORD(v49) = -24080;
    HIWORD(v49) = (unsigned int)"t" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v49);
    V_UNLOCK();
    v45 = g_zc;
    v46 = 158;
    goto LABEL_26;
  }
  V_LOCK();
  v15 = json_string_value(v14);
  LOWORD(v16) = -24056;
  HIWORD(v16) = (unsigned int)"%d rate%d.%d" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v16, v15);
  V_UNLOCK();
  LOWORD(v17) = -26764;
  HIWORD(v17) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v17, 149, "_parse_machine", 14, 161, 20, v368);
  LOWORD(v18) = -24040;
  HIWORD(v18) = (unsigned int)"Update parameter failed, freq:%f" >> 16;
  v19 = (_DWORD *)json_object_get(v2, v18);
  v20 = v19;
  if ( !v19 || *v19 != 2 )
  {
    V_LOCK();
    LOWORD(v50) = -24028;
    HIWORD(v50) = (unsigned int)"eter failed, freq:%f" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v50);
    V_UNLOCK();
    v45 = g_zc;
    v46 = 166;
    goto LABEL_26;
  }
  V_LOCK();
  v21 = json_string_value(v20);
  LOWORD(v22) = -24004;
  HIWORD(v22) = (unsigned int)"cannot overclock with freq %d" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v22, v21);
  V_UNLOCK();
  LOWORD(v23) = -26764;
  HIWORD(v23) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v23, 149, "_parse_machine", 14, 169, 20, v368);
  LOWORD(v24) = -23988;
  HIWORD(v24) = (unsigned int)" with freq %d" >> 16;
  v25 = (_DWORD *)json_object_get(v2, v24);
  v26 = v25;
  if ( !v25 || *v25 )
  {
    V_LOCK();
    LOWORD(v196) = -23952;
    HIWORD(v196) = (unsigned int)"ltage %d" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v196);
    V_UNLOCK();
    v197 = g_zc;
    v198 = 181;
LABEL_95:
    LOWORD(v199) = -26764;
    HIWORD(v199) = (unsigned int)"x, reg %02x state %08x" >> 16;
    zlog(v197, v199, 149, "_parse_processor", 16, v198, 100, v368);
    V_LOCK();
    LOWORD(v200) = -23916;
    HIWORD(v200) = (unsigned int)"2x chipid:%d coreid:%d" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v200);
    V_UNLOCK();
    v36 = g_zc;
    v37 = 1502;
    goto LABEL_16;
  }
  V_LOCK();
  LOWORD(v27) = -23928;
  HIWORD(v27) = (unsigned int)"2x%02x%02x%02x chipid:%d coreid:%d" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v27);
  V_UNLOCK();
  LOWORD(v28) = -26764;
  HIWORD(v28) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v28, 149, "_parse_processor", 16, 184, 20, v368);
  LOWORD(v29) = -25976;
  HIWORD(v29) = (unsigned int)"step %f, step_id %d " >> 16;
  v30 = (_DWORD *)json_object_get(v26, v29);
  v31 = v30;
  if ( !v30 || *v30 != 2 )
  {
    V_LOCK();
    LOWORD(v209) = -26604;
    HIWORD(v209) = (unsigned int)"cted diff %d" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v209);
    V_UNLOCK();
    v197 = g_zc;
    v198 = 189;
    goto LABEL_95;
  }
  V_LOCK();
  v32 = json_string_value(v31);
  LOWORD(v33) = -26588;
  HIWORD(v33) = (unsigned int)"hw diff (%d<%d) not reach pool" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v33, v32);
  V_UNLOCK();
  LOWORD(v34) = -26764;
  HIWORD(v34) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v34, 149, "_parse_processor", 16, 192, 20, v368);
  if ( sub_5C570(v2) )
  {
    V_LOCK();
    LOWORD(v35) = -23892;
    HIWORD(v35) = (unsigned int)"get nonce crc error calc value %04x expected value %04x\n" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v35);
    V_UNLOCK();
    v36 = g_zc;
    v37 = 1509;
    goto LABEL_16;
  }
  if ( sub_5CC6C(v2) )
  {
    V_LOCK();
    LOWORD(v43) = -23872;
    HIWORD(v43) = (unsigned int)"calc value %04x expected value %04x\n" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v43);
    V_UNLOCK();
    v36 = g_zc;
    v37 = 1516;
    goto LABEL_16;
  }
  LOWORD(v51) = 588;
  HIWORD(v51) = (unsigned int)": get test = %d" >> 16;
  v52 = (_DWORD *)json_object_get(v2, v51);
  v354 = v52;
  if ( !v52 || *v52 )
  {
    V_LOCK();
    LOWORD(v213) = -23852;
    HIWORD(v213) = (unsigned int)"cted value %04x\n" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v213);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 908;
    goto LABEL_97;
  }
  V_LOCK();
  LOWORD(v53) = -23832;
  HIWORD(v53) = (unsigned int)"top_init_dash" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v53);
  V_UNLOCK();
  LOWORD(v54) = -26764;
  HIWORD(v54) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v54, 149, "_parse_chain", 12, 911, 20, v368);
  LOWORD(v55) = 472;
  HIWORD(v55) = (unsigned int)"3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
  v56 = (_DWORD *)json_object_get(v354, v55);
  v57 = (int)v56;
  if ( !v56 || *v56 != 3 )
  {
    V_LOCK();
    LOWORD(v212) = -23824;
    HIWORD(v212) = (unsigned int)"_dash" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v212);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 916;
    goto LABEL_97;
  }
  V_LOCK();
  v58 = json_integer_value(v57);
  LOWORD(v59) = -23800;
  HIWORD(v59) = (unsigned int)"" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v59, v58);
  V_UNLOCK();
  LOWORD(v60) = -26764;
  HIWORD(v60) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v60, 149, "_parse_chain", 12, 919, 20, v368);
  v61 = json_integer_value(v57);
  dword_18BB70 = v61;
  V_LOCK();
  LOWORD(v62) = -23784;
  HIWORD(v62) = (unsigned int)" set reg %x data %x" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v62, v61);
  V_UNLOCK();
  LOWORD(v63) = -26764;
  HIWORD(v63) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v63, 149, "_alloc_chain", 12, 80, 20, v368);
  dword_18BB90 = (int)calloc(v61, 0x78u);
  if ( !dword_18BB90 )
  {
    V_LOCK();
    LOWORD(v321) = -23768;
    HIWORD(v321) = (unsigned int)" %x" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v321, v61);
    V_UNLOCK();
    LOWORD(v322) = -26764;
    HIWORD(v322) = (unsigned int)"x, reg %02x state %08x" >> 16;
    zlog(g_zc, v322, 149, "_alloc_chain", 12, 85, 100, v368);
    V_LOCK();
    LOWORD(v323) = 7792;
    LOWORD(v324) = 4752;
    HIWORD(v323) = (unsigned int)"8x %08x %08x %08x " >> 16;
    HIWORD(v324) = (unsigned int)&unk_132B50 >> 16;
    logfmt_raw(v368, 0x1000u, 0, v324, v323);
    V_UNLOCK();
    LOWORD(v325) = -26764;
    HIWORD(v325) = (unsigned int)"x, reg %02x state %08x" >> 16;
    zlog(g_zc, v325, 149, "_alloc_chain", 12, 86, 100, v368);
    goto LABEL_98;
  }
  LOWORD(v64) = -23740;
  HIWORD(v64) = (unsigned int)"" >> 16;
  v65 = (_DWORD *)json_object_get(v354, v64);
  v66 = (int)v65;
  if ( !v65 || *v65 != 3 )
  {
    V_LOCK();
    LOWORD(v201) = -23728;
    HIWORD(v201) = (unsigned int)"ask %s core reg %02x tm %d" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v201);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 927;
LABEL_97:
    LOWORD(v204) = -26764;
    HIWORD(v204) = (unsigned int)"x, reg %02x state %08x" >> 16;
    zlog(v202, v204, 149, "_parse_chain", 12, v203, 100, v368);
LABEL_98:
    V_LOCK();
    LOWORD(v205) = -22648;
    HIWORD(v205) = (unsigned int)"h_start_dcr" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v205);
    V_UNLOCK();
    v36 = g_zc;
    v37 = 1524;
LABEL_16:
    LOWORD(v38) = -26764;
    HIWORD(v38) = (unsigned int)"x, reg %02x state %08x" >> 16;
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
  LOWORD(v68) = -23704;
  HIWORD(v68) = (unsigned int)"%d" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v68, v67);
  V_UNLOCK();
  LOWORD(v69) = -26764;
  HIWORD(v69) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v69, 149, "_parse_chain", 12, 930, 20, v368);
  v70 = json_integer_value(v66);
  LOWORD(v71) = -23688;
  dword_18BB74 = v70;
  HIWORD(v71) = (unsigned int)"%02x data %d" >> 16;
  v72 = (_DWORD *)json_object_get(v354, v71);
  v73 = (int)v72;
  if ( !v72 || *v72 != 3 )
  {
    V_LOCK();
    LOWORD(v251) = -23672;
    HIWORD(v251) = (unsigned int)"ChipSetting_software_reset_DCR_1727" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v251);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 936;
    goto LABEL_97;
  }
  V_LOCK();
  v74 = json_integer_value(v73);
  LOWORD(v75) = -23648;
  HIWORD(v75) = (unsigned int)"et_DCR_1727" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v75, v74);
  V_UNLOCK();
  LOWORD(v76) = -26764;
  HIWORD(v76) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v76, 149, "_parse_chain", 12, 939, 20, v368);
  v77 = json_integer_value(v73);
  LOWORD(v78) = -23628;
  dword_18BB78 = v77;
  HIWORD(v78) = (unsigned int)"ing_software_reset_DCR_1727" >> 16;
  v79 = (_DWORD *)json_object_get(v354, v78);
  v80 = (int)v79;
  if ( !v79 || *v79 != 3 )
  {
    V_LOCK();
    LOWORD(v252) = -23608;
    HIWORD(v252) = (unsigned int)"CR_1727" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v252);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 945;
    goto LABEL_97;
  }
  V_LOCK();
  v81 = json_integer_value(v80);
  LOWORD(v82) = -23580;
  HIWORD(v82) = (unsigned int)"ket_mask_DCR_1727" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v82, v81);
  V_UNLOCK();
  LOWORD(v83) = -26764;
  HIWORD(v83) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v83, 149, "_parse_chain", 12, 948, 20, v368);
  v84 = json_integer_value(v80);
  LOWORD(v85) = -23556;
  dword_18BB7C = v84;
  HIWORD(v85) = (unsigned int)"_2_packet_dcr" >> 16;
  v86 = (_DWORD *)json_object_get(v354, v85);
  v87 = (int)v86;
  if ( !v86 || *v86 != 3 )
  {
    V_LOCK();
    LOWORD(v253) = -23540;
    HIWORD(v253) = (unsigned int)"ChipSetting_bridge_reset_DCR_1727" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v253);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 954;
    goto LABEL_97;
  }
  V_LOCK();
  v88 = json_integer_value(v87);
  LOWORD(v89) = -23512;
  HIWORD(v89) = (unsigned int)"_1727" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v89, v88);
  V_UNLOCK();
  LOWORD(v90) = -26764;
  HIWORD(v90) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v90, 149, "_parse_chain", 12, 957, 20, v368);
  v91 = json_integer_value(v87);
  LOWORD(v92) = -23492;
  dword_18BB80 = v91;
  HIWORD(v92) = (unsigned int)"bridge_reset_DCR_1727" >> 16;
  v93 = (_DWORD *)json_object_get(v354, v92);
  v94 = (int)v93;
  if ( !v93 || *v93 != 3 )
  {
    V_LOCK();
    LOWORD(v254) = -23476;
    HIWORD(v254) = (unsigned int)"_1727" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v254);
    V_UNLOCK();
    v202 = g_zc;
    v203 = 963;
    goto LABEL_97;
  }
  V_LOCK();
  v95 = json_integer_value(v94);
  LOWORD(v96) = -23448;
  HIWORD(v96) = (unsigned int)"ChipSetting_freq_DCR_1727" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v96, v95);
  V_UNLOCK();
  LOWORD(v97) = -26764;
  HIWORD(v97) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v97, 149, "_parse_chain", 12, 966, 20, v368);
  v98 = json_integer_value(v94);
  LOWORD(v99) = -23424;
  dword_18BB84 = v98;
  HIWORD(v99) = (unsigned int)"7" >> 16;
  v100 = (_DWORD *)json_object_get(v354, v99);
  v101 = v100;
  if ( !v100 || (unsigned int)(*v100 - 5) > 1 )
  {
    V_LOCK();
    LOWORD(v259) = -23412;
    HIWORD(v259) = (unsigned int)"ing_analog_mux_DCR_1727" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v259);
    V_UNLOCK();
    v256 = 972;
    goto LABEL_135;
  }
  V_LOCK();
  v102 = "false";
  LOWORD(v103) = -23388;
  if ( *v101 == 5 )
    v102 = "true";
  HIWORD(v103) = (unsigned int)"read_temperature_dcr" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v103, v102);
  V_UNLOCK();
  LOWORD(v104) = -26764;
  HIWORD(v104) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v104, 149, "_parse_chain", 12, 975, 20, v368);
  byte_18BB88 = *v101 == 5;
  v105 = (_DWORD *)json_object_get(v354, "sensor_mode");
  v106 = (int)v105;
  if ( !v105 || *v105 != 3 )
  {
    V_LOCK();
    LOWORD(v258) = -23360;
    HIWORD(v258) = (unsigned int)"Setting_clock_delay_DCR_1727" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v258);
    V_UNLOCK();
    v256 = 981;
    goto LABEL_135;
  }
  V_LOCK();
  v107 = json_integer_value(v106);
  LOWORD(v108) = -23336;
  HIWORD(v108) = (unsigned int)"1727" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v108, v107);
  V_UNLOCK();
  LOWORD(v109) = -26764;
  HIWORD(v109) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v109, 149, "_parse_chain", 12, 984, 20, v368);
  *(_DWORD *)(dword_18BB90 + 88) = json_integer_value(v106);
  v110 = (_DWORD *)json_object_get(v354, "sensor_num");
  v111 = (int)v110;
  if ( !v110 || *v110 != 3 )
  {
    V_LOCK();
    LOWORD(v255) = -23304;
    HIWORD(v255) = (unsigned int)"CR_1727" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v255);
    V_UNLOCK();
    v256 = 990;
LABEL_135:
    LOWORD(v257) = -26764;
    HIWORD(v257) = (unsigned int)"x, reg %02x state %08x" >> 16;
    zlog(g_zc, v257, 149, "_parse_chain", 12, v256, 100, v368);
    goto LABEL_98;
  }
  V_LOCK();
  v112 = json_integer_value(v111);
  LOWORD(v113) = -23280;
  HIWORD(v113) = (unsigned int)"e_counter_DCR_1727" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v113, v112);
  V_UNLOCK();
  LOWORD(v114) = -26764;
  HIWORD(v114) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v114, 149, "_parse_chain", 12, 993, 20, v368);
  v115 = json_integer_value(v111);
  v116 = dword_18BB90;
  *(_DWORD *)(dword_18BB90 + 92) = v115;
  v117 = calloc(v115, 0x18u);
  *(_DWORD *)(v116 + 84) = v117;
  if ( !v117 )
  {
    V_LOCK();
    logfmt_raw(v368, 0x1000u, 0, "calloc sensor failed!");
    V_UNLOCK();
    LOWORD(v351) = -26764;
    HIWORD(v351) = (unsigned int)"x, reg %02x state %08x" >> 16;
    zlog(g_zc, v351, 149, "_alloc_sensor", 13, 97, 100, v368);
    goto LABEL_98;
  }
  LOWORD(v118) = -23240;
  HIWORD(v118) = (unsigned int)"ck_count_DCR_1727" >> 16;
  v119 = (_DWORD *)json_object_get(v354, v118);
  v120 = (int)v119;
  if ( !v119 || *v119 != 3 )
  {
    V_LOCK();
    LOWORD(v320) = -23224;
    HIWORD(v320) = (unsigned int)"7" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v320);
    V_UNLOCK();
    v256 = 1001;
    goto LABEL_135;
  }
  V_LOCK();
  v121 = json_integer_value(v120);
  LOWORD(v122) = -23196;
  HIWORD(v122) = (unsigned int)"727" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v122, v121);
  V_UNLOCK();
  LOWORD(v123) = -26764;
  HIWORD(v123) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v123, 149, "_parse_chain", 12, 1004, 20, v368);
  *(_DWORD *)(dword_18BB90 + 96) = json_integer_value(v120);
  v124 = (_DWORD *)json_object_get(v354, "max_pcb_temp");
  v125 = (int)v124;
  if ( !v124 || *v124 != 3 )
  {
    V_LOCK();
    LOWORD(v319) = -23160;
    HIWORD(v319) = (unsigned int)"ChipSetting_io_cfg_DCR_1727" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v319);
    V_UNLOCK();
    v256 = 1010;
    goto LABEL_135;
  }
  V_LOCK();
  v126 = json_integer_value(v125);
  LOWORD(v127) = -23136;
  HIWORD(v127) = (unsigned int)"727" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v127, v126);
  V_UNLOCK();
  LOWORD(v128) = -26764;
  HIWORD(v128) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v128, 149, "_parse_chain", 12, 1013, 20, v368);
  *(_DWORD *)(dword_18BB90 + 100) = json_integer_value(v125);
  v129 = (_DWORD *)json_object_get(v354, "min_pcb_temp");
  v130 = (int)v129;
  if ( !v129 || *v129 != 3 )
  {
    V_LOCK();
    LOWORD(v331) = -23100;
    HIWORD(v331) = (unsigned int)"ChipSetting_get_addr_DCR_1727" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v331);
    V_UNLOCK();
    v256 = 1019;
    goto LABEL_135;
  }
  V_LOCK();
  v131 = json_integer_value(v130);
  LOWORD(v132) = -23076;
  HIWORD(v132) = (unsigned int)"_1727" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v132, v131);
  V_UNLOCK();
  LOWORD(v133) = -26764;
  HIWORD(v133) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v133, 149, "_parse_chain", 12, 1022, 20, v368);
  *(_DWORD *)(dword_18BB90 + 104) = json_integer_value(v130);
  v134 = (_DWORD *)json_object_get(v354, "max_uneffective_count");
  v135 = (int)v134;
  if ( !v134 || *v134 != 3 )
  {
    V_LOCK();
    LOWORD(v330) = -23032;
    HIWORD(v330) = (unsigned int)"et_2_nonce_dcr" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v330);
    V_UNLOCK();
    v256 = 1028;
    goto LABEL_135;
  }
  V_LOCK();
  v136 = json_integer_value(v135);
  LOWORD(v137) = -22996;
  HIWORD(v137) = (unsigned int)"sor_temp_local_on_pic_DCR_1727" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v137, v136);
  V_UNLOCK();
  LOWORD(v138) = -26764;
  HIWORD(v138) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v138, 149, "_parse_chain", 12, 1031, 20, v368);
  *(_DWORD *)(dword_18BB90 + 108) = json_integer_value(v135);
  v353 = sub_5DB0C(v354);
  if ( v353 )
  {
    V_LOCK();
    LOWORD(v352) = -22968;
    HIWORD(v352) = (unsigned int)"27" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v352);
    V_UNLOCK();
    v261 = 1037;
    goto LABEL_140;
  }
  if ( byte_18BB88 && sub_5E2DC(v354) )
  {
    V_LOCK();
    LOWORD(v260) = -22948;
    HIWORD(v260) = (unsigned int)"_sensor_temp_remote_on_pic_DCR_1727" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v260);
    V_UNLOCK();
    v261 = 1045;
LABEL_140:
    LOWORD(v262) = -26764;
    HIWORD(v262) = (unsigned int)"x, reg %02x state %08x" >> 16;
    zlog(g_zc, v262, 149, "_parse_chain", 12, v261, 100, v368);
    goto LABEL_98;
  }
  v139 = *(_DWORD *)(dword_18BB90 + 88);
  if ( v139 == 3 )
  {
    LOWORD(v263) = -22924;
    HIWORD(v263) = (unsigned int)"ic_DCR_1727" >> 16;
    v264 = (_DWORD *)json_object_get(v354, v263);
    v364 = v264;
    if ( !v264 || *v264 != 1 )
    {
      V_LOCK();
      LOWORD(v350) = -22904;
      HIWORD(v350) = (unsigned int)"ing_read_sensor_temp_local_on_ctrlboard_DCR_1727" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v350);
      V_UNLOCK();
      v342 = 640;
LABEL_187:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        v342,
        100,
        v368);
      V_LOCK();
      LOWORD(v343) = -22848;
      HIWORD(v343) = (unsigned int)"Setting_read_sensor_temp_local_on_ctrlboard_DCR_1727" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v343);
      V_UNLOCK();
      v256 = 1054;
      goto LABEL_135;
    }
    V_LOCK();
    LOWORD(v265) = -22868;
    HIWORD(v265) = (unsigned int)"ard_DCR_1727" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v265);
    V_UNLOCK();
    LOWORD(v266) = -24440;
    HIWORD(v266) = (unsigned int)"_mode_dash" >> 16;
    LOWORD(v267) = -26764;
    HIWORD(v267) = (unsigned int)"x, reg %02x state %08x" >> 16;
    v366 = v266;
    zlog(g_zc, v267, 149, "_parse_chain_ctrlboard_sensor", 29, 643, 20, v368);
    v361 = v2;
    for ( i = 0; i < (unsigned int)json_array_size(v364); ++i )
    {
      v268 = json_array_get(v364, i);
      v269 = v268;
      if ( !v268 || *v268 )
      {
        v2 = v361;
        V_LOCK();
        LOWORD(v344) = -25376;
        HIWORD(v344) = (unsigned int)"_DASH_1766" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v344, i);
        V_UNLOCK();
        v342 = 650;
        goto LABEL_187;
      }
      v270 = (_DWORD *)json_object_get(v268, "index");
      v271 = (int)v270;
      if ( !v270 || *v270 != 3 )
      {
        v2 = v361;
        V_LOCK();
        LOWORD(v341) = -24468;
        HIWORD(v341) = (unsigned int)"set_core_mode_dash" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v341, i);
        V_UNLOCK();
        v342 = 657;
        goto LABEL_187;
      }
      V_LOCK();
      v272 = json_integer_value(v271);
      logfmt_raw(v368, 0x1000u, 0, v366, v272);
      V_UNLOCK();
      LOWORD(v273) = -26764;
      HIWORD(v273) = (unsigned int)"x, reg %02x state %08x" >> 16;
      zlog(g_zc, v273, 149, "_parse_chain_ctrlboard_sensor", 29, 660, 20, v368);
      v274 = json_integer_value(v271);
      v275 = *(_DWORD *)(dword_18BB90 + 84);
      *(_DWORD *)(v275 + 24 * v274) = v274;
      v276 = (_DWORD *)(v275 + 24 * v274);
      v276[2] = 2;
      v277 = (_DWORD *)json_object_get(v269, "type");
      v278 = v277;
      if ( !v277 || *v277 != 2 )
      {
        v2 = v361;
        V_LOCK();
        LOWORD(v348) = -24428;
        HIWORD(v348) = (unsigned int)"dash" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v348, i);
        V_UNLOCK();
        v342 = 669;
        goto LABEL_187;
      }
      V_LOCK();
      v279 = json_string_value(v278);
      LOWORD(v280) = -26588;
      HIWORD(v280) = (unsigned int)"hw diff (%d<%d) not reach pool" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v280, v279);
      V_UNLOCK();
      LOWORD(v281) = -26764;
      HIWORD(v281) = (unsigned int)"x, reg %02x state %08x" >> 16;
      zlog(g_zc, v281, 149, "_parse_chain_ctrlboard_sensor", 29, 672, 20, v368);
      v282 = (const char *)json_string_value(v278);
      LOWORD(v283) = -24400;
      v284 = v282;
      HIWORD(v283) = (unsigned int)"a init %p" >> 16;
      v285 = strcmp(v282, v283);
      if ( v285 )
      {
        LOWORD(v286) = -24392;
        HIWORD(v286) = (unsigned int)"p" >> 16;
        if ( !strcmp(v284, v286) )
        {
          v285 = 1;
        }
        else
        {
          LOWORD(v287) = -24384;
          HIWORD(v287) = (unsigned int)"kspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
          if ( !strcmp(v284, v287) )
            v285 = 2;
          else
            v285 = 3;
        }
      }
      LOWORD(v288) = -24376;
      v276[1] = v285;
      HIWORD(v288) = (unsigned int)"enkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
      v289 = (_DWORD *)json_object_get(v269, v288);
      v290 = (int)v289;
      if ( !v289 || *v289 != 3 )
      {
        v2 = v361;
        V_LOCK();
        LOWORD(v347) = -24372;
        HIWORD(v347) = (unsigned int)"ns/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v347, i);
        V_UNLOCK();
        v342 = 678;
        goto LABEL_187;
      }
      V_LOCK();
      v291 = json_integer_value(v290);
      LOWORD(v292) = -24340;
      HIWORD(v292) = (unsigned int)"3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v292, v291);
      V_UNLOCK();
      LOWORD(v293) = -26764;
      HIWORD(v293) = (unsigned int)"x, reg %02x state %08x" >> 16;
      zlog(g_zc, v293, 149, "_parse_chain_ctrlboard_sensor", 29, 681, 20, v368);
      v294 = json_integer_value(v290);
      LOWORD(v295) = 18112;
      v276[5] = v294;
      HIWORD(v295) = (unsigned int)"ork mode freq, chain = %d." >> 16;
      v296 = (_DWORD *)json_object_get(v269, v295);
      v297 = v296;
      if ( !v296 || *v296 != 2 )
      {
        v2 = v361;
        V_LOCK();
        LOWORD(v346) = -24332;
        HIWORD(v346) = (unsigned int)"e/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v346, i);
        V_UNLOCK();
        v342 = 687;
        goto LABEL_187;
      }
      V_LOCK();
      v298 = json_string_value(v297);
      LOWORD(v299) = -24308;
      HIWORD(v299) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v299, v298);
      V_UNLOCK();
      LOWORD(v300) = -26764;
      HIWORD(v300) = (unsigned int)"x, reg %02x state %08x" >> 16;
      v301 = 0;
      v302 = off_149634;
      zlog(g_zc, v300, 149, "_parse_chain_ctrlboard_sensor", 29, 690, 20, v368);
      v303 = (const char *)json_string_value(v297);
      LOWORD(v305) = -24608;
      v304 = v303;
      HIWORD(v305) = (unsigned int)"SH_1766" >> 16;
      while ( strcmp(v304, v305) )
      {
        v306 = *v302++;
        v305 = v306;
        ++v301;
      }
      LOWORD(v307) = 13836;
      v308 = 0;
      v276[3] = v301;
      HIWORD(v307) = (unsigned int)"xn2_size=%d" >> 16;
      v309 = (_DWORD *)json_object_get(v269, v307);
      v310 = v309;
      if ( !v309 || *v309 != 2 )
      {
        v2 = v361;
        V_LOCK();
        LOWORD(v349) = -24300;
        HIWORD(v349) = (unsigned int)"ease/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v349, i);
        V_UNLOCK();
        v342 = 696;
        goto LABEL_187;
      }
      V_LOCK();
      v311 = json_string_value(v310);
      LOWORD(v312) = -24276;
      HIWORD(v312) = (unsigned int)"in_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v312, v311);
      V_UNLOCK();
      LOWORD(v313) = -26764;
      HIWORD(v313) = (unsigned int)"x, reg %02x state %08x" >> 16;
      v314 = (const char **)&unk_149654;
      zlog(g_zc, v313, 149, "_parse_chain_ctrlboard_sensor", 29, 699, 20, v368);
      v315 = (const char *)json_string_value(v310);
      LOWORD(v317) = -24600;
      v316 = v315;
      HIWORD(v317) = (unsigned int)"top_init_dash" >> 16;
      while ( strcmp(v316, v317) )
      {
        v318 = *v314++;
        v317 = v318;
        ++v308;
      }
      v276[4] = v308;
    }
    v2 = v361;
    v139 = *(_DWORD *)(dword_18BB90 + 88);
  }
  if ( (v139 & 0xFFFFFFFD) == 0 )
  {
    LOWORD(v140) = -22816;
    HIWORD(v140) = (unsigned int)"n_ctrlboard_DCR_1727" >> 16;
    v141 = (_DWORD *)json_object_get(v354, v140);
    v359 = v141;
    if ( v141 && *v141 == 1 )
    {
      V_LOCK();
      LOWORD(v142) = -22784;
      HIWORD(v142) = (unsigned int)"ing_read_sensor_temp_remote_on_ctrlboard_DCR_1727" >> 16;
      v356 = 0;
      logfmt_raw(v368, 0x1000u, 0, v142);
      V_UNLOCK();
      LOWORD(v143) = -26764;
      HIWORD(v143) = (unsigned int)"x, reg %02x state %08x" >> 16;
      zlog(g_zc, v143, 149, "_parse_chain_sensor", 19, 802, 20, v368);
      LOWORD(v144) = -24440;
      HIWORD(v144) = (unsigned int)"_mode_dash" >> 16;
      v362 = v2;
      v365 = v144;
      while ( 1 )
      {
        if ( v356 >= (unsigned int)json_array_size(v359) )
        {
          v2 = v362;
          goto LABEL_105;
        }
        v145 = json_array_get(v359, v356);
        v146 = v145;
        if ( !v145 || *v145 )
          break;
        v147 = (_DWORD *)json_object_get(v145, "index");
        v148 = (int)v147;
        if ( !v147 || *v147 != 3 )
        {
          v2 = v362;
          V_LOCK();
          LOWORD(v338) = -24468;
          HIWORD(v338) = (unsigned int)"set_core_mode_dash" >> 16;
          logfmt_raw(v368, 0x1000u, 0, v338, v356);
          V_UNLOCK();
          v333 = 817;
          goto LABEL_179;
        }
        V_LOCK();
        v149 = json_integer_value(v148);
        logfmt_raw(v368, 0x1000u, 0, v365, v149);
        V_UNLOCK();
        LOWORD(v150) = -26764;
        HIWORD(v150) = (unsigned int)"x, reg %02x state %08x" >> 16;
        zlog(g_zc, v150, 149, "_parse_chain_sensor", 19, 820, 20, v368);
        v151 = json_integer_value(v148);
        v152 = *(_DWORD *)(dword_18BB90 + 84);
        *(_DWORD *)(v152 + 24 * v151) = v151;
        v153 = (_DWORD *)(v152 + 24 * v151);
        v153[2] = 1;
        v154 = (_DWORD *)json_object_get(v146, "type");
        v155 = v154;
        if ( !v154 || *v154 != 2 )
        {
          v2 = v362;
          V_LOCK();
          LOWORD(v337) = -24428;
          HIWORD(v337) = (unsigned int)"dash" >> 16;
          logfmt_raw(v368, 0x1000u, 0, v337, v356);
          V_UNLOCK();
          v333 = 829;
          goto LABEL_179;
        }
        V_LOCK();
        v156 = json_string_value(v155);
        LOWORD(v157) = -26588;
        HIWORD(v157) = (unsigned int)"hw diff (%d<%d) not reach pool" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v157, v156);
        V_UNLOCK();
        LOWORD(v158) = -26764;
        HIWORD(v158) = (unsigned int)"x, reg %02x state %08x" >> 16;
        zlog(g_zc, v158, 149, "_parse_chain_sensor", 19, 832, 20, v368);
        v159 = (const char *)json_string_value(v155);
        LOWORD(v160) = -24400;
        v161 = v159;
        HIWORD(v160) = (unsigned int)"a init %p" >> 16;
        v162 = strcmp(v159, v160);
        if ( v162 )
        {
          LOWORD(v163) = -24392;
          HIWORD(v163) = (unsigned int)"p" >> 16;
          if ( !strcmp(v161, v163) )
          {
            v162 = 1;
          }
          else
          {
            LOWORD(v164) = -24384;
            HIWORD(v164) = (unsigned int)"kspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
            if ( !strcmp(v161, v164) )
              v162 = 2;
            else
              v162 = 3;
          }
        }
        LOWORD(v165) = -22768;
        v153[1] = v162;
        HIWORD(v165) = (unsigned int)"temp_remote_on_ctrlboard_DCR_1727" >> 16;
        v166 = (_DWORD *)json_object_get(v146, v165);
        v167 = (int)v166;
        if ( !v166 || *v166 != 3 )
        {
          v2 = v362;
          V_LOCK();
          LOWORD(v336) = -24372;
          HIWORD(v336) = (unsigned int)"ns/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
          logfmt_raw(v368, 0x1000u, 0, v336, v356);
          V_UNLOCK();
          v333 = 838;
          goto LABEL_179;
        }
        V_LOCK();
        v168 = json_integer_value(v167);
        LOWORD(v169) = -22756;
        HIWORD(v169) = (unsigned int)"on_ctrlboard_DCR_1727" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v169, v168);
        V_UNLOCK();
        LOWORD(v170) = -26764;
        HIWORD(v170) = (unsigned int)"x, reg %02x state %08x" >> 16;
        zlog(g_zc, v170, 149, "_parse_chain_sensor", 19, 841, 20, v368);
        v171 = json_integer_value(v167);
        LOWORD(v172) = 18112;
        v153[5] = v171;
        HIWORD(v172) = (unsigned int)"ork mode freq, chain = %d." >> 16;
        v173 = (_DWORD *)json_object_get(v146, v172);
        v174 = v173;
        if ( !v173 || *v173 != 2 )
        {
          v2 = v362;
          V_LOCK();
          LOWORD(v335) = -24332;
          HIWORD(v335) = (unsigned int)"e/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
          logfmt_raw(v368, 0x1000u, 0, v335, v356);
          V_UNLOCK();
          v333 = 847;
          goto LABEL_179;
        }
        V_LOCK();
        v175 = json_string_value(v174);
        LOWORD(v176) = -24308;
        HIWORD(v176) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v176, v175);
        V_UNLOCK();
        LOWORD(v177) = -26764;
        HIWORD(v177) = (unsigned int)"x, reg %02x state %08x" >> 16;
        v178 = 0;
        v179 = off_149634;
        zlog(g_zc, v177, 149, "_parse_chain_sensor", 19, 850, 20, v368);
        v180 = (const char *)json_string_value(v174);
        LOWORD(v182) = -24608;
        v181 = v180;
        HIWORD(v182) = (unsigned int)"SH_1766" >> 16;
        while ( strcmp(v181, v182) )
        {
          v183 = *v179++;
          v182 = v183;
          ++v178;
        }
        LOWORD(v184) = 13836;
        v185 = 0;
        v153[3] = v178;
        HIWORD(v184) = (unsigned int)"xn2_size=%d" >> 16;
        v186 = (_DWORD *)json_object_get(v146, v184);
        v187 = v186;
        if ( !v186 || *v186 != 2 )
        {
          v2 = v362;
          V_LOCK();
          LOWORD(v332) = -24300;
          HIWORD(v332) = (unsigned int)"ease/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
          logfmt_raw(v368, 0x1000u, 0, v332, v356);
          V_UNLOCK();
          v333 = 856;
          goto LABEL_179;
        }
        V_LOCK();
        v188 = json_string_value(v187);
        LOWORD(v189) = -24276;
        HIWORD(v189) = (unsigned int)"in_godminer-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
        logfmt_raw(v368, 0x1000u, 0, v189, v188);
        V_UNLOCK();
        LOWORD(v190) = -26764;
        HIWORD(v190) = (unsigned int)"x, reg %02x state %08x" >> 16;
        v191 = (const char **)&unk_149654;
        zlog(g_zc, v190, 149, "_parse_chain_sensor", 19, 859, 20, v368);
        v192 = (const char *)json_string_value(v187);
        LOWORD(v194) = -24600;
        v193 = v192;
        HIWORD(v194) = (unsigned int)"top_init_dash" >> 16;
        while ( strcmp(v193, v194) )
        {
          v195 = *v191++;
          v194 = v195;
          ++v185;
        }
        v153[4] = v185;
        ++v356;
      }
      v2 = v362;
      V_LOCK();
      LOWORD(v339) = -25376;
      HIWORD(v339) = (unsigned int)"_DASH_1766" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v339, v356);
      V_UNLOCK();
      v333 = 810;
    }
    else
    {
      V_LOCK();
      LOWORD(v340) = -22804;
      HIWORD(v340) = (unsigned int)"DCR_1727" >> 16;
      logfmt_raw(v368, 0x1000u, 0, v340);
      V_UNLOCK();
      v333 = 799;
    }
LABEL_179:
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
    LOWORD(v334) = -22740;
    HIWORD(v334) = (unsigned int)"_1727" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v334);
    V_UNLOCK();
    v256 = 1064;
    goto LABEL_135;
  }
LABEL_105:
  LOWORD(v214) = -22712;
  v215 = v354;
  HIWORD(v214) = (unsigned int)"g_DCR_1727" >> 16;
  v355 = dword_18BB70;
  v216 = (_DWORD *)json_object_get(v215, v214);
  v357 = v216;
  if ( !v216 || (v217 = *v216) != 0 )
  {
    V_LOCK();
    LOWORD(v345) = -22704;
    HIWORD(v345) = (unsigned int)"27" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v345);
    V_UNLOCK();
    v327 = 760;
    goto LABEL_174;
  }
  V_LOCK();
  LOWORD(v218) = -22684;
  HIWORD(v218) = (unsigned int)"_ctrl_DCR_1727" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v218);
  V_UNLOCK();
  LOWORD(v219) = -26764;
  HIWORD(v219) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v219, 149, "_parse_chain_eeprom", 19, 763, 20, v368);
  LOWORD(v220) = -25976;
  HIWORD(v220) = (unsigned int)"step %f, step_id %d " >> 16;
  v221 = (_DWORD *)json_object_get(v357, v220);
  v360 = v221;
  if ( !v221 || *v221 != 2 )
  {
    V_LOCK();
    LOWORD(v329) = -26604;
    HIWORD(v329) = (unsigned int)"cted diff %d" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v329);
    V_UNLOCK();
    v327 = 768;
    goto LABEL_174;
  }
  V_LOCK();
  v222 = json_string_value(v360);
  LOWORD(v223) = -26588;
  HIWORD(v223) = (unsigned int)"hw diff (%d<%d) not reach pool" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v223, v222);
  V_UNLOCK();
  LOWORD(v224) = -26764;
  HIWORD(v224) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v224, 149, "_parse_chain_eeprom", 19, 771, 20, v368);
  if ( v355 > 0 )
  {
    LOWORD(v225) = -24268;
    v363 = v2;
    HIWORD(v225) = (unsigned int)"ner-new/backend/backend_dash_1766/backend_dash_1766.c" >> 16;
    v226 = 0;
    v227 = v225;
    do
    {
      v228 = off_149720;
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
      v233 = dword_18BB90 + v226;
      v226 += 120;
      *(_DWORD *)(v233 + 112) = v229;
    }
    while ( v355 != v217 );
    v2 = v363;
  }
  LOWORD(v234) = -26296;
  HIWORD(v234) = (unsigned int)"B1C1" >> 16;
  v235 = (_DWORD *)json_object_get(v357, v234);
  v236 = (int)v235;
  if ( !v235 || *v235 != 3 )
  {
    V_LOCK();
    LOWORD(v326) = -26284;
    HIWORD(v326) = (unsigned int)"" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v326);
    V_UNLOCK();
    v327 = 780;
LABEL_174:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_eeprom",
      19,
      v327,
      100,
      v368);
    V_LOCK();
    LOWORD(v328) = -22676;
    HIWORD(v328) = (unsigned int)"R_1727" >> 16;
    logfmt_raw(v368, 0x1000u, 0, v328);
    V_UNLOCK();
    v256 = 1072;
    goto LABEL_135;
  }
  V_LOCK();
  v237 = json_integer_value(v236);
  LOWORD(v238) = -26264;
  HIWORD(v238) = (unsigned int)"pic temp write iic error! chain %d iic_addr %d" >> 16;
  logfmt_raw(v368, 0x1000u, 0, v238, v237);
  V_UNLOCK();
  LOWORD(v239) = -26764;
  HIWORD(v239) = (unsigned int)"x, reg %02x state %08x" >> 16;
  zlog(g_zc, v239, 149, "_parse_chain_eeprom", 19, 783, 20, v368);
  if ( v355 > 0 )
  {
    v240 = 0;
    v241 = 0;
    do
    {
      ++v240;
      v242 = json_integer_value(v236);
      v243 = dword_18BB90 + v241;
      v241 += 120;
      *(_DWORD *)(v243 + 116) = v242;
    }
    while ( v355 != v240 );
  }
  v244 = dword_18BB70;
  if ( dword_18BB70 > 1 )
  {
    v245 = 120;
    v246 = 1;
    do
    {
      ++v246;
      v247 = (void *)(dword_18BB90 + v245);
      v245 += 120;
      memcpy(v247, (const void *)dword_18BB90, 0x78u);
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
