int __fastcall serdes_external_loop_ate_init(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r7
  char *v7; // r1
  char *v8; // r1
  int v9; // lr
  char *v10; // r1
  char *v11; // r1
  int v12; // lr
  char *v13; // r1
  int v14; // r12
  int v15; // r1
  int v16; // lr
  int v17; // r1
  int v18; // r1
  char *v19; // r1
  int v20; // r1
  int v21; // r3
  char *v22; // r1
  int v23; // r10
  int v24; // r1
  char *v25; // r1
  int v26; // lr
  int v27; // r1
  char *v28; // r1
  int v29; // r1
  char *v30; // r1
  int v31; // r1
  int v32; // r3
  char *v33; // r1
  int v34; // r10
  int v35; // r1
  char *v36; // r1
  int v37; // lr
  char *v38; // r1
  char *v39; // r1
  int v40; // lr
  char *v41; // r1
  char *v42; // r1
  int v43; // lr
  char *v44; // r1
  char *v45; // r1
  int v46; // lr
  char *v47; // r1
  char *v48; // r1
  int v49; // lr
  char *v50; // r1
  char *v51; // r1
  int v52; // lr
  char *v53; // r1
  char *v54; // r1
  int v55; // lr
  char *v56; // r1
  char *v57; // r1
  int v58; // lr
  char *v59; // r1
  char *v60; // r1
  char *v61; // r1
  int v62; // r1
  int v63; // r8
  int v64; // r3
  char *v65; // r1
  int v66; // r1
  char *v67; // r1
  int v68; // r1
  char *v69; // r1
  int v70; // lr
  int v71; // r1
  char *v72; // r1
  int v73; // r1
  char *v74; // r1
  int v75; // lr
  int v76; // r1
  char *v77; // r1
  int v78; // r1
  char *v79; // r1
  int v80; // lr
  int v81; // r1
  char *v82; // r1
  int v83; // r1
  char *v84; // r1
  int v85; // lr
  int v86; // r1
  char *v87; // r1
  int v88; // lr
  int v89; // r1
  char *v90; // r1
  int v91; // lr
  int v92; // r1
  char *v93; // r1
  int v94; // r1
  char *v95; // r1
  int v96; // lr
  int v97; // r1
  char *v98; // r1
  int v99; // r1
  char *v100; // r1
  int v101; // lr
  int v102; // r1
  char *v103; // r1
  char *v104; // r1
  int v105; // lr
  char *v106; // r1
  char *v107; // r1
  int v108; // lr
  char *v109; // r1
  int v110; // r1
  char *v111; // r1
  int v112; // lr
  int v113; // r1
  char *v114; // r1
  int v115; // r1
  char *v116; // r1
  int v117; // r1
  char *v118; // r1
  int v119; // r1
  char *v120; // r1
  int v121; // r1
  char *v122; // r1
  int v123; // r1
  char *v124; // r1
  int v125; // r1
  char *v126; // r1
  int v127; // r1
  char *v128; // r1
  int v129; // r1
  char *v130; // r1
  int v131; // r1
  int v133; // [sp+20h] [bp-18h]
  int v136; // [sp+34h] [bp-4h]
  _DWORD v137[7]; // [sp+58h] [bp+20h] BYREF
  int v138; // [sp+74h] [bp+3Ch]
  _DWORD v139[7]; // [sp+78h] [bp+40h] BYREF
  int v140; // [sp+94h] [bp+5Ch]
  _DWORD v141[7]; // [sp+98h] [bp+60h] BYREF
  int v142; // [sp+B4h] [bp+7Ch]
  _DWORD v143[7]; // [sp+B8h] [bp+80h] BYREF
  int v144; // [sp+D4h] [bp+9Ch]
  _DWORD v145[7]; // [sp+D8h] [bp+A0h] BYREF
  int v146; // [sp+F4h] [bp+BCh]
  _DWORD v147[7]; // [sp+F8h] [bp+C0h] BYREF
  int v148; // [sp+114h] [bp+DCh]
  _DWORD v149[7]; // [sp+118h] [bp+E0h] BYREF
  int v150; // [sp+134h] [bp+FCh]
  _DWORD v151[7]; // [sp+138h] [bp+100h] BYREF
  int v152; // [sp+154h] [bp+11Ch]
  _DWORD v153[7]; // [sp+158h] [bp+120h] BYREF
  int v154; // [sp+174h] [bp+13Ch]
  _DWORD v155[7]; // [sp+178h] [bp+140h] BYREF
  int v156; // [sp+194h] [bp+15Ch]
  _DWORD v157[7]; // [sp+198h] [bp+160h] BYREF
  int v158; // [sp+1B4h] [bp+17Ch]
  _DWORD v159[7]; // [sp+1B8h] [bp+180h] BYREF
  int v160; // [sp+1D4h] [bp+19Ch]
  _DWORD v161[7]; // [sp+1D8h] [bp+1A0h] BYREF
  int v162; // [sp+1F4h] [bp+1BCh]
  _DWORD v163[7]; // [sp+1F8h] [bp+1C0h] BYREF
  int v164; // [sp+214h] [bp+1DCh]
  _DWORD v165[7]; // [sp+218h] [bp+1E0h] BYREF
  int v166; // [sp+234h] [bp+1FCh]
  _DWORD v167[7]; // [sp+238h] [bp+200h] BYREF
  int v168; // [sp+254h] [bp+21Ch]
  _DWORD v169[7]; // [sp+258h] [bp+220h] BYREF
  int v170; // [sp+274h] [bp+23Ch]
  _DWORD v171[7]; // [sp+278h] [bp+240h] BYREF
  int v172; // [sp+294h] [bp+25Ch]
  _DWORD v173[7]; // [sp+298h] [bp+260h] BYREF
  int v174; // [sp+2B4h] [bp+27Ch]
  _DWORD v175[7]; // [sp+2B8h] [bp+280h] BYREF
  int v176; // [sp+2D4h] [bp+29Ch]
  _DWORD v177[7]; // [sp+2D8h] [bp+2A0h] BYREF
  int v178; // [sp+2F4h] [bp+2BCh]
  _DWORD v179[7]; // [sp+2F8h] [bp+2C0h] BYREF
  int v180; // [sp+314h] [bp+2DCh]
  _DWORD v181[7]; // [sp+318h] [bp+2E0h] BYREF
  int v182; // [sp+334h] [bp+2FCh]
  _DWORD v183[7]; // [sp+338h] [bp+300h] BYREF
  int v184; // [sp+354h] [bp+31Ch]
  _DWORD v185[7]; // [sp+358h] [bp+320h] BYREF
  int v186; // [sp+374h] [bp+33Ch]
  _DWORD v187[7]; // [sp+378h] [bp+340h] BYREF
  int v188; // [sp+394h] [bp+35Ch]
  _DWORD v189[7]; // [sp+398h] [bp+360h] BYREF
  int v190; // [sp+3B4h] [bp+37Ch]
  _DWORD v191[7]; // [sp+3B8h] [bp+380h] BYREF
  int v192; // [sp+3D4h] [bp+39Ch]
  _DWORD v193[7]; // [sp+3D8h] [bp+3A0h] BYREF
  int v194; // [sp+3F4h] [bp+3BCh]
  _DWORD v195[7]; // [sp+3F8h] [bp+3C0h] BYREF
  int v196; // [sp+414h] [bp+3DCh]
  _DWORD v197[7]; // [sp+418h] [bp+3E0h] BYREF
  int v198; // [sp+434h] [bp+3FCh]
  _DWORD v199[7]; // [sp+438h] [bp+400h] BYREF
  int v200; // [sp+454h] [bp+41Ch]
  _DWORD v201[7]; // [sp+458h] [bp+420h] BYREF
  int v202; // [sp+474h] [bp+43Ch]
  _DWORD v203[7]; // [sp+478h] [bp+440h] BYREF
  int v204; // [sp+494h] [bp+45Ch]
  _DWORD v205[7]; // [sp+498h] [bp+460h] BYREF
  int v206; // [sp+4B4h] [bp+47Ch]
  _DWORD v207[7]; // [sp+4B8h] [bp+480h] BYREF
  int v208; // [sp+4D4h] [bp+49Ch]
  _DWORD v209[7]; // [sp+4D8h] [bp+4A0h] BYREF
  int v210; // [sp+4F4h] [bp+4BCh]
  _DWORD v211[7]; // [sp+4F8h] [bp+4C0h] BYREF
  int v212; // [sp+514h] [bp+4DCh]
  _DWORD v213[7]; // [sp+518h] [bp+4E0h] BYREF
  int v214; // [sp+534h] [bp+4FCh]
  _DWORD v215[7]; // [sp+538h] [bp+500h] BYREF
  int v216; // [sp+554h] [bp+51Ch]
  _DWORD v217[7]; // [sp+558h] [bp+520h] BYREF
  int v218; // [sp+574h] [bp+53Ch]
  _DWORD v219[7]; // [sp+578h] [bp+540h] BYREF
  int v220; // [sp+594h] [bp+55Ch]
  _DWORD v221[7]; // [sp+598h] [bp+560h] BYREF
  int v222; // [sp+5B4h] [bp+57Ch]
  _DWORD v223[7]; // [sp+5B8h] [bp+580h] BYREF
  int v224; // [sp+5D4h] [bp+59Ch]
  _DWORD v225[7]; // [sp+5D8h] [bp+5A0h] BYREF
  int v226; // [sp+5F4h] [bp+5BCh]
  _DWORD v227[7]; // [sp+5F8h] [bp+5C0h] BYREF
  int v228; // [sp+614h] [bp+5DCh]
  _DWORD v229[7]; // [sp+618h] [bp+5E0h] BYREF
  int v230; // [sp+634h] [bp+5FCh]
  _DWORD v231[7]; // [sp+638h] [bp+600h] BYREF
  int v232; // [sp+654h] [bp+61Ch]
  _DWORD v233[7]; // [sp+658h] [bp+620h] BYREF
  int v234; // [sp+674h] [bp+63Ch]
  _DWORD v235[7]; // [sp+678h] [bp+640h] BYREF
  int v236; // [sp+694h] [bp+65Ch]
  _DWORD v237[7]; // [sp+698h] [bp+660h] BYREF
  int v238; // [sp+6B4h] [bp+67Ch]
  _DWORD v239[7]; // [sp+6B8h] [bp+680h] BYREF
  int v240; // [sp+6D4h] [bp+69Ch]
  _DWORD v241[7]; // [sp+6D8h] [bp+6A0h] BYREF
  int v242; // [sp+6F4h] [bp+6BCh]
  _DWORD v243[7]; // [sp+6F8h] [bp+6C0h] BYREF
  int v244; // [sp+714h] [bp+6DCh]
  _DWORD v245[7]; // [sp+718h] [bp+6E0h] BYREF
  int v246; // [sp+734h] [bp+6FCh]
  _DWORD v247[7]; // [sp+738h] [bp+700h] BYREF
  int v248; // [sp+754h] [bp+71Ch]
  _DWORD v249[7]; // [sp+758h] [bp+720h] BYREF
  int v250; // [sp+774h] [bp+73Ch]
  _DWORD v251[7]; // [sp+778h] [bp+740h] BYREF
  int v252; // [sp+794h] [bp+75Ch]
  _DWORD v253[7]; // [sp+798h] [bp+760h] BYREF
  int v254; // [sp+7B4h] [bp+77Ch]
  _DWORD v255[7]; // [sp+7B8h] [bp+780h] BYREF
  int v256; // [sp+7D4h] [bp+79Ch]
  char v257[4100]; // [sp+7D8h] [bp+7A0h] BYREF

  V_LOCK();
  LOWORD(v7) = 588;
  HIWORD(v7) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v4, v7, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v4[7],
    *v4,
    v4[1],
    v4[2],
    v4[3],
    v4[4],
    v4[5],
    v4[6],
    v4[7],
    "%s ...",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    422,
    60,
    v257);
  sub_7660C(a1, a3, 240, 0x80000000);
  sub_7660C(a1, a3, 86, 67634184);
  sub_7660C(a1, a3, 64, 256);
  sub_7660C(a1, a3, 80, 33423870);
  sub_7660C(a1, a3, 81, 832516511);
  sub_7660C(a1, a3, 88, -1);
  sub_7660C(a1, a3, 86, 201853960);
  V_LOCK();
  LOWORD(v8) = 588;
  HIWORD(v8) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v137, v8, *(int *)(a1 + 232));
  LOWORD(v9) = -9208;
  HIWORD(v9) = (unsigned int)"end_kas_2380/backend_kas_2380.c" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v138,
    v137[0],
    v137[1],
    v137[2],
    v137[3],
    v137[4],
    v137[5],
    v137[6],
    v138,
    v9,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    437,
    60,
    v257);
  V_LOCK();
  LOWORD(v10) = 588;
  HIWORD(v10) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v139, v10, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v140,
    v139[0],
    v139[1],
    v139[2],
    v139[3],
    v139[4],
    v139[5],
    v139[6],
    v140,
    "%s Override pcs_pwr_stable, pma_pwr_stable",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    438,
    60,
    v257);
  sub_7660C(a1, a3, 77, (int)&loc_30000 + 3);
  sub_7660C(a1, a3, 78, -2144272046);
  sub_7660C(a1, a3, 77, 33554944);
  sub_7660C(a1, a3, 78, -2144247742);
  sub_7660C(a1, a3, 77, 100664832);
  sub_7660C(a1, a3, 78, -2144247742);
  sub_7660C(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7660C(a1, a3, 78, -2144272003);
  V_LOCK();
  LOWORD(v11) = 588;
  HIWORD(v11) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v141, v11, *(int *)(a1 + 232));
  LOWORD(v12) = -9144;
  HIWORD(v12) = (unsigned int)" %d" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v142,
    v141[0],
    v141[1],
    v141[2],
    v141[3],
    v141[4],
    v141[5],
    v141[6],
    v142,
    v12,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    445,
    60,
    v257);
  sub_76B84(a1, a3, 24642, a4 | 0x600);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144247741);
  sub_76B84(a1, a3, 24644, a4 << 7);
  sub_76B84(a1, a3, 24642, a4 | 0x700);
  sub_7660C(a1, a3, 77, 16777472);
  sub_7660C(a1, a3, 78, -2144247741);
  sub_76B84(a1, a3, 24644, a4 << 7);
  V_LOCK();
  LOWORD(v13) = 588;
  HIWORD(v13) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v143, v13, *(int *)(a1 + 232));
  LOWORD(v14) = -9092;
  HIWORD(v14) = (unsigned int)"SK_KAS_2380 %d" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v144,
    v143[0],
    v143[1],
    v143[2],
    v143[3],
    v143[4],
    v143[5],
    v143[6],
    v144,
    v14,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v15) = -9656;
  HIWORD(v15) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v15, 174, "serdes_external_loop_ate_init", 29, 460, 60, v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144251892);
  sub_7660C(a1, a3, 77, 268439552);
  sub_7660C(a1, a3, 78, -2144251892);
  sub_7660C(a1, a3, 77, 33489407);
  sub_7660C(a1, a3, 78, -2144272086);
  sub_7660C(a1, a3, 77, 268374015);
  sub_7660C(a1, a3, 78, -2144272085);
  V_LOCK();
  V_INT((int)v145, "chain", *(int *)(a1 + 232));
  LOWORD(v16) = -9064;
  HIWORD(v16) = (unsigned int)" passed! diff %d expected_diff %d " >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v146,
    v145[0],
    v145[1],
    v145[2],
    v145[3],
    v145[4],
    v145[5],
    v145[6],
    v146,
    v16,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v17) = -9656;
  HIWORD(v17) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v17, 174, "serdes_external_loop_ate_init", 29, 466, 60, v257);
  sub_76B84(a1, a3, 24644, (a4 << 7) | 0x8020);
  sub_76B84(a1, a3, 24644, (a4 << 7) | 0x8060);
  sub_7660C(a1, a3, 77, -1);
  sub_7660C(a1, a3, 78, -2144247719);
  sub_7660C(a1, a3, 77, -8388737);
  sub_7660C(a1, a3, 78, -2144247718);
  V_LOCK();
  V_INT((int)v147, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v148,
    v147[0],
    v147[1],
    v147[2],
    v147[3],
    v147[4],
    v147[5],
    v147[6],
    v148,
    "%s Override tx_req, rx_req, and De-assert rx_data_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v18) = -9656;
  HIWORD(v18) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v18, 174, "serdes_external_loop_ate_init", 29, 472, 60, v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144247776);
  sub_7660C(a1, a3, 77, -2136964960);
  sub_7660C(a1, a3, 78, -2144247776);
  V_LOCK();
  LOWORD(v19) = 588;
  HIWORD(v19) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v149, v19, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v150,
    v149[0],
    v149[1],
    v149[2],
    v149[3],
    v149[4],
    v149[5],
    v149[6],
    v150,
    "%s Override rx_width",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v20) = -9656;
  HIWORD(v20) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v20, 174, "serdes_external_loop_ate_init", 29, 476, 60, v257);
  if ( a4 == 2 )
    LOWORD(v21) = 4160;
  else
    LOWORD(v21) = 4144;
  if ( a4 == 2 )
    HIWORD(v21) = 4160;
  else
    HIWORD(v21) = 4144;
  sub_7660C(a1, a3, 77, v21);
  sub_7660C(a1, a3, 78, -2144247722);
  sub_7660C(a1, a3, 77, -1);
  sub_7660C(a1, a3, 78, -2144247718);
  V_LOCK();
  LOWORD(v22) = 588;
  HIWORD(v22) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v151, v22, *(int *)(a1 + 232));
  LOWORD(v23) = -8956;
  HIWORD(v23) = (unsigned int)"softreset chip id %d" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v152,
    v151[0],
    v151[1],
    v151[2],
    v151[3],
    v151[4],
    v151[5],
    v151[6],
    v152,
    v23,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v24) = -9656;
  HIWORD(v24) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v24, 174, "serdes_external_loop_ate_init", 29, 483, 60, v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144247771);
  sub_7660C(a1, a3, 77, (int)&unk_140014);
  sub_7660C(a1, a3, 78, -2144247771);
  V_LOCK();
  LOWORD(v25) = 588;
  HIWORD(v25) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v153, v25, *(int *)(a1 + 232));
  LOWORD(v26) = -8924;
  HIWORD(v26) = (unsigned int)"ip %d's cores" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v154,
    v153[0],
    v153[1],
    v153[2],
    v153[3],
    v153[4],
    v153[5],
    v153[6],
    v154,
    v26,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v27) = -9656;
  HIWORD(v27) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v27, 174, "serdes_external_loop_ate_init", 29, 487, 60, v257);
  sub_7660C(a1, a3, 77, 33554944);
  sub_7660C(a1, a3, 78, -2144247760);
  sub_7660C(a1, a3, 77, 122947412);
  sub_7660C(a1, a3, 78, -2144247760);
  V_LOCK();
  LOWORD(v28) = 588;
  HIWORD(v28) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v155, v28, *(int *)(a1 + 232));
  LOWORD(v23) = -8808;
  HIWORD(v23) = (unsigned int)"der" >> 16;
  v133 = v23;
  LOWORD(v23) = -8764;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v156,
    v155[0],
    v155[1],
    v155[2],
    v155[3],
    v155[4],
    v155[5],
    v155[6],
    v156,
    v133,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v29) = -9656;
  HIWORD(v29) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v29, 174, "serdes_external_loop_ate_init", 29, 491, 60, v257);
  sub_7660C(a1, a3, 77, 1073758208);
  sub_7660C(a1, a3, 78, -2144247770);
  sub_7660C(a1, a3, 77, -1072381932);
  sub_7660C(a1, a3, 78, -2144247770);
  V_LOCK();
  LOWORD(v30) = 588;
  HIWORD(v30) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v157, v30, *(int *)(a1 + 232));
  HIWORD(v23) = (unsigned int)"Setting_software_reset_KDA_2110" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v158,
    v157[0],
    v157[1],
    v157[2],
    v157[3],
    v157[4],
    v157[5],
    v157[6],
    v158,
    v23,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v31) = -9656;
  HIWORD(v31) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v31, 174, "serdes_external_loop_ate_init", 29, 494, 60, v257);
  if ( a4 == 2 )
    LOWORD(v32) = 4;
  else
    LOWORD(v32) = 3;
  if ( a4 == 2 )
    HIWORD(v32) = 4;
  else
    HIWORD(v32) = 3;
  sub_7660C(a1, a3, 77, v32);
  sub_7660C(a1, a3, 78, -2144247739);
  sub_7660C(a1, a3, 77, -1);
  sub_7660C(a1, a3, 78, -2144247732);
  V_LOCK();
  LOWORD(v33) = 588;
  HIWORD(v33) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v159, v33, *(int *)(a1 + 232));
  LOWORD(v34) = -8740;
  HIWORD(v34) = (unsigned int)"DA_2110" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v160,
    v159[0],
    v159[1],
    v159[2],
    v159[3],
    v159[4],
    v159[5],
    v159[6],
    v160,
    v34,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v35) = -9656;
  HIWORD(v35) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v35, 174, "serdes_external_loop_ate_init", 29, 501, 60, v257);
  sub_7660C(a1, a3, 77, 268439552);
  sub_7660C(a1, a3, 78, -2144247769);
  sub_7660C(a1, a3, 77, 805318656);
  sub_7660C(a1, a3, 78, -2144247769);
  V_LOCK();
  LOWORD(v36) = 588;
  HIWORD(v36) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v161, v36, *(int *)(a1 + 232));
  LOWORD(v37) = -8704;
  HIWORD(v37) = (unsigned int)"_KDA_2110" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v162,
    v161[0],
    v161[1],
    v161[2],
    v161[3],
    v161[4],
    v161[5],
    v161[6],
    v162,
    v37,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    505,
    60,
    v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144247751);
  sub_7660C(a1, a3, 77, 5505108);
  sub_7660C(a1, a3, 78, -2144247751);
  V_LOCK();
  LOWORD(v38) = 588;
  HIWORD(v38) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v163, v38, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v164,
    v163[0],
    v163[1],
    v163[2],
    v163[3],
    v163[4],
    v163[5],
    v163[6],
    v164,
    "%s Overriding tx_invert_r, tx_clk_rdy_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    508,
    60,
    v257);
  sub_7660C(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7660C(a1, a3, 78, -2144251903);
  sub_7660C(a1, a3, 77, 2293795);
  sub_7660C(a1, a3, 78, -2144251903);
  V_LOCK();
  LOWORD(v39) = 588;
  HIWORD(v39) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v165, v39, *(int *)(a1 + 232));
  LOWORD(v40) = -8588;
  HIWORD(v40) = (unsigned int)"0" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v166,
    v165[0],
    v165[1],
    v165[2],
    v165[3],
    v165[4],
    v165[5],
    v165[6],
    v166,
    v40,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    511,
    60,
    v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144251872);
  sub_7660C(a1, a3, 77, (int)&loc_80008);
  sub_7660C(a1, a3, 78, -2144251872);
  V_LOCK();
  LOWORD(v41) = 588;
  HIWORD(v41) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v167, v41, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v168,
    v167[0],
    v167[1],
    v167[2],
    v167[3],
    v167[4],
    v167[5],
    v167[6],
    v168,
    "%s Overriding sup_misc",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    514,
    60,
    v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144272111);
  sub_7660C(a1, a3, 77, 1073692671);
  sub_7660C(a1, a3, 78, -2144272088);
  V_LOCK();
  LOWORD(v42) = 588;
  HIWORD(v42) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v169, v42, *(int *)(a1 + 232));
  LOWORD(v43) = -8540;
  HIWORD(v43) = (unsigned int)"og_mux_KDA_2110" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v170,
    v169[0],
    v169[1],
    v169[2],
    v169[3],
    v169[4],
    v169[5],
    v169[6],
    v170,
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
    517,
    60,
    v257);
  sub_7660C(a1, a3, 77, 234884608);
  sub_7660C(a1, a3, 78, -2144272382);
  sub_7660C(a1, a3, 77, 235408904);
  sub_7660C(a1, a3, 78, -2144272382);
  V_LOCK();
  LOWORD(v44) = 588;
  HIWORD(v44) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v171, v44, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v172,
    v171[0],
    v171[1],
    v171[2],
    v171[3],
    v171[4],
    v171[5],
    v171[6],
    v172,
    "%s  Perform refb_clk_div2_en override",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    520,
    60,
    v257);
  sub_7660C(a1, a3, 77, 234884608);
  sub_7660C(a1, a3, 78, -2144272381);
  sub_7660C(a1, a3, 77, 235408904);
  sub_7660C(a1, a3, 78, -2144272381);
  V_LOCK();
  LOWORD(v45) = 588;
  HIWORD(v45) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v173, v45, *(int *)(a1 + 232));
  LOWORD(v46) = -8460;
  HIWORD(v46) = (unsigned int)"Setting_same_nonce_KDA_2110" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v174,
    v173[0],
    v173[1],
    v173[2],
    v173[3],
    v173[4],
    v173[5],
    v173[6],
    v174,
    v46,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    523,
    60,
    v257);
  sub_7660C(a1, a3, 77, (int)&unk_180018);
  sub_7660C(a1, a3, 78, -2144272353);
  V_LOCK();
  LOWORD(v47) = 588;
  HIWORD(v47) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v175, v47, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
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
    "%s Overriding refa_clk_en, refb_clk_en, mplla_force_en, mpllb_force_en, ref_repeat_clk_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    526,
    60,
    v257);
  sub_7660C(a1, a3, 77, 22348117);
  sub_7660C(a1, a3, 78, -2144272044);
  sub_7660C(a1, a3, 77, 67044351);
  sub_7660C(a1, a3, 78, -2144272044);
  V_LOCK();
  LOWORD(v48) = 588;
  HIWORD(v48) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v177, v48, *(int *)(a1 + 232));
  LOWORD(v49) = -8332;
  HIWORD(v49) = (unsigned int)"110" >> 16;
  logfmt_raw(
    v257,
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
    v49,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    529,
    60,
    v257);
  sub_7660C(a1, a3, 77, 61277095);
  sub_7660C(a1, a3, 78, -2144272380);
  sub_7660C(a1, a3, 77, 65471463);
  sub_7660C(a1, a3, 78, -2144272380);
  V_LOCK();
  LOWORD(v50) = 588;
  HIWORD(v50) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v179, v50, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v180,
    v179[0],
    v179[1],
    v179[2],
    v179[3],
    v179[4],
    v179[5],
    v179[6],
    v180,
    "%s Overriding refa_clkdet_en_r, refb_clkdet_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    532,
    60,
    v257);
  sub_7660C(a1, a3, 77, 235408904);
  sub_7660C(a1, a3, 78, -2144272382);
  sub_7660C(a1, a3, 77, 252186376);
  sub_7660C(a1, a3, 78, -2144272382);
  sub_7660C(a1, a3, 77, 235408904);
  sub_7660C(a1, a3, 78, -2144272381);
  sub_7660C(a1, a3, 77, 252186376);
  sub_7660C(a1, a3, 78, -2144272381);
  V_LOCK();
  LOWORD(v51) = 588;
  HIWORD(v51) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v181, v51, *(int *)(a1 + 232));
  LOWORD(v52) = -8256;
  HIWORD(v52) = (unsigned int)"ing_io_cfg_KDA_2110" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v182,
    v181[0],
    v181[1],
    v181[2],
    v181[3],
    v181[4],
    v181[5],
    v181[6],
    v182,
    v52,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    537,
    60,
    v257);
  sub_7660C(a1, a3, 77, (int)&loc_40004);
  sub_7660C(a1, a3, 78, -2144272379);
  sub_7660C(a1, a3, 77, (int)&loc_C000C);
  sub_7660C(a1, a3, 78, -2144272379);
  V_LOCK();
  LOWORD(v53) = 588;
  HIWORD(v53) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v183, v53, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v184,
    v183[0],
    v183[1],
    v183[2],
    v183[3],
    v183[4],
    v183[5],
    v183[6],
    v184,
    "%s Asserting mpllb_word_clk_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    540,
    60,
    v257);
  sub_7660C(a1, a3, 77, (int)&loc_40004);
  sub_7660C(a1, a3, 78, -2144272378);
  sub_7660C(a1, a3, 77, (int)&loc_C000C);
  sub_7660C(a1, a3, 78, -2144272378);
  V_LOCK();
  LOWORD(v54) = 588;
  HIWORD(v54) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v185, v54, *(int *)(a1 + 232));
  LOWORD(v55) = -8192;
  HIWORD(v55) = (unsigned int)"0" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v186,
    v185[0],
    v185[1],
    v185[2],
    v185[3],
    v185[4],
    v185[5],
    v185[6],
    v186,
    v55,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    543,
    60,
    v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144272372);
  sub_7660C(a1, a3, 77, (int)&loc_100010);
  sub_7660C(a1, a3, 78, -2144272372);
  V_LOCK();
  LOWORD(v56) = 588;
  HIWORD(v56) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v187, v56, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v188,
    v187[0],
    v187[1],
    v187[2],
    v187[3],
    v187[4],
    v187[5],
    v187[6],
    v188,
    "%s Overriding mpllb_ssc_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    546,
    60,
    v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144272360);
  sub_7660C(a1, a3, 77, (int)&loc_100010);
  sub_7660C(a1, a3, 78, -2144272360);
  V_LOCK();
  LOWORD(v57) = 588;
  HIWORD(v57) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v189, v57, *(int *)(a1 + 232));
  LOWORD(v58) = -8128;
  HIWORD(v58) = (unsigned int)"ing_read_sensor_temp_local_on_pic_KDA_2110" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v190,
    v189[0],
    v189[1],
    v189[2],
    v189[3],
    v189[4],
    v189[5],
    v189[6],
    v190,
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
    550,
    60,
    v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144272114);
  sub_7660C(a1, a3, 77, 710158932);
  sub_7660C(a1, a3, 78, -2144272114);
  V_LOCK();
  LOWORD(v59) = 588;
  HIWORD(v59) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v191, v59, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v192,
    v191[0],
    v191[1],
    v191[2],
    v191[3],
    v191[4],
    v191[5],
    v191[6],
    v192,
    "%s Overriding mplla_init_cal_disable, mpllb_init_cal_disable, rtune_req",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    553,
    60,
    v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144272124);
  sub_7660C(a1, a3, 77, (int)"re_header_hash");
  sub_7660C(a1, a3, 78, -2144272124);
  V_LOCK();
  LOWORD(v60) = 588;
  HIWORD(v60) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v193, v60, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v194,
    v193[0],
    v193[1],
    v193[2],
    v193[3],
    v193[4],
    v193[5],
    v193[6],
    v194,
    "%s Hooking up tx0_clk to appropriate ROPLL word/dword/qword, mplla/b word/dword/qword clock",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    557,
    60,
    v257);
  V_LOCK();
  LOWORD(v61) = 588;
  HIWORD(v61) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v195, v61, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v196,
    v195[0],
    v195[1],
    v195[2],
    v195[3],
    v195[4],
    v195[5],
    v195[6],
    v196,
    "%s  Overriding tx_clk_sel",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v62) = -9656;
  HIWORD(v62) = (unsigned int)"t_kas" >> 16;
  LOWORD(v63) = -7852;
  zlog(g_zc, v62, 174, "serdes_external_loop_ate_init", 29, 558, 60, v257);
  if ( a4 == 2 )
    LOWORD(v64) = 498;
  else
    LOWORD(v64) = 501;
  if ( a4 == 2 )
    HIWORD(v64) = 498;
  else
    HIWORD(v64) = 501;
  sub_7660C(a1, a3, 77, v64);
  sub_7660C(a1, a3, 78, -2144247559);
  V_LOCK();
  LOWORD(v65) = 588;
  HIWORD(v65) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v197, v65, *(int *)(a1 + 232));
  HIWORD(v63) = (unsigned int)"ChipSetting_one_asic_freq_KDA_2110" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v198,
    v197[0],
    v197[1],
    v197[2],
    v197[3],
    v197[4],
    v197[5],
    v197[6],
    v198,
    v63,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v66) = -9656;
  HIWORD(v66) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v66, 174, "serdes_external_loop_ate_init", 29, 563, 60, v257);
  sub_7660C(a1, a3, 77, 20971840);
  sub_7660C(a1, a3, 78, -2144251901);
  sub_7660C(a1, a3, 77, 88606024);
  sub_7660C(a1, a3, 78, -2144251901);
  V_LOCK();
  LOWORD(v67) = 588;
  HIWORD(v67) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v199, v67, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v200,
    v199[0],
    v199[1],
    v199[2],
    v199[3],
    v199[4],
    v199[5],
    v199[6],
    v200,
    "%s Overriding tx_eq_pre and tx_eq_post",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v68) = -9656;
  HIWORD(v68) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v68, 174, "serdes_external_loop_ate_init", 29, 567, 60, v257);
  sub_7660C(a1, a3, 77, (int)&loc_100010);
  sub_7660C(a1, a3, 78, -2144251900);
  sub_7660C(a1, a3, 77, 542122064);
  sub_7660C(a1, a3, 78, -2144251900);
  V_LOCK();
  LOWORD(v69) = 588;
  HIWORD(v69) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v201, v69, *(int *)(a1 + 232));
  LOWORD(v70) = -7752;
  HIWORD(v70) = (unsigned int)"dhash_start_kda" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v202,
    v201[0],
    v201[1],
    v201[2],
    v201[3],
    v201[4],
    v201[5],
    v201[6],
    v202,
    v70,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v71) = -9656;
  HIWORD(v71) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v71, 174, "serdes_external_loop_ate_init", 29, 570, 60, v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144247761);
  sub_7660C(a1, a3, 77, (int)"re_header_hash");
  sub_7660C(a1, a3, 78, -2144247761);
  V_LOCK();
  LOWORD(v72) = 588;
  HIWORD(v72) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v203, v72, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v204,
    v203[0],
    v203[1],
    v203[2],
    v203[3],
    v203[4],
    v203[5],
    v203[6],
    v204,
    "%s Overriding the RX_MARGIN_IN_PROG_OVRD and RX_MARGIN_ERROR_CLEAR_OVRD to 0",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v73) = -9656;
  HIWORD(v73) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v73, 174, "serdes_external_loop_ate_init", 29, 574, 60, v257);
  sub_7660C(a1, a3, 77, 537010178);
  sub_7660C(a1, a3, 78, -2144247750);
  V_LOCK();
  LOWORD(v74) = 588;
  HIWORD(v74) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v205, v74, *(int *)(a1 + 232));
  LOWORD(v75) = -7644;
  HIWORD(v75) = (unsigned int)"kspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v206,
    v205[0],
    v205[1],
    v205[2],
    v205[3],
    v205[4],
    v205[5],
    v205[6],
    v206,
    v75,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v76) = -9656;
  HIWORD(v76) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v76, 174, "serdes_external_loop_ate_init", 29, 576, 60, v257);
  sub_7660C(a1, a3, 77, 872428544);
  sub_7660C(a1, a3, 78, -2144247769);
  sub_7660C(a1, a3, 77, 1006648320);
  sub_7660C(a1, a3, 78, -2144247769);
  V_LOCK();
  LOWORD(v77) = 588;
  HIWORD(v77) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v207, v77, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v208,
    v207[0],
    v207[1],
    v207[2],
    v207[3],
    v207[4],
    v207[5],
    v207[6],
    v208,
    "%s  Overriding tx_ropll_word_clk_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v78) = -9656;
  HIWORD(v78) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v78, 174, "serdes_external_loop_ate_init", 29, 579, 60, v257);
  sub_7660C(a1, a3, 77, (int)&loc_80008);
  sub_7660C(a1, a3, 78, -2144247745);
  sub_7660C(a1, a3, 77, (int)&unk_180018);
  sub_7660C(a1, a3, 78, -2144247745);
  V_LOCK();
  LOWORD(v79) = 588;
  HIWORD(v79) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v209, v79, *(int *)(a1 + 232));
  LOWORD(v80) = -7572;
  HIWORD(v80) = (unsigned int)"root/tmp/release/build/godminer-origin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v210,
    v209[0],
    v209[1],
    v209[2],
    v209[3],
    v209[4],
    v209[5],
    v209[6],
    v210,
    v80,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v81) = -9656;
  HIWORD(v81) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v81, 174, "serdes_external_loop_ate_init", 29, 582, 60, v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144247798);
  sub_7660C(a1, a3, 77, (int)"re_header_hash");
  sub_7660C(a1, a3, 78, -2144247798);
  V_LOCK();
  LOWORD(v82) = 588;
  HIWORD(v82) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v211, v82, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v212,
    v211[0],
    v211[1],
    v211[2],
    v211[3],
    v211[4],
    v211[5],
    v211[6],
    v212,
    "%s Clear the rx_adapt_dis IRQ to prevent rx_ack assertion after initial powerup sequence completed",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v83) = -9656;
  HIWORD(v83) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v83, 174, "serdes_external_loop_ate_init", 29, 585, 60, v257);
  sub_7660C(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7660C(a1, a3, 78, -2144247604);
  V_LOCK();
  LOWORD(v84) = 588;
  HIWORD(v84) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v213, v84, *(int *)(a1 + 232));
  LOWORD(v85) = -7408;
  HIWORD(v85) = (unsigned int)"ay, chip:%02x, %08x" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v214,
    v213[0],
    v213[1],
    v213[2],
    v213[3],
    v213[4],
    v213[5],
    v213[6],
    v214,
    v85,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v86) = -9656;
  HIWORD(v86) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v86, 174, "serdes_external_loop_ate_init", 29, 587, 60, v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144247796);
  sub_7660C(a1, a3, 77, 268439552);
  sub_7660C(a1, a3, 78, -2144247796);
  V_LOCK();
  LOWORD(v87) = 588;
  HIWORD(v87) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v215, v87, *(int *)(a1 + 232));
  LOWORD(v88) = -9316;
  HIWORD(v88) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c" >> 16;
  v136 = v88;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v216,
    v215[0],
    v215[1],
    v215[2],
    v215[3],
    v215[4],
    v215[5],
    v215[6],
    v216,
    "%s Overriding rx_term_en_r, rx_disable_r, rx_cdr_ssc_en_r, rx_cdr_track_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v89) = -9656;
  HIWORD(v89) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v89, 174, "serdes_external_loop_ate_init", 29, 591, 60, v257);
  sub_7660C(a1, a3, 77, 0);
  sub_7660C(a1, a3, 78, -2144243666);
  sub_7660C(a1, a3, 77, (int)"re_header_hash");
  sub_7660C(a1, a3, 78, -2144243666);
  sub_7660C(a1, a3, 77, 4259905);
  sub_7660C(a1, a3, 78, -2144251869);
  sub_7660C(a1, a3, 77, 13304011);
  sub_7660C(a1, a3, 78, -2144251869);
  V_LOCK();
  LOWORD(v90) = 588;
  HIWORD(v90) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v217, v90, *(int *)(a1 + 232));
  LOWORD(v91) = -7284;
  HIWORD(v91) = (unsigned int)"%3d, get nonce crc error calc value %04x expected value %04x\n" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v218,
    v217[0],
    v217[1],
    v217[2],
    v217[3],
    v217[4],
    v217[5],
    v217[6],
    v218,
    v91,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v92) = -9656;
  HIWORD(v92) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v92, 174, "serdes_external_loop_ate_init", 29, 596, 60, v257);
  sub_7660C(a1, a3, 77, (int)&loc_40004);
  sub_7660C(a1, a3, 78, -2144243609);
  V_LOCK();
  LOWORD(v93) = 588;
  HIWORD(v93) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v219, v93, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v220,
    v219[0],
    v219[1],
    v219[2],
    v219[3],
    v219[4],
    v219[5],
    v219[6],
    v220,
    "%s Overriding lane_rx2tx_par_lb_en and lane_tx2rx_ser_lb_en to 0",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v94) = -9656;
  HIWORD(v94) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v94, 174, "serdes_external_loop_ate_init", 29, 598, 60, v257);
  sub_7660C(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_7660C(a1, a3, 78, -2144247768);
  V_LOCK();
  LOWORD(v95) = 588;
  HIWORD(v95) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v221, v95, *(int *)(a1 + 232));
  LOWORD(v96) = -7184;
  HIWORD(v96) = (unsigned int)"%08x" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v222,
    v221[0],
    v221[1],
    v221[2],
    v221[3],
    v221[4],
    v221[5],
    v221[6],
    v222,
    v96,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v97) = -9656;
  HIWORD(v97) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v97, 174, "serdes_external_loop_ate_init", 29, 600, 60, v257);
  sub_7660C(a1, a3, 77, (int)&loc_70004 + 3);
  sub_7660C(a1, a3, 78, -2144272078);
  V_LOCK();
  LOWORD(v98) = 588;
  HIWORD(v98) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v223, v98, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v224,
    v223[0],
    v223[1],
    v223[2],
    v223[3],
    v223[4],
    v223[5],
    v223[6],
    v224,
    "%s De-assrting per lane resets to 0",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v99) = -9656;
  HIWORD(v99) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v99, 174, "serdes_external_loop_ate_init", 29, 602, 60, v257);
  sub_7660C(a1, a3, 77, -2136964960);
  sub_7660C(a1, a3, 78, -2144247776);
  sub_7660C(a1, a3, 77, -2136309590);
  sub_7660C(a1, a3, 78, -2144247776);
  V_LOCK();
  LOWORD(v100) = 588;
  HIWORD(v100) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v225, v100, *(int *)(a1 + 232));
  LOWORD(v101) = -9348;
  HIWORD(v101) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/rele"
                               "ase/build/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v226,
    v225[0],
    v225[1],
    v225[2],
    v225[3],
    v225[4],
    v225[5],
    v225[6],
    v226,
    v101,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v102) = -9656;
  HIWORD(v102) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v102, 174, "serdes_external_loop_ate_init", 29, 605, 60, v257);
  serdes_wait_status(a1, a2, a3, 12308, 1);
  serdes_wait_status(a1, a2, a3, 12820, 1);
  serdes_wait_status(a1, a2, a3, 13332, 1);
  serdes_wait_status(a1, a2, a3, 13844, 1);
  V_LOCK();
  LOWORD(v103) = 588;
  HIWORD(v103) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v227, v103, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v228,
    v227[0],
    v227[1],
    v227[2],
    v227[3],
    v227[4],
    v227[5],
    v227[6],
    v228,
    v136,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    611,
    60,
    v257);
  serdes_wait_status(a1, a2, a3, 4156, 80);
  serdes_wait_status(a1, a2, a3, 4668, 80);
  serdes_wait_status(a1, a2, a3, 5180, 80);
  serdes_wait_status(a1, a2, a3, 5692, 80);
  V_LOCK();
  LOWORD(v104) = 588;
  HIWORD(v104) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v229, v104, *(int *)(a1 + 232));
  LOWORD(v105) = -7124;
  HIWORD(v105) = (unsigned int)"ChipSetting_analog_mux_LTC_1489" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v230,
    v229[0],
    v229[1],
    v229[2],
    v229[3],
    v229[4],
    v229[5],
    v229[6],
    v230,
    v105,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    616,
    60,
    v257);
  serdes_wait_status(a1, a2, a3, 8217, 0);
  serdes_wait_status(a1, a2, a3, 8729, 0);
  serdes_wait_status(a1, a2, a3, 9241, 0);
  serdes_wait_status(a1, a2, a3, 9753, 0);
  V_LOCK();
  LOWORD(v106) = 588;
  HIWORD(v106) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v231, v106, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v232,
    v231[0],
    v231[1],
    v231[2],
    v231[3],
    v231[4],
    v231[5],
    v231[6],
    v232,
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
    621,
    60,
    v257);
  serdes_wait_status(a1, a2, a3, 4114, 0);
  serdes_wait_status(a1, a2, a3, 4626, 0);
  serdes_wait_status(a1, a2, a3, 5138, 0);
  serdes_wait_status(a1, a2, a3, 5650, 0);
  V_LOCK();
  LOWORD(v107) = 588;
  HIWORD(v107) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v233, v107, *(int *)(a1 + 232));
  LOWORD(v108) = -7060;
  HIWORD(v108) = (unsigned int)"ing_same_nonce_LTC_1489" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v234,
    v233[0],
    v233[1],
    v233[2],
    v233[3],
    v233[4],
    v233[5],
    v233[6],
    v234,
    v108,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    626,
    60,
    v257);
  serdes_wait_status(a1, a2, a3, 8196, 0);
  serdes_wait_status(a1, a2, a3, 8708, 0);
  serdes_wait_status(a1, a2, a3, 9220, 0);
  serdes_wait_status(a1, a2, a3, 9732, 0);
  V_LOCK();
  LOWORD(v109) = 588;
  HIWORD(v109) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v235, v109, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v236,
    v235[0],
    v235[1],
    v235[2],
    v235[3],
    v235[4],
    v235[5],
    v235[6],
    v236,
    "%s Enabling TX LBERT in LFSR31",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v110) = -9656;
  HIWORD(v110) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v110, 174, "serdes_external_loop_ate_init", 29, 631, 60, v257);
  sub_7660C(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7660C(a1, a3, 78, -2144251791);
  V_LOCK();
  LOWORD(v111) = 588;
  HIWORD(v111) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v237, v111, *(int *)(a1 + 232));
  LOWORD(v112) = -6996;
  HIWORD(v112) = (unsigned int)"rred_plldivider" >> 16;
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v238,
    v237[0],
    v237[1],
    v237[2],
    v237[3],
    v237[4],
    v237[5],
    v237[6],
    v238,
    v112,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v113) = -9656;
  HIWORD(v113) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v113, 174, "serdes_external_loop_ate_init", 29, 633, 60, v257);
  sub_7660C(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_7660C(a1, a3, 78, -2144247768);
  sub_7660C(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_7660C(a1, a3, 78, -2144247768);
  V_LOCK();
  LOWORD(v114) = 588;
  HIWORD(v114) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v239, v114, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v240,
    v239[0],
    v239[1],
    v239[2],
    v239[3],
    v239[4],
    v239[5],
    v239[6],
    v240,
    "%s Overriding the RX_COARSE_ADAPT_SKIP_B0/B1/B2 to 1 to skip the RX coarse adaptation",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v115) = -9656;
  HIWORD(v115) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v115, 174, "serdes_external_loop_ate_init", 29, 637, 60, v257);
  sub_7660C(a1, a3, 77, (int)&loc_30000 + 3);
  sub_7660C(a1, a3, 78, -2144243377);
  sub_7660C(a1, a3, 77, (int)&loc_30000 + 3);
  sub_7660C(a1, a3, 78, -2144243377);
  sub_7660C(a1, a3, 77, (int)&loc_70004 + 3);
  sub_7660C(a1, a3, 78, -2144243377);
  V_LOCK();
  LOWORD(v116) = 588;
  HIWORD(v116) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v241, v116, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v242,
    v241[0],
    v241[1],
    v241[2],
    v241[3],
    v241[4],
    v241[5],
    v241[6],
    v242,
    1369408,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v117) = -9656;
  HIWORD(v117) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v117, 174, "serdes_external_loop_ate_init", 29, 641, 60, v257);
  sub_7660C(a1, a3, 77, -2136244053);
  sub_7660C(a1, a3, 78, -2144247776);
  sub_7660C(a1, a3, 77, -2136244053);
  sub_7660C(a1, a3, 78, -2144247776);
  usleep(0xAu);
  serdes_wait_status(a1, a2, a3, 4156, 81);
  serdes_wait_status(a1, a2, a3, 4668, 81);
  serdes_wait_status(a1, a2, a3, 5180, 81);
  serdes_wait_status(a1, a2, a3, 5692, 81);
  sub_7660C(a1, a3, 77, -2136309590);
  sub_7660C(a1, a3, 78, -2144247776);
  sub_7660C(a1, a3, 77, -2136309590);
  sub_7660C(a1, a3, 78, -2144247776);
  usleep(0x64u);
  serdes_wait_status(a1, a2, a3, 4156, 84);
  serdes_wait_status(a1, a2, a3, 4668, 80);
  serdes_wait_status(a1, a2, a3, 5180, 80);
  serdes_wait_status(a1, a2, a3, 5692, 84);
  usleep(0x3Cu);
  V_LOCK();
  LOWORD(v118) = 588;
  HIWORD(v118) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v243, v118, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v244,
    v243[0],
    v243[1],
    v243[2],
    v243[3],
    v243[4],
    v243[5],
    v243[6],
    v244,
    1369428,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v119) = -9656;
  HIWORD(v119) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v119, 174, "serdes_external_loop_ate_init", 29, 657, 60, v257);
  sub_7660C(a1, a3, 77, -1062551382);
  sub_7660C(a1, a3, 78, -2144247776);
  usleep(0x32u);
  V_LOCK();
  LOWORD(v120) = 588;
  HIWORD(v120) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v245, v120, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v246,
    v245[0],
    v245[1],
    v245[2],
    v245[3],
    v245[4],
    v245[5],
    v245[6],
    v246,
    v136,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v121) = -9656;
  HIWORD(v121) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v121, 174, "serdes_external_loop_ate_init", 29, 660, 60, v257);
  serdes_wait_status(a1, a2, a3, 4156, 86);
  serdes_wait_status(a1, a2, a3, 4668, 86);
  serdes_wait_status(a1, a2, a3, 5180, 86);
  serdes_wait_status(a1, a2, a3, 5692, 86);
  V_LOCK();
  LOWORD(v122) = 588;
  HIWORD(v122) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v247, v122, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v248,
    v247[0],
    v247[1],
    v247[2],
    v247[3],
    v247[4],
    v247[5],
    v247[6],
    v248,
    "%s Overriding rx_adapt_req",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v123) = -9656;
  HIWORD(v123) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v123, 174, "serdes_external_loop_ate_init", 29, 666, 60, v257);
  if ( a4 == 2 )
  {
    sub_7660C(a1, a3, 77, (int)&loc_30000 + 3);
    sub_7660C(a1, a3, 78, -2144247798);
    sub_7660C(a1, a3, 77, (int)&loc_30000 + 3);
    sub_7660C(a1, a3, 78, -2144247798);
    usleep(1u);
    serdes_wait_status(a1, a2, a3, 8218, 1);
    serdes_wait_status(a1, a2, a3, 8730, 1);
    serdes_wait_status(a1, a2, a3, 9242, 1);
    serdes_wait_status(a1, a2, a3, 9754, 1);
    sub_7660C(a1, a3, 77, (int)"re_header_hash");
    sub_7660C(a1, a3, 78, -2144247798);
    sub_7660C(a1, a3, 77, (int)"re_header_hash");
    sub_7660C(a1, a3, 78, -2144247798);
    usleep(0x64u);
    serdes_wait_status(a1, a2, a3, 8218, 0);
    serdes_wait_status(a1, a2, a3, 8730, 0);
    serdes_wait_status(a1, a2, a3, 9242, 0);
    serdes_wait_status(a1, a2, a3, 9754, 0);
  }
  V_LOCK();
  LOWORD(v124) = 588;
  HIWORD(v124) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v249, v124, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v250,
    v249[0],
    v249[1],
    v249[2],
    v249[3],
    v249[4],
    v249[5],
    v249[6],
    v250,
    "%s Disable rxX_data_en after adaptation done",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v125) = -9656;
  HIWORD(v125) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v125, 174, "serdes_external_loop_ate_init", 29, 685, 60, v257);
  sub_7660C(a1, a3, 77, -2136309590);
  sub_7660C(a1, a3, 78, -2144247776);
  V_LOCK();
  LOWORD(v126) = 588;
  HIWORD(v126) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v251, v126, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v252,
    v251[0],
    v251[1],
    v251[2],
    v251[3],
    v251[4],
    v251[5],
    v251[6],
    v252,
    "%s Re-enable rxX_data_en to track receive data",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v127) = -9656;
  HIWORD(v127) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v127, 174, "serdes_external_loop_ate_init", 29, 687, 60, v257);
  sub_7660C(a1, a3, 77, -1062551382);
  sub_7660C(a1, a3, 78, -2144247776);
  usleep(0x32u);
  V_LOCK();
  LOWORD(v128) = 588;
  HIWORD(v128) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v253, v128, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v254,
    v253[0],
    v253[1],
    v253[2],
    v253[3],
    v253[4],
    v253[5],
    v253[6],
    v254,
    v136,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v129) = -9656;
  HIWORD(v129) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v129, 174, "serdes_external_loop_ate_init", 29, 691, 60, v257);
  serdes_wait_status(a1, a2, a3, 4156, 82);
  serdes_wait_status(a1, a2, a3, 4668, 86);
  serdes_wait_status(a1, a2, a3, 5180, 82);
  serdes_wait_status(a1, a2, a3, 5692, 86);
  V_LOCK();
  LOWORD(v130) = 588;
  HIWORD(v130) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v255, v130, *(int *)(a1 + 232));
  logfmt_raw(
    v257,
    0x1000u,
    0,
    v256,
    v255[0],
    v255[1],
    v255[2],
    v255[3],
    v255[4],
    v255[5],
    v255[6],
    v256,
    "%s Enabling RX LBERT in LFSR31 and setting RX LBERT SYNC to 1",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v131) = -9656;
  HIWORD(v131) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v131, 174, "serdes_external_loop_ate_init", 29, 697, 60, v257);
  sub_7660C(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7660C(a1, a3, 78, -2144251757);
  sub_7660C(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7660C(a1, a3, 78, -2144251757);
  sub_7660C(a1, a3, 77, (int)&loc_110010 + 1);
  sub_7660C(a1, a3, 78, -2144251757);
  sub_7660C(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7660C(a1, a3, 78, -2144251757);
  sub_7660C(a1, a3, 77, (int)&loc_110010 + 1);
  sub_7660C(a1, a3, 78, -2144251757);
  sub_7660C(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7660C(a1, a3, 78, -2144251757);
  usleep(0xAu);
  return 0;
}
