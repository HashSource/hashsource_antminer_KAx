int __fastcall serdes_internal_loop_ate_init(int a1, unsigned int a2, unsigned int a3, int a4)
{
  int v7; // r7
  char *v8; // r1
  int v9; // r1
  int v10; // r10
  char *v11; // r1
  char *v12; // r1
  char *v13; // r1
  int v14; // lr
  char *v15; // r1
  char *v16; // r1
  int v17; // r1
  char *v18; // r1
  __int16 v19; // r7
  int v20; // r1
  int v21; // r7
  int v22; // r3
  char *v23; // r1
  char *v24; // r1
  int v25; // r1
  int v26; // r8
  char *v27; // r1
  int v28; // r1
  char *v29; // r1
  int v30; // r1
  int v31; // r10
  int v32; // r3
  char *v33; // r1
  char *v34; // r1
  char *v35; // r1
  int v36; // lr
  char *v37; // r1
  char *v38; // r1
  int v39; // lr
  char *v40; // r1
  char *v41; // r1
  int v42; // lr
  char *v43; // r1
  char *v44; // r1
  int v45; // lr
  char *v46; // r1
  char *v47; // r1
  int v48; // lr
  char *v49; // r1
  char *v50; // r1
  int v51; // lr
  char *v52; // r1
  char *v53; // r1
  int v54; // lr
  char *v55; // r1
  int v56; // r1
  char *v57; // r1
  int v58; // lr
  int v59; // r1
  char *v60; // r1
  int v61; // r1
  char *v62; // r1
  int v63; // r1
  int v64; // r3
  char *v65; // r1
  int v66; // r7
  int v67; // r1
  char *v68; // r1
  int v69; // lr
  int v70; // r1
  char *v71; // r1
  int v72; // r1
  char *v73; // r1
  int v74; // lr
  int v75; // r1
  char *v76; // r1
  int v77; // r1
  char *v78; // r1
  int v79; // lr
  int v80; // r1
  char *v81; // r1
  int v82; // r1
  char *v83; // r1
  int v84; // lr
  int v85; // r1
  char *v86; // r1
  int v87; // r1
  char *v88; // r1
  int v89; // lr
  int v90; // r1
  char *v91; // r1
  int v92; // r1
  char *v93; // r1
  int v94; // lr
  int v95; // r1
  char *v96; // r1
  int v97; // lr
  int v98; // r1
  char *v99; // r1
  int v100; // lr
  int v101; // r1
  char *v102; // r1
  int v103; // r1
  char *v104; // r1
  int v105; // r1
  char *v106; // r1
  int v107; // r1
  char *v108; // r1
  int v109; // lr
  int v110; // r1
  char *v111; // r1
  char *v112; // r1
  int v113; // lr
  char *v114; // r1
  char *v115; // r1
  int v116; // lr
  char *v117; // r1
  char *v118; // r1
  char *v119; // r1
  char *v120; // r1
  char *v121; // r1
  char *v122; // r1
  char *v123; // r1
  char *v125; // r1
  int v126; // r7
  int v129; // [sp+40h] [bp-1794h]
  _DWORD v130[7]; // [sp+50h] [bp-1784h] BYREF
  int v131; // [sp+6Ch] [bp-1768h]
  _DWORD v132[7]; // [sp+70h] [bp-1764h] BYREF
  int v133; // [sp+8Ch] [bp-1748h]
  _DWORD v134[7]; // [sp+90h] [bp-1744h] BYREF
  int v135; // [sp+ACh] [bp-1728h]
  _DWORD v136[7]; // [sp+B0h] [bp-1724h] BYREF
  int v137; // [sp+CCh] [bp-1708h]
  _DWORD v138[7]; // [sp+D0h] [bp-1704h] BYREF
  int v139; // [sp+ECh] [bp-16E8h]
  _DWORD v140[7]; // [sp+F0h] [bp-16E4h] BYREF
  int v141; // [sp+10Ch] [bp-16C8h]
  _DWORD v142[7]; // [sp+110h] [bp-16C4h] BYREF
  int v143; // [sp+12Ch] [bp-16A8h]
  _DWORD v144[7]; // [sp+130h] [bp-16A4h] BYREF
  int v145; // [sp+14Ch] [bp-1688h]
  _DWORD v146[7]; // [sp+150h] [bp-1684h] BYREF
  int v147; // [sp+16Ch] [bp-1668h]
  _DWORD v148[7]; // [sp+170h] [bp-1664h] BYREF
  int v149; // [sp+18Ch] [bp-1648h]
  _DWORD v150[7]; // [sp+190h] [bp-1644h] BYREF
  int v151; // [sp+1ACh] [bp-1628h]
  _DWORD v152[7]; // [sp+1B0h] [bp-1624h] BYREF
  int v153; // [sp+1CCh] [bp-1608h]
  _DWORD v154[7]; // [sp+1D0h] [bp-1604h] BYREF
  int v155; // [sp+1ECh] [bp-15E8h]
  _DWORD v156[7]; // [sp+1F0h] [bp-15E4h] BYREF
  int v157; // [sp+20Ch] [bp-15C8h]
  _DWORD v158[7]; // [sp+210h] [bp-15C4h] BYREF
  int v159; // [sp+22Ch] [bp-15A8h]
  _DWORD v160[7]; // [sp+230h] [bp-15A4h] BYREF
  int v161; // [sp+24Ch] [bp-1588h]
  _DWORD v162[7]; // [sp+250h] [bp-1584h] BYREF
  int v163; // [sp+26Ch] [bp-1568h]
  _DWORD v164[7]; // [sp+270h] [bp-1564h] BYREF
  int v165; // [sp+28Ch] [bp-1548h]
  _DWORD v166[7]; // [sp+290h] [bp-1544h] BYREF
  int v167; // [sp+2ACh] [bp-1528h]
  _DWORD v168[7]; // [sp+2B0h] [bp-1524h] BYREF
  int v169; // [sp+2CCh] [bp-1508h]
  _DWORD v170[7]; // [sp+2D0h] [bp-1504h] BYREF
  int v171; // [sp+2ECh] [bp-14E8h]
  _DWORD v172[7]; // [sp+2F0h] [bp-14E4h] BYREF
  int v173; // [sp+30Ch] [bp-14C8h]
  _DWORD v174[7]; // [sp+310h] [bp-14C4h] BYREF
  int v175; // [sp+32Ch] [bp-14A8h]
  _DWORD v176[7]; // [sp+330h] [bp-14A4h] BYREF
  int v177; // [sp+34Ch] [bp-1488h]
  _DWORD v178[7]; // [sp+350h] [bp-1484h] BYREF
  int v179; // [sp+36Ch] [bp-1468h]
  _DWORD v180[7]; // [sp+370h] [bp-1464h] BYREF
  int v181; // [sp+38Ch] [bp-1448h]
  _DWORD v182[7]; // [sp+390h] [bp-1444h] BYREF
  int v183; // [sp+3ACh] [bp-1428h]
  _DWORD v184[7]; // [sp+3B0h] [bp-1424h] BYREF
  int v185; // [sp+3CCh] [bp-1408h]
  _DWORD v186[7]; // [sp+3D0h] [bp-1404h] BYREF
  int v187; // [sp+3ECh] [bp-13E8h]
  _DWORD v188[7]; // [sp+3F0h] [bp-13E4h] BYREF
  int v189; // [sp+40Ch] [bp-13C8h]
  _DWORD v190[7]; // [sp+410h] [bp-13C4h] BYREF
  int v191; // [sp+42Ch] [bp-13A8h]
  _DWORD v192[7]; // [sp+430h] [bp-13A4h] BYREF
  int v193; // [sp+44Ch] [bp-1388h]
  _DWORD v194[7]; // [sp+450h] [bp-1384h] BYREF
  int v195; // [sp+46Ch] [bp-1368h]
  _DWORD v196[7]; // [sp+470h] [bp-1364h] BYREF
  int v197; // [sp+48Ch] [bp-1348h]
  _DWORD v198[7]; // [sp+490h] [bp-1344h] BYREF
  int v199; // [sp+4ACh] [bp-1328h]
  _DWORD v200[7]; // [sp+4B0h] [bp-1324h] BYREF
  int v201; // [sp+4CCh] [bp-1308h]
  _DWORD v202[7]; // [sp+4D0h] [bp-1304h] BYREF
  int v203; // [sp+4ECh] [bp-12E8h]
  _DWORD v204[7]; // [sp+4F0h] [bp-12E4h] BYREF
  int v205; // [sp+50Ch] [bp-12C8h]
  _DWORD v206[7]; // [sp+510h] [bp-12C4h] BYREF
  int v207; // [sp+52Ch] [bp-12A8h]
  _DWORD v208[7]; // [sp+530h] [bp-12A4h] BYREF
  int v209; // [sp+54Ch] [bp-1288h]
  _DWORD v210[7]; // [sp+550h] [bp-1284h] BYREF
  int v211; // [sp+56Ch] [bp-1268h]
  _DWORD v212[7]; // [sp+570h] [bp-1264h] BYREF
  int v213; // [sp+58Ch] [bp-1248h]
  _DWORD v214[7]; // [sp+590h] [bp-1244h] BYREF
  int v215; // [sp+5ACh] [bp-1228h]
  _DWORD v216[7]; // [sp+5B0h] [bp-1224h] BYREF
  int v217; // [sp+5CCh] [bp-1208h]
  _DWORD v218[7]; // [sp+5D0h] [bp-1204h] BYREF
  int v219; // [sp+5ECh] [bp-11E8h]
  _DWORD v220[7]; // [sp+5F0h] [bp-11E4h] BYREF
  int v221; // [sp+60Ch] [bp-11C8h]
  _DWORD v222[7]; // [sp+610h] [bp-11C4h] BYREF
  int v223; // [sp+62Ch] [bp-11A8h]
  _DWORD v224[7]; // [sp+630h] [bp-11A4h] BYREF
  int v225; // [sp+64Ch] [bp-1188h]
  _DWORD v226[7]; // [sp+650h] [bp-1184h] BYREF
  int v227; // [sp+66Ch] [bp-1168h]
  _DWORD v228[7]; // [sp+670h] [bp-1164h] BYREF
  int v229; // [sp+68Ch] [bp-1148h]
  _DWORD v230[7]; // [sp+690h] [bp-1144h] BYREF
  int v231; // [sp+6ACh] [bp-1128h]
  _DWORD v232[7]; // [sp+6B0h] [bp-1124h] BYREF
  int v233; // [sp+6CCh] [bp-1108h]
  _DWORD v234[7]; // [sp+6D0h] [bp-1104h] BYREF
  int v235; // [sp+6ECh] [bp-10E8h]
  _DWORD v236[7]; // [sp+6F0h] [bp-10E4h] BYREF
  int v237; // [sp+70Ch] [bp-10C8h]
  _DWORD v238[7]; // [sp+710h] [bp-10C4h] BYREF
  int v239; // [sp+72Ch] [bp-10A8h]
  _DWORD v240[7]; // [sp+730h] [bp-10A4h] BYREF
  int v241; // [sp+74Ch] [bp-1088h]
  _DWORD v242[7]; // [sp+750h] [bp-1084h] BYREF
  int v243; // [sp+76Ch] [bp-1068h]
  _DWORD v244[7]; // [sp+770h] [bp-1064h] BYREF
  int v245; // [sp+78Ch] [bp-1048h]
  _DWORD v246[7]; // [sp+790h] [bp-1044h] BYREF
  int v247; // [sp+7ACh] [bp-1028h]
  _DWORD v248[7]; // [sp+7B0h] [bp-1024h] BYREF
  int v249; // [sp+7CCh] [bp-1008h]
  char v250[4100]; // [sp+7D0h] [bp-1004h] BYREF

  LOWORD(v7) = -10532;
  V_LOCK();
  LOWORD(v8) = 27796;
  HIWORD(v8) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v130, v8, *(int *)(a1 + 256));
  HIWORD(v7) = (unsigned int)"te, tx_pll_en" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v131,
    v130[0],
    v130[1],
    v130[2],
    v130[3],
    v130[4],
    v130[5],
    v130[6],
    v131,
    v7,
    "serdes_internal_loop_ate_init",
    a4);
  V_UNLOCK();
  LOWORD(v9) = -10928;
  HIWORD(v9) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v9, 174, "serdes_internal_loop_ate_init", 29, 508, 60, v250);
  sub_7FA14(a1, a3, 86, 3670024);
  usleep(0x258u);
  sub_7FEE8(a1, a3, 86);
  sub_7FA14(a1, a3, 85, 109905420);
  usleep(0x258u);
  sub_7FEE8(a1, a3, 85);
  sub_7FA14(a1, a3, 101, -268374016);
  usleep(0x258u);
  sub_7FEE8(a1, a3, 101);
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
  if ( check_core_reg_with_expect_data(a1, a2, a3, 125, 0x70007000u) )
  {
    V_LOCK();
    LOWORD(v125) = 27796;
    HIWORD(v125) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v132, v125, *(int *)(a1 + 256));
    LOWORD(v126) = -10512;
    HIWORD(v126) = (unsigned int)"verride tx_width_r" >> 16;
    logfmt_raw(
      v250,
      0x1000u,
      0,
      v133,
      v132[0],
      v132[1],
      v132[2],
      v132[3],
      v132[4],
      v132[5],
      v132[6],
      v133,
      v126,
      "serdes_internal_loop_ate_init",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "serdes_internal_loop_ate_init",
      29,
      564,
      100,
      v250);
  }
  sub_7FA14(a1, a3, 86, 137889800);
  LOWORD(v10) = -10476;
  usleep(0x12Cu);
  V_LOCK();
  LOWORD(v11) = 27796;
  HIWORD(v11) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v134, v11, *(int *)(a1 + 256));
  HIWORD(v10) = (unsigned int)"aster_pll_state_r" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v135,
    v134[0],
    v134[1],
    v134[2],
    v134[3],
    v134[4],
    v134[5],
    v134[6],
    v135,
    v10,
    "serdes_internal_loop_ate_init",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    569,
    60,
    v250);
  sub_7FA14(a1, a3, 77, (int)&loc_30000 + 3);
  sub_7FA14(a1, a3, 78, -2144272046);
  serdes_apb_read(a1, a2, a3, 338);
  sub_7FA14(a1, a3, 77, 33554944);
  sub_7FA14(a1, a3, 78, -2144247742);
  serdes_apb_read(a1, a2, a3, 24642);
  sub_7FA14(a1, a3, 77, 100664832);
  sub_7FA14(a1, a3, 78, -2144247742);
  sub_7FA14(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7FA14(a1, a3, 78, -2144272003);
  V_LOCK();
  LOWORD(v12) = 27796;
  HIWORD(v12) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v136, v12, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v137,
    v136[0],
    v136[1],
    v136[2],
    v136[3],
    v136[4],
    v136[5],
    v136[6],
    v137,
    "%s Override tx_cnxt_sel rx_cnxt_sel tx_cmn_cntx_sel",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    579,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 100664832);
  sub_7FA14(a1, a3, 78, -2144247742);
  sub_801BC(a1, a3, 24643, a4);
  sub_801BC(a1, a3, 24644, a4 << 7);
  sub_7FA14(a1, a3, 77, 117442304);
  sub_7FA14(a1, a3, 78, -2144247742);
  sub_801BC(a1, a3, 24643, a4 | 0x100);
  sub_801BC(a1, a3, 24644, (a4 << 7) | 0x8000);
  V_LOCK();
  LOWORD(v13) = 27796;
  HIWORD(v13) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v138, v13, *(int *)(a1 + 256));
  LOWORD(v14) = -10388;
  HIWORD(v14) = (unsigned int)"en_r" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v139,
    v138[0],
    v138[1],
    v138[2],
    v138[3],
    v138[4],
    v138[5],
    v138[6],
    v139,
    v14,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    587,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144251892);
  sub_7FA14(a1, a3, 77, 268439552);
  sub_7FA14(a1, a3, 78, -2144251892);
  sub_7FA14(a1, a3, 77, 33489407);
  sub_7FA14(a1, a3, 78, -2144272086);
  sub_7FA14(a1, a3, 77, 268374015);
  sub_7FA14(a1, a3, 78, -2144272085);
  V_LOCK();
  LOWORD(v15) = 27796;
  HIWORD(v15) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v140, v15, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v141,
    v140[0],
    v140[1],
    v140[2],
    v140[3],
    v140[4],
    v140[5],
    v140[6],
    v141,
    "%s Overriding lane_cntx_en",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    592,
    60,
    v250);
  sub_801BC(a1, a3, 24644, (a4 << 7) | 0x8020);
  sub_801BC(a1, a3, 24644, (a4 << 7) | 0x8060);
  sub_7FA14(a1, a3, 77, -1);
  sub_7FA14(a1, a3, 78, -2144247719);
  sub_7FA14(a1, a3, 77, -8388737);
  sub_7FA14(a1, a3, 78, -2144247718);
  V_LOCK();
  LOWORD(v16) = 27796;
  HIWORD(v16) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v142, v16, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v143,
    v142[0],
    v142[1],
    v142[2],
    v142[3],
    v142[4],
    v142[5],
    v142[6],
    v143,
    "%s Override tx_req, rx_req, and De-assert rx_data_en",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v17) = -10928;
  HIWORD(v17) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v17, 174, "serdes_internal_loop_ate_init", 29, 597, 60, v250);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144247776);
  sub_7FA14(a1, a3, 77, -2136964960);
  sub_7FA14(a1, a3, 78, -2144247776);
  V_LOCK();
  LOWORD(v18) = 27796;
  HIWORD(v18) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v144, v18, *(int *)(a1 + 256));
  v19 = -10276;
  HIWORD(v21) = (unsigned int)"clk_div2_en override" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v145,
    v144[0],
    v144[1],
    v144[2],
    v144[3],
    v144[4],
    v144[5],
    v144[6],
    v145,
    v21,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v20) = -10928;
  HIWORD(v20) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v20, 174, "serdes_internal_loop_ate_init", 29, 601, 60, v250);
  LOWORD(v21) = -10252;
  if ( a4 == 2 )
    LOWORD(v22) = 4160;
  else
    LOWORD(v22) = 4144;
  if ( a4 == 2 )
    HIWORD(v22) = 4160;
  else
    HIWORD(v22) = 4144;
  sub_7FA14(a1, a3, 77, v22);
  sub_7FA14(a1, a3, 78, -2144247722);
  sub_7FA14(a1, a3, 77, -1);
  sub_7FA14(a1, a3, 78, -2144247718);
  V_LOCK();
  LOWORD(v23) = 27796;
  HIWORD(v23) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v146, v23, *(int *)(a1 + 256));
  HIWORD(v21) = (unsigned int)"%s  Perform refb_clk_div2_en override" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v147,
    v146[0],
    v146[1],
    v146[2],
    v146[3],
    v146[4],
    v146[5],
    v146[6],
    v147,
    v21,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    609,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144247771);
  sub_7FA14(a1, a3, 77, (int)&loc_140014);
  sub_7FA14(a1, a3, 78, -2144247771);
  V_LOCK();
  LOWORD(v24) = 27796;
  HIWORD(v24) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v148, v24, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v149,
    v148[0],
    v148[1],
    v148[2],
    v148[3],
    v148[4],
    v148[5],
    v148[6],
    v149,
    "%s Override rx_recal_skip_en, rx_recal_force_en, rx_recal_bank_sel, rx_coarse_adpt_force_en, rx_coarse_adpt_skip_en",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v25) = -10928;
  HIWORD(v25) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  LOWORD(v26) = -10104;
  zlog(g_zc, v25, 174, "serdes_internal_loop_ate_init", 29, 613, 60, v250);
  sub_7FA14(a1, a3, 77, 33554944);
  sub_7FA14(a1, a3, 78, -2144247760);
  sub_7FA14(a1, a3, 77, 122947412);
  sub_7FA14(a1, a3, 78, -2144247760);
  V_LOCK();
  LOWORD(v27) = 27796;
  HIWORD(v27) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v150, v27, *(int *)(a1 + 256));
  HIWORD(v26) = (unsigned int)"ref_repeat_clk_en_r" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v151,
    v150[0],
    v150[1],
    v150[2],
    v150[3],
    v150[4],
    v150[5],
    v150[6],
    v151,
    v26,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v28) = -10928;
  HIWORD(v28) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v28, 174, "serdes_internal_loop_ate_init", 29, 617, 60, v250);
  sub_7FA14(a1, a3, 77, 1073758208);
  sub_7FA14(a1, a3, 78, -2144247770);
  sub_7FA14(a1, a3, 77, -1072381932);
  sub_7FA14(a1, a3, 78, -2144247770);
  V_LOCK();
  LOWORD(v29) = 27796;
  HIWORD(v29) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v152, v29, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v153,
    v152[0],
    v152[1],
    v152[2],
    v152[3],
    v152[4],
    v152[5],
    v152[6],
    v153,
    "%s Override tx_width_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v30) = -10928;
  HIWORD(v30) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  LOWORD(v31) = -10036;
  zlog(g_zc, v30, 174, "serdes_internal_loop_ate_init", 29, 620, 60, v250);
  if ( a4 == 2 )
    LOWORD(v32) = 4;
  else
    LOWORD(v32) = 3;
  if ( a4 == 2 )
    HIWORD(v32) = 4;
  else
    HIWORD(v32) = 3;
  sub_7FA14(a1, a3, 77, v32);
  sub_7FA14(a1, a3, 78, -2144247739);
  sub_7FA14(a1, a3, 77, -1);
  sub_7FA14(a1, a3, 78, -2144247732);
  V_LOCK();
  LOWORD(v33) = 27796;
  HIWORD(v33) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v154, v33, *(int *)(a1 + 256));
  HIWORD(v31) = (unsigned int)"t_en_r, refb_clkdet_en_r" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v155,
    v154[0],
    v154[1],
    v154[2],
    v154[3],
    v154[4],
    v154[5],
    v154[6],
    v155,
    v31,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    628,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 268439552);
  sub_7FA14(a1, a3, 78, -2144247769);
  sub_7FA14(a1, a3, 77, 805318656);
  sub_7FA14(a1, a3, 78, -2144247769);
  V_LOCK();
  LOWORD(v34) = 27796;
  HIWORD(v34) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v156, v34, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v157,
    v156[0],
    v156[1],
    v156[2],
    v156[3],
    v156[4],
    v156[5],
    v156[6],
    v157,
    "%s Override tx_recal_bank_sel_r, tx_recal_force_en_r, tx_recal_skip_en_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    632,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144247751);
  sub_7FA14(a1, a3, 77, 5505108);
  sub_7FA14(a1, a3, 78, -2144247751);
  V_LOCK();
  LOWORD(v35) = 27796;
  HIWORD(v35) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v158, v35, *(int *)(a1 + 256));
  LOWORD(v36) = -9924;
  HIWORD(v36) = (unsigned int)"_ssc_en_r" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v159,
    v158[0],
    v158[1],
    v158[2],
    v158[3],
    v158[4],
    v158[5],
    v158[6],
    v159,
    v36,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    635,
    60,
    v250);
  sub_7FA14(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7FA14(a1, a3, 78, -2144251903);
  sub_7FA14(a1, a3, 77, 2293795);
  sub_7FA14(a1, a3, 78, -2144251903);
  V_LOCK();
  LOWORD(v37) = 27796;
  HIWORD(v37) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v160, v37, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    "%s Overriding rx_invert",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    638,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144251872);
  sub_7FA14(a1, a3, 77, (int)&loc_80008);
  sub_7FA14(a1, a3, 78, -2144251872);
  V_LOCK();
  LOWORD(v38) = 27796;
  HIWORD(v38) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v162, v38, *(int *)(a1 + 256));
  LOWORD(v39) = -9860;
  HIWORD(v39) = (unsigned int)"b_recal_skip_en, mplla/b_recal_force_en, mplla/b_cal_bank_sel" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v163,
    v162[0],
    v162[1],
    v162[2],
    v162[3],
    v162[4],
    v162[5],
    v162[6],
    v163,
    v39,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    641,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144272111);
  sub_7FA14(a1, a3, 77, 1073692671);
  sub_7FA14(a1, a3, 78, -2144272088);
  V_LOCK();
  LOWORD(v40) = 27796;
  HIWORD(v40) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v164, v40, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v165,
    v164[0],
    v164[1],
    v164[2],
    v164[3],
    v164[4],
    v164[5],
    v164[6],
    v165,
    "%s Perform refa_clk_div2_en override",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    644,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 234884608);
  sub_7FA14(a1, a3, 78, -2144272382);
  sub_7FA14(a1, a3, 77, 235408904);
  sub_7FA14(a1, a3, 78, -2144272382);
  V_LOCK();
  LOWORD(v41) = 27796;
  HIWORD(v41) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v166, v41, *(int *)(a1 + 256));
  LOWORD(v42) = -9796;
  HIWORD(v42) = (unsigned int)"%s Overriding mplla_init_cal_disable, mpllb_init_cal_disable, rtune_req" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v167,
    v166[0],
    v166[1],
    v166[2],
    v166[3],
    v166[4],
    v166[5],
    v166[6],
    v167,
    v42,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    647,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 234884608);
  sub_7FA14(a1, a3, 78, -2144272381);
  sub_7FA14(a1, a3, 77, 235408904);
  sub_7FA14(a1, a3, 78, -2144272381);
  V_LOCK();
  LOWORD(v43) = 27796;
  HIWORD(v43) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v168, v43, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v169,
    v168[0],
    v168[1],
    v168[2],
    v168[3],
    v168[4],
    v168[5],
    v168[6],
    v169,
    "%s Get access to external resistor",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    650,
    60,
    v250);
  sub_7FA14(a1, a3, 77, (int)&unk_180018);
  sub_7FA14(a1, a3, 78, -2144272353);
  V_LOCK();
  LOWORD(v44) = 27796;
  HIWORD(v44) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v170, v44, *(int *)(a1 + 256));
  LOWORD(v45) = -9720;
  HIWORD(v45) = (unsigned int)"ooking up tx0_clk to appropriate ROPLL word/dword/qword, mplla/b word/dword/qword clock" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v171,
    v170[0],
    v170[1],
    v170[2],
    v170[3],
    v170[4],
    v170[5],
    v170[6],
    v171,
    v45,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    653,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 22348117);
  sub_7FA14(a1, a3, 78, -2144272044);
  sub_7FA14(a1, a3, 77, 67044351);
  sub_7FA14(a1, a3, 78, -2144272044);
  V_LOCK();
  LOWORD(v46) = 27796;
  HIWORD(v46) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v172, v46, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v173,
    v172[0],
    v172[1],
    v172[2],
    v172[3],
    v172[4],
    v172[5],
    v172[6],
    v173,
    "%s Overriding bg_en_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    656,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 61277095);
  sub_7FA14(a1, a3, 78, -2144272380);
  sub_7FA14(a1, a3, 77, 65471463);
  sub_7FA14(a1, a3, 78, -2144272380);
  V_LOCK();
  LOWORD(v47) = 27796;
  HIWORD(v47) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v174, v47, *(int *)(a1 + 256));
  LOWORD(v48) = -9604;
  HIWORD(v48) = (unsigned int)"%s Overriding tx_eq_main_r, tx_beacon_en_r, tx_disable_r" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v175,
    v174[0],
    v174[1],
    v174[2],
    v174[3],
    v174[4],
    v174[5],
    v174[6],
    v175,
    v48,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    659,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 235408904);
  sub_7FA14(a1, a3, 78, -2144272382);
  sub_7FA14(a1, a3, 77, 252186376);
  sub_7FA14(a1, a3, 78, -2144272382);
  sub_7FA14(a1, a3, 77, 235408904);
  sub_7FA14(a1, a3, 78, -2144272381);
  sub_7FA14(a1, a3, 77, 252186376);
  sub_7FA14(a1, a3, 78, -2144272381);
  V_LOCK();
  LOWORD(v49) = 27796;
  HIWORD(v49) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v176, v49, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v177,
    v176[0],
    v176[1],
    v176[2],
    v176[3],
    v176[4],
    v176[5],
    v176[6],
    v177,
    "%s Asserting mplla_word_clk_en",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    664,
    60,
    v250);
  sub_7FA14(a1, a3, 77, (int)&loc_40004);
  sub_7FA14(a1, a3, 78, -2144272379);
  sub_7FA14(a1, a3, 77, (int)&loc_C000C);
  sub_7FA14(a1, a3, 78, -2144272379);
  V_LOCK();
  LOWORD(v50) = 27796;
  HIWORD(v50) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v178, v50, *(int *)(a1 + 256));
  LOWORD(v51) = -9520;
  HIWORD(v51) = (unsigned int)"GIN_IN_PROG_OVRD and RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v179,
    v178[0],
    v178[1],
    v178[2],
    v178[3],
    v178[4],
    v178[5],
    v178[6],
    v179,
    v51,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    667,
    60,
    v250);
  sub_7FA14(a1, a3, 77, (int)&loc_40004);
  sub_7FA14(a1, a3, 78, -2144272378);
  sub_7FA14(a1, a3, 77, (int)&loc_C000C);
  sub_7FA14(a1, a3, 78, -2144272378);
  V_LOCK();
  LOWORD(v52) = 27796;
  HIWORD(v52) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v180, v52, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v181,
    v180[0],
    v180[1],
    v180[2],
    v180[3],
    v180[4],
    v180[5],
    v180[6],
    v181,
    "%s  Overriding mplla_ssc_en_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    670,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144272372);
  sub_7FA14(a1, a3, 77, (int)&loc_100010);
  sub_7FA14(a1, a3, 78, -2144272372);
  V_LOCK();
  LOWORD(v53) = 27796;
  HIWORD(v53) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v182, v53, *(int *)(a1 + 256));
  LOWORD(v54) = -9456;
  HIWORD(v54) = (unsigned int)"iding lane_ref_sel_r" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v183,
    v182[0],
    v182[1],
    v182[2],
    v182[3],
    v182[4],
    v182[5],
    v182[6],
    v183,
    v54,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    673,
    60,
    v250);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144272360);
  sub_7FA14(a1, a3, 77, (int)&loc_100010);
  sub_7FA14(a1, a3, 78, -2144272360);
  V_LOCK();
  LOWORD(v55) = 27796;
  HIWORD(v55) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v184, v55, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v185,
    v184[0],
    v184[1],
    v184[2],
    v184[3],
    v184[4],
    v184[5],
    v184[6],
    v185,
    "%s Overriding mplla/b_recal_skip_en, mplla/b_recal_force_en, mplla/b_cal_bank_sel",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v56) = -10928;
  HIWORD(v56) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v56, 174, "serdes_internal_loop_ate_init", 29, 677, 60, v250);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144272114);
  sub_7FA14(a1, a3, 77, 710158932);
  sub_7FA14(a1, a3, 78, -2144272114);
  V_LOCK();
  LOWORD(v57) = 27796;
  HIWORD(v57) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v186, v57, *(int *)(a1 + 256));
  LOWORD(v58) = -9340;
  HIWORD(v58) = (unsigned int)"adapt_req_r" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v187,
    v186[0],
    v186[1],
    v186[2],
    v186[3],
    v186[4],
    v186[5],
    v186[6],
    v187,
    v58,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v59) = -10928;
  HIWORD(v59) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v59, 174, "serdes_internal_loop_ate_init", 29, 680, 60, v250);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144272124);
  sub_7FA14(a1, a3, 77, (int)"equihash_blake2b_update");
  sub_7FA14(a1, a3, 78, -2144272124);
  V_LOCK();
  LOWORD(v60) = 27796;
  HIWORD(v60) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v188, v60, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v189,
    v188[0],
    v188[1],
    v188[2],
    v188[3],
    v188[4],
    v188[5],
    v188[6],
    v189,
    "%s Hooking up tx0_clk to appropriate ROPLL word/dword/qword, mplla/b word/dword/qword clock",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v61) = -10928;
  HIWORD(v61) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v61, 174, "serdes_internal_loop_ate_init", 29, 684, 60, v250);
  V_LOCK();
  LOWORD(v62) = 27796;
  HIWORD(v62) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v190, v62, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v191,
    v190[0],
    v190[1],
    v190[2],
    v190[3],
    v190[4],
    v190[5],
    v190[6],
    v191,
    "%s  Overriding tx_clk_sel",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v63) = -10928;
  HIWORD(v63) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v63, 174, "serdes_internal_loop_ate_init", 29, 685, 60, v250);
  if ( a4 == 2 )
    LOWORD(v64) = 498;
  else
    LOWORD(v64) = 501;
  if ( a4 == 2 )
    HIWORD(v64) = 498;
  else
    HIWORD(v64) = 501;
  sub_7FA14(a1, a3, 77, v64);
  sub_7FA14(a1, a3, 78, -2144247559);
  V_LOCK();
  LOWORD(v65) = 27796;
  HIWORD(v65) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v192, v65, *(int *)(a1 + 256));
  LOWORD(v66) = -9148;
  HIWORD(v66) = (unsigned int)"le_r, rx_cdr_ssc_en_r, rx_cdr_track_en_r" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v193,
    v192[0],
    v192[1],
    v192[2],
    v192[3],
    v192[4],
    v192[5],
    v192[6],
    v193,
    v66,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v67) = -10928;
  HIWORD(v67) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v67, 174, "serdes_internal_loop_ate_init", 29, 690, 60, v250);
  sub_7FA14(a1, a3, 77, 25166208);
  sub_7FA14(a1, a3, 78, -2144251901);
  sub_7FA14(a1, a3, 77, 92800392);
  sub_7FA14(a1, a3, 78, -2144251901);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144251900);
  sub_7FA14(a1, a3, 77, 541073472);
  sub_7FA14(a1, a3, 78, -2144251900);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144247761);
  sub_7FA14(a1, a3, 77, (int)"equihash_blake2b_update");
  sub_7FA14(a1, a3, 78, -2144247761);
  sub_7FA14(a1, a3, 77, 537010178);
  sub_7FA14(a1, a3, 78, -2144247750);
  V_LOCK();
  LOWORD(v68) = 27796;
  HIWORD(v68) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v194, v68, *(int *)(a1 + 256));
  LOWORD(v69) = -9088;
  HIWORD(v69) = (unsigned int)"R PPM detector" >> 16;
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v195,
    v194[0],
    v194[1],
    v194[2],
    v194[3],
    v194[4],
    v194[5],
    v194[6],
    v195,
    v69,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v70) = -10928;
  HIWORD(v70) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v70, 174, "serdes_internal_loop_ate_init", 29, 702, 60, v250);
  sub_7FA14(a1, a3, 77, 537010178);
  sub_7FA14(a1, a3, 78, -2144247750);
  V_LOCK();
  LOWORD(v71) = 27796;
  HIWORD(v71) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v196, v71, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
    0x1000u,
    0,
    v197,
    v196[0],
    v196[1],
    v196[2],
    v196[3],
    v196[4],
    v196[5],
    v196[6],
    v197,
    "%s Overriding lane_ref_sel_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v72) = -10928;
  HIWORD(v72) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v72, 174, "serdes_internal_loop_ate_init", 29, 704, 60, v250);
  sub_7FA14(a1, a3, 77, 872428544);
  sub_7FA14(a1, a3, 78, -2144247769);
  sub_7FA14(a1, a3, 77, 1006648320);
  sub_7FA14(a1, a3, 78, -2144247769);
  V_LOCK();
  LOWORD(v73) = 27796;
  HIWORD(v73) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v198, v73, *(int *)(a1 + 256));
  LOWORD(v74) = -8976;
  HIWORD(v74) = (unsigned int)"e-assrting per lane resets to 0" >> 16;
  logfmt_raw(
    v250,
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
    v74,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v75) = -10928;
  HIWORD(v75) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v75, 174, "serdes_internal_loop_ate_init", 29, 707, 60, v250);
  sub_7FA14(a1, a3, 77, (int)&loc_80008);
  sub_7FA14(a1, a3, 78, -2144247745);
  sub_7FA14(a1, a3, 77, (int)&unk_180018);
  sub_7FA14(a1, a3, 78, -2144247745);
  V_LOCK();
  LOWORD(v76) = 27796;
  HIWORD(v76) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v200, v76, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    "%s Overriding rx_offcan_cont_r, rx_adapt_cont_r, rx_adapt_req_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v77) = -10928;
  HIWORD(v77) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v77, 174, "serdes_internal_loop_ate_init", 29, 710, 60, v250);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144247798);
  sub_7FA14(a1, a3, 77, (int)"equihash_blake2b_update");
  sub_7FA14(a1, a3, 78, -2144247798);
  V_LOCK();
  LOWORD(v78) = 27796;
  HIWORD(v78) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v202, v78, *(int *)(a1 + 256));
  LOWORD(v79) = -8872;
  HIWORD(v79) = (unsigned int)"." >> 16;
  logfmt_raw(
    v250,
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
    v79,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v80) = -10928;
  HIWORD(v80) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v80, 174, "serdes_internal_loop_ate_init", 29, 713, 60, v250);
  sub_7FA14(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7FA14(a1, a3, 78, -2144247604);
  V_LOCK();
  LOWORD(v81) = 27796;
  HIWORD(v81) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v204, v81, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    "%s Overriding rx_margin_iq and rx_delta_iq",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v82) = -10928;
  HIWORD(v82) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v82, 174, "serdes_internal_loop_ate_init", 29, 715, 60, v250);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144247796);
  sub_7FA14(a1, a3, 77, 268439552);
  sub_7FA14(a1, a3, 78, -2144247796);
  V_LOCK();
  LOWORD(v83) = 27796;
  HIWORD(v83) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v206, v83, *(int *)(a1 + 256));
  LOWORD(v84) = -8728;
  HIWORD(v84) = (unsigned int)" level" >> 16;
  logfmt_raw(
    v250,
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
    v84,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v85) = -10928;
  HIWORD(v85) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v85, 174, "serdes_internal_loop_ate_init", 29, 718, 60, v250);
  sub_7FA14(a1, a3, 77, 0);
  sub_7FA14(a1, a3, 78, -2144243666);
  sub_7FA14(a1, a3, 77, (int)"equihash_blake2b_update");
  sub_7FA14(a1, a3, 78, -2144243666);
  sub_7FA14(a1, a3, 77, 4259905);
  sub_7FA14(a1, a3, 78, -2144251869);
  sub_7FA14(a1, a3, 77, 13304011);
  sub_7FA14(a1, a3, 78, -2144251869);
  V_LOCK();
  LOWORD(v86) = 27796;
  HIWORD(v86) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v208, v86, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    "%s Disable RX CDR PPM detector",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v87) = -10928;
  HIWORD(v87) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v87, 174, "serdes_internal_loop_ate_init", 29, 723, 60, v250);
  sub_7FA14(a1, a3, 77, (int)&loc_40004);
  sub_7FA14(a1, a3, 78, -2144243609);
  V_LOCK();
  LOWORD(v88) = 27796;
  HIWORD(v88) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v210, v88, *(int *)(a1 + 256));
  LOWORD(v89) = -8616;
  HIWORD(v89) = (unsigned int)"n" >> 16;
  logfmt_raw(
    v250,
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
    v89,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v90) = -10928;
  HIWORD(v90) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v90, 174, "serdes_internal_loop_ate_init", 29, 725, 60, v250);
  sub_7FA14(a1, a3, 77, (int)&loc_A0004 + 6);
  sub_7FA14(a1, a3, 78, -2144247768);
  V_LOCK();
  LOWORD(v91) = 27796;
  HIWORD(v91) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v212, v91, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    "%s Overriding TOKEN_DLY",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v92) = -10928;
  HIWORD(v92) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v92, 174, "serdes_internal_loop_ate_init", 29, 727, 60, v250);
  sub_7FA14(a1, a3, 77, (int)&loc_70004 + 3);
  sub_7FA14(a1, a3, 78, -2144272078);
  V_LOCK();
  LOWORD(v93) = 27796;
  HIWORD(v93) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v214, v93, *(int *)(a1 + 256));
  LOWORD(v94) = -8524;
  HIWORD(v94) = (unsigned int)" rxX_data_en to track receive data" >> 16;
  logfmt_raw(
    v250,
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
    v94,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v95) = -10928;
  HIWORD(v95) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v95, 174, "serdes_internal_loop_ate_init", 29, 729, 60, v250);
  serdes_apb_read(a1, a2, a3, 306);
  sub_7FA14(a1, a3, 77, -2136964960);
  sub_7FA14(a1, a3, 78, -2144247776);
  serdes_apb_read(a1, a2, a3, 24608);
  sub_7FA14(a1, a3, 77, -2136309590);
  sub_7FA14(a1, a3, 78, -2144247776);
  serdes_apb_read(a1, a2, a3, 24608);
  V_LOCK();
  LOWORD(v96) = 27796;
  HIWORD(v96) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v216, v96, *(int *)(a1 + 256));
  LOWORD(v97) = -8372;
  HIWORD(v97) = (unsigned int)"m boot success!" >> 16;
  v129 = v97;
  logfmt_raw(
    v250,
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
    "%s Waiting for PHY power up...",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v98) = -10928;
  HIWORD(v98) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v98, 174, "serdes_internal_loop_ate_init", 29, 737, 60, v250);
  V_LOCK();
  LOWORD(v99) = 27796;
  HIWORD(v99) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v218, v99, *(int *)(a1 + 256));
  LOWORD(v100) = -8456;
  HIWORD(v100) = (unsigned int)"lect" >> 16;
  logfmt_raw(
    v250,
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
    v100,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v101) = -10928;
  HIWORD(v101) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v101, 174, "serdes_internal_loop_ate_init", 29, 738, 60, v250);
  usleep(0x3E8u);
  V_LOCK();
  LOWORD(v102) = 27796;
  HIWORD(v102) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v220, v102, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    &unk_16DF24,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v103) = -10928;
  HIWORD(v103) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v103, 174, "serdes_internal_loop_ate_init", 29, 741, 60, v250);
  V_LOCK();
  LOWORD(v104) = 27796;
  HIWORD(v104) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v222, v104, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    "%s Waiting for PHY power up...",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v105) = -10928;
  HIWORD(v105) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v105, 174, "serdes_internal_loop_ate_init", 29, 742, 60, v250);
  serdes_wait_status(a1, a2, a3, 12308, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 12820, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 13332, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 13844, (int)&dword_10000 + 1);
  V_LOCK();
  LOWORD(v106) = 27796;
  HIWORD(v106) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v224, v106, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    v129,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v107) = -10928;
  HIWORD(v107) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v107, 174, "serdes_internal_loop_ate_init", 29, 748, 60, v250);
  serdes_wait_status(a1, a2, a3, 4156, 80);
  serdes_wait_status(a1, a2, a3, 4668, 80);
  serdes_wait_status(a1, a2, a3, 5180, 80);
  serdes_wait_status(a1, a2, a3, 5692, 80);
  V_LOCK();
  LOWORD(v108) = 27796;
  HIWORD(v108) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v226, v108, *(int *)(a1 + 256));
  LOWORD(v109) = -8328;
  HIWORD(v109) = (unsigned int)" pcs lock failed!" >> 16;
  logfmt_raw(
    v250,
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
    v109,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  LOWORD(v110) = -10928;
  HIWORD(v110) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v110, 174, "serdes_internal_loop_ate_init", 29, 753, 60, v250);
  serdes_wait_status(a1, a2, a3, 8217, 0);
  serdes_wait_status(a1, a2, a3, 8729, 0);
  serdes_wait_status(a1, a2, a3, 9241, 0);
  serdes_wait_status(a1, a2, a3, 9753, 0);
  V_LOCK();
  LOWORD(v111) = 27796;
  HIWORD(v111) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v228, v111, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    "%s Reading TX ACK at PMA level",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    758,
    60,
    v250);
  serdes_wait_status(a1, a2, a3, 4114, 0);
  serdes_wait_status(a1, a2, a3, 4626, 0);
  serdes_wait_status(a1, a2, a3, 5138, 0);
  serdes_wait_status(a1, a2, a3, 5650, 0);
  V_LOCK();
  LOWORD(v112) = 27796;
  HIWORD(v112) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v230, v112, *(int *)(a1 + 256));
  LOWORD(v113) = -8264;
  HIWORD(v113) = (unsigned int)"T ERR NUM] chip %02x core %02x reg %04x rdata %08x" >> 16;
  logfmt_raw(
    v250,
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
    v113,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    763,
    60,
    v250);
  serdes_wait_status(a1, a2, a3, 8196, 0);
  serdes_wait_status(a1, a2, a3, 8708, 0);
  serdes_wait_status(a1, a2, a3, 9220, 0);
  serdes_wait_status(a1, a2, a3, 9732, 0);
  V_LOCK();
  LOWORD(v114) = 27796;
  HIWORD(v114) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v232, v114, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    "%s Enabling TX LBERT in LFSR31",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    769,
    60,
    v250);
  sub_7FA14(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7FA14(a1, a3, 78, -2144251791);
  sub_7FA14(a1, a3, 77, (int)&loc_E000C + 2);
  sub_7FA14(a1, a3, 78, -2144247768);
  sub_7FA14(a1, a3, 77, (int)&loc_E000C + 2);
  sub_7FA14(a1, a3, 78, -2144247768);
  sub_7FA14(a1, a3, 77, (int)&loc_30000 + 3);
  sub_7FA14(a1, a3, 78, -2144243377);
  sub_7FA14(a1, a3, 77, (int)&loc_30000 + 3);
  sub_7FA14(a1, a3, 78, -2144243377);
  sub_7FA14(a1, a3, 77, (int)&loc_70004 + 3);
  sub_7FA14(a1, a3, 78, -2144243377);
  V_LOCK();
  LOWORD(v115) = 27796;
  HIWORD(v115) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v234, v115, *(int *)(a1 + 256));
  LOWORD(v116) = -8200;
  HIWORD(v116) = (unsigned int)"ST NUM] chip %02x core %02x reg %04x rdata %08x" >> 16;
  logfmt_raw(
    v250,
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
    v116,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    776,
    60,
    v250);
  sub_7FA14(a1, a3, 77, -2136244053);
  sub_7FA14(a1, a3, 78, -2144247776);
  sub_7FA14(a1, a3, 77, -2136244053);
  sub_7FA14(a1, a3, 78, -2144247776);
  usleep(0x2710u);
  serdes_wait_status(a1, a2, a3, 4156, (int)off_1005C + 1);
  serdes_wait_status(a1, a2, a3, 4668, (int)off_1005C + 1);
  serdes_wait_status(a1, a2, a3, 5180, (int)off_1005C + 1);
  serdes_wait_status(a1, a2, a3, 5692, (int)off_1005C + 1);
  sub_7FA14(a1, a3, 77, -2136309590);
  sub_7FA14(a1, a3, 78, -2144247776);
  sub_7FA14(a1, a3, 77, -2136309590);
  sub_7FA14(a1, a3, 78, -2144247776);
  usleep((__useconds_t)&stru_186A0);
  serdes_wait_status(a1, a2, a3, 4156, 92);
  serdes_wait_status(a1, a2, a3, 4668, 92);
  serdes_wait_status(a1, a2, a3, 5180, 92);
  serdes_wait_status(a1, a2, a3, 5692, 92);
  usleep(0xEA60u);
  V_LOCK();
  LOWORD(v117) = 27796;
  HIWORD(v117) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v236, v117, *(int *)(a1 + 256));
  LOWORD(v66) = -8180;
  HIWORD(v66) = (unsigned int)"re %02x reg %04x rdata %08x" >> 16;
  logfmt_raw(
    v250,
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
    v66,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    795,
    60,
    v250);
  sub_7FA14(a1, a3, 77, -1062551382);
  sub_7FA14(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  V_LOCK();
  LOWORD(v118) = 27796;
  HIWORD(v118) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v238, v118, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    v129,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    799,
    60,
    v250);
  serdes_wait_status(a1, a2, a3, 4156, 94);
  serdes_wait_status(a1, a2, a3, 4668, 94);
  serdes_wait_status(a1, a2, a3, 5180, 94);
  serdes_wait_status(a1, a2, a3, 5692, 94);
  V_LOCK();
  LOWORD(v119) = 27796;
  HIWORD(v119) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v240, v119, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    "%s Overriding rx_adapt_req",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    805,
    60,
    v250);
  if ( a4 == 2 )
  {
    sub_7FA14(a1, a3, 77, (int)&loc_30000 + 3);
    sub_7FA14(a1, a3, 78, -2144247798);
    sub_7FA14(a1, a3, 77, (int)&loc_30000 + 3);
    sub_7FA14(a1, a3, 78, -2144247798);
    usleep(0x3E8u);
    serdes_wait_status(a1, a2, a3, 8218, (int)&dword_10000 + 1);
    serdes_wait_status(a1, a2, a3, 8730, (int)&dword_10000 + 1);
    serdes_wait_status(a1, a2, a3, 9242, (int)&dword_10000 + 1);
    serdes_wait_status(a1, a2, a3, 9754, (int)&dword_10000 + 1);
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
  V_LOCK();
  LOWORD(v120) = 27796;
  HIWORD(v120) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v242, v120, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    "%s Disable rxX_data_en after adaptation done",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    824,
    60,
    v250);
  sub_7FA14(a1, a3, 77, -2136309590);
  sub_7FA14(a1, a3, 78, -2144247776);
  V_LOCK();
  LOWORD(v121) = 27796;
  HIWORD(v121) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v244, v121, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    "%s Re-enable rxX_data_en to track receive data",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    826,
    60,
    v250);
  sub_7FA14(a1, a3, 77, -1062551382);
  sub_7FA14(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  V_LOCK();
  LOWORD(v122) = 27796;
  HIWORD(v122) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v246, v122, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    v129,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    830,
    60,
    v250);
  serdes_wait_status(a1, a2, a3, 4156, 94);
  serdes_wait_status(a1, a2, a3, 4668, 94);
  serdes_wait_status(a1, a2, a3, 5180, 94);
  serdes_wait_status(a1, a2, a3, 5692, 94);
  V_LOCK();
  LOWORD(v123) = 27796;
  HIWORD(v123) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v248, v123, *(int *)(a1 + 256));
  logfmt_raw(
    v250,
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
    "%s Enabling RX LBERT in LFSR31 and setting RX LBERT SYNC to 1",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    835,
    60,
    v250);
  sub_7FA14(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7FA14(a1, a3, 78, -2144251757);
  sub_7FA14(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7FA14(a1, a3, 78, -2144251757);
  sub_7FA14(a1, a3, 77, (int)&loc_110010 + 1);
  sub_7FA14(a1, a3, 78, -2144251757);
  sub_7FA14(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7FA14(a1, a3, 78, -2144251757);
  sub_7FA14(a1, a3, 77, (int)&loc_110010 + 1);
  sub_7FA14(a1, a3, 78, -2144251757);
  sub_7FA14(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7FA14(a1, a3, 78, -2144251757);
  usleep(0x2710u);
  return 0;
}
