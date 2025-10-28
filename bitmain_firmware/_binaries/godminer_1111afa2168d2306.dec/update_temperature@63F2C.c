int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  signed int v4; // r5
  int v6; // r4
  void *v7; // r0
  void (__fastcall *v8)(int, void *); // r3
  int *v9; // r6
  int v10; // r2
  int v11; // r1
  int v12; // r12
  char *v13; // r5
  int v14; // r8
  char *v15; // r9
  int v16; // r10
  int v17; // r1
  int v18; // r2
  int v19; // r3
  char *v20; // lr
  char *v21; // r11
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int *v25; // r5
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int v38; // r3
  int v39; // r1
  int v40; // r2
  int v41; // r3
  char *v42; // lr
  char *v43; // r9
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int *v47; // r5
  int v48; // r1
  int v49; // r2
  int v50; // r3
  int v51; // r1
  int v52; // r2
  int v53; // r3
  int v54; // r1
  int v55; // r2
  int v56; // r3
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r3
  int v61; // r2
  int v62; // r8
  int v63; // r2
  int v64; // r2
  int v65; // r2
  char *v66; // r1
  char *v67; // r1
  int v68; // r2
  int v69; // r3
  int v70; // r12
  _DWORD *v71; // r12
  int v72; // lr
  int v73; // r1
  bool v74; // nf
  _DWORD *v75; // r3
  int v76; // r2
  char *v77; // r1
  int v78; // r6
  int v79; // r1
  int result; // r0
  char *v81; // r1
  char *v82; // r1
  _DWORD *v83; // r0
  int v84; // r1
  char *v85; // r1
  int v86; // lr
  int v87; // r1
  int v88; // r2
  char *v89; // r1
  int v90; // lr
  int v91; // r1
  int v92; // r2
  int v93; // r3
  int v94; // r1
  int v95; // r2
  int v96; // r1
  char *v97; // r1
  int v98; // r12
  int v99; // r1
  char *v100; // r1
  int v101; // lr
  int v102; // r1
  int v103; // [sp+20h] [bp-1314h] BYREF
  char v104; // [sp+40h] [bp-12F4h] BYREF
  char v105; // [sp+60h] [bp-12D4h] BYREF
  int v106; // [sp+80h] [bp-12B4h]
  int v107; // [sp+84h] [bp-12B0h]
  int v108; // [sp+88h] [bp-12ACh]
  char *s; // [sp+8Ch] [bp-12A8h]
  int v110; // [sp+90h] [bp-12A4h]
  int *v111; // [sp+94h] [bp-12A0h]
  int *v112; // [sp+98h] [bp-129Ch]
  char *v113; // [sp+9Ch] [bp-1298h]
  char *v114; // [sp+A0h] [bp-1294h]
  int v115; // [sp+A4h] [bp-1290h]
  int v116; // [sp+A8h] [bp-128Ch]
  char *v117; // [sp+ACh] [bp-1288h]
  _DWORD *v118; // [sp+B0h] [bp-1284h]
  int v119; // [sp+B4h] [bp-1280h]
  int v120; // [sp+B8h] [bp-127Ch]
  unsigned int v121; // [sp+BCh] [bp-1278h]
  int v122; // [sp+C0h] [bp-1274h]
  int v123; // [sp+C4h] [bp-1270h]
  int v124; // [sp+C8h] [bp-126Ch]
  int v125; // [sp+CCh] [bp-1268h]
  int *v126; // [sp+D0h] [bp-1264h]
  int v127; // [sp+D4h] [bp-1260h]
  int *v128; // [sp+D8h] [bp-125Ch]
  int v129; // [sp+DCh] [bp-1258h]
  signed int v130; // [sp+E0h] [bp-1254h]
  void *ptr; // [sp+E4h] [bp-1250h]
  int v132; // [sp+E8h] [bp-124Ch]
  int v133; // [sp+ECh] [bp-1248h]
  _DWORD v134[7]; // [sp+F0h] [bp-1244h] BYREF
  int v135; // [sp+10Ch] [bp-1228h]
  _DWORD v136[7]; // [sp+110h] [bp-1224h] BYREF
  int v137; // [sp+12Ch] [bp-1208h]
  _DWORD v138[7]; // [sp+130h] [bp-1204h] BYREF
  int v139; // [sp+14Ch] [bp-11E8h]
  _DWORD v140[7]; // [sp+150h] [bp-11E4h] BYREF
  int v141; // [sp+16Ch] [bp-11C8h]
  _DWORD v142[7]; // [sp+170h] [bp-11C4h] BYREF
  int v143; // [sp+18Ch] [bp-11A8h]
  _DWORD v144[8]; // [sp+190h] [bp-11A4h] BYREF
  _DWORD v145[8]; // [sp+1B0h] [bp-1184h] BYREF
  _DWORD v146[8]; // [sp+1D0h] [bp-1164h] BYREF
  _DWORD v147[8]; // [sp+1F0h] [bp-1144h] BYREF
  int v148; // [sp+210h] [bp-1124h] BYREF
  int v149; // [sp+214h] [bp-1120h]
  int v150; // [sp+218h] [bp-111Ch]
  int v151; // [sp+21Ch] [bp-1118h]
  int v152; // [sp+220h] [bp-1114h]
  int v153; // [sp+224h] [bp-1110h]
  int v154; // [sp+228h] [bp-110Ch]
  int v155; // [sp+22Ch] [bp-1108h]
  int v156; // [sp+230h] [bp-1104h] BYREF
  int v157; // [sp+234h] [bp-1100h]
  int v158; // [sp+238h] [bp-10FCh]
  int v159; // [sp+23Ch] [bp-10F8h]
  int v160; // [sp+240h] [bp-10F4h]
  int v161; // [sp+244h] [bp-10F0h]
  int v162; // [sp+248h] [bp-10ECh]
  int v163; // [sp+24Ch] [bp-10E8h]
  _DWORD v164[8]; // [sp+250h] [bp-10E4h] BYREF
  _DWORD v165[7]; // [sp+270h] [bp-10C4h] BYREF
  int v166; // [sp+28Ch] [bp-10A8h]
  int v167; // [sp+290h] [bp-10A4h] BYREF
  int v168; // [sp+294h] [bp-10A0h]
  int v169; // [sp+298h] [bp-109Ch]
  int v170; // [sp+29Ch] [bp-1098h]
  int v171; // [sp+2A0h] [bp-1094h]
  int v172; // [sp+2A4h] [bp-1090h]
  int v173; // [sp+2A8h] [bp-108Ch]
  int v174; // [sp+2ACh] [bp-1088h]
  int v175; // [sp+2B0h] [bp-1084h] BYREF
  int v176; // [sp+2B4h] [bp-1080h]
  int v177; // [sp+2B8h] [bp-107Ch]
  int v178; // [sp+2BCh] [bp-1078h]
  int v179; // [sp+2C0h] [bp-1074h]
  int v180; // [sp+2C4h] [bp-1070h]
  int v181; // [sp+2C8h] [bp-106Ch]
  int v182; // [sp+2CCh] [bp-1068h]
  _DWORD v183[8]; // [sp+2D0h] [bp-1064h] BYREF
  _DWORD v184[7]; // [sp+2F0h] [bp-1044h] BYREF
  int v185; // [sp+30Ch] [bp-1028h]
  _DWORD v186[7]; // [sp+310h] [bp-1024h] BYREF
  int v187; // [sp+32Ch] [bp-1008h]
  char v188[4100]; // [sp+330h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 265);
  v129 = a3 + 16;
  if ( !v3 )
    return v129;
  v4 = *(_DWORD *)(a1 + 412);
  v118 = a2;
  v6 = *(_DWORD *)(a1 + 404);
  v133 = a3;
  v130 = v4;
  v7 = calloc(v4, 8u);
  v8 = *(void (__fastcall **)(int, void *))(a1 + 216);
  ptr = v7;
  v8(a1, v7);
  if ( v4 <= 0 )
  {
    free(ptr);
    if ( !v130 )
    {
      v68 = *(_DWORD *)(a1 + 248);
      v121 = 0;
      v119 = 0;
      v122 = -150;
      goto LABEL_59;
    }
    v119 = 0;
    v120 = 0;
    v121 = 0;
    v123 = -150;
    v122 = -150;
    v124 = 150;
LABEL_64:
    *(_DWORD *)(v133 + 16) |= 1u;
    goto LABEL_33;
  }
  v9 = (int *)ptr;
  LOWORD(v10) = -30404;
  v121 = 0;
  HIWORD(v10) = (unsigned int)" temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!" >> 16;
  v119 = 0;
  LOWORD(v11) = -30364;
  v120 = 0;
  v132 = 0;
  v125 = 0;
  v124 = 150;
  LOWORD(v12) = -27176;
  LOWORD(v13) = 27796;
  LOWORD(v14) = -30324;
  LOWORD(v15) = 29292;
  v114 = &v105;
  v116 = v10;
  HIWORD(v11) = (unsigned int)" %d, max_pcb_temp = %d!" >> 16;
  HIWORD(v12) = (unsigned int)"d" >> 16;
  HIWORD(v13) = (unsigned int)"%1.f" >> 16;
  HIWORD(v14) = (unsigned int)"limit (%d), min_pcb_temp = %d!" >> 16;
  HIWORD(v15) = (unsigned int)"level not match" >> 16;
  v113 = &v104;
  v126 = (int *)((char *)ptr + 8 * v130);
  v16 = v6;
  v122 = -150;
  v123 = -150;
  v127 = v11;
  v112 = &g_zc;
  v115 = v12;
  v128 = &g_temp_zc;
  s = v13;
  v110 = v14;
  v117 = v15;
  v111 = &v103;
  do
  {
    V_LOCK();
    V_INT((int)v186, s, *(int *)(a1 + 256));
    logfmt_raw(
      v188,
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
      v127,
      *v9,
      v9[1]);
    V_UNLOCK();
    zlog(*v112, v110, 193, "check_temperature", 17, 36, 20, v188);
    v60 = *v9;
    if ( *v9 == -64 )
    {
      v62 = 0;
      ++v121;
    }
    else
    {
      v61 = v123;
      v62 = 1;
      if ( v123 < v60 )
        v61 = *v9;
      v123 = v61;
      v63 = v124;
      ++v120;
      if ( v124 >= v60 )
        v63 = v60;
      v124 = v63;
    }
    v64 = v9[1];
    if ( v64 == -64 )
    {
      ++v121;
      v108 = 0;
    }
    else
    {
      if ( v122 >= v64 )
        v64 = v122;
      v122 = v64;
      ++v119;
      v108 = 1;
    }
    if ( v118 )
    {
      v65 = *(_DWORD *)(v16 + 12);
      if ( v65 )
      {
        if ( v65 == 1 )
        {
          if ( v62 )
            *(_DWORD *)(v118[2] + 4 * v132) = v60;
          if ( v108 )
            *(_DWORD *)(v118[3] + 4 * v132) = v9[1];
          ++v132;
        }
      }
      else
      {
        if ( v62 )
          *(_DWORD *)(*v118 + 4 * v125) = v60;
        if ( v108 )
          *(_DWORD *)(v118[1] + 4 * v125) = v9[1];
        ++v125;
      }
    }
    V_LOCK();
    V_INT((int)v184, s, *(int *)(a1 + 256));
    V_INT((int)v183, v117, *(int *)(v16 + 20));
    if ( v62 )
    {
      V_INT((int)&v175, "pcbtemp", *v9);
      if ( v108 )
        goto LABEL_5;
    }
    else
    {
      LOWORD(v66) = -30128;
      HIWORD(v66) = (unsigned int)"uildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_interface.c" >> 16;
      V_INT((int)v147, v66, -256);
      v175 = v147[0];
      v176 = v147[1];
      v177 = v147[2];
      v178 = v147[3];
      v179 = v147[4];
      v180 = v147[5];
      v181 = v147[6];
      v182 = v147[7];
      if ( v108 )
      {
LABEL_5:
        V_INT((int)&v167, "chiptemp", v9[1]);
        goto LABEL_6;
      }
    }
    LOWORD(v67) = -30120;
    HIWORD(v67) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/backend/backend_interface.c" >> 16;
    V_INT((int)v146, v67, -256);
    v167 = v146[0];
    v168 = v146[1];
    v169 = v146[2];
    v170 = v146[3];
    v171 = v146[4];
    v172 = v146[5];
    v173 = v146[6];
    v174 = v146[7];
LABEL_6:
    v17 = v168;
    v18 = v169;
    v19 = v170;
    v107 = v116;
    v20 = v114;
    v106 = v115;
    *(_DWORD *)v114 = v167;
    *((_DWORD *)v20 + 1) = v17;
    *((_DWORD *)v20 + 2) = v18;
    *((_DWORD *)v20 + 3) = v19;
    v20 += 16;
    v21 = v113;
    v22 = v172;
    v23 = v173;
    v24 = v174;
    v25 = v111;
    *(_DWORD *)v20 = v171;
    *((_DWORD *)v20 + 1) = v22;
    *((_DWORD *)v20 + 2) = v23;
    *((_DWORD *)v20 + 3) = v24;
    v26 = v176;
    v27 = v177;
    v28 = v178;
    *(_DWORD *)v21 = v175;
    *((_DWORD *)v21 + 1) = v26;
    *((_DWORD *)v21 + 2) = v27;
    *((_DWORD *)v21 + 3) = v28;
    v21 += 16;
    v29 = v180;
    v30 = v181;
    v31 = v182;
    *(_DWORD *)v21 = v179;
    *((_DWORD *)v21 + 1) = v29;
    *((_DWORD *)v21 + 2) = v30;
    *((_DWORD *)v21 + 3) = v31;
    v32 = v183[1];
    v33 = v183[2];
    v34 = v183[3];
    *v25 = v183[0];
    v25[1] = v32;
    v25[2] = v33;
    v25[3] = v34;
    v25 += 4;
    v35 = v183[5];
    v36 = v183[6];
    v37 = v183[7];
    *v25 = v183[4];
    v25[1] = v35;
    v25[2] = v36;
    v25[3] = v37;
    logfmt_raw(v188, 0x1000u, 0, v185, v184[0], v184[1], v184[2], v184[3], v184[4], v184[5], v184[6], v185);
    V_UNLOCK();
    LOWORD(v38) = -30404;
    HIWORD(v38) = (unsigned int)" temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!" >> 16;
    zlog(*v112, v110, 193, v38, 17, 92, 20, v188);
    V_LOCK();
    V_INT((int)v165, s, *(int *)(a1 + 256));
    V_INT((int)v164, v117, *(int *)(v16 + 20));
    if ( v62 )
    {
      V_INT((int)&v156, "pcbtemp", *v9);
    }
    else
    {
      LOWORD(v82) = -30128;
      HIWORD(v82) = (unsigned int)"uildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_interface.c" >> 16;
      V_INT((int)v145, v82, -256);
      v156 = v145[0];
      v157 = v145[1];
      v158 = v145[2];
      v159 = v145[3];
      v160 = v145[4];
      v161 = v145[5];
      v162 = v145[6];
      v163 = v145[7];
    }
    if ( v108 )
    {
      V_INT((int)&v148, "chiptemp", v9[1]);
    }
    else
    {
      LOWORD(v81) = -30120;
      HIWORD(v81) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/backend/backend_interface.c" >> 16;
      V_INT((int)v144, v81, -256);
      v148 = v144[0];
      v149 = v144[1];
      v150 = v144[2];
      v151 = v144[3];
      v152 = v144[4];
      v153 = v144[5];
      v154 = v144[6];
      v155 = v144[7];
    }
    v39 = v149;
    v40 = v150;
    v41 = v151;
    v9 += 2;
    v16 += 24;
    v107 = v116;
    v42 = v114;
    v106 = v115;
    *(_DWORD *)v114 = v148;
    *((_DWORD *)v42 + 1) = v39;
    *((_DWORD *)v42 + 2) = v40;
    *((_DWORD *)v42 + 3) = v41;
    v42 += 16;
    v43 = v113;
    v44 = v153;
    v45 = v154;
    v46 = v155;
    v47 = v111;
    *(_DWORD *)v42 = v152;
    *((_DWORD *)v42 + 1) = v44;
    *((_DWORD *)v42 + 2) = v45;
    *((_DWORD *)v42 + 3) = v46;
    v48 = v157;
    v49 = v158;
    v50 = v159;
    *(_DWORD *)v43 = v156;
    *((_DWORD *)v43 + 1) = v48;
    *((_DWORD *)v43 + 2) = v49;
    *((_DWORD *)v43 + 3) = v50;
    v43 += 16;
    v51 = v161;
    v52 = v162;
    v53 = v163;
    *(_DWORD *)v43 = v160;
    *((_DWORD *)v43 + 1) = v51;
    *((_DWORD *)v43 + 2) = v52;
    *((_DWORD *)v43 + 3) = v53;
    v54 = v164[1];
    v55 = v164[2];
    v56 = v164[3];
    *v47 = v164[0];
    v47[1] = v54;
    v47[2] = v55;
    v47[3] = v56;
    v47 += 4;
    v57 = v164[5];
    v58 = v164[6];
    v59 = v164[7];
    *v47 = v164[4];
    v47[1] = v57;
    v47[2] = v58;
    v47[3] = v59;
    logfmt_raw(v188, 0x1000u, 0, v166, v165[0], v165[1], v165[2], v165[3], v165[4], v165[5], v165[6], v166);
    V_UNLOCK();
    zlog(*v128, v110, 193, "check_temperature", 17, 94, 40, v188);
  }
  while ( v126 != v9 );
  free(ptr);
  if ( v120 != v130 || v120 != v119 )
    goto LABEL_64;
LABEL_33:
  v68 = *(_DWORD *)(a1 + 248);
  if ( v120 )
  {
    v69 = v68;
    v70 = v123;
    v118[5] = v124;
    dword_1A3B18[v68] = v70;
    dword_1A3B18[v68 + 16] = 0;
    goto LABEL_35;
  }
LABEL_59:
  v69 = v68;
  v83 = &dword_1A3B18[v68];
  v84 = v83[16] + 1;
  v74 = v83[16] - 1 < 0;
  v83[16] = v84;
  if ( !(v74 ^ __OFSUB__(v84, 2) | (v84 == 2)) )
  {
    V_LOCK();
    LOWORD(v85) = 27796;
    HIWORD(v85) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v134, v85, *(int *)(a1 + 256));
    LOWORD(v86) = -30108;
    HIWORD(v86) = (unsigned int)"/build/godminer-origin_godminer-new/backend/backend_interface.c" >> 16;
    logfmt_raw(
      v188,
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
      v86,
      dword_1A3B18[*(_DWORD *)(a1 + 248) + 16]);
    V_UNLOCK();
    LOWORD(v87) = -30324;
    HIWORD(v87) = (unsigned int)"limit (%d), min_pcb_temp = %d!" >> 16;
    zlog(g_zc, v87, 193, "update_temperature", 18, 335, 120, v188);
    v68 = *(_DWORD *)(a1 + 248);
    v69 = v68;
    *(_DWORD *)(v133 + 16) |= 8u;
  }
LABEL_35:
  if ( v119 )
  {
    v71 = v118;
    v72 = v122;
    dword_1A3B18[v69 + 32] = 0;
    v71[4] = v72;
  }
  else
  {
    v96 = dword_1A3B18[v69 + 32] + 1;
    v74 = dword_1A3B18[v69 + 32] - 1 < 0;
    dword_1A3B18[v69 + 32] = v96;
    if ( !(v74 ^ __OFSUB__(v96, 2) | (v96 == 2)) )
    {
      V_LOCK();
      LOWORD(v97) = 27796;
      HIWORD(v97) = (unsigned int)"%1.f" >> 16;
      V_INT((int)v136, v97, *(int *)(a1 + 256));
      LOWORD(v98) = -30064;
      HIWORD(v98) = (unsigned int)"backend_interface.c" >> 16;
      logfmt_raw(
        v188,
        0x1000u,
        v119,
        v137,
        v136[0],
        v136[1],
        v136[2],
        v136[3],
        v136[4],
        v136[5],
        v136[6],
        v137,
        v98,
        dword_1A3B18[*(_DWORD *)(a1 + 248) + 32]);
      V_UNLOCK();
      LOWORD(v99) = -30324;
      HIWORD(v99) = (unsigned int)"limit (%d), min_pcb_temp = %d!" >> 16;
      zlog(g_zc, v99, 193, "update_temperature", 18, 352, 120, v188);
      v68 = *(_DWORD *)(a1 + 248);
      v69 = v68;
      *(_DWORD *)(v133 + 16) |= 8u;
    }
  }
  if ( *(_DWORD *)(a1 + 428) >= v121 )
  {
    dword_1A3B18[v69 + 48] = 0;
  }
  else
  {
    v73 = dword_1A3B18[v69 + 48] + 1;
    v74 = dword_1A3B18[v69 + 48] - 1 < 0;
    dword_1A3B18[v69 + 48] = v73;
    if ( !(v74 ^ __OFSUB__(v73, 2) | (v73 == 2)) )
    {
      V_LOCK();
      LOWORD(v100) = 27796;
      HIWORD(v100) = (unsigned int)"%1.f" >> 16;
      V_INT((int)v138, v100, *(int *)(a1 + 256));
      LOWORD(v101) = -30020;
      HIWORD(v101) = (unsigned int)"sic number error, destroy it!" >> 16;
      logfmt_raw(
        v188,
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
        v101,
        dword_1A3B18[*(_DWORD *)(a1 + 248) + 48],
        v121);
      V_UNLOCK();
      LOWORD(v102) = -30324;
      HIWORD(v102) = (unsigned int)"limit (%d), min_pcb_temp = %d!" >> 16;
      zlog(g_zc, v102, 193, "update_temperature", 18, 363, 120, v188);
      v68 = *(_DWORD *)(a1 + 248);
      *(_DWORD *)(v133 + 16) |= 0x10u;
      v69 = v68;
    }
  }
  if ( v118[4] > *(_DWORD *)(a1 + 416) || dword_1A3B18[v68] > *(_DWORD *)(a1 + 420) )
  {
    v88 = dword_1A3B18[v69 + 64] + 1;
    v74 = dword_1A3B18[v69 + 64] - 1 < 0;
    dword_1A3B18[v69 + 64] = v88;
    if ( !(v74 ^ __OFSUB__(v88, 2) | (v88 == 2)) )
    {
      V_LOCK();
      LOWORD(v89) = 27796;
      HIWORD(v89) = (unsigned int)"%1.f" >> 16;
      V_INT((int)v140, v89, *(int *)(a1 + 256));
      LOWORD(v90) = -29952;
      HIWORD(v90) = (unsigned int)" " >> 16;
      logfmt_raw(
        v188,
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
        v90,
        dword_1A3B18[*(_DWORD *)(a1 + 248) + 64],
        v118[4],
        dword_1A3B18[*(_DWORD *)(a1 + 248)]);
      V_UNLOCK();
      LOWORD(v91) = -30324;
      HIWORD(v91) = (unsigned int)"limit (%d), min_pcb_temp = %d!" >> 16;
      zlog(g_zc, v91, 193, "update_temperature", 18, 378, 120, v188);
      V_LOCK();
      LOWORD(v92) = -31992;
      LOWORD(v93) = 31656;
      HIWORD(v92) = (unsigned int)"" >> 16;
      HIWORD(v93) = (unsigned int)"e: %d!" >> 16;
      logfmt_raw(v188, 0x1000u, 0, v93, v92);
      V_UNLOCK();
      LOWORD(v94) = -30324;
      HIWORD(v94) = (unsigned int)"limit (%d), min_pcb_temp = %d!" >> 16;
      zlog(g_zc, v94, 193, "update_temperature", 18, 379, 100, v188);
      v95 = *(_DWORD *)(a1 + 248);
      *(_DWORD *)(v133 + 16) |= 2u;
      v69 = v95;
    }
  }
  else
  {
    dword_1A3B18[v69 + 64] = 0;
  }
  if ( v118[5] <= *(_DWORD *)(a1 + 424) )
  {
    v75 = &dword_1A3B18[v69];
    v76 = v75[80] + 1;
    v74 = v75[80] - 1 < 0;
    v75[80] = v76;
    if ( !(v74 ^ __OFSUB__(v76, 2) | (v76 == 2)) )
    {
      V_LOCK();
      LOWORD(v77) = 27796;
      HIWORD(v77) = (unsigned int)"%1.f" >> 16;
      V_INT((int)v142, v77, *(int *)(a1 + 256));
      LOWORD(v78) = -29884;
      HIWORD(v78) = (unsigned int)"e/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/uart_debug_logger.c" >> 16;
      logfmt_raw(
        v188,
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
        v78,
        dword_1A3B18[*(_DWORD *)(a1 + 248) + 80],
        v118[5]);
      V_UNLOCK();
      LOWORD(v79) = -30324;
      HIWORD(v79) = (unsigned int)"limit (%d), min_pcb_temp = %d!" >> 16;
      zlog(g_zc, v79, 193, "update_temperature", 18, 394, 120, v188);
      *(_DWORD *)(v133 + 16) |= 4u;
    }
    return v129;
  }
  result = v129;
  dword_1A3B18[v69 + 80] = 0;
  return result;
}
