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
  int v71; // r4
  _DWORD *v72; // r12
  int v73; // lr
  int v74; // r1
  bool v75; // nf
  int v76; // r3
  int v77; // r2
  char *v78; // r1
  int v79; // r6
  int v80; // r1
  int v81; // r2
  int v82; // r3
  int v83; // r1
  int result; // r0
  char *v85; // r1
  char *v86; // r1
  int v87; // r0
  int v88; // r1
  char *v89; // r1
  int v90; // lr
  int v91; // r1
  int v92; // r2
  char *v93; // r1
  int v94; // lr
  int v95; // r1
  int v96; // r3
  int v97; // r1
  int v98; // r2
  int v99; // r1
  char *v100; // r1
  int v101; // r12
  int v102; // r1
  char *v103; // r1
  int v104; // lr
  int v105; // r1
  int v106; // [sp+20h] [bp-1314h] BYREF
  char v107; // [sp+40h] [bp-12F4h] BYREF
  char v108; // [sp+60h] [bp-12D4h] BYREF
  int v109; // [sp+80h] [bp-12B4h]
  int v110; // [sp+84h] [bp-12B0h]
  int v111; // [sp+88h] [bp-12ACh]
  char *s; // [sp+8Ch] [bp-12A8h]
  int v113; // [sp+90h] [bp-12A4h]
  int v114; // [sp+94h] [bp-12A0h]
  _DWORD *v115; // [sp+98h] [bp-129Ch]
  int *v116; // [sp+9Ch] [bp-1298h]
  int v117; // [sp+A0h] [bp-1294h]
  char *v118; // [sp+A4h] [bp-1290h]
  char *v119; // [sp+A8h] [bp-128Ch]
  char *v120; // [sp+ACh] [bp-1288h]
  _DWORD *v121; // [sp+B0h] [bp-1284h]
  int v122; // [sp+B4h] [bp-1280h]
  int v123; // [sp+B8h] [bp-127Ch]
  unsigned int v124; // [sp+BCh] [bp-1278h]
  int v125; // [sp+C0h] [bp-1274h]
  int v126; // [sp+C4h] [bp-1270h]
  int v127; // [sp+C8h] [bp-126Ch]
  int v128; // [sp+CCh] [bp-1268h]
  int *v129; // [sp+D0h] [bp-1264h]
  _DWORD *v130; // [sp+D4h] [bp-1260h]
  int v131; // [sp+D8h] [bp-125Ch]
  int v132; // [sp+DCh] [bp-1258h]
  signed int v133; // [sp+E0h] [bp-1254h]
  void *ptr; // [sp+E4h] [bp-1250h]
  int v135; // [sp+E8h] [bp-124Ch]
  int v136; // [sp+ECh] [bp-1248h]
  _DWORD v137[7]; // [sp+F0h] [bp-1244h] BYREF
  int v138; // [sp+10Ch] [bp-1228h]
  _DWORD v139[7]; // [sp+110h] [bp-1224h] BYREF
  int v140; // [sp+12Ch] [bp-1208h]
  _DWORD v141[7]; // [sp+130h] [bp-1204h] BYREF
  int v142; // [sp+14Ch] [bp-11E8h]
  _DWORD v143[7]; // [sp+150h] [bp-11E4h] BYREF
  int v144; // [sp+16Ch] [bp-11C8h]
  _DWORD v145[7]; // [sp+170h] [bp-11C4h] BYREF
  int v146; // [sp+18Ch] [bp-11A8h]
  _DWORD v147[8]; // [sp+190h] [bp-11A4h] BYREF
  _DWORD v148[8]; // [sp+1B0h] [bp-1184h] BYREF
  _DWORD v149[8]; // [sp+1D0h] [bp-1164h] BYREF
  _DWORD v150[8]; // [sp+1F0h] [bp-1144h] BYREF
  int v151; // [sp+210h] [bp-1124h] BYREF
  int v152; // [sp+214h] [bp-1120h]
  int v153; // [sp+218h] [bp-111Ch]
  int v154; // [sp+21Ch] [bp-1118h]
  int v155; // [sp+220h] [bp-1114h]
  int v156; // [sp+224h] [bp-1110h]
  int v157; // [sp+228h] [bp-110Ch]
  int v158; // [sp+22Ch] [bp-1108h]
  int v159; // [sp+230h] [bp-1104h] BYREF
  int v160; // [sp+234h] [bp-1100h]
  int v161; // [sp+238h] [bp-10FCh]
  int v162; // [sp+23Ch] [bp-10F8h]
  int v163; // [sp+240h] [bp-10F4h]
  int v164; // [sp+244h] [bp-10F0h]
  int v165; // [sp+248h] [bp-10ECh]
  int v166; // [sp+24Ch] [bp-10E8h]
  _DWORD v167[8]; // [sp+250h] [bp-10E4h] BYREF
  _DWORD v168[7]; // [sp+270h] [bp-10C4h] BYREF
  int v169; // [sp+28Ch] [bp-10A8h]
  int v170; // [sp+290h] [bp-10A4h] BYREF
  int v171; // [sp+294h] [bp-10A0h]
  int v172; // [sp+298h] [bp-109Ch]
  int v173; // [sp+29Ch] [bp-1098h]
  int v174; // [sp+2A0h] [bp-1094h]
  int v175; // [sp+2A4h] [bp-1090h]
  int v176; // [sp+2A8h] [bp-108Ch]
  int v177; // [sp+2ACh] [bp-1088h]
  int v178; // [sp+2B0h] [bp-1084h] BYREF
  int v179; // [sp+2B4h] [bp-1080h]
  int v180; // [sp+2B8h] [bp-107Ch]
  int v181; // [sp+2BCh] [bp-1078h]
  int v182; // [sp+2C0h] [bp-1074h]
  int v183; // [sp+2C4h] [bp-1070h]
  int v184; // [sp+2C8h] [bp-106Ch]
  int v185; // [sp+2CCh] [bp-1068h]
  _DWORD v186[8]; // [sp+2D0h] [bp-1064h] BYREF
  _DWORD v187[7]; // [sp+2F0h] [bp-1044h] BYREF
  int v188; // [sp+30Ch] [bp-1028h]
  _DWORD v189[7]; // [sp+310h] [bp-1024h] BYREF
  int v190; // [sp+32Ch] [bp-1008h]
  char v191[4100]; // [sp+330h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 238);
  v132 = a3 + 16;
  if ( !v3 )
    return v132;
  v4 = *(_DWORD *)(a1 + 372);
  v121 = a2;
  v6 = *(_DWORD *)(a1 + 364);
  v136 = a3;
  v133 = v4;
  v7 = calloc(v4, 8u);
  v8 = *(void (__fastcall **)(int, void *))(a1 + 212);
  ptr = v7;
  v8(a1, v7);
  if ( v4 <= 0 )
  {
    free(ptr);
    if ( !v133 )
    {
      v68 = *(_DWORD *)(a1 + 228);
      v124 = 0;
      v122 = 0;
      v125 = -150;
      goto LABEL_59;
    }
    v122 = 0;
    v123 = 0;
    v124 = 0;
    v126 = -150;
    v125 = -150;
    v127 = 150;
LABEL_64:
    *(_DWORD *)(v136 + 16) |= 1u;
    goto LABEL_33;
  }
  v9 = (int *)ptr;
  LOWORD(v10) = -28072;
  v124 = 0;
  HIWORD(v10) = (unsigned int)"d, postdiv2:%d" >> 16;
  v122 = 0;
  LOWORD(v11) = -28032;
  v123 = 0;
  v135 = 0;
  v128 = 0;
  v127 = 150;
  LOWORD(v12) = -25092;
  LOWORD(v13) = 588;
  LOWORD(v14) = -27992;
  LOWORD(v15) = 25036;
  v119 = &v108;
  v117 = v10;
  HIWORD(v11) = (unsigned int)"ns/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/chip_setting.c" >> 16;
  HIWORD(v12) = (unsigned int)"date_dash" >> 16;
  HIWORD(v13) = (unsigned int)": get test = %d" >> 16;
  HIWORD(v14) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/chip_setting.c" >> 16;
  HIWORD(v15) = (unsigned int)&unk_157ECC >> 16;
  v118 = &v107;
  v129 = (int *)((char *)ptr + 8 * v133);
  v16 = v6;
  v125 = -150;
  v126 = -150;
  v131 = v11;
  v115 = &g_zc;
  v114 = v12;
  v130 = &g_temp_zc;
  s = v13;
  v113 = v14;
  v120 = v15;
  v116 = &v106;
  do
  {
    V_LOCK();
    V_INT((int)v189, s, *(int *)(a1 + 232));
    logfmt_raw(
      v191,
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
      v131,
      *v9,
      v9[1]);
    V_UNLOCK();
    zlog(*v115, v113, 193, "check_temperature", 17, 36, 20, v191);
    v60 = *v9;
    if ( *v9 == -64 )
    {
      v62 = 0;
      ++v124;
    }
    else
    {
      v61 = v126;
      v62 = 1;
      if ( v126 < v60 )
        v61 = *v9;
      v126 = v61;
      v63 = v127;
      ++v123;
      if ( v127 >= v60 )
        v63 = v60;
      v127 = v63;
    }
    v64 = v9[1];
    if ( v64 == -64 )
    {
      ++v124;
      v111 = 0;
    }
    else
    {
      if ( v125 >= v64 )
        v64 = v125;
      v125 = v64;
      ++v122;
      v111 = 1;
    }
    if ( v121 )
    {
      v65 = *(_DWORD *)(v16 + 12);
      if ( v65 )
      {
        if ( v65 == 1 )
        {
          if ( v62 )
            *(_DWORD *)(v121[2] + 4 * v135) = v60;
          if ( v111 )
            *(_DWORD *)(v121[3] + 4 * v135) = v9[1];
          ++v135;
        }
      }
      else
      {
        if ( v62 )
          *(_DWORD *)(*v121 + 4 * v128) = v60;
        if ( v111 )
          *(_DWORD *)(v121[1] + 4 * v128) = v9[1];
        ++v128;
      }
    }
    V_LOCK();
    V_INT((int)v187, s, *(int *)(a1 + 232));
    V_INT((int)v186, v120, *(int *)(v16 + 20));
    if ( v62 )
    {
      V_INT((int)&v178, "pcbtemp", *v9);
      if ( v111 )
        goto LABEL_5;
    }
    else
    {
      LOWORD(v66) = -27796;
      HIWORD(v66) = (unsigned int)"ns/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
      V_INT((int)v150, v66, -256);
      v178 = v150[0];
      v179 = v150[1];
      v180 = v150[2];
      v181 = v150[3];
      v182 = v150[4];
      v183 = v150[5];
      v184 = v150[6];
      v185 = v150[7];
      if ( v111 )
      {
LABEL_5:
        V_INT((int)&v170, "chiptemp", v9[1]);
        goto LABEL_6;
      }
    }
    LOWORD(v67) = -27788;
    HIWORD(v67) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
    V_INT((int)v149, v67, -256);
    v170 = v149[0];
    v171 = v149[1];
    v172 = v149[2];
    v173 = v149[3];
    v174 = v149[4];
    v175 = v149[5];
    v176 = v149[6];
    v177 = v149[7];
LABEL_6:
    v17 = v171;
    v18 = v172;
    v19 = v173;
    v110 = v117;
    v20 = v119;
    v109 = v114;
    *(_DWORD *)v119 = v170;
    *((_DWORD *)v20 + 1) = v17;
    *((_DWORD *)v20 + 2) = v18;
    *((_DWORD *)v20 + 3) = v19;
    v20 += 16;
    v21 = v118;
    v22 = v175;
    v23 = v176;
    v24 = v177;
    v25 = v116;
    *(_DWORD *)v20 = v174;
    *((_DWORD *)v20 + 1) = v22;
    *((_DWORD *)v20 + 2) = v23;
    *((_DWORD *)v20 + 3) = v24;
    v26 = v179;
    v27 = v180;
    v28 = v181;
    *(_DWORD *)v21 = v178;
    *((_DWORD *)v21 + 1) = v26;
    *((_DWORD *)v21 + 2) = v27;
    *((_DWORD *)v21 + 3) = v28;
    v21 += 16;
    v29 = v183;
    v30 = v184;
    v31 = v185;
    *(_DWORD *)v21 = v182;
    *((_DWORD *)v21 + 1) = v29;
    *((_DWORD *)v21 + 2) = v30;
    *((_DWORD *)v21 + 3) = v31;
    v32 = v186[1];
    v33 = v186[2];
    v34 = v186[3];
    *v25 = v186[0];
    v25[1] = v32;
    v25[2] = v33;
    v25[3] = v34;
    v25 += 4;
    v35 = v186[5];
    v36 = v186[6];
    v37 = v186[7];
    *v25 = v186[4];
    v25[1] = v35;
    v25[2] = v36;
    v25[3] = v37;
    logfmt_raw(v191, 0x1000u, 0, v188, v187[0], v187[1], v187[2], v187[3], v187[4], v187[5], v187[6], v188);
    V_UNLOCK();
    LOWORD(v38) = -28072;
    HIWORD(v38) = (unsigned int)"d, postdiv2:%d" >> 16;
    zlog(*v115, v113, 193, v38, 17, 92, 20, v191);
    V_LOCK();
    V_INT((int)v168, s, *(int *)(a1 + 232));
    V_INT((int)v167, v120, *(int *)(v16 + 20));
    if ( v62 )
    {
      V_INT((int)&v159, "pcbtemp", *v9);
    }
    else
    {
      LOWORD(v86) = -27796;
      HIWORD(v86) = (unsigned int)"ns/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
      V_INT((int)v148, v86, -256);
      v159 = v148[0];
      v160 = v148[1];
      v161 = v148[2];
      v162 = v148[3];
      v163 = v148[4];
      v164 = v148[5];
      v165 = v148[6];
      v166 = v148[7];
    }
    if ( v111 )
    {
      V_INT((int)&v151, "chiptemp", v9[1]);
    }
    else
    {
      LOWORD(v85) = -27788;
      HIWORD(v85) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
      V_INT((int)v147, v85, -256);
      v151 = v147[0];
      v152 = v147[1];
      v153 = v147[2];
      v154 = v147[3];
      v155 = v147[4];
      v156 = v147[5];
      v157 = v147[6];
      v158 = v147[7];
    }
    v39 = v152;
    v40 = v153;
    v41 = v154;
    v9 += 2;
    v16 += 24;
    v110 = v117;
    v42 = v119;
    v109 = v114;
    *(_DWORD *)v119 = v151;
    *((_DWORD *)v42 + 1) = v39;
    *((_DWORD *)v42 + 2) = v40;
    *((_DWORD *)v42 + 3) = v41;
    v42 += 16;
    v43 = v118;
    v44 = v156;
    v45 = v157;
    v46 = v158;
    v47 = v116;
    *(_DWORD *)v42 = v155;
    *((_DWORD *)v42 + 1) = v44;
    *((_DWORD *)v42 + 2) = v45;
    *((_DWORD *)v42 + 3) = v46;
    v48 = v160;
    v49 = v161;
    v50 = v162;
    *(_DWORD *)v43 = v159;
    *((_DWORD *)v43 + 1) = v48;
    *((_DWORD *)v43 + 2) = v49;
    *((_DWORD *)v43 + 3) = v50;
    v43 += 16;
    v51 = v164;
    v52 = v165;
    v53 = v166;
    *(_DWORD *)v43 = v163;
    *((_DWORD *)v43 + 1) = v51;
    *((_DWORD *)v43 + 2) = v52;
    *((_DWORD *)v43 + 3) = v53;
    v54 = v167[1];
    v55 = v167[2];
    v56 = v167[3];
    *v47 = v167[0];
    v47[1] = v54;
    v47[2] = v55;
    v47[3] = v56;
    v47 += 4;
    v57 = v167[5];
    v58 = v167[6];
    v59 = v167[7];
    *v47 = v167[4];
    v47[1] = v57;
    v47[2] = v58;
    v47[3] = v59;
    logfmt_raw(v191, 0x1000u, 0, v169, v168[0], v168[1], v168[2], v168[3], v168[4], v168[5], v168[6], v169);
    V_UNLOCK();
    zlog(*v130, v113, 193, "check_temperature", 17, 94, 40, v191);
  }
  while ( v9 != v129 );
  free(ptr);
  if ( v123 != v133 || v123 != v122 )
    goto LABEL_64;
LABEL_33:
  v68 = *(_DWORD *)(a1 + 228);
  if ( v123 )
  {
    LOWORD(v71) = 7792;
    v69 = 4 * v68;
    v70 = v126;
    HIWORD(v71) = (unsigned int)&unk_183330 >> 16;
    v121[5] = v127;
    *(_DWORD *)(v71 + 4 * v68) = v70;
    *(_DWORD *)(v71 + 4 * v68 + 64) = 0;
    goto LABEL_35;
  }
LABEL_59:
  LOWORD(v71) = 7792;
  v69 = 4 * v68;
  HIWORD(v71) = (unsigned int)&unk_183330 >> 16;
  v87 = v71 + 4 * v68;
  v88 = *(_DWORD *)(v87 + 64) + 1;
  v75 = *(_DWORD *)(v87 + 64) - 1 < 0;
  *(_DWORD *)(v87 + 64) = v88;
  if ( !(v75 ^ __OFSUB__(v88, 2) | (v88 == 2)) )
  {
    V_LOCK();
    LOWORD(v89) = 588;
    HIWORD(v89) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v137, v89, *(int *)(a1 + 232));
    LOWORD(v90) = -27776;
    HIWORD(v90) = (unsigned int)"r_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
    logfmt_raw(
      v191,
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
      v90,
      *(_DWORD *)(v71 + 4 * *(_DWORD *)(a1 + 228) + 64));
    V_UNLOCK();
    LOWORD(v91) = -27992;
    HIWORD(v91) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/chip_setting.c" >> 16;
    zlog(g_zc, v91, 193, "update_temperature", 18, 335, 120, v191);
    v68 = *(_DWORD *)(a1 + 228);
    v69 = 4 * v68;
    *(_DWORD *)(v136 + 16) |= 8u;
  }
LABEL_35:
  if ( v122 )
  {
    v72 = v121;
    v73 = v125;
    *(_DWORD *)(v71 + v69 + 128) = 0;
    v72[4] = v73;
  }
  else
  {
    v99 = *(_DWORD *)(v71 + v69 + 128) + 1;
    v75 = *(_DWORD *)(v71 + v69 + 128) - 1 < 0;
    *(_DWORD *)(v71 + v69 + 128) = v99;
    if ( !(v75 ^ __OFSUB__(v99, 2) | (v99 == 2)) )
    {
      V_LOCK();
      LOWORD(v100) = 588;
      HIWORD(v100) = (unsigned int)": get test = %d" >> 16;
      V_INT((int)v139, v100, *(int *)(a1 + 232));
      LOWORD(v101) = -27732;
      HIWORD(v101) = (unsigned int)"ease/build/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
      logfmt_raw(
        v191,
        0x1000u,
        v122,
        v140,
        v139[0],
        v139[1],
        v139[2],
        v139[3],
        v139[4],
        v139[5],
        v139[6],
        v140,
        v101,
        *(_DWORD *)(v71 + 4 * *(_DWORD *)(a1 + 228) + 128));
      V_UNLOCK();
      LOWORD(v102) = -27992;
      HIWORD(v102) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/chip_setting.c" >> 16;
      zlog(g_zc, v102, 193, "update_temperature", 18, 352, 120, v191);
      v68 = *(_DWORD *)(a1 + 228);
      v69 = 4 * v68;
      *(_DWORD *)(v136 + 16) |= 8u;
    }
  }
  if ( *(_DWORD *)(a1 + 388) >= v124 )
  {
    *(_DWORD *)(v71 + v69 + 192) = 0;
  }
  else
  {
    v74 = *(_DWORD *)(v71 + v69 + 192) + 1;
    v75 = *(_DWORD *)(v71 + v69 + 192) - 1 < 0;
    *(_DWORD *)(v71 + v69 + 192) = v74;
    if ( !(v75 ^ __OFSUB__(v74, 2) | (v74 == 2)) )
    {
      V_LOCK();
      LOWORD(v103) = 588;
      HIWORD(v103) = (unsigned int)": get test = %d" >> 16;
      V_INT((int)v141, v103, *(int *)(a1 + 232));
      LOWORD(v104) = -27688;
      HIWORD(v104) = (unsigned int)"end/backend_ckb_2042/backend_ckb_2042.c" >> 16;
      logfmt_raw(
        v191,
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
        v104,
        *(_DWORD *)(v71 + 4 * *(_DWORD *)(a1 + 228) + 192),
        v124);
      V_UNLOCK();
      LOWORD(v105) = -27992;
      HIWORD(v105) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/chip_setting.c" >> 16;
      zlog(g_zc, v105, 193, "update_temperature", 18, 363, 120, v191);
      v68 = *(_DWORD *)(a1 + 228);
      *(_DWORD *)(v136 + 16) |= 0x10u;
      v69 = 4 * v68;
    }
  }
  if ( v121[4] > *(_DWORD *)(a1 + 376) || *(_DWORD *)(v71 + 4 * v68) > *(_DWORD *)(a1 + 380) )
  {
    v92 = *(_DWORD *)(v71 + v69 + 256) + 1;
    v75 = *(_DWORD *)(v71 + v69 + 256) - 1 < 0;
    *(_DWORD *)(v71 + v69 + 256) = v92;
    if ( !(v75 ^ __OFSUB__(v92, 2) | (v92 == 2)) )
    {
      V_LOCK();
      LOWORD(v93) = 588;
      HIWORD(v93) = (unsigned int)": get test = %d" >> 16;
      V_INT((int)v143, v93, *(int *)(a1 + 232));
      LOWORD(v94) = -27620;
      HIWORD(v94) = (unsigned int)"%s, work count %d" >> 16;
      logfmt_raw(
        v191,
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
        v94,
        *(_DWORD *)(v71 + 4 * *(_DWORD *)(a1 + 228) + 256),
        v121[4],
        *(_DWORD *)(v71 + 4 * *(_DWORD *)(a1 + 228)));
      V_UNLOCK();
      LOWORD(v95) = -27992;
      HIWORD(v95) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/chip_setting.c" >> 16;
      zlog(g_zc, v95, 193, "update_temperature", 18, 378, 120, v191);
      V_LOCK();
      LOWORD(v96) = 4752;
      HIWORD(v96) = (unsigned int)&unk_132B50 >> 16;
      logfmt_raw(v191, 0x1000u, 0, v96, 1251860);
      V_UNLOCK();
      LOWORD(v97) = -27992;
      HIWORD(v97) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/chip_setting.c" >> 16;
      zlog(g_zc, v97, 193, "update_temperature", 18, 379, 100, v191);
      v98 = *(_DWORD *)(a1 + 228);
      *(_DWORD *)(v136 + 16) |= 2u;
      v69 = 4 * v98;
    }
  }
  else
  {
    *(_DWORD *)(v71 + v69 + 256) = 0;
  }
  if ( v121[5] <= *(_DWORD *)(a1 + 384) )
  {
    v76 = v71 + v69;
    v77 = *(_DWORD *)(v76 + 320) + 1;
    v75 = *(_DWORD *)(v76 + 320) - 1 < 0;
    *(_DWORD *)(v76 + 320) = v77;
    if ( !(v75 ^ __OFSUB__(v77, 2) | (v77 == 2)) )
    {
      V_LOCK();
      LOWORD(v78) = 588;
      HIWORD(v78) = (unsigned int)": get test = %d" >> 16;
      V_INT((int)v145, v78, *(int *)(a1 + 232));
      LOWORD(v79) = -27552;
      HIWORD(v79) = (unsigned int)"og value %08x" >> 16;
      logfmt_raw(
        v191,
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
        v79,
        *(_DWORD *)(v71 + 4 * *(_DWORD *)(a1 + 228) + 320),
        v121[5]);
      V_UNLOCK();
      LOWORD(v80) = -27992;
      HIWORD(v80) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/chip_setting.c" >> 16;
      zlog(g_zc, v80, 193, "update_temperature", 18, 394, 120, v191);
      V_LOCK();
      LOWORD(v81) = -30148;
      LOWORD(v82) = 4752;
      HIWORD(v81) = (unsigned int)"pcb_temp" >> 16;
      HIWORD(v82) = (unsigned int)&unk_132B50 >> 16;
      logfmt_raw(v191, 0x1000u, 0, v82, v81);
      V_UNLOCK();
      LOWORD(v83) = -27992;
      HIWORD(v83) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/chip_setting.c" >> 16;
      zlog(g_zc, v83, 193, "update_temperature", 18, 395, 100, v191);
      *(_DWORD *)(v136 + 16) |= 4u;
    }
    return v132;
  }
  result = v132;
  *(_DWORD *)(v71 + v69 + 320) = 0;
  return result;
}
