int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  signed int v4; // r5
  int v6; // r4
  void *v7; // r0
  void (__fastcall *v8)(int, void *); // r3
  int *v9; // r6
  int v10; // r10
  int v11; // r1
  int v12; // r2
  int v13; // r3
  char *v14; // lr
  char *v15; // r11
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int *v19; // r5
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r1
  int v33; // r2
  int v34; // r3
  char *v35; // lr
  char *v36; // r9
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int *v40; // r5
  int v41; // r1
  int v42; // r2
  int v43; // r3
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r1
  int v48; // r2
  int v49; // r3
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int v53; // r3
  int v54; // r2
  int v55; // r8
  int v56; // r2
  int v57; // r2
  int v58; // r2
  int v59; // r2
  int v60; // r3
  int v61; // r12
  _DWORD *v62; // r12
  int v63; // lr
  int v64; // r1
  bool v65; // nf
  _DWORD *v66; // r3
  int v67; // r2
  int result; // r0
  _DWORD *v69; // r0
  int v70; // r1
  int v71; // r2
  int v72; // r2
  int v73; // r1
  int v74; // [sp+20h] [bp-1334h] BYREF
  char v75; // [sp+40h] [bp-1314h] BYREF
  char v76; // [sp+60h] [bp-12F4h] BYREF
  char *v77; // [sp+80h] [bp-12D4h]
  const char *v78; // [sp+84h] [bp-12D0h]
  int v79; // [sp+88h] [bp-12CCh]
  char *s; // [sp+8Ch] [bp-12C8h]
  const char *v81; // [sp+90h] [bp-12C4h]
  int *v82; // [sp+94h] [bp-12C0h]
  const char *v83; // [sp+98h] [bp-12BCh]
  char *v84; // [sp+9Ch] [bp-12B8h]
  int *v85; // [sp+A0h] [bp-12B4h]
  char *v86; // [sp+A4h] [bp-12B0h]
  char *v87; // [sp+A8h] [bp-12ACh]
  char *v88; // [sp+ACh] [bp-12A8h]
  _DWORD *v89; // [sp+B0h] [bp-12A4h]
  int v90; // [sp+B4h] [bp-12A0h]
  int v91; // [sp+B8h] [bp-129Ch]
  unsigned int v92; // [sp+BCh] [bp-1298h]
  int v93; // [sp+C0h] [bp-1294h]
  int v94; // [sp+C4h] [bp-1290h]
  int v95; // [sp+C8h] [bp-128Ch]
  int v96; // [sp+CCh] [bp-1288h]
  int *v97; // [sp+D0h] [bp-1284h]
  const char *v98; // [sp+D4h] [bp-1280h]
  int *v99; // [sp+D8h] [bp-127Ch]
  int v100; // [sp+DCh] [bp-1278h]
  signed int v101; // [sp+E0h] [bp-1274h]
  void *ptr; // [sp+E4h] [bp-1270h]
  int v103; // [sp+E8h] [bp-126Ch]
  int v104; // [sp+ECh] [bp-1268h]
  _DWORD v105[7]; // [sp+F0h] [bp-1264h] BYREF
  int v106; // [sp+10Ch] [bp-1248h]
  _DWORD v107[7]; // [sp+110h] [bp-1244h] BYREF
  int v108; // [sp+12Ch] [bp-1228h]
  _DWORD v109[7]; // [sp+130h] [bp-1224h] BYREF
  int v110; // [sp+14Ch] [bp-1208h]
  _DWORD v111[7]; // [sp+150h] [bp-1204h] BYREF
  int v112; // [sp+16Ch] [bp-11E8h]
  _DWORD v113[7]; // [sp+170h] [bp-11E4h] BYREF
  int v114; // [sp+18Ch] [bp-11C8h]
  _DWORD v115[7]; // [sp+190h] [bp-11C4h] BYREF
  int v116; // [sp+1ACh] [bp-11A8h]
  _DWORD v117[8]; // [sp+1B0h] [bp-11A4h] BYREF
  _DWORD v118[8]; // [sp+1D0h] [bp-1184h] BYREF
  _DWORD v119[8]; // [sp+1F0h] [bp-1164h] BYREF
  _DWORD v120[8]; // [sp+210h] [bp-1144h] BYREF
  int v121; // [sp+230h] [bp-1124h] BYREF
  int v122; // [sp+234h] [bp-1120h]
  int v123; // [sp+238h] [bp-111Ch]
  int v124; // [sp+23Ch] [bp-1118h]
  int v125; // [sp+240h] [bp-1114h]
  int v126; // [sp+244h] [bp-1110h]
  int v127; // [sp+248h] [bp-110Ch]
  int v128; // [sp+24Ch] [bp-1108h]
  int v129; // [sp+250h] [bp-1104h] BYREF
  int v130; // [sp+254h] [bp-1100h]
  int v131; // [sp+258h] [bp-10FCh]
  int v132; // [sp+25Ch] [bp-10F8h]
  int v133; // [sp+260h] [bp-10F4h]
  int v134; // [sp+264h] [bp-10F0h]
  int v135; // [sp+268h] [bp-10ECh]
  int v136; // [sp+26Ch] [bp-10E8h]
  _DWORD v137[8]; // [sp+270h] [bp-10E4h] BYREF
  _DWORD v138[7]; // [sp+290h] [bp-10C4h] BYREF
  int v139; // [sp+2ACh] [bp-10A8h]
  int v140; // [sp+2B0h] [bp-10A4h] BYREF
  int v141; // [sp+2B4h] [bp-10A0h]
  int v142; // [sp+2B8h] [bp-109Ch]
  int v143; // [sp+2BCh] [bp-1098h]
  int v144; // [sp+2C0h] [bp-1094h]
  int v145; // [sp+2C4h] [bp-1090h]
  int v146; // [sp+2C8h] [bp-108Ch]
  int v147; // [sp+2CCh] [bp-1088h]
  int v148; // [sp+2D0h] [bp-1084h] BYREF
  int v149; // [sp+2D4h] [bp-1080h]
  int v150; // [sp+2D8h] [bp-107Ch]
  int v151; // [sp+2DCh] [bp-1078h]
  int v152; // [sp+2E0h] [bp-1074h]
  int v153; // [sp+2E4h] [bp-1070h]
  int v154; // [sp+2E8h] [bp-106Ch]
  int v155; // [sp+2ECh] [bp-1068h]
  _DWORD v156[8]; // [sp+2F0h] [bp-1064h] BYREF
  _DWORD v157[7]; // [sp+310h] [bp-1044h] BYREF
  int v158; // [sp+32Ch] [bp-1028h]
  _DWORD v159[7]; // [sp+330h] [bp-1024h] BYREF
  int v160; // [sp+34Ch] [bp-1008h]
  char v161[4100]; // [sp+350h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 206);
  v100 = a3 + 16;
  if ( !v3 )
    return v100;
  v4 = *(_DWORD *)(a1 + 340);
  v89 = a2;
  v6 = *(_DWORD *)(a1 + 332);
  v104 = a3;
  v101 = v4;
  v7 = calloc(v4, 8u);
  v8 = *(void (__fastcall **)(int, void *))(a1 + 184);
  ptr = v7;
  v8(a1, v7);
  if ( v4 <= 0 )
  {
    free(ptr);
    if ( !v101 )
    {
      v59 = *(_DWORD *)(a1 + 196);
      v92 = 0;
      v90 = 0;
      v93 = -150;
      goto LABEL_59;
    }
    v91 = 0;
    v90 = 0;
    v92 = 0;
    v93 = -150;
    v95 = -150;
    v82 = &g_zc;
    v94 = 150;
LABEL_68:
    V_LOCK();
    V_INT((int)v105, "chain", *(int *)(a1 + 200));
    logfmt_raw(
      v161,
      0x1000u,
      0,
      v106,
      v105[0],
      v105[1],
      v105[2],
      v105[3],
      v105[4],
      v105[5],
      v105[6],
      v106,
      "read temp error! pcb temp count %d chip temp count %d uneffective value count %d",
      v91,
      v90,
      v92);
    V_UNLOCK();
    zlog(
      *v82,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      193,
      "update_temperature",
      18,
      266,
      120,
      v161);
    *(_DWORD *)(v104 + 16) |= 1u;
    goto LABEL_33;
  }
  v9 = (int *)ptr;
  v83 = "check_temperature";
  v92 = 0;
  v90 = 0;
  v91 = 0;
  v103 = 0;
  v95 = -150;
  v96 = 0;
  v94 = 150;
  v87 = &v76;
  v86 = &v75;
  v97 = (int *)((char *)ptr + 8 * v101);
  v10 = v6;
  v93 = -150;
  v98 = "check_temperature, local:%d, remote:%d";
  v82 = &g_zc;
  v84 = "%s";
  v99 = &g_temp_zc;
  s = "chain";
  v81 = "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c";
  v88 = "sensor";
  v85 = &v74;
  do
  {
    V_LOCK();
    V_INT((int)v159, s, *(int *)(a1 + 200));
    logfmt_raw(
      v161,
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
      v98,
      *v9,
      v9[1]);
    V_UNLOCK();
    zlog(*v82, v81, 193, "check_temperature", 17, 34, 20, v161);
    v53 = *v9;
    if ( *v9 == -64 )
    {
      v55 = 0;
      ++v92;
    }
    else
    {
      v54 = v95;
      v55 = 1;
      if ( v95 < v53 )
        v54 = *v9;
      v95 = v54;
      v56 = v94;
      ++v91;
      if ( v94 >= v53 )
        v56 = v53;
      v94 = v56;
    }
    v57 = v9[1];
    if ( v57 == -64 )
    {
      ++v92;
      v79 = 0;
    }
    else
    {
      if ( v93 >= v57 )
        v57 = v93;
      v93 = v57;
      ++v90;
      v79 = 1;
    }
    if ( v89 )
    {
      v58 = *(_DWORD *)(v10 + 12);
      if ( v58 )
      {
        if ( v58 == 1 )
        {
          if ( v55 )
            *(_DWORD *)(v89[2] + 4 * v103) = v53;
          if ( v79 )
            *(_DWORD *)(v89[3] + 4 * v103) = v9[1];
          ++v103;
        }
      }
      else
      {
        if ( v55 )
          *(_DWORD *)(*v89 + 4 * v96) = v53;
        if ( v79 )
          *(_DWORD *)(v89[1] + 4 * v96) = v9[1];
        ++v96;
      }
    }
    V_LOCK();
    V_INT((int)v157, s, *(int *)(a1 + 200));
    V_INT((int)v156, v88, *(int *)(v10 + 20));
    if ( v55 )
    {
      V_INT((int)&v148, "pcbtemp", *v9);
      if ( v79 )
        goto LABEL_5;
    }
    else
    {
      V_INT((int)v120, "pcbtemp", -256);
      v148 = v120[0];
      v149 = v120[1];
      v150 = v120[2];
      v151 = v120[3];
      v152 = v120[4];
      v153 = v120[5];
      v154 = v120[6];
      v155 = v120[7];
      if ( v79 )
      {
LABEL_5:
        V_INT((int)&v140, "chiptemp", v9[1]);
        goto LABEL_6;
      }
    }
    V_INT((int)v119, "chiptemp", -256);
    v140 = v119[0];
    v141 = v119[1];
    v142 = v119[2];
    v143 = v119[3];
    v144 = v119[4];
    v145 = v119[5];
    v146 = v119[6];
    v147 = v119[7];
LABEL_6:
    v11 = v141;
    v12 = v142;
    v13 = v143;
    v78 = v83;
    v14 = v87;
    v77 = v84;
    *(_DWORD *)v87 = v140;
    *((_DWORD *)v14 + 1) = v11;
    *((_DWORD *)v14 + 2) = v12;
    *((_DWORD *)v14 + 3) = v13;
    v14 += 16;
    v15 = v86;
    v16 = v145;
    v17 = v146;
    v18 = v147;
    v19 = v85;
    *(_DWORD *)v14 = v144;
    *((_DWORD *)v14 + 1) = v16;
    *((_DWORD *)v14 + 2) = v17;
    *((_DWORD *)v14 + 3) = v18;
    v20 = v149;
    v21 = v150;
    v22 = v151;
    *(_DWORD *)v15 = v148;
    *((_DWORD *)v15 + 1) = v20;
    *((_DWORD *)v15 + 2) = v21;
    *((_DWORD *)v15 + 3) = v22;
    v15 += 16;
    v23 = v153;
    v24 = v154;
    v25 = v155;
    *(_DWORD *)v15 = v152;
    *((_DWORD *)v15 + 1) = v23;
    *((_DWORD *)v15 + 2) = v24;
    *((_DWORD *)v15 + 3) = v25;
    v26 = v156[1];
    v27 = v156[2];
    v28 = v156[3];
    *v19 = v156[0];
    v19[1] = v26;
    v19[2] = v27;
    v19[3] = v28;
    v19 += 4;
    v29 = v156[5];
    v30 = v156[6];
    v31 = v156[7];
    *v19 = v156[4];
    v19[1] = v29;
    v19[2] = v30;
    v19[3] = v31;
    logfmt_raw(v161, 0x1000u, 0, v158, v157[0], v157[1], v157[2], v157[3], v157[4], v157[5], v157[6], v158);
    V_UNLOCK();
    zlog(*v82, v81, 193, "check_temperature", 17, 76, 20, v161);
    V_LOCK();
    V_INT((int)v138, s, *(int *)(a1 + 200));
    V_INT((int)v137, v88, *(int *)(v10 + 20));
    if ( v55 )
    {
      V_INT((int)&v129, "pcbtemp", *v9);
    }
    else
    {
      V_INT((int)v118, "pcbtemp", -256);
      v129 = v118[0];
      v130 = v118[1];
      v131 = v118[2];
      v132 = v118[3];
      v133 = v118[4];
      v134 = v118[5];
      v135 = v118[6];
      v136 = v118[7];
    }
    if ( v79 )
    {
      V_INT((int)&v121, "chiptemp", v9[1]);
    }
    else
    {
      V_INT((int)v117, "chiptemp", -256);
      v121 = v117[0];
      v122 = v117[1];
      v123 = v117[2];
      v124 = v117[3];
      v125 = v117[4];
      v126 = v117[5];
      v127 = v117[6];
      v128 = v117[7];
    }
    v32 = v122;
    v33 = v123;
    v34 = v124;
    v9 += 2;
    v10 += 24;
    v78 = v83;
    v35 = v87;
    v77 = v84;
    *(_DWORD *)v87 = v121;
    *((_DWORD *)v35 + 1) = v32;
    *((_DWORD *)v35 + 2) = v33;
    *((_DWORD *)v35 + 3) = v34;
    v35 += 16;
    v36 = v86;
    v37 = v126;
    v38 = v127;
    v39 = v128;
    v40 = v85;
    *(_DWORD *)v35 = v125;
    *((_DWORD *)v35 + 1) = v37;
    *((_DWORD *)v35 + 2) = v38;
    *((_DWORD *)v35 + 3) = v39;
    v41 = v130;
    v42 = v131;
    v43 = v132;
    *(_DWORD *)v36 = v129;
    *((_DWORD *)v36 + 1) = v41;
    *((_DWORD *)v36 + 2) = v42;
    *((_DWORD *)v36 + 3) = v43;
    v36 += 16;
    v44 = v134;
    v45 = v135;
    v46 = v136;
    *(_DWORD *)v36 = v133;
    *((_DWORD *)v36 + 1) = v44;
    *((_DWORD *)v36 + 2) = v45;
    *((_DWORD *)v36 + 3) = v46;
    v47 = v137[1];
    v48 = v137[2];
    v49 = v137[3];
    *v40 = v137[0];
    v40[1] = v47;
    v40[2] = v48;
    v40[3] = v49;
    v40 += 4;
    v50 = v137[5];
    v51 = v137[6];
    v52 = v137[7];
    *v40 = v137[4];
    v40[1] = v50;
    v40[2] = v51;
    v40[3] = v52;
    logfmt_raw(v161, 0x1000u, 0, v139, v138[0], v138[1], v138[2], v138[3], v138[4], v138[5], v138[6], v139);
    V_UNLOCK();
    zlog(*v99, v81, 193, "check_temperature", 17, 78, 40, v161);
  }
  while ( v97 != v9 );
  free(ptr);
  if ( v91 != v101 || v91 != v90 )
    goto LABEL_68;
LABEL_33:
  v59 = *(_DWORD *)(a1 + 196);
  if ( v91 )
  {
    v60 = v59;
    v61 = v95;
    v89[5] = v94;
    dword_1194B8[v59] = v61;
    dword_1194B8[v59 + 16] = 0;
    goto LABEL_35;
  }
LABEL_59:
  v60 = v59;
  v69 = &dword_1194B8[v59];
  v70 = v69[16] + 1;
  v65 = v69[16] - 1 < 0;
  v69[16] = v70;
  if ( !(v65 ^ __OFSUB__(v70, 2) | (v70 == 2)) )
  {
    V_LOCK();
    V_INT((int)v107, "chain", *(int *)(a1 + 200));
    logfmt_raw(
      v161,
      0x1000u,
      0,
      v108,
      v107[0],
      v107[1],
      v107[2],
      v107[3],
      v107[4],
      v107[5],
      v107[6],
      v108,
      "read no sensor pcb temp exceed limit! (%d)",
      dword_1194B8[*(_DWORD *)(a1 + 196) + 16]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      193,
      "update_temperature",
      18,
      278,
      120,
      v161);
    v59 = *(_DWORD *)(a1 + 196);
    v60 = v59;
    *(_DWORD *)(v104 + 16) |= 8u;
  }
LABEL_35:
  if ( v90 )
  {
    v62 = v89;
    v63 = v93;
    dword_1194B8[v60 + 32] = 0;
    v62[4] = v63;
  }
  else
  {
    v73 = dword_1194B8[v60 + 32] + 1;
    v65 = dword_1194B8[v60 + 32] - 1 < 0;
    dword_1194B8[v60 + 32] = v73;
    if ( !(v65 ^ __OFSUB__(v73, 2) | (v73 == 2)) )
    {
      V_LOCK();
      V_INT((int)v109, "chain", *(int *)(a1 + 200));
      logfmt_raw(
        v161,
        0x1000u,
        v90,
        v110,
        v109[0],
        v109[1],
        v109[2],
        v109[3],
        v109[4],
        v109[5],
        v109[6],
        v110,
        "read no sensor chip temp exceed limit! (%d)",
        dword_1194B8[*(_DWORD *)(a1 + 196) + 32]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        193,
        "update_temperature",
        18,
        291,
        120,
        v161);
      v59 = *(_DWORD *)(a1 + 196);
      v60 = v59;
      *(_DWORD *)(v104 + 16) |= 8u;
    }
  }
  if ( *(_DWORD *)(a1 + 356) >= v92 )
  {
    dword_1194B8[v60 + 48] = 0;
  }
  else
  {
    v64 = dword_1194B8[v60 + 48] + 1;
    v65 = dword_1194B8[v60 + 48] - 1 < 0;
    dword_1194B8[v60 + 48] = v64;
    if ( !(v65 ^ __OFSUB__(v64, 2) | (v64 == 2)) )
    {
      V_LOCK();
      V_INT((int)v111, "chain", *(int *)(a1 + 200));
      logfmt_raw(
        v161,
        0x1000u,
        0,
        v112,
        v111[0],
        v111[1],
        v111[2],
        v111[3],
        v111[4],
        v111[5],
        v111[6],
        v112,
        "uneffective temp exceed limit (%d), uneffective_value_count = %d!",
        dword_1194B8[*(_DWORD *)(a1 + 196) + 48],
        v92);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        193,
        "update_temperature",
        18,
        300,
        120,
        v161);
      v59 = *(_DWORD *)(a1 + 196);
      *(_DWORD *)(v104 + 16) |= 0x10u;
      v60 = v59;
    }
  }
  if ( v89[4] > *(_DWORD *)(a1 + 344) || dword_1194B8[v59] > *(_DWORD *)(a1 + 348) )
  {
    v71 = dword_1194B8[v60 + 64] + 1;
    v65 = dword_1194B8[v60 + 64] - 1 < 0;
    dword_1194B8[v60 + 64] = v71;
    if ( !(v65 ^ __OFSUB__(v71, 2) | (v71 == 2)) )
    {
      V_LOCK();
      V_INT((int)v113, "chain", *(int *)(a1 + 200));
      logfmt_raw(
        v161,
        0x1000u,
        0,
        v114,
        v113[0],
        v113[1],
        v113[2],
        v113[3],
        v113[4],
        v113[5],
        v113[6],
        v114,
        "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!",
        dword_1194B8[*(_DWORD *)(a1 + 196) + 64],
        v89[4],
        dword_1194B8[*(_DWORD *)(a1 + 196)]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        193,
        "update_temperature",
        18,
        311,
        120,
        v161);
      v72 = *(_DWORD *)(a1 + 196);
      *(_DWORD *)(v104 + 16) |= 2u;
      v60 = v72;
    }
  }
  else
  {
    dword_1194B8[v60 + 64] = 0;
  }
  if ( v89[5] <= *(_DWORD *)(a1 + 352) )
  {
    v66 = &dword_1194B8[v60];
    v67 = v66[80] + 1;
    v65 = v66[80] - 1 < 0;
    v66[80] = v67;
    if ( !(v65 ^ __OFSUB__(v67, 2) | (v67 == 2)) )
    {
      V_LOCK();
      V_INT((int)v115, "chain", *(int *)(a1 + 200));
      logfmt_raw(
        v161,
        0x1000u,
        0,
        v116,
        v115[0],
        v115[1],
        v115[2],
        v115[3],
        v115[4],
        v115[5],
        v115[6],
        v116,
        "low temp exceed limit (%d), min_pcb_temp = %d!",
        dword_1194B8[*(_DWORD *)(a1 + 196) + 80],
        v89[5]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        193,
        "update_temperature",
        18,
        322,
        120,
        v161);
      *(_DWORD *)(v104 + 16) |= 4u;
    }
    return v100;
  }
  result = v100;
  dword_1194B8[v60 + 80] = 0;
  return result;
}
