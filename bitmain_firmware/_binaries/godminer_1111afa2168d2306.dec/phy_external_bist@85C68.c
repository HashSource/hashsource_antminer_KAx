int __fastcall phy_external_bist(int a1, int a2, int a3, int a4)
{
  char *v8; // r1
  int v9; // r6
  int v10; // r1
  char *v11; // r1
  int v12; // r0
  unsigned __int8 *v13; // r4
  int v14; // r0
  int v15; // r2
  int v16; // r1
  unsigned __int16 v17; // t1
  unsigned __int8 *v18; // r6
  unsigned __int8 v19; // t1
  char *v20; // r7
  int v21; // r11
  unsigned __int8 *v22; // r4
  unsigned __int16 v23; // t1
  char *v24; // r3
  int v25; // r2
  unsigned __int16 v26; // r6
  int v27; // r1
  int v28; // r0
  char *v29; // r4
  char *v30; // r5
  char *v31; // r2
  unsigned int v32; // r3
  int v33; // r1
  unsigned int v34; // r3
  unsigned __int16 v35; // r6
  int v36; // r0
  char *v37; // r4
  char *v38; // r5
  char *v39; // r2
  unsigned int v40; // r3
  int v41; // r1
  unsigned int v42; // r3
  unsigned __int16 v43; // r6
  int v44; // r0
  char *v45; // r4
  char *v46; // r5
  char *v47; // r2
  unsigned int v48; // r3
  int v49; // r1
  unsigned int v50; // r3
  unsigned int v51; // r6
  unsigned int v52; // r9
  unsigned int v53; // r11
  int v54; // r3
  char *v55; // r2
  int v56; // r1
  int v57; // r5
  char *v58; // r1
  int v59; // r5
  int v60; // r1
  char *v61; // r1
  int v62; // r1
  char *v63; // r1
  int v64; // r1
  int v66; // [sp+24h] [bp-1278h]
  int v67; // [sp+24h] [bp-1278h]
  int v68; // [sp+24h] [bp-1278h]
  int v69; // [sp+24h] [bp-1278h]
  unsigned __int8 *v70; // [sp+40h] [bp-125Ch]
  unsigned __int8 *v71; // [sp+48h] [bp-1254h]
  char *v72; // [sp+48h] [bp-1254h]
  int v73; // [sp+50h] [bp-124Ch]
  _DWORD *v74; // [sp+50h] [bp-124Ch]
  _DWORD *v75; // [sp+50h] [bp-124Ch]
  int v76; // [sp+50h] [bp-124Ch]
  char *v77; // [sp+54h] [bp-1248h]
  char *v78; // [sp+54h] [bp-1248h]
  int v79; // [sp+58h] [bp-1244h]
  int v80; // [sp+58h] [bp-1244h]
  int v81; // [sp+60h] [bp-123Ch]
  unsigned __int8 *v82; // [sp+68h] [bp-1234h]
  char *ptr; // [sp+74h] [bp-1228h]
  _DWORD v84[7]; // [sp+78h] [bp-1224h] BYREF
  int v85; // [sp+94h] [bp-1208h]
  _DWORD v86[7]; // [sp+98h] [bp-1204h] BYREF
  int v87; // [sp+B4h] [bp-11E8h]
  _DWORD v88[7]; // [sp+B8h] [bp-11E4h] BYREF
  int v89; // [sp+D4h] [bp-11C8h]
  _DWORD v90[7]; // [sp+D8h] [bp-11C4h] BYREF
  int v91; // [sp+F4h] [bp-11A8h]
  _DWORD v92[7]; // [sp+F8h] [bp-11A4h] BYREF
  int v93; // [sp+114h] [bp-1188h]
  _DWORD v94[7]; // [sp+118h] [bp-1184h] BYREF
  int v95; // [sp+134h] [bp-1168h]
  _DWORD v96[7]; // [sp+138h] [bp-1164h] BYREF
  int v97; // [sp+154h] [bp-1148h]
  _DWORD v98[7]; // [sp+158h] [bp-1144h] BYREF
  int v99; // [sp+174h] [bp-1128h]
  _DWORD v100[7]; // [sp+178h] [bp-1124h] BYREF
  int v101; // [sp+194h] [bp-1108h]
  _DWORD v102[7]; // [sp+198h] [bp-1104h] BYREF
  int v103; // [sp+1B4h] [bp-10E8h]
  _DWORD v104[7]; // [sp+1B8h] [bp-10E4h] BYREF
  int v105; // [sp+1D4h] [bp-10C8h]
  _DWORD v106[7]; // [sp+1D8h] [bp-10C4h] BYREF
  int v107; // [sp+1F4h] [bp-10A8h]
  int v108; // [sp+1F8h] [bp-10A4h] BYREF
  _DWORD v109[6]; // [sp+1FCh] [bp-10A0h] BYREF
  int v110; // [sp+214h] [bp-1088h]
  int v111; // [sp+218h] [bp-1084h] BYREF
  _DWORD v112[6]; // [sp+21Ch] [bp-1080h] BYREF
  int v113; // [sp+234h] [bp-1068h]
  _DWORD s[8]; // [sp+238h] [bp-1064h] BYREF
  _DWORD v115[8]; // [sp+258h] [bp-1044h] BYREF
  _DWORD v116[8]; // [sp+278h] [bp-1024h] BYREF
  char v117[4100]; // [sp+298h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = 27796;
  HIWORD(v8) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v84, v8, *(int *)(a1 + 256));
  LOWORD(v9) = -13956;
  HIWORD(v9) = (unsigned int)"08x" >> 16;
  logfmt_raw(
    v117,
    0x1000u,
    0,
    v85,
    v84[0],
    v84[1],
    v84[2],
    v84[3],
    v84[4],
    v84[5],
    v84[6],
    v85,
    v9,
    "phy_external_bist");
  V_UNLOCK();
  LOWORD(v10) = -10928;
  HIWORD(v10) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v10, 174, "phy_external_bist", 17, 2037, 60, v117);
  memset(s, 0, sizeof(s));
  memset(v115, 0, sizeof(v115));
  memset(v116, 0, sizeof(v116));
  if ( a4 )
  {
    LOWORD(v11) = 27796;
    LOWORD(v12) = -7676;
    HIWORD(v11) = (unsigned int)"%1.f" >> 16;
    HIWORD(v12) = (unsigned int)" TOTAL] phy_unlock: 0x%llx, lane_unlock: %u" >> 16;
    v70 = (unsigned __int8 *)(a3 - 1);
    v71 = (unsigned __int8 *)(a3 + (unsigned __int8)(a4 - 1));
    v13 = (unsigned __int8 *)(a3 - 1);
    v77 = v11;
    v79 = v12;
    do
    {
      v17 = *++v13;
      if ( check_core_reg_with_expect_data_eth(a1, a2, v17, 64, 0xFF000100) )
      {
        V_LOCK();
        V_INT((int)v86, v77, *(int *)(a1 + 256));
        logfmt_raw(
          v117,
          0x1000u,
          0,
          v87,
          v86[0],
          v86[1],
          v86[2],
          v86[3],
          v86[4],
          v86[5],
          v86[6],
          v87,
          "%s pcs lock failed!",
          "phy_external_bist");
        V_UNLOCK();
        v14 = g_zc;
        v15 = 2181;
      }
      else
      {
        V_LOCK();
        V_INT((int)v88, v77, *(int *)(a1 + 256));
        logfmt_raw(
          v117,
          0x1000u,
          0,
          v89,
          v88[0],
          v88[1],
          v88[2],
          v88[3],
          v88[4],
          v88[5],
          v88[6],
          v89,
          v79,
          "phy_external_bist",
          *v13);
        V_UNLOCK();
        v14 = g_zc;
        v15 = 2183;
      }
      LOWORD(v16) = -10928;
      HIWORD(v16) = (unsigned int)"HY core %02x sram ext load done" >> 16;
      zlog(v14, v16, 174, "phy_external_bist", 17, v15, 100, v117);
    }
    while ( v71 != v13 );
    v18 = v70;
    do
    {
      v19 = *++v18;
      sub_7FA14(a1, v19, 133, 0xFFFF);
      sub_7FA14(a1, *v18, 134, 1342177279);
    }
    while ( v13 != v18 );
    v82 = v18;
    LOWORD(v20) = 27796;
    sub_7F9D0(a1, 132, -2147483647);
    sleep(0xAu);
    LOWORD(v21) = -7636;
    ptr = (char *)malloc(0x600u);
    v22 = v70;
    do
    {
      while ( 1 )
      {
        v23 = *++v22;
        if ( check_core_reg_with_expect_data_eth(a1, a2, v23, 139, 0xFF0000FF) )
          break;
        if ( v18 == v22 )
          goto LABEL_13;
      }
      V_LOCK();
      HIWORD(v20) = (unsigned int)"%1.f" >> 16;
      V_INT((int)v90, v20, *(int *)(a1 + 256));
      HIWORD(v21) = (unsigned int)" %u" >> 16;
      logfmt_raw(
        v117,
        0x1000u,
        0,
        v91,
        v90[0],
        v90[1],
        v90[2],
        v90[3],
        v90[4],
        v90[5],
        v90[6],
        v91,
        v21,
        "phy_external_bist");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
        174,
        "phy_external_bist",
        17,
        2217,
        100,
        v117);
    }
    while ( v18 != v22 );
LABEL_13:
    LOWORD(v24) = 27796;
    LOWORD(v25) = -7616;
    HIWORD(v24) = (unsigned int)"%1.f" >> 16;
    v72 = v24;
    HIWORD(v25) = (unsigned int)"d" >> 16;
    v81 = v25;
    do
    {
      v26 = 67;
      v73 = 0;
      v27 = *++v70;
      sub_7FA64(a1, v27, 132, ptr);
      LOWORD(v106[0]) = 17475;
      while ( 1 )
      {
        v28 = sub_7FA64(a1, *v70, v26, ptr);
        if ( v28 )
        {
          v29 = ptr;
          v30 = &ptr[12 * v28];
          do
          {
            while ( 1 )
            {
              if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v29 + 3)) == v26 )
              {
                v31 = &v117[4 * (unsigned __int8)v29[4]];
                v32 = bswap32(*(_DWORD *)v29);
                v33 = (unsigned __int16)v32;
                v34 = HIWORD(v32);
                *((_DWORD *)v31 - 8) += v33 + v34;
                if ( v33 )
                {
                  ++dword_1A3DEC;
                  V_LOCK();
                  V_INT((int)v92, v72, *(int *)(a1 + 256));
                  logfmt_raw(
                    v117,
                    0x1000u,
                    0,
                    v93,
                    v92[0],
                    v92[1],
                    v92[2],
                    v92[3],
                    v92[4],
                    v92[5],
                    v92[6],
                    v93,
                    v81,
                    (unsigned __int8)v29[4],
                    (unsigned __int8)v29[8],
                    (unsigned __int16)__rev16(*((unsigned __int16 *)v29 + 3)),
                    (unsigned __int16)bswap32(*(_DWORD *)v29));
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                    174,
                    "phy_external_bist",
                    17,
                    2254,
                    40,
                    v117);
                  v34 = bswap32(*(_DWORD *)v29) >> 16;
                }
                if ( v34 )
                  break;
              }
              v29 += 12;
              if ( v30 == v29 )
                goto LABEL_23;
            }
            v29 += 12;
            ++dword_1A3DEC;
            V_LOCK();
            V_INT((int)v94, v72, *(int *)(a1 + 256));
            logfmt_raw(
              v117,
              0x1000u,
              0,
              v95,
              v94[0],
              v94[1],
              v94[2],
              v94[3],
              v94[4],
              v94[5],
              v94[6],
              v95,
              v81,
              (unsigned __int8)*(v29 - 8),
              (unsigned __int8)*(v29 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v29 - 3)),
              bswap32(*((_DWORD *)v29 - 3)) >> 16);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              174,
              "phy_external_bist",
              17,
              2259,
              40,
              v117);
          }
          while ( v30 != v29 );
        }
LABEL_23:
        if ( v73 == 1 )
          break;
        v26 = BYTE1(v106[0]);
        v73 = 1;
      }
      v35 = 128;
      v74 = (int *)((char *)&v108 + 1);
      v108 = -2088599168;
      while ( 1 )
      {
        v36 = sub_7FA64(a1, *v70, v35, ptr);
        if ( v36 )
        {
          v37 = ptr;
          v38 = &ptr[12 * v36];
          do
          {
            while ( 1 )
            {
              if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v37 + 3)) == v35 )
              {
                v39 = &v117[4 * (unsigned __int8)v37[4]];
                v40 = bswap32(*(_DWORD *)v37);
                v41 = (unsigned __int16)v40;
                v42 = HIWORD(v40);
                *((_DWORD *)v39 - 16) += v41 + v42;
                if ( v41 )
                {
                  ++dword_1A3DF0;
                  V_LOCK();
                  V_INT((int)v96, v72, *(int *)(a1 + 256));
                  logfmt_raw(
                    v117,
                    0x1000u,
                    0,
                    v97,
                    v96[0],
                    v96[1],
                    v96[2],
                    v96[3],
                    v96[4],
                    v96[5],
                    v96[6],
                    v97,
                    "[PHY BIST LOST NUM] chip %02x core %02x reg %04x rdata %04x",
                    (unsigned __int8)v37[4],
                    (unsigned __int8)v37[8],
                    (unsigned __int16)__rev16(*((unsigned __int16 *)v37 + 3)),
                    (unsigned __int16)bswap32(*(_DWORD *)v37));
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                    174,
                    "phy_external_bist",
                    17,
                    2288,
                    40,
                    v117);
                  v42 = bswap32(*(_DWORD *)v37) >> 16;
                }
                if ( v42 )
                  break;
              }
              v37 += 12;
              if ( v38 == v37 )
                goto LABEL_34;
            }
            v37 += 12;
            ++dword_1A3DF0;
            V_LOCK();
            V_INT((int)v98, v72, *(int *)(a1 + 256));
            logfmt_raw(
              v117,
              0x1000u,
              0,
              v99,
              v98[0],
              v98[1],
              v98[2],
              v98[3],
              v98[4],
              v98[5],
              v98[6],
              v99,
              "[PHY BIST LOST NUM] chip %02x core %02x reg %04x rdata %04x",
              (unsigned __int8)*(v37 - 8),
              (unsigned __int8)*(v37 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v37 - 3)),
              bswap32(*((_DWORD *)v37 - 3)) >> 16);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              174,
              "phy_external_bist",
              17,
              2293,
              40,
              v117);
          }
          while ( v38 != v37 );
        }
LABEL_34:
        if ( v109 == v74 )
          break;
        v35 = *(unsigned __int8 *)v74;
        v74 = (_DWORD *)((char *)v74 + 1);
      }
      v43 = 135;
      v75 = (int *)((char *)&v111 + 1);
      v111 = -1970698105;
      while ( 1 )
      {
        v44 = sub_7FA64(a1, *v70, v43, ptr);
        if ( v44 )
        {
          v45 = ptr;
          v46 = &ptr[12 * v44];
          do
          {
            while ( 1 )
            {
              if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v45 + 3)) == v43 )
              {
                v47 = &v117[4 * (unsigned __int8)v45[4]];
                v48 = bswap32(*(_DWORD *)v45);
                v49 = (unsigned __int16)v48;
                v50 = HIWORD(v48);
                *((_DWORD *)v47 - 24) += v49 + v50;
                if ( v49 )
                {
                  ++dword_1A3DF4;
                  V_LOCK();
                  V_INT((int)v100, v72, *(int *)(a1 + 256));
                  logfmt_raw(
                    v117,
                    0x1000u,
                    0,
                    v101,
                    v100[0],
                    v100[1],
                    v100[2],
                    v100[3],
                    v100[4],
                    v100[5],
                    v100[6],
                    v101,
                    "[PHY BIST ERR NUM] chip %02x core %02x reg %04x rdata %04x",
                    (unsigned __int8)v45[4],
                    (unsigned __int8)v45[8],
                    (unsigned __int16)__rev16(*((unsigned __int16 *)v45 + 3)),
                    (unsigned __int16)bswap32(*(_DWORD *)v45));
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                    174,
                    "phy_external_bist",
                    17,
                    2322,
                    40,
                    v117);
                  v50 = bswap32(*(_DWORD *)v45) >> 16;
                }
                if ( v50 )
                  break;
              }
              v45 += 12;
              if ( v46 == v45 )
                goto LABEL_45;
            }
            v45 += 12;
            ++dword_1A3DF4;
            V_LOCK();
            V_INT((int)v102, v72, *(int *)(a1 + 256));
            logfmt_raw(
              v117,
              0x1000u,
              0,
              v103,
              v102[0],
              v102[1],
              v102[2],
              v102[3],
              v102[4],
              v102[5],
              v102[6],
              v103,
              "[PHY BIST ERR NUM] chip %02x core %02x reg %04x rdata %04x",
              (unsigned __int8)*(v45 - 8),
              (unsigned __int8)*(v45 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v45 - 3)),
              bswap32(*((_DWORD *)v45 - 3)) >> 16);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              174,
              "phy_external_bist",
              17,
              2327,
              40,
              v117);
          }
          while ( v46 != v45 );
        }
LABEL_45:
        if ( v112 == v75 )
          break;
        v43 = *(unsigned __int8 *)v75;
        v75 = (_DWORD *)((char *)v75 + 1);
      }
    }
    while ( v70 != v82 );
    v51 = s[0];
    v52 = v115[0];
    v53 = v116[0];
  }
  else
  {
    v53 = 0;
    sub_7F9D0(a1, 132, -2147483647);
    sleep(0xAu);
    v52 = 0;
    ptr = (char *)malloc(0x600u);
    v51 = 0;
  }
  LOWORD(v54) = -7432;
  LOWORD(v55) = 27796;
  LOWORD(v56) = -10928;
  HIWORD(v54) = (unsigned int)"first !!! %s PHY core %02x macro0 rx is invalid!" >> 16;
  HIWORD(v55) = (unsigned int)"%1.f" >> 16;
  HIWORD(v56) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  v57 = 0;
  v76 = v54;
  v78 = v55;
  v80 = v56;
  free(ptr);
  while ( 1 )
  {
    *(_QWORD *)&dword_1A3E00 += v52;
    *(_QWORD *)&dword_1A3DF8 += v51;
    *(_QWORD *)&dword_1A3E08 += v53;
    V_LOCK();
    V_INT((int)v104, v78, *(int *)(a1 + 256));
    v66 = v57++;
    logfmt_raw(
      v117,
      0x1000u,
      0,
      v105,
      v104[0],
      v104[1],
      v104[2],
      v104[3],
      v104[4],
      v104[5],
      v104[6],
      v105,
      v76,
      v66,
      v51,
      v52,
      v53);
    V_UNLOCK();
    zlog(g_zc, v80, 174, "phy_external_bist", 17, 2345, 60, v117);
    if ( v57 == 8 )
      break;
    v51 = s[v57];
    v52 = v115[v57];
    v53 = v116[v57];
  }
  V_LOCK();
  LOWORD(v58) = 27796;
  HIWORD(v58) = (unsigned int)"%1.f" >> 16;
  LOWORD(v59) = -7356;
  V_INT((int)v106, v58, *(int *)(a1 + 256));
  HIWORD(v59) = (unsigned int)"2x macro1 rx is invalid!" >> 16;
  logfmt_raw(
    v117,
    0x1000u,
    0,
    v107,
    v106[0],
    v106[1],
    v106[2],
    v106[3],
    v106[4],
    v106[5],
    v106[6],
    v107,
    v59,
    v67,
    dword_1A3DF8,
    dword_1A3DFC,
    dword_1A3DF4);
  V_UNLOCK();
  LOWORD(v60) = -10928;
  HIWORD(v60) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v60, 174, "phy_external_bist", 17, 2348, 60, v117);
  V_LOCK();
  LOWORD(v61) = 27796;
  HIWORD(v61) = (unsigned int)"%1.f" >> 16;
  V_INT((int)&v108, v61, *(int *)(a1 + 256));
  logfmt_raw(
    v117,
    0x1000u,
    0,
    v110,
    v108,
    v109[0],
    v109[1],
    v109[2],
    v109[3],
    v109[4],
    v109[5],
    v110,
    "[PHY BIST LOST NUM TOTAL] phy_lost: 0x%llx, lane_lost: %u",
    v68,
    dword_1A3E00,
    dword_1A3E04,
    dword_1A3DF0);
  V_UNLOCK();
  LOWORD(v62) = -10928;
  HIWORD(v62) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v62, 174, "phy_external_bist", 17, 2349, 60, v117);
  V_LOCK();
  LOWORD(v63) = 27796;
  HIWORD(v63) = (unsigned int)"%1.f" >> 16;
  V_INT((int)&v111, v63, *(int *)(a1 + 256));
  logfmt_raw(
    v117,
    0x1000u,
    0,
    v113,
    v111,
    v112[0],
    v112[1],
    v112[2],
    v112[3],
    v112[4],
    v112[5],
    v113,
    "[PHY BIST UNLOCK NUM TOTAL] phy_unlock: 0x%llx, lane_unlock: %u",
    v69,
    dword_1A3E08,
    dword_1A3E0C,
    dword_1A3DEC);
  V_UNLOCK();
  LOWORD(v64) = -10928;
  HIWORD(v64) = (unsigned int)"HY core %02x sram ext load done" >> 16;
  zlog(g_zc, v64, 174, "phy_external_bist", 17, 2350, 60, v117);
  dword_1A3DEC = 0;
  dword_1A3DF0 = 0;
  dword_1A3DF4 = 0;
  *(_QWORD *)&dword_1A3E08 = 0;
  *(_QWORD *)&dword_1A3E00 = 0;
  *(_QWORD *)&dword_1A3DF8 = 0;
  return 0;
}
