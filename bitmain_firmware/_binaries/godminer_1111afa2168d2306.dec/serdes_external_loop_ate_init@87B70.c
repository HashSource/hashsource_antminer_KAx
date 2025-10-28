int __fastcall serdes_external_loop_ate_init(int a1, unsigned int a2, unsigned int a3)
{
  FILE *v3; // r6
  int v4; // r7
  char *v7; // r1
  _DWORD *v8; // r12
  int v9; // r7
  int v10; // r1
  int v11; // r3
  int v12; // r1
  int v13; // r3
  const char *v14; // r7
  const char *v15; // r9
  char *v16; // r3
  char *v17; // r0
  const char *v18; // r1
  int v19; // r3
  int v20; // r0
  int v21; // r2
  int v22; // r1
  char *v23; // r0
  const char *v24; // r1
  int v25; // r3
  char *v26; // r1
  int v27; // r1
  char *v28; // r1
  int v29; // lr
  int v30; // r1
  char *v31; // r1
  int v32; // r1
  char *v33; // r1
  int v34; // lr
  int v35; // r1
  char *v36; // r1
  int v37; // r1
  __int16 v38; // r6
  char *v39; // r1
  int v40; // r1
  char *v41; // r1
  int v42; // r1
  int v43; // r6
  int v44; // r3
  char *v45; // r1
  char *v46; // r1
  int v47; // r1
  int v48; // r7
  char *v49; // r1
  int v50; // r1
  char *v51; // r1
  int v52; // r1
  int v53; // r8
  int v54; // r3
  char *v55; // r1
  char *v56; // r1
  char *v57; // r1
  int v58; // lr
  char *v59; // r1
  char *v60; // r1
  int v61; // lr
  char *v62; // r1
  char *v63; // r1
  int v64; // lr
  char *v65; // r1
  char *v66; // r1
  int v67; // lr
  char *v68; // r1
  char *v69; // r1
  int v70; // lr
  char *v71; // r1
  char *v72; // r1
  int v73; // lr
  char *v74; // r1
  char *v75; // r1
  int v76; // lr
  char *v77; // r1
  char *v78; // r1
  int v79; // lr
  int v80; // r1
  char *v81; // r1
  int v82; // r1
  char *v83; // r1
  int v84; // r1
  int v85; // r3
  char *v86; // r1
  char *v87; // r1
  int v88; // lr
  char *v89; // r1
  int v90; // r1
  char *v91; // r1
  int v92; // lr
  int v93; // r1
  char *v94; // r1
  int v95; // r1
  char *v96; // r1
  int v97; // lr
  int v98; // r1
  char *v99; // r1
  int v100; // r1
  char *v101; // r1
  int v102; // lr
  int v103; // r1
  char *v104; // r1
  int v105; // r1
  int v106; // r6
  char *v107; // r1
  int v108; // lr
  int v109; // r1
  char *v110; // r1
  int v111; // r1
  char *v112; // r1
  int v113; // lr
  int v114; // r1
  char *v115; // r1
  int v116; // r1
  char *v117; // r1
  int v118; // lr
  int v119; // r1
  char *v120; // r1
  int v121; // r1
  char *v122; // r1
  int v123; // lr
  int v124; // r7
  int v125; // r1
  char *v126; // r1
  int v127; // r1
  char *v128; // r1
  char *v129; // r1
  char *v130; // r1
  int v131; // lr
  char *v132; // r1
  char *v133; // r1
  int v134; // r6
  char *v135; // r1
  int v136; // r3
  char *v137; // r1
  char *v138; // r1
  int v139; // lr
  char *v140; // r1
  int v141; // r8
  char *v142; // r1
  char *v143; // r1
  char *v145; // r0
  const char *v146; // r1
  int v147; // r3
  const char *v148; // r1
  char *v149; // r0
  const char *v150; // r1
  int v151; // r3
  char *v152; // r1
  int v153; // r6
  int v154; // r1
  int v155; // r3
  int v156; // r3
  int v157; // r1
  int v158; // r1
  int v159; // r0
  int v160; // r0
  int v161; // r1
  int v162; // r0
  int v163; // r0
  int v164; // r1
  int v165; // r0
  int v166; // r0
  int v167; // r1
  int v168; // r0
  int v169; // r0
  int v170; // r1
  int v171; // r0
  int v172; // r0
  int v173; // r1
  int v174; // r0
  int v175; // r0
  int v176; // r1
  int v177; // r0
  int v178; // r0
  int v179; // r1
  int v180; // r0
  int v181; // r0
  int v182; // r1
  int v183; // r0
  int v184; // r0
  int v185; // r1
  int v186; // r0
  int v187; // r1
  int v188; // r0
  const char *v189; // r1
  char *v190; // r0
  const char *v191; // r1
  int v192; // r3
  char *v193; // r1
  char *needle; // [sp+3Ch] [bp-14h]
  int v196; // [sp+48h] [bp-8h] BYREF
  char v197[4]; // [sp+4Ch] [bp-4h] BYREF
  _DWORD v198[7]; // [sp+70h] [bp+20h] BYREF
  int v199; // [sp+8Ch] [bp+3Ch]
  _DWORD v200[7]; // [sp+90h] [bp+40h] BYREF
  int v201; // [sp+ACh] [bp+5Ch]
  _DWORD v202[7]; // [sp+B0h] [bp+60h] BYREF
  int v203; // [sp+CCh] [bp+7Ch]
  _DWORD v204[7]; // [sp+D0h] [bp+80h] BYREF
  int v205; // [sp+ECh] [bp+9Ch]
  _DWORD v206[7]; // [sp+F0h] [bp+A0h] BYREF
  int v207; // [sp+10Ch] [bp+BCh]
  _DWORD v208[7]; // [sp+110h] [bp+C0h] BYREF
  int v209; // [sp+12Ch] [bp+DCh]
  _DWORD v210[7]; // [sp+130h] [bp+E0h] BYREF
  int v211; // [sp+14Ch] [bp+FCh]
  _DWORD v212[7]; // [sp+150h] [bp+100h] BYREF
  int v213; // [sp+16Ch] [bp+11Ch]
  _DWORD v214[7]; // [sp+170h] [bp+120h] BYREF
  int v215; // [sp+18Ch] [bp+13Ch]
  _DWORD v216[7]; // [sp+190h] [bp+140h] BYREF
  int v217; // [sp+1ACh] [bp+15Ch]
  _DWORD v218[7]; // [sp+1B0h] [bp+160h] BYREF
  int v219; // [sp+1CCh] [bp+17Ch]
  _DWORD v220[7]; // [sp+1D0h] [bp+180h] BYREF
  int v221; // [sp+1ECh] [bp+19Ch]
  _DWORD v222[7]; // [sp+1F0h] [bp+1A0h] BYREF
  int v223; // [sp+20Ch] [bp+1BCh]
  _DWORD v224[7]; // [sp+210h] [bp+1C0h] BYREF
  int v225; // [sp+22Ch] [bp+1DCh]
  _DWORD v226[7]; // [sp+230h] [bp+1E0h] BYREF
  int v227; // [sp+24Ch] [bp+1FCh]
  _DWORD v228[7]; // [sp+250h] [bp+200h] BYREF
  int v229; // [sp+26Ch] [bp+21Ch]
  _DWORD v230[7]; // [sp+270h] [bp+220h] BYREF
  int v231; // [sp+28Ch] [bp+23Ch]
  _DWORD v232[7]; // [sp+290h] [bp+240h] BYREF
  int v233; // [sp+2ACh] [bp+25Ch]
  _DWORD v234[7]; // [sp+2B0h] [bp+260h] BYREF
  int v235; // [sp+2CCh] [bp+27Ch]
  _DWORD v236[7]; // [sp+2D0h] [bp+280h] BYREF
  int v237; // [sp+2ECh] [bp+29Ch]
  _DWORD v238[7]; // [sp+2F0h] [bp+2A0h] BYREF
  int v239; // [sp+30Ch] [bp+2BCh]
  _DWORD v240[7]; // [sp+310h] [bp+2C0h] BYREF
  int v241; // [sp+32Ch] [bp+2DCh]
  _DWORD v242[7]; // [sp+330h] [bp+2E0h] BYREF
  int v243; // [sp+34Ch] [bp+2FCh]
  _DWORD v244[7]; // [sp+350h] [bp+300h] BYREF
  int v245; // [sp+36Ch] [bp+31Ch]
  _DWORD v246[7]; // [sp+370h] [bp+320h] BYREF
  int v247; // [sp+38Ch] [bp+33Ch]
  _DWORD v248[7]; // [sp+390h] [bp+340h] BYREF
  int v249; // [sp+3ACh] [bp+35Ch]
  _DWORD v250[7]; // [sp+3B0h] [bp+360h] BYREF
  int v251; // [sp+3CCh] [bp+37Ch]
  _DWORD v252[7]; // [sp+3D0h] [bp+380h] BYREF
  int v253; // [sp+3ECh] [bp+39Ch]
  _DWORD v254[7]; // [sp+3F0h] [bp+3A0h] BYREF
  int v255; // [sp+40Ch] [bp+3BCh]
  _DWORD v256[7]; // [sp+410h] [bp+3C0h] BYREF
  int v257; // [sp+42Ch] [bp+3DCh]
  _DWORD v258[7]; // [sp+430h] [bp+3E0h] BYREF
  int v259; // [sp+44Ch] [bp+3FCh]
  _DWORD v260[7]; // [sp+450h] [bp+400h] BYREF
  int v261; // [sp+46Ch] [bp+41Ch]
  _DWORD v262[7]; // [sp+470h] [bp+420h] BYREF
  int v263; // [sp+48Ch] [bp+43Ch]
  _DWORD v264[7]; // [sp+490h] [bp+440h] BYREF
  int v265; // [sp+4ACh] [bp+45Ch]
  _DWORD v266[7]; // [sp+4B0h] [bp+460h] BYREF
  int v267; // [sp+4CCh] [bp+47Ch]
  _DWORD v268[7]; // [sp+4D0h] [bp+480h] BYREF
  int v269; // [sp+4ECh] [bp+49Ch]
  _DWORD v270[7]; // [sp+4F0h] [bp+4A0h] BYREF
  int v271; // [sp+50Ch] [bp+4BCh]
  _DWORD v272[7]; // [sp+510h] [bp+4C0h] BYREF
  int v273; // [sp+52Ch] [bp+4DCh]
  _DWORD v274[7]; // [sp+530h] [bp+4E0h] BYREF
  int v275; // [sp+54Ch] [bp+4FCh]
  _DWORD v276[7]; // [sp+550h] [bp+500h] BYREF
  int v277; // [sp+56Ch] [bp+51Ch]
  _DWORD v278[7]; // [sp+570h] [bp+520h] BYREF
  int v279; // [sp+58Ch] [bp+53Ch]
  _DWORD v280[7]; // [sp+590h] [bp+540h] BYREF
  int v281; // [sp+5ACh] [bp+55Ch]
  _DWORD v282[7]; // [sp+5B0h] [bp+560h] BYREF
  int v283; // [sp+5CCh] [bp+57Ch]
  _DWORD v284[7]; // [sp+5D0h] [bp+580h] BYREF
  int v285; // [sp+5ECh] [bp+59Ch]
  _DWORD v286[7]; // [sp+5F0h] [bp+5A0h] BYREF
  int v287; // [sp+60Ch] [bp+5BCh]
  _DWORD v288[7]; // [sp+610h] [bp+5C0h] BYREF
  int v289; // [sp+62Ch] [bp+5DCh]
  _DWORD v290[7]; // [sp+630h] [bp+5E0h] BYREF
  int v291; // [sp+64Ch] [bp+5FCh]
  _DWORD v292[7]; // [sp+650h] [bp+600h] BYREF
  int v293; // [sp+66Ch] [bp+61Ch]
  _DWORD v294[7]; // [sp+670h] [bp+620h] BYREF
  int v295; // [sp+68Ch] [bp+63Ch]
  _DWORD v296[7]; // [sp+690h] [bp+640h] BYREF
  int v297; // [sp+6ACh] [bp+65Ch]
  _DWORD v298[7]; // [sp+6B0h] [bp+660h] BYREF
  int v299; // [sp+6CCh] [bp+67Ch]
  _DWORD v300[7]; // [sp+6D0h] [bp+680h] BYREF
  int v301; // [sp+6ECh] [bp+69Ch]
  _DWORD v302[7]; // [sp+6F0h] [bp+6A0h] BYREF
  int v303; // [sp+70Ch] [bp+6BCh]
  _DWORD v304[7]; // [sp+710h] [bp+6C0h] BYREF
  int v305; // [sp+72Ch] [bp+6DCh]
  _DWORD v306[7]; // [sp+730h] [bp+6E0h] BYREF
  int v307; // [sp+74Ch] [bp+6FCh]
  _DWORD v308[7]; // [sp+750h] [bp+700h] BYREF
  int v309; // [sp+76Ch] [bp+71Ch]
  _DWORD v310[7]; // [sp+770h] [bp+720h] BYREF
  int v311; // [sp+78Ch] [bp+73Ch]
  _DWORD v312[7]; // [sp+790h] [bp+740h] BYREF
  int v313; // [sp+7ACh] [bp+75Ch]
  _DWORD v314[7]; // [sp+7B0h] [bp+760h] BYREF
  int v315; // [sp+7CCh] [bp+77Ch]
  _DWORD v316[7]; // [sp+7D0h] [bp+780h] BYREF
  int v317; // [sp+7ECh] [bp+79Ch]
  _DWORD s[64]; // [sp+7F0h] [bp+7A0h] BYREF
  char v319[4100]; // [sp+8F0h] [bp+8A0h] BYREF

  V_LOCK();
  LOWORD(v7) = 27796;
  HIWORD(v7) = (unsigned int)"%1.f" >> 16;
  V_INT(v4, v7, *(int *)(a1 + 256));
  v8 = (_DWORD *)v4;
  LOWORD(v9) = -13336;
  HIWORD(v9) = (unsigned int)"\n" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v8[7],
    *v8,
    v8[1],
    v8[2],
    v8[3],
    v8[4],
    v8[5],
    v8[6],
    v8[7],
    v9,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v10) = -10928;
  HIWORD(v10) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v10, 174, "serdes_external_loop_ate_init", 29, 1191, 60, v319);
  sub_7FA14(a1, a3, 240, 0x80000000);
  usleep(0x258u);
  sub_7FEE8(a1, a3, 240);
  sub_7FA14(a1, a3, 86, 3670024);
  usleep(0x258u);
  sub_7FEE8(a1, a3, 86);
  sub_7FA14(a1, a3, 85, 109905420);
  usleep(0x258u);
  sub_7FEE8(a1, a3, 85);
  sub_7FA14(a1, a3, 64, 256);
  usleep(0x258u);
  sub_7FEE8(a1, a3, 64);
  sub_7FA14(a1, a3, 80, 33423870);
  usleep(0x258u);
  sub_7FEE8(a1, a3, 80);
  sub_7FA14(a1, a3, 81, 832516511);
  usleep(0x258u);
  sub_7FEE8(a1, a3, 81);
  sub_7FA14(a1, a3, 88, -1);
  usleep(0x258u);
  sub_7FEE8(a1, a3, 88);
  v197[0] = 0;
  v196 = 0;
  V_LOCK();
  LOWORD(v11) = -6664;
  HIWORD(v11) = (unsigned int)"" >> 16;
  logfmt_raw(v319, 0x1000u, 0, v11, "phy_read_config_ini", (unsigned __int8)case_select[0]);
  V_UNLOCK();
  LOWORD(v12) = -10928;
  HIWORD(v12) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v12, 174, "phy_read_config_ini", 19, 153, 40, v319);
  v13 = (unsigned __int8)case_select[0];
  if ( case_select[0] )
  {
    if ( case_select[0] != 1 )
      goto LABEL_3;
  }
  else
  {
    LOWORD(v158) = -10004;
    LOWORD(v159) = -6652;
    HIWORD(v158) = (unsigned int)"sserting mplla_word_clk_en" >> 16;
    HIWORD(v159) = (unsigned int)"=" >> 16;
    v160 = fopen64(v159, v158);
    v13 = (unsigned __int8)case_select[0];
    v3 = (FILE *)v160;
    if ( case_select[0] != 1 )
    {
LABEL_3:
      if ( v13 != 2 )
        goto LABEL_4;
      goto LABEL_55;
    }
  }
  LOWORD(v161) = -10004;
  LOWORD(v162) = -6628;
  HIWORD(v161) = (unsigned int)"sserting mplla_word_clk_en" >> 16;
  HIWORD(v162) = (unsigned int)"d" >> 16;
  v163 = fopen64(v162, v161);
  v13 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v163;
  if ( case_select[0] != 2 )
  {
LABEL_4:
    if ( v13 != 3 )
      goto LABEL_5;
    goto LABEL_56;
  }
LABEL_55:
  LOWORD(v164) = -10004;
  LOWORD(v165) = -6604;
  HIWORD(v164) = (unsigned int)"sserting mplla_word_clk_en" >> 16;
  HIWORD(v165) = (unsigned int)"%s Override pcs_pwr_stable, pma_pwr_stable" >> 16;
  v166 = fopen64(v165, v164);
  v13 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v166;
  if ( case_select[0] != 3 )
  {
LABEL_5:
    if ( v13 != 4 )
      goto LABEL_6;
    goto LABEL_57;
  }
LABEL_56:
  LOWORD(v167) = -10004;
  LOWORD(v168) = -6580;
  HIWORD(v167) = (unsigned int)"sserting mplla_word_clk_en" >> 16;
  HIWORD(v168) = (unsigned int)"le, pma_pwr_stable" >> 16;
  v169 = fopen64(v168, v167);
  v13 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v169;
  if ( case_select[0] != 4 )
  {
LABEL_6:
    if ( v13 != 5 )
      goto LABEL_7;
    goto LABEL_58;
  }
LABEL_57:
  LOWORD(v170) = -10004;
  LOWORD(v171) = -6556;
  HIWORD(v170) = (unsigned int)"sserting mplla_word_clk_en" >> 16;
  HIWORD(v171) = (unsigned int)"verriding tx_eq_pre and tx_eq_post" >> 16;
  v172 = fopen64(v171, v170);
  v13 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v172;
  if ( case_select[0] != 5 )
  {
LABEL_7:
    if ( v13 != 6 )
      goto LABEL_8;
    goto LABEL_59;
  }
LABEL_58:
  LOWORD(v173) = -10004;
  LOWORD(v174) = -6532;
  HIWORD(v173) = (unsigned int)"sserting mplla_word_clk_en" >> 16;
  HIWORD(v174) = (unsigned int)"tx_eq_post" >> 16;
  v175 = fopen64(v174, v173);
  v13 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v175;
  if ( case_select[0] != 6 )
  {
LABEL_8:
    if ( v13 != 7 )
      goto LABEL_9;
    goto LABEL_60;
  }
LABEL_59:
  LOWORD(v176) = -10004;
  LOWORD(v177) = -6508;
  HIWORD(v176) = (unsigned int)"sserting mplla_word_clk_en" >> 16;
  HIWORD(v177) = (unsigned int)"g tx_detrx_req" >> 16;
  v178 = fopen64(v177, v176);
  v13 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v178;
  if ( case_select[0] != 7 )
  {
LABEL_9:
    if ( v13 != 8 )
      goto LABEL_10;
    goto LABEL_61;
  }
LABEL_60:
  LOWORD(v179) = -10004;
  LOWORD(v180) = -6484;
  HIWORD(v179) = (unsigned int)"sserting mplla_word_clk_en" >> 16;
  HIWORD(v180) = (unsigned int)"ing TX LBERT in NYQUIST" >> 16;
  v181 = fopen64(v180, v179);
  v13 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v181;
  if ( case_select[0] != 8 )
  {
LABEL_10:
    if ( v13 != 9 )
      goto LABEL_11;
LABEL_62:
    LOWORD(v185) = -10004;
    LOWORD(v186) = -6436;
    HIWORD(v185) = (unsigned int)"sserting mplla_word_clk_en" >> 16;
    HIWORD(v186) = (unsigned int)"_par_lb_en and lane_tx2rx_ser_lb_en" >> 16;
    v3 = (FILE *)fopen64(v186, v185);
    if ( case_select[0] != 10 )
      goto LABEL_12;
LABEL_63:
    LOWORD(v187) = -10004;
    LOWORD(v188) = -6412;
    HIWORD(v187) = (unsigned int)"sserting mplla_word_clk_en" >> 16;
    HIWORD(v188) = (unsigned int)"x_ser_lb_en" >> 16;
    v3 = (FILE *)fopen64(v188, v187);
    goto LABEL_12;
  }
LABEL_61:
  LOWORD(v182) = -10004;
  LOWORD(v183) = -6460;
  HIWORD(v182) = (unsigned int)"sserting mplla_word_clk_en" >> 16;
  HIWORD(v183) = (unsigned int)"%s Overriding lane_rx2tx_par_lb_en and lane_tx2rx_ser_lb_en" >> 16;
  v184 = fopen64(v183, v182);
  v13 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v184;
  if ( case_select[0] == 9 )
    goto LABEL_62;
LABEL_11:
  if ( v13 == 10 )
    goto LABEL_63;
LABEL_12:
  if ( !v3 )
  {
    V_LOCK();
    LOWORD(v155) = -6384;
    HIWORD(v155) = (unsigned int)"e RX_COARSE_ADAPT_SKIP_B0/B1/B2 to 1 to skip the RX coarse adaptation" >> 16;
    logfmt_raw(v319, 0x1000u, 0, v155);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_read_config_ini",
      19,
      180,
      100,
      v319);
    V_LOCK();
    LOWORD(v156) = -6356;
    HIWORD(v156) = (unsigned int)"/B2 to 1 to skip the RX coarse adaptation" >> 16;
    logfmt_raw(v319, 0x1000u, 0, v156);
    V_UNLOCK();
    LOWORD(v157) = -10928;
    HIWORD(v157) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v157, 174, "serdes_external_loop_ate_init", 29, 1237, 100, v319);
    return 0;
  }
  LOWORD(v14) = -6332;
  memset(s, 0, sizeof(s));
  LOWORD(v15) = -6304;
  LOWORD(v16) = -6268;
  HIWORD(v16) = (unsigned int)"2d, main=%02d, pre=%02d, post=%02d" >> 16;
  needle = v16;
  while ( fgets((char *)s, 255, v3) )
  {
    if ( LOBYTE(s[0]) != 35 && BYTE1(s[0]) != 35 )
    {
      HIWORD(v14) = (unsigned int)"coarse adaptation" >> 16;
      v17 = strstr((const char *)s, v14);
      if ( v17 )
      {
        LOWORD(v18) = 27996;
        HIWORD(v18) = (unsigned int)"s: %lld" >> 16;
        _isoc99_sscanf(v17 + 5, v18, &v196);
        V_LOCK();
        LOWORD(v19) = -6324;
        HIWORD(v19) = (unsigned int)"daptation" >> 16;
        logfmt_raw(v319, 0x1000u, 0, v19, (unsigned __int8)v196);
        V_UNLOCK();
        v20 = g_zc;
        v21 = 193;
        goto LABEL_19;
      }
      HIWORD(v15) = (unsigned int)"ore %02x start" >> 16;
      v23 = strstr((const char *)s, v15);
      if ( v23 )
      {
        LOWORD(v24) = 27996;
        HIWORD(v24) = (unsigned int)"s: %lld" >> 16;
        _isoc99_sscanf(v23 + 8, v24, (char *)&v196 + 1);
        V_LOCK();
        LOWORD(v25) = -6292;
        HIWORD(v25) = (unsigned int)"rt" >> 16;
        logfmt_raw(v319, 0x1000u, 0, v25, BYTE1(v196));
        V_UNLOCK();
        v20 = g_zc;
        v21 = 197;
        goto LABEL_19;
      }
      v145 = strstr((const char *)s, needle);
      if ( v145 )
      {
        LOWORD(v146) = 27996;
        HIWORD(v146) = (unsigned int)"s: %lld" >> 16;
        _isoc99_sscanf(v145 + 7, v146, (char *)&v196 + 2);
        V_LOCK();
        LOWORD(v147) = -6260;
        HIWORD(v147) = (unsigned int)"=%02d, pre=%02d, post=%02d" >> 16;
        logfmt_raw(v319, 0x1000u, 0, v147, BYTE2(v196));
        V_UNLOCK();
        v20 = g_zc;
        v21 = 201;
        goto LABEL_19;
      }
      LOWORD(v148) = -6240;
      HIWORD(v148) = (unsigned int)"t=%02d" >> 16;
      v149 = strstr((const char *)s, v148);
      if ( v149 )
      {
        LOWORD(v150) = 27996;
        HIWORD(v150) = (unsigned int)"s: %lld" >> 16;
        _isoc99_sscanf(v149 + 8, v150, (char *)&v196 + 3);
        V_LOCK();
        LOWORD(v151) = -6228;
        HIWORD(v151) = (unsigned int)"ram init failed!" >> 16;
        logfmt_raw(v319, 0x1000u, 0, v151, HIBYTE(v196));
        V_UNLOCK();
        v20 = g_zc;
        v21 = 205;
        goto LABEL_19;
      }
      LOWORD(v189) = -6204;
      HIWORD(v189) = (unsigned int)"HY core-%02x sram init successed!" >> 16;
      v190 = strstr((const char *)s, v189);
      if ( v190 )
      {
        LOWORD(v191) = 27996;
        HIWORD(v191) = (unsigned int)"s: %lld" >> 16;
        _isoc99_sscanf(v190 + 9, v191, v197);
        V_LOCK();
        LOWORD(v192) = -6192;
        HIWORD(v192) = (unsigned int)" sram init successed!" >> 16;
        logfmt_raw(v319, 0x1000u, 0, v192, (unsigned __int8)v197[0]);
        V_UNLOCK();
        v20 = g_zc;
        v21 = 209;
LABEL_19:
        LOWORD(v22) = -10928;
        HIWORD(v22) = (unsigned int)"HY core %02x sram ext load done" >> 16;
        zlog(v20, v22, 174, "phy_read_config_ini", 19, v21, 40, v319);
      }
    }
  }
  fclose(v3);
  phy_external_loop_adapt(a1, a2, a3, BYTE1(v196), BYTE2(v196), HIBYTE(v196), v197[0]);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 125, 0x70007000u) )
  {
    V_LOCK();
    LOWORD(v193) = 27796;
    HIWORD(v193) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v198, v193, *(int *)(a1 + 256));
    logfmt_raw(
      v319,
      0x1000u,
      0,
      v199,
      v198[0],
      v198[1],
      v198[2],
      v198[3],
      v198[4],
      v198[5],
      v198[6],
      v199,
      "%s PHY core %02x sram boot failed!",
      "serdes_external_loop_ate_init",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "serdes_external_loop_ate_init",
      29,
      1246,
      100,
      v319);
  }
  sub_7FA14(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  V_LOCK();
  LOWORD(v26) = 27796;
  HIWORD(v26) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v200, v26, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v201,
    v200[0],
    v200[1],
    v200[2],
    v200[3],
    v200[4],
    v200[5],
    v200[6],
    v201,
    "%s Sram_ext_ld done",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v27) = -10928;
  HIWORD(v27) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v27, 174, "serdes_external_loop_ate_init", 29, 1252, 60, v319);
  V_LOCK();
  LOWORD(v28) = 27796;
  HIWORD(v28) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v202, v28, *(int *)(a1 + 256));
  LOWORD(v29) = -6148;
  HIWORD(v29) = (unsigned int)"t ack failed!" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v203,
    v202[0],
    v202[1],
    v202[2],
    v202[3],
    v202[4],
    v202[5],
    v202[6],
    v203,
    v29,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v30) = -10928;
  HIWORD(v30) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v30, 174, "serdes_external_loop_ate_init", 29, 1253, 60, v319);
  sub_7FA14(a1, a3, 77, (int)&loc_30000 + 3);
  sub_7FA14(a1, a3, 78, -2144272046);
  sub_7FA14(a1, a3, 77, 33554944);
  sub_7FA14(a1, a3, 78, -2144247742);
  sub_7FA14(a1, a3, 77, 100664832);
  sub_7FA14(a1, a3, 78, -2144247742);
  sub_7FA14(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7FA14(a1, a3, 78, -2144272003);
  V_LOCK();
  LOWORD(v31) = 27796;
  HIWORD(v31) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v204, v31, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v205,
    v204[0],
    v204[1],
    v204[2],
    v204[3],
    v204[4],
    v204[5],
    v204[6],
    v205,
    "%s Override tx_cnxt_sel rx_cnxt_sel tx_cmn_cntx_sel",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v32) = -10928;
  HIWORD(v32) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v32, 174, "serdes_external_loop_ate_init", 29, 1260, 60, v319);
  sub_7FA14(a1, a3, 77, 100664832);
  sub_7FA14(a1, a3, 78, -2144247742);
  sub_801BC(a1, a3, 24643, (unsigned __int8)v196);
  sub_801BC(a1, a3, 24644, (unsigned __int8)v196 << 7);
  sub_7FA14(a1, a3, 77, 117442304);
  sub_7FA14(a1, a3, 78, -2144247742);
  sub_801BC(a1, a3, 24643, (unsigned __int8)v196 | 0x100);
  sub_801BC(a1, a3, 24644, ((unsigned __int8)v196 << 7) | 0x8000);
  V_LOCK();
  LOWORD(v33) = 27796;
  HIWORD(v33) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v206, v33, *(int *)(a1 + 256));
  LOWORD(v34) = -10388;
  HIWORD(v34) = (unsigned int)"en_r" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v207,
    v206[0],
    v206[1],
    v206[2],
    v206[3],
    v206[4],
    v206[5],
    v206[6],
    v207,
    v34,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v35) = -10928;
  HIWORD(v35) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v35, 174, "serdes_external_loop_ate_init", 29, 1268, 60, v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144251892);
  sub_7FA14(a1, a3, 77, 268439552);
  sub_7FA14(a1, a3, 78, -2144251892);
  sub_7FA14(a1, a3, 77, 33489407);
  sub_7FA14(a1, a3, 78, -2144272086);
  sub_7FA14(a1, a3, 77, 268374015);
  sub_7FA14(a1, a3, 78, -2144272085);
  V_LOCK();
  LOWORD(v36) = 27796;
  HIWORD(v36) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v208, v36, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v209,
    v208[0],
    v208[1],
    v208[2],
    v208[3],
    v208[4],
    v208[5],
    v208[6],
    v209,
    "%s Overriding lane_cntx_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v37) = -10928;
  HIWORD(v37) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  v38 = -10332;
  zlog(g_zc, v37, 174, "serdes_external_loop_ate_init", 29, 1274, 60, v319);
  sub_801BC(a1, a3, 24644, ((unsigned __int8)v196 << 7) | 0x8020);
  sub_801BC(a1, a3, 24644, ((unsigned __int8)v196 << 7) | 0x8060);
  sub_7FA14(a1, a3, 77, -1);
  sub_7FA14(a1, a3, 78, -2144247719);
  sub_7FA14(a1, a3, 77, -8388737);
  sub_7FA14(a1, a3, 78, -2144247718);
  V_LOCK();
  LOWORD(v39) = 27796;
  HIWORD(v39) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v210, v39, *(int *)(a1 + 256));
  HIWORD(v43) = (unsigned int)"iding rx_invert" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v211,
    v210[0],
    v210[1],
    v210[2],
    v210[3],
    v210[4],
    v210[5],
    v210[6],
    v211,
    v43,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v40) = -10928;
  HIWORD(v40) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v40, 174, "serdes_external_loop_ate_init", 29, 1280, 60, v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144247776);
  sub_7FA14(a1, a3, 77, -2136964960);
  sub_7FA14(a1, a3, 78, -2144247776);
  V_LOCK();
  LOWORD(v41) = 27796;
  HIWORD(v41) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v212, v41, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v213,
    v212[0],
    v212[1],
    v212[2],
    v212[3],
    v212[4],
    v212[5],
    v212[6],
    v213,
    "%s Override rx_width",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v42) = -10928;
  HIWORD(v42) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  LOWORD(v43) = -10252;
  zlog(g_zc, v42, 174, "serdes_external_loop_ate_init", 29, 1284, 60, v319);
  if ( (unsigned __int8)v196 == 2 )
    LOWORD(v44) = 4160;
  else
    LOWORD(v44) = 4144;
  if ( (unsigned __int8)v196 == 2 )
    HIWORD(v44) = 4160;
  else
    HIWORD(v44) = 4144;
  sub_7FA14(a1, a3, 77, v44);
  sub_7FA14(a1, a3, 78, -2144247722);
  sub_7FA14(a1, a3, 77, -1);
  sub_7FA14(a1, a3, 78, -2144247718);
  V_LOCK();
  LOWORD(v45) = 27796;
  HIWORD(v45) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v214, v45, *(int *)(a1 + 256));
  HIWORD(v43) = (unsigned int)"%s  Perform refb_clk_div2_en override" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v215,
    v214[0],
    v214[1],
    v214[2],
    v214[3],
    v214[4],
    v214[5],
    v214[6],
    v215,
    v43,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1291,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144247771);
  sub_7FA14(a1, a3, 77, (int)&loc_140014);
  sub_7FA14(a1, a3, 78, -2144247771);
  V_LOCK();
  LOWORD(v46) = 27796;
  HIWORD(v46) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v216, v46, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v217,
    v216[0],
    v216[1],
    v216[2],
    v216[3],
    v216[4],
    v216[5],
    v216[6],
    v217,
    "%s Override rx_recal_skip_en, rx_recal_force_en, rx_recal_bank_sel, rx_coarse_adpt_force_en, rx_coarse_adpt_skip_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v47) = -10928;
  HIWORD(v47) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  LOWORD(v48) = -10104;
  zlog(g_zc, v47, 174, "serdes_external_loop_ate_init", 29, 1295, 60, v319);
  sub_7FA14(a1, a3, 77, 33554944);
  sub_7FA14(a1, a3, 78, -2144247760);
  sub_7FA14(a1, a3, 77, 122947412);
  sub_7FA14(a1, a3, 78, -2144247760);
  V_LOCK();
  LOWORD(v49) = 27796;
  HIWORD(v49) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v218, v49, *(int *)(a1 + 256));
  HIWORD(v48) = (unsigned int)"ref_repeat_clk_en_r" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v219,
    v218[0],
    v218[1],
    v218[2],
    v218[3],
    v218[4],
    v218[5],
    v218[6],
    v219,
    v48,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v50) = -10928;
  HIWORD(v50) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v50, 174, "serdes_external_loop_ate_init", 29, 1299, 60, v319);
  sub_7FA14(a1, a3, 77, 1073758208);
  sub_7FA14(a1, a3, 78, -2144247770);
  sub_7FA14(a1, a3, 77, -1072381932);
  sub_7FA14(a1, a3, 78, -2144247770);
  V_LOCK();
  LOWORD(v51) = 27796;
  HIWORD(v51) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v220, v51, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v221,
    v220[0],
    v220[1],
    v220[2],
    v220[3],
    v220[4],
    v220[5],
    v220[6],
    v221,
    "%s Override tx_width_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v52) = -10928;
  HIWORD(v52) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  LOWORD(v53) = -10036;
  zlog(g_zc, v52, 174, "serdes_external_loop_ate_init", 29, 1302, 60, v319);
  if ( (unsigned __int8)v196 == 2 )
    LOWORD(v54) = 4;
  else
    LOWORD(v54) = 3;
  if ( (unsigned __int8)v196 == 2 )
    HIWORD(v54) = 4;
  else
    HIWORD(v54) = 3;
  sub_7FA14(a1, a3, 77, v54);
  sub_7FA14(a1, a3, 78, -2144247739);
  sub_7FA14(a1, a3, 77, -1);
  sub_7FA14(a1, a3, 78, -2144247732);
  V_LOCK();
  LOWORD(v55) = 27796;
  HIWORD(v55) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v222, v55, *(int *)(a1 + 256));
  HIWORD(v53) = (unsigned int)"t_en_r, refb_clkdet_en_r" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v223,
    v222[0],
    v222[1],
    v222[2],
    v222[3],
    v222[4],
    v222[5],
    v222[6],
    v223,
    v53,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1309,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 268439552);
  sub_7FA14(a1, a3, 78, -2144247769);
  sub_7FA14(a1, a3, 77, 805318656);
  sub_7FA14(a1, a3, 78, -2144247769);
  V_LOCK();
  LOWORD(v56) = 27796;
  HIWORD(v56) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v224, v56, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v225,
    v224[0],
    v224[1],
    v224[2],
    v224[3],
    v224[4],
    v224[5],
    v224[6],
    v225,
    "%s Override tx_recal_bank_sel_r, tx_recal_force_en_r, tx_recal_skip_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1313,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144247751);
  sub_7FA14(a1, a3, 77, 5505108);
  sub_7FA14(a1, a3, 78, -2144247751);
  V_LOCK();
  LOWORD(v57) = 27796;
  HIWORD(v57) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v226, v57, *(int *)(a1 + 256));
  LOWORD(v58) = -9924;
  HIWORD(v58) = (unsigned int)"_ssc_en_r" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v227,
    v226[0],
    v226[1],
    v226[2],
    v226[3],
    v226[4],
    v226[5],
    v226[6],
    v227,
    v58,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1316,
    60,
    v319);
  sub_7FA14(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7FA14(a1, a3, 78, -2144251903);
  sub_7FA14(a1, a3, 77, 2293795);
  sub_7FA14(a1, a3, 78, -2144251903);
  V_LOCK();
  LOWORD(v59) = 27796;
  HIWORD(v59) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v228, v59, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v229,
    v228[0],
    v228[1],
    v228[2],
    v228[3],
    v228[4],
    v228[5],
    v228[6],
    v229,
    "%s Overriding rx_invert",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1319,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144251872);
  sub_7FA14(a1, a3, 77, (int)&loc_80008);
  sub_7FA14(a1, a3, 78, -2144251872);
  V_LOCK();
  LOWORD(v60) = 27796;
  HIWORD(v60) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v230, v60, *(int *)(a1 + 256));
  LOWORD(v61) = -9860;
  HIWORD(v61) = (unsigned int)"b_recal_skip_en, mplla/b_recal_force_en, mplla/b_cal_bank_sel" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v231,
    v230[0],
    v230[1],
    v230[2],
    v230[3],
    v230[4],
    v230[5],
    v230[6],
    v231,
    v61,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1322,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144272111);
  sub_7FA14(a1, a3, 77, 1073692671);
  sub_7FA14(a1, a3, 78, -2144272088);
  V_LOCK();
  LOWORD(v62) = 27796;
  HIWORD(v62) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v232, v62, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v233,
    v232[0],
    v232[1],
    v232[2],
    v232[3],
    v232[4],
    v232[5],
    v232[6],
    v233,
    "%s Perform refa_clk_div2_en override",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1325,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 234884608);
  sub_7FA14(a1, a3, 78, -2144272382);
  sub_7FA14(a1, a3, 77, 235408904);
  sub_7FA14(a1, a3, 78, -2144272382);
  V_LOCK();
  LOWORD(v63) = 27796;
  HIWORD(v63) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v234, v63, *(int *)(a1 + 256));
  LOWORD(v64) = -9796;
  HIWORD(v64) = (unsigned int)"%s Overriding mplla_init_cal_disable, mpllb_init_cal_disable, rtune_req" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v235,
    v234[0],
    v234[1],
    v234[2],
    v234[3],
    v234[4],
    v234[5],
    v234[6],
    v235,
    v64,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1328,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 234884608);
  sub_7FA14(a1, a3, 78, -2144272381);
  sub_7FA14(a1, a3, 77, 235408904);
  sub_7FA14(a1, a3, 78, -2144272381);
  V_LOCK();
  LOWORD(v65) = 27796;
  HIWORD(v65) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v236, v65, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v237,
    v236[0],
    v236[1],
    v236[2],
    v236[3],
    v236[4],
    v236[5],
    v236[6],
    v237,
    "%s Get access to external resistor",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1331,
    60,
    v319);
  sub_7FA14(a1, a3, 77, (int)&unk_180018);
  sub_7FA14(a1, a3, 78, -2144272353);
  V_LOCK();
  LOWORD(v66) = 27796;
  HIWORD(v66) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v238, v66, *(int *)(a1 + 256));
  LOWORD(v67) = -9720;
  HIWORD(v67) = (unsigned int)"ooking up tx0_clk to appropriate ROPLL word/dword/qword, mplla/b word/dword/qword clock" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v239,
    v238[0],
    v238[1],
    v238[2],
    v238[3],
    v238[4],
    v238[5],
    v238[6],
    v239,
    v67,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1334,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 22348117);
  sub_7FA14(a1, a3, 78, -2144272044);
  sub_7FA14(a1, a3, 77, 67044351);
  sub_7FA14(a1, a3, 78, -2144272044);
  V_LOCK();
  LOWORD(v68) = 27796;
  HIWORD(v68) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v240, v68, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v241,
    v240[0],
    v240[1],
    v240[2],
    v240[3],
    v240[4],
    v240[5],
    v240[6],
    v241,
    "%s Overriding bg_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1337,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 61277095);
  sub_7FA14(a1, a3, 78, -2144272380);
  sub_7FA14(a1, a3, 77, 65471463);
  sub_7FA14(a1, a3, 78, -2144272380);
  V_LOCK();
  LOWORD(v69) = 27796;
  HIWORD(v69) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v242, v69, *(int *)(a1 + 256));
  LOWORD(v70) = -9604;
  HIWORD(v70) = (unsigned int)"%s Overriding tx_eq_main_r, tx_beacon_en_r, tx_disable_r" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v243,
    v242[0],
    v242[1],
    v242[2],
    v242[3],
    v242[4],
    v242[5],
    v242[6],
    v243,
    v70,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1340,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 235408904);
  sub_7FA14(a1, a3, 78, -2144272382);
  sub_7FA14(a1, a3, 77, 252186376);
  sub_7FA14(a1, a3, 78, -2144272382);
  sub_7FA14(a1, a3, 77, 235408904);
  sub_7FA14(a1, a3, 78, -2144272381);
  sub_7FA14(a1, a3, 77, 252186376);
  sub_7FA14(a1, a3, 78, -2144272381);
  V_LOCK();
  LOWORD(v71) = 27796;
  HIWORD(v71) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v244, v71, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v245,
    v244[0],
    v244[1],
    v244[2],
    v244[3],
    v244[4],
    v244[5],
    v244[6],
    v245,
    "%s Asserting mplla_word_clk_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1345,
    60,
    v319);
  sub_7FA14(a1, a3, 77, (int)&loc_40004);
  sub_7FA14(a1, a3, 78, -2144272379);
  sub_7FA14(a1, a3, 77, (int)&loc_C000C);
  sub_7FA14(a1, a3, 78, -2144272379);
  V_LOCK();
  LOWORD(v72) = 27796;
  HIWORD(v72) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v246, v72, *(int *)(a1 + 256));
  LOWORD(v73) = -9520;
  HIWORD(v73) = (unsigned int)"GIN_IN_PROG_OVRD and RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v247,
    v246[0],
    v246[1],
    v246[2],
    v246[3],
    v246[4],
    v246[5],
    v246[6],
    v247,
    v73,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1348,
    60,
    v319);
  sub_7FA14(a1, a3, 77, (int)&loc_40004);
  sub_7FA14(a1, a3, 78, -2144272378);
  sub_7FA14(a1, a3, 77, (int)&loc_C000C);
  sub_7FA14(a1, a3, 78, -2144272378);
  V_LOCK();
  LOWORD(v74) = 27796;
  HIWORD(v74) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v248, v74, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v249,
    v248[0],
    v248[1],
    v248[2],
    v248[3],
    v248[4],
    v248[5],
    v248[6],
    v249,
    "%s  Overriding mplla_ssc_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1351,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144272372);
  sub_7FA14(a1, a3, 77, (int)&loc_100010);
  sub_7FA14(a1, a3, 78, -2144272372);
  V_LOCK();
  LOWORD(v75) = 27796;
  HIWORD(v75) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v250, v75, *(int *)(a1 + 256));
  LOWORD(v76) = -9456;
  HIWORD(v76) = (unsigned int)"iding lane_ref_sel_r" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v251,
    v250[0],
    v250[1],
    v250[2],
    v250[3],
    v250[4],
    v250[5],
    v250[6],
    v251,
    v76,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1354,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144272360);
  sub_7FA14(a1, a3, 77, (int)&loc_100010);
  sub_7FA14(a1, a3, 78, -2144272360);
  V_LOCK();
  LOWORD(v77) = 27796;
  HIWORD(v77) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v252, v77, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v253,
    v252[0],
    v252[1],
    v252[2],
    v252[3],
    v252[4],
    v252[5],
    v252[6],
    v253,
    "%s Overriding mplla/b_recal_skip_en, mplla/b_recal_force_en, mplla/b_cal_bank_sel",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1358,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144272114);
  sub_7FA14(a1, a3, 77, 710158932);
  sub_7FA14(a1, a3, 78, -2144272114);
  V_LOCK();
  LOWORD(v78) = 27796;
  HIWORD(v78) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v254, v78, *(int *)(a1 + 256));
  LOWORD(v79) = -9340;
  HIWORD(v79) = (unsigned int)"adapt_req_r" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v255,
    v254[0],
    v254[1],
    v254[2],
    v254[3],
    v254[4],
    v254[5],
    v254[6],
    v255,
    v79,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v80) = -10928;
  HIWORD(v80) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v80, 174, "serdes_external_loop_ate_init", 29, 1361, 60, v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144272124);
  sub_7FA14(a1, a3, 77, (int)"equihash_blake2b_update");
  sub_7FA14(a1, a3, 78, -2144272124);
  V_LOCK();
  LOWORD(v81) = 27796;
  HIWORD(v81) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v256, v81, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v257,
    v256[0],
    v256[1],
    v256[2],
    v256[3],
    v256[4],
    v256[5],
    v256[6],
    v257,
    "%s Hooking up tx0_clk to appropriate ROPLL word/dword/qword, mplla/b word/dword/qword clock",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v82) = -10928;
  HIWORD(v82) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v82, 174, "serdes_external_loop_ate_init", 29, 1365, 60, v319);
  V_LOCK();
  LOWORD(v83) = 27796;
  HIWORD(v83) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v258, v83, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v259,
    v258[0],
    v258[1],
    v258[2],
    v258[3],
    v258[4],
    v258[5],
    v258[6],
    v259,
    "%s  Overriding tx_clk_sel",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v84) = -10928;
  HIWORD(v84) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v84, 174, "serdes_external_loop_ate_init", 29, 1366, 60, v319);
  if ( (unsigned __int8)v196 == 2 )
    LOWORD(v85) = 498;
  else
    LOWORD(v85) = 501;
  if ( (unsigned __int8)v196 == 2 )
    HIWORD(v85) = 498;
  else
    HIWORD(v85) = 501;
  sub_7FA14(a1, a3, 77, v85);
  sub_7FA14(a1, a3, 78, -2144247559);
  V_LOCK();
  LOWORD(v86) = 27796;
  HIWORD(v86) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v260, v86, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v261,
    v260[0],
    v260[1],
    v260[2],
    v260[3],
    v260[4],
    v260[5],
    v260[6],
    v261,
    "%s Overriding tx_eq_main_r, tx_beacon_en_r, tx_disable_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1371,
    60,
    v319);
  sub_7FA14(a1, a3, 77, 20971840);
  sub_7FA14(a1, a3, 78, -2144251901);
  sub_7FA14(a1, a3, 77, 88606024);
  sub_7FA14(a1, a3, 78, -2144251901);
  V_LOCK();
  LOWORD(v87) = 27796;
  HIWORD(v87) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v262, v87, *(int *)(a1 + 256));
  LOWORD(v88) = -6104;
  HIWORD(v88) = (unsigned int)"ccessed!" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v263,
    v262[0],
    v262[1],
    v262[2],
    v262[3],
    v262[4],
    v262[5],
    v262[6],
    v263,
    v88,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1375,
    60,
    v319);
  sub_7FA14(a1, a3, 77, (int)&loc_100010);
  sub_7FA14(a1, a3, 78, -2144251900);
  sub_7FA14(a1, a3, 77, 542122064);
  sub_7FA14(a1, a3, 78, -2144251900);
  V_LOCK();
  LOWORD(v89) = 27796;
  HIWORD(v89) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v264, v89, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v265,
    v264[0],
    v264[1],
    v264[2],
    v264[3],
    v264[4],
    v264[5],
    v264[6],
    v265,
    "%s Overriding tx_detrx_req",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v90) = -10928;
  HIWORD(v90) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v90, 174, "serdes_external_loop_ate_init", 29, 1378, 60, v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144247761);
  sub_7FA14(a1, a3, 77, (int)"equihash_blake2b_update");
  sub_7FA14(a1, a3, 78, -2144247761);
  V_LOCK();
  LOWORD(v91) = 27796;
  HIWORD(v91) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v266, v91, *(int *)(a1 + 256));
  LOWORD(v92) = -9088;
  HIWORD(v92) = (unsigned int)"R PPM detector" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v267,
    v266[0],
    v266[1],
    v266[2],
    v266[3],
    v266[4],
    v266[5],
    v266[6],
    v267,
    v92,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v93) = -10928;
  HIWORD(v93) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v93, 174, "serdes_external_loop_ate_init", 29, 1382, 60, v319);
  sub_7FA14(a1, a3, 77, 537010178);
  sub_7FA14(a1, a3, 78, -2144247750);
  V_LOCK();
  LOWORD(v94) = 27796;
  HIWORD(v94) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v268, v94, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v269,
    v268[0],
    v268[1],
    v268[2],
    v268[3],
    v268[4],
    v268[5],
    v268[6],
    v269,
    "%s Overriding lane_ref_sel_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v95) = -10928;
  HIWORD(v95) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v95, 174, "serdes_external_loop_ate_init", 29, 1384, 60, v319);
  sub_7FA14(a1, a3, 77, 872428544);
  sub_7FA14(a1, a3, 78, -2144247769);
  sub_7FA14(a1, a3, 77, 1006648320);
  sub_7FA14(a1, a3, 78, -2144247769);
  V_LOCK();
  LOWORD(v96) = 27796;
  HIWORD(v96) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v270, v96, *(int *)(a1 + 256));
  LOWORD(v97) = -8976;
  HIWORD(v97) = (unsigned int)"e-assrting per lane resets to 0" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v271,
    v270[0],
    v270[1],
    v270[2],
    v270[3],
    v270[4],
    v270[5],
    v270[6],
    v271,
    v97,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v98) = -10928;
  HIWORD(v98) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v98, 174, "serdes_external_loop_ate_init", 29, 1387, 60, v319);
  sub_7FA14(a1, a3, 77, (int)&loc_80008);
  sub_7FA14(a1, a3, 78, -2144247745);
  sub_7FA14(a1, a3, 77, (int)&unk_180018);
  sub_7FA14(a1, a3, 78, -2144247745);
  V_LOCK();
  LOWORD(v99) = 27796;
  HIWORD(v99) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v272, v99, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v273,
    v272[0],
    v272[1],
    v272[2],
    v272[3],
    v272[4],
    v272[5],
    v272[6],
    v273,
    "%s Overriding rx_offcan_cont_r, rx_adapt_cont_r, rx_adapt_req_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v100) = -10928;
  HIWORD(v100) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v100, 174, "serdes_external_loop_ate_init", 29, 1390, 60, v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144247798);
  sub_7FA14(a1, a3, 77, (int)"equihash_blake2b_update");
  sub_7FA14(a1, a3, 78, -2144247798);
  V_LOCK();
  LOWORD(v101) = 27796;
  HIWORD(v101) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v274, v101, *(int *)(a1 + 256));
  LOWORD(v102) = -8872;
  HIWORD(v102) = (unsigned int)"." >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v275,
    v274[0],
    v274[1],
    v274[2],
    v274[3],
    v274[4],
    v274[5],
    v274[6],
    v275,
    v102,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v103) = -10928;
  HIWORD(v103) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v103, 174, "serdes_external_loop_ate_init", 29, 1393, 60, v319);
  sub_7FA14(a1, a3, 77, 65537);
  sub_7FA14(a1, a3, 78, -2144247604);
  V_LOCK();
  LOWORD(v104) = 27796;
  HIWORD(v104) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v276, v104, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v277,
    v276[0],
    v276[1],
    v276[2],
    v276[3],
    v276[4],
    v276[5],
    v276[6],
    v277,
    "%s Overriding rx_margin_iq and rx_delta_iq",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v105) = -10928;
  HIWORD(v105) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  LOWORD(v106) = -8488;
  zlog(g_zc, v105, 174, "serdes_external_loop_ate_init", 29, 1395, 60, v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144247796);
  sub_7FA14(a1, a3, 77, 268439552);
  sub_7FA14(a1, a3, 78, -2144247796);
  V_LOCK();
  LOWORD(v107) = 27796;
  HIWORD(v107) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v278, v107, *(int *)(a1 + 256));
  LOWORD(v108) = -8728;
  HIWORD(v108) = (unsigned int)" level" >> 16;
  HIWORD(v106) = (unsigned int)"check phy pstate 01" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v279,
    v278[0],
    v278[1],
    v278[2],
    v278[3],
    v278[4],
    v278[5],
    v278[6],
    v279,
    v108,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v109) = -10928;
  HIWORD(v109) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v109, 174, "serdes_external_loop_ate_init", 29, 1398, 60, v319);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144243666);
  sub_7FA14(a1, a3, 77, (int)"equihash_blake2b_update");
  sub_7FA14(a1, a3, 78, -2144243666);
  sub_7FA14(a1, a3, 77, 4259905);
  sub_7FA14(a1, a3, 78, -2144251869);
  sub_7FA14(a1, a3, 77, 13304011);
  sub_7FA14(a1, a3, 78, -2144251869);
  V_LOCK();
  LOWORD(v110) = 27796;
  HIWORD(v110) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v280, v110, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v281,
    v280[0],
    v280[1],
    v280[2],
    v280[3],
    v280[4],
    v280[5],
    v280[6],
    v281,
    "%s Disable RX CDR PPM detector",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v111) = -10928;
  HIWORD(v111) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v111, 174, "serdes_external_loop_ate_init", 29, 1403, 60, v319);
  sub_7FA14(a1, a3, 77, (int)&loc_40004);
  sub_7FA14(a1, a3, 78, -2144243609);
  V_LOCK();
  LOWORD(v112) = 27796;
  HIWORD(v112) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v282, v112, *(int *)(a1 + 256));
  LOWORD(v113) = -8616;
  HIWORD(v113) = (unsigned int)"n" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v283,
    v282[0],
    v282[1],
    v282[2],
    v282[3],
    v282[4],
    v282[5],
    v282[6],
    v283,
    v113,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v114) = -10928;
  HIWORD(v114) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v114, 174, "serdes_external_loop_ate_init", 29, 1405, 60, v319);
  sub_7FA14(a1, a3, 77, (int)&loc_A0004 + 6);
  sub_7FA14(a1, a3, 78, -2144247768);
  V_LOCK();
  LOWORD(v115) = 27796;
  HIWORD(v115) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v284, v115, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v285,
    v284[0],
    v284[1],
    v284[2],
    v284[3],
    v284[4],
    v284[5],
    v284[6],
    v285,
    "%s Overriding TOKEN_DLY",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v116) = -10928;
  HIWORD(v116) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v116, 174, "serdes_external_loop_ate_init", 29, 1407, 60, v319);
  sub_7FA14(a1, a3, 77, (int)&loc_70004 + 3);
  sub_7FA14(a1, a3, 78, -2144272078);
  V_LOCK();
  LOWORD(v117) = 27796;
  HIWORD(v117) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v286, v117, *(int *)(a1 + 256));
  LOWORD(v118) = -8524;
  HIWORD(v118) = (unsigned int)" rxX_data_en to track receive data" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v287,
    v286[0],
    v286[1],
    v286[2],
    v286[3],
    v286[4],
    v286[5],
    v286[6],
    v287,
    v118,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v119) = -10928;
  HIWORD(v119) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v119, 174, "serdes_external_loop_ate_init", 29, 1409, 60, v319);
  sub_7FA14(a1, a3, 77, -2136964960);
  sub_7FA14(a1, a3, 78, -2144247776);
  sub_7FA14(a1, a3, 77, -2136309590);
  sub_7FA14(a1, a3, 78, -2144247776);
  V_LOCK();
  LOWORD(v120) = 27796;
  HIWORD(v120) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v288, v120, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v289,
    v288[0],
    v288[1],
    v288[2],
    v288[3],
    v288[4],
    v288[5],
    v288[6],
    v289,
    v106,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v121) = -10928;
  HIWORD(v121) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v121, 174, "serdes_external_loop_ate_init", 29, 1412, 60, v319);
  V_LOCK();
  LOWORD(v122) = 27796;
  HIWORD(v122) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v290, v122, *(int *)(a1 + 256));
  LOWORD(v123) = -8456;
  HIWORD(v123) = (unsigned int)"lect" >> 16;
  LOWORD(v124) = -8372;
  HIWORD(v124) = (unsigned int)"m boot success!" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v291,
    v290[0],
    v290[1],
    v290[2],
    v290[3],
    v290[4],
    v290[5],
    v290[6],
    v291,
    v123,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v125) = -10928;
  HIWORD(v125) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v125, 174, "serdes_external_loop_ate_init", 29, 1413, 60, v319);
  usleep(0x3E8u);
  V_LOCK();
  LOWORD(v126) = 27796;
  HIWORD(v126) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v292, v126, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v293,
    v292[0],
    v292[1],
    v292[2],
    v292[3],
    v292[4],
    v292[5],
    v292[6],
    v293,
    &unk_16DF24,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v127) = -10928;
  HIWORD(v127) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v127, 174, "serdes_external_loop_ate_init", 29, 1416, 60, v319);
  V_LOCK();
  LOWORD(v128) = 27796;
  HIWORD(v128) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v294, v128, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v295,
    v294[0],
    v294[1],
    v294[2],
    v294[3],
    v294[4],
    v294[5],
    v294[6],
    v295,
    v106,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1417,
    60,
    v319);
  serdes_wait_status(a1, a2, a3, 12308, 65537);
  serdes_wait_status(a1, a2, a3, 12820, 65537);
  serdes_wait_status(a1, a2, a3, 13332, 65537);
  serdes_wait_status(a1, a2, a3, 13844, 65537);
  V_LOCK();
  LOWORD(v129) = 27796;
  HIWORD(v129) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v296, v129, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v297,
    v296[0],
    v296[1],
    v296[2],
    v296[3],
    v296[4],
    v296[5],
    v296[6],
    v297,
    v124,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1433,
    60,
    v319);
  serdes_wait_status(a1, a2, a3, 4156, 80);
  serdes_wait_status(a1, a2, a3, 4668, 80);
  serdes_wait_status(a1, a2, a3, 5180, 80);
  serdes_wait_status(a1, a2, a3, 5692, 80);
  V_LOCK();
  LOWORD(v130) = 27796;
  HIWORD(v130) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v298, v130, *(int *)(a1 + 256));
  LOWORD(v131) = -8328;
  HIWORD(v131) = (unsigned int)" pcs lock failed!" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v299,
    v298[0],
    v298[1],
    v298[2],
    v298[3],
    v298[4],
    v298[5],
    v298[6],
    v299,
    v131,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1438,
    60,
    v319);
  serdes_wait_status(a1, a2, a3, 8217, 0);
  serdes_wait_status(a1, a2, a3, 8729, 0);
  serdes_wait_status(a1, a2, a3, 9241, 0);
  serdes_wait_status(a1, a2, a3, 9753, 0);
  V_LOCK();
  LOWORD(v132) = 27796;
  HIWORD(v132) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v300, v132, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v301,
    v300[0],
    v300[1],
    v300[2],
    v300[3],
    v300[4],
    v300[5],
    v300[6],
    v301,
    "%s Reading TX ACK at PMA level",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1443,
    60,
    v319);
  serdes_wait_status(a1, a2, a3, 4114, 0);
  serdes_wait_status(a1, a2, a3, 4626, 0);
  serdes_wait_status(a1, a2, a3, 5138, 0);
  serdes_wait_status(a1, a2, a3, 5650, 0);
  V_LOCK();
  LOWORD(v133) = 27796;
  HIWORD(v133) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v302, v133, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v303,
    v302[0],
    v302[1],
    v302[2],
    v302[3],
    v302[4],
    v302[5],
    v302[6],
    v303,
    "%s Reading TX ACK at PHY level",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1448,
    60,
    v319);
  serdes_wait_status(a1, a2, a3, 8196, 0);
  serdes_wait_status(a1, a2, a3, 8708, 0);
  serdes_wait_status(a1, a2, a3, 9220, 0);
  serdes_wait_status(a1, a2, a3, 9732, 0);
  v134 = (unsigned __int8)LFSR31;
  if ( LFSR31 )
  {
    V_LOCK();
    LOWORD(v152) = 27796;
    HIWORD(v152) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v304, v152, *(int *)(a1 + 256));
    LOWORD(v153) = -8232;
    HIWORD(v153) = (unsigned int)"eg %04x rdata %08x" >> 16;
    logfmt_raw(
      v319,
      0x1000u,
      0,
      v305,
      v304[0],
      v304[1],
      v304[2],
      v304[3],
      v304[4],
      v304[5],
      v304[6],
      v305,
      v153,
      "serdes_external_loop_ate_init");
    V_UNLOCK();
    LOWORD(v154) = -10928;
    HIWORD(v154) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    zlog(g_zc, v154, 174, "serdes_external_loop_ate_init", 29, 1456, 60, v319);
    v136 = (int)&dword_10000 + 1;
  }
  else
  {
    V_LOCK();
    LOWORD(v135) = 27796;
    HIWORD(v135) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v306, v135, *(int *)(a1 + 256));
    logfmt_raw(
      v319,
      0x1000u,
      v134,
      v307,
      v306[0],
      v306[1],
      v306[2],
      v306[3],
      v306[4],
      v306[5],
      v306[6],
      v307,
      "%s Enabling TX LBERT in NYQUIST",
      "serdes_external_loop_ate_init");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "serdes_external_loop_ate_init",
      29,
      1461,
      60,
      v319);
    sub_7FA14(a1, a3, 77, 715139744);
    sub_7FA14(a1, a3, 78, -2144251791);
    usleep(0x12Cu);
    v136 = 715729577;
  }
  sub_7FA14(a1, a3, 77, v136);
  sub_7FA14(a1, a3, 78, -2144251791);
  usleep(0x12Cu);
  V_LOCK();
  LOWORD(v137) = 27796;
  HIWORD(v137) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v308, v137, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v309,
    v308[0],
    v308[1],
    v308[2],
    v308[3],
    v308[4],
    v308[5],
    v308[6],
    v309,
    "%s Overriding lane_rx2tx_par_lb_en and lane_tx2rx_ser_lb_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1469,
    60,
    v319);
  sub_7FA14(a1, a3, 77, (int)&loc_A0004 + 6);
  sub_7FA14(a1, a3, 78, -2144247768);
  sub_7FA14(a1, a3, 77, (int)&loc_A0004 + 6);
  sub_7FA14(a1, a3, 78, -2144247768);
  V_LOCK();
  LOWORD(v138) = 27796;
  HIWORD(v138) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v310, v138, *(int *)(a1 + 256));
  LOWORD(v139) = -5944;
  HIWORD(v139) = (unsigned int)"s" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v311,
    v310[0],
    v310[1],
    v310[2],
    v310[3],
    v310[4],
    v310[5],
    v310[6],
    v311,
    v139,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1473,
    60,
    v319);
  sub_7FA14(a1, a3, 77, (int)&loc_30000 + 3);
  sub_7FA14(a1, a3, 78, -2144243377);
  sub_7FA14(a1, a3, 77, (int)&loc_30000 + 3);
  sub_7FA14(a1, a3, 78, -2144243377);
  sub_7FA14(a1, a3, 77, (int)&loc_70004 + 3);
  sub_7FA14(a1, a3, 78, -2144243377);
  V_LOCK();
  LOWORD(v140) = 27796;
  HIWORD(v140) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v312, v140, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v313,
    v312[0],
    v312[1],
    v312[2],
    v312[3],
    v312[4],
    v312[5],
    v312[6],
    v313,
    "%s Toggle rx resets",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1477,
    60,
    v319);
  sub_7FA14(a1, a3, 77, -2136244053);
  sub_7FA14(a1, a3, 78, -2144247776);
  sub_7FA14(a1, a3, 77, -2136244053);
  sub_7FA14(a1, a3, 78, -2144247776);
  usleep(0x2710u);
  serdes_wait_status(a1, a2, a3, 4156, (int)&dword_10050 + 1);
  serdes_wait_status(a1, a2, a3, 4668, (int)&dword_10050 + 1);
  serdes_wait_status(a1, a2, a3, 5180, (int)&dword_10050 + 1);
  serdes_wait_status(a1, a2, a3, 5692, (int)&dword_10050 + 1);
  sub_7FA14(a1, a3, 77, -2136309590);
  sub_7FA14(a1, a3, 78, -2144247776);
  sub_7FA14(a1, a3, 77, -2136309590);
  sub_7FA14(a1, a3, 78, -2144247776);
  usleep((__useconds_t)&stru_186A0);
  serdes_wait_status(a1, a2, a3, 4156, 84);
  serdes_wait_status(a1, a2, a3, 4668, 84);
  serdes_wait_status(a1, a2, a3, 5180, 84);
  LOWORD(v141) = -8180;
  serdes_wait_status(a1, a2, a3, 5692, 84);
  usleep(0xEA60u);
  V_LOCK();
  LOWORD(v142) = 27796;
  HIWORD(v142) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v314, v142, *(int *)(a1 + 256));
  HIWORD(v141) = (unsigned int)"re %02x reg %04x rdata %08x" >> 16;
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v315,
    v314[0],
    v314[1],
    v314[2],
    v314[3],
    v314[4],
    v314[5],
    v314[6],
    v315,
    v141,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1496,
    60,
    v319);
  sub_7FA14(a1, a3, 77, -1062551382);
  sub_7FA14(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  V_LOCK();
  LOWORD(v143) = 27796;
  HIWORD(v143) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v316, v143, *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    v317,
    v316[0],
    v316[1],
    v316[2],
    v316[3],
    v316[4],
    v316[5],
    v316[6],
    v317,
    v124,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1500,
    60,
    v319);
  serdes_wait_status(a1, a2, a3, 4156, 86);
  serdes_wait_status(a1, a2, a3, 4668, 86);
  serdes_wait_status(a1, a2, a3, 5180, 86);
  serdes_wait_status(a1, a2, a3, 5692, 86);
  V_LOCK();
  V_INT((int)s, "chain", *(int *)(a1 + 256));
  logfmt_raw(
    v319,
    0x1000u,
    0,
    s[7],
    s[0],
    s[1],
    s[2],
    s[3],
    s[4],
    s[5],
    s[6],
    s[7],
    "%s Overriding rx_adapt_req",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1506,
    60,
    v319);
  if ( (unsigned __int8)v196 == 2 )
  {
    sub_7FA14(a1, a3, 77, (int)&loc_30000 + 3);
    sub_7FA14(a1, a3, 78, -2144247798);
    sub_7FA14(a1, a3, 77, (int)&loc_30000 + 3);
    sub_7FA14(a1, a3, 78, -2144247798);
    usleep(0x7D0u);
    serdes_wait_status(a1, a2, a3, 8218, 1);
    serdes_wait_status(a1, a2, a3, 8730, 1);
    serdes_wait_status(a1, a2, a3, 9242, 1);
    serdes_wait_status(a1, a2, a3, 9754, 1);
    sub_7FA14(a1, a3, 77, (int)"equihash_blake2b_update");
    sub_7FA14(a1, a3, 78, -2144247798);
    sub_7FA14(a1, a3, 77, (int)"equihash_blake2b_update");
    sub_7FA14(a1, a3, 78, -2144247798);
    usleep((__useconds_t)&stru_186A0);
    serdes_wait_status(a1, a2, a3, 8218, 0);
    serdes_wait_status(a1, a2, a3, 8730, 0);
    serdes_wait_status(a1, a2, a3, 9242, 0);
    serdes_wait_status(a1, a2, a3, 9754, 0);
  }
  usleep(0xC350u);
  return 0;
}
