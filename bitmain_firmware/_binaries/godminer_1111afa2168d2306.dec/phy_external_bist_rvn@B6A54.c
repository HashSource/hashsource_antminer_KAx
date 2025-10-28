int __fastcall phy_external_bist_rvn(int a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  char *v8; // r1
  int v9; // r5
  int v10; // r1
  char *v11; // r1
  unsigned __int8 *v12; // r3
  char *v13; // r10
  unsigned __int8 *v14; // r6
  unsigned __int8 *v15; // r4
  unsigned __int16 v16; // t1
  unsigned __int8 *v17; // r5
  unsigned __int8 *v18; // r6
  unsigned __int8 v19; // t1
  int v20; // r10
  char *v21; // r3
  unsigned __int16 v22; // t1
  char *v23; // r1
  int v24; // r0
  int v25; // r10
  unsigned __int16 v26; // r6
  int v27; // r3
  _DWORD *v28; // r10
  char *v29; // r4
  int v30; // r0
  char *v31; // r5
  char *v32; // r2
  unsigned __int16 v33; // r3
  int v34; // r1
  int v35; // r12
  unsigned __int16 v36; // t1
  int v37; // r3
  unsigned __int16 v38; // r6
  char *v39; // r4
  int v40; // r0
  char *v41; // r5
  char *v42; // r2
  unsigned __int16 v43; // r3
  int v44; // r1
  int v45; // r12
  unsigned int v46; // r5
  __int64 v47; // r0
  unsigned int *v48; // r12
  __int64 v49; // r2
  unsigned int *i; // lr
  unsigned int v51; // t1
  unsigned int v52; // t1
  char *v53; // r1
  int v54; // r1
  char *v55; // r1
  int v56; // r1
  int v58; // [sp+24h] [bp-1168h]
  int v59; // [sp+24h] [bp-1168h]
  unsigned __int8 *v60; // [sp+3Ch] [bp-1150h]
  char *v61; // [sp+40h] [bp-114Ch]
  char *v62; // [sp+40h] [bp-114Ch]
  char *v63; // [sp+40h] [bp-114Ch]
  char *ptr; // [sp+44h] [bp-1148h]
  _DWORD *v66; // [sp+48h] [bp-1144h]
  int v67; // [sp+4Ch] [bp-1140h]
  int v68; // [sp+4Ch] [bp-1140h]
  unsigned __int8 *v69; // [sp+50h] [bp-113Ch]
  int v70; // [sp+54h] [bp-1138h]
  unsigned __int8 *v71; // [sp+5Ch] [bp-1130h]
  _DWORD v72[7]; // [sp+68h] [bp-1124h] BYREF
  int v73; // [sp+84h] [bp-1108h]
  _DWORD v74[7]; // [sp+88h] [bp-1104h] BYREF
  int v75; // [sp+A4h] [bp-10E8h]
  _DWORD v76[7]; // [sp+A8h] [bp-10E4h] BYREF
  int v77; // [sp+C4h] [bp-10C8h]
  _DWORD v78[7]; // [sp+C8h] [bp-10C4h] BYREF
  int v79; // [sp+E4h] [bp-10A8h]
  _DWORD v80[7]; // [sp+E8h] [bp-10A4h] BYREF
  int v81; // [sp+104h] [bp-1088h]
  int v82; // [sp+108h] [bp-1084h] BYREF
  _DWORD v83[6]; // [sp+10Ch] [bp-1080h] BYREF
  int v84; // [sp+124h] [bp-1068h]
  int v85; // [sp+128h] [bp-1064h] BYREF
  _DWORD v86[6]; // [sp+12Ch] [bp-1060h] BYREF
  int v87; // [sp+144h] [bp-1048h]
  _DWORD s[8]; // [sp+148h] [bp-1044h] BYREF
  _DWORD v89[8]; // [sp+168h] [bp-1024h] BYREF
  char v90[4100]; // [sp+188h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = 27796;
  HIWORD(v8) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v72, v8, *(int *)(a1 + 256));
  LOWORD(v9) = -13956;
  HIWORD(v9) = (unsigned int)"08x" >> 16;
  logfmt_raw(
    v90,
    0x1000u,
    0,
    v73,
    v72[0],
    v72[1],
    v72[2],
    v72[3],
    v72[4],
    v72[5],
    v72[6],
    v73,
    v9,
    "phy_external_bist_rvn");
  V_UNLOCK();
  LOWORD(v10) = 11824;
  HIWORD(v10) = (unsigned int)&unk_172FF8 >> 16;
  zlog(g_zc, v10, 174, "phy_external_bist_rvn", 21, 1095, 60, v90);
  memset(s, 0, sizeof(s));
  memset(v89, 0, sizeof(v89));
  ptr = (char *)malloc(0x1800u);
  if ( a4 )
  {
    LOWORD(v11) = -7888;
    v12 = a3;
    v69 = a3 - 1;
    LOWORD(v13) = 27796;
    HIWORD(v11) = (unsigned int)"[PHY BIST RESULT CHIP-%d] phy_err: 0x%x, phy_lost: 0x%x, phy_unlock: 0x%x" >> 16;
    v67 = (unsigned __int8)(a4 - 1);
    v14 = &a3[v67];
    v15 = v69;
    v61 = v11;
    v60 = v12;
    do
    {
      while ( 1 )
      {
        v16 = *++v15;
        if ( check_core_reg_with_expect_data_rvn(a1, a2, v16, 64, 0xFF000100) )
          break;
        if ( v15 == v14 )
          goto LABEL_6;
      }
      V_LOCK();
      HIWORD(v13) = (unsigned int)"%1.f" >> 16;
      V_INT((int)v74, v13, *(int *)(a1 + 256));
      logfmt_raw(
        v90,
        0x1000u,
        0,
        v75,
        v74[0],
        v74[1],
        v74[2],
        v74[3],
        v74[4],
        v74[5],
        v74[6],
        v75,
        v61,
        "phy_external_bist_rvn",
        *v15);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
        174,
        "phy_external_bist_rvn",
        21,
        1227,
        100,
        v90);
    }
    while ( v15 != v14 );
LABEL_6:
    v17 = v69;
    v18 = v69;
    do
    {
      v19 = *++v18;
      sub_AEC94(a1, v19, 133, 0xFFFF);
      sub_AEC94(a1, *v18, 134, 1342177279);
    }
    while ( v15 != v18 );
    sub_AEC50(a1, 132, -2147483647);
    LOWORD(v20) = -7852;
    sleep(0xAu);
    LOWORD(v21) = 27796;
    HIWORD(v21) = (unsigned int)"%1.f" >> 16;
    v62 = v21;
    do
    {
      while ( 1 )
      {
        v22 = *++v17;
        if ( check_core_reg_with_expect_data_rvn(a1, a2, v22, 139, 0xFF0000FF) )
          break;
        if ( v18 == v17 )
          goto LABEL_12;
      }
      V_LOCK();
      V_INT((int)v76, v62, *(int *)(a1 + 256));
      HIWORD(v20) = (unsigned int)"x%x, phy_lost: 0x%x, phy_unlock: 0x%x" >> 16;
      logfmt_raw(
        v90,
        0x1000u,
        0,
        v77,
        v76[0],
        v76[1],
        v76[2],
        v76[3],
        v76[4],
        v76[5],
        v76[6],
        v77,
        v20,
        "phy_external_bist_rvn",
        *v17);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
        174,
        "phy_external_bist_rvn",
        21,
        1249,
        100,
        v90);
    }
    while ( v18 != v17 );
LABEL_12:
    LOWORD(v23) = 27796;
    LOWORD(v24) = -7756;
    v25 = a1;
    v71 = &a3[v67 + 1];
    HIWORD(v23) = (unsigned int)"%1.f" >> 16;
    HIWORD(v24) = (unsigned int)"[PHY BIST LOST NUM TOTAL] phy_lost: 0x%llx, lane_lost: %u" >> 16;
    v63 = v23;
    v70 = v24;
    do
    {
      v26 = 128;
      v82 = -2088599168;
      v27 = v25;
      v28 = (int *)((char *)&v82 + 1);
      a1 = v27;
      while ( 1 )
      {
        v29 = ptr;
        v30 = sub_AECE4(a1, *v60, v26, ptr);
        if ( v30 )
        {
          v31 = &ptr[12 * v30];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v29 + 3)) != v26 )
            {
              v29 += 12;
              if ( v31 == v29 )
                goto LABEL_21;
            }
            V_LOCK();
            v29 += 12;
            V_INT((int)v78, v63, *(int *)(a1 + 256));
            logfmt_raw(
              v90,
              0x1000u,
              0,
              v79,
              v78[0],
              v78[1],
              v78[2],
              v78[3],
              v78[4],
              v78[5],
              v78[6],
              v79,
              v70,
              (unsigned __int8)*(v29 - 8),
              (unsigned __int8)*(v29 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v29 - 3)),
              bswap32(*((_DWORD *)v29 - 3)));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
              174,
              "phy_external_bist_rvn",
              21,
              1265,
              20,
              v90);
            v32 = &v90[4 * (unsigned __int8)*(v29 - 8)];
            v33 = bswap32(*((_DWORD *)v29 - 3));
            v34 = *((_DWORD *)v32 - 8);
            v35 = v33;
            if ( v33 )
              v35 = 1;
            dword_1B3FF8 += 2 * v35;
            *((_DWORD *)v32 - 8) = v34 + 2 * v33;
          }
          while ( v31 != v29 );
        }
LABEL_21:
        if ( v83 == v28 )
          break;
        v36 = *(unsigned __int8 *)v28;
        v28 = (_DWORD *)((char *)v28 + 1);
        v26 = v36;
      }
      LOWORD(v37) = -7816;
      HIWORD(v37) = (unsigned int)"x" >> 16;
      v25 = a1;
      v68 = v37;
      v38 = 135;
      v66 = (int *)((char *)&v85 + 1);
      v85 = -1970698105;
      while ( 1 )
      {
        v39 = ptr;
        v40 = sub_AECE4(a1, *v60, v38, ptr);
        if ( v40 )
        {
          v41 = &ptr[12 * v40];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v39 + 3)) != v38 )
            {
              v39 += 12;
              if ( v41 == v39 )
                goto LABEL_31;
            }
            V_LOCK();
            v39 += 12;
            V_INT((int)v80, v63, *(int *)(a1 + 256));
            logfmt_raw(
              v90,
              0x1000u,
              0,
              v81,
              v80[0],
              v80[1],
              v80[2],
              v80[3],
              v80[4],
              v80[5],
              v80[6],
              v81,
              v68,
              (unsigned __int8)*(v39 - 8),
              (unsigned __int8)*(v39 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v39 - 3)),
              bswap32(*((_DWORD *)v39 - 3)));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
              174,
              "phy_external_bist_rvn",
              21,
              1283,
              20,
              v90);
            v42 = &v90[4 * (unsigned __int8)*(v39 - 8)];
            v43 = bswap32(*((_DWORD *)v39 - 3));
            v44 = *((_DWORD *)v42 - 16);
            v45 = v43;
            if ( v43 )
              v45 = 1;
            dword_1B3FFC += 2 * v45;
            *((_DWORD *)v42 - 16) = v44 + 2 * v43;
          }
          while ( v41 != v39 );
        }
LABEL_31:
        if ( v86 == v66 )
          break;
        v38 = *(unsigned __int8 *)v66;
        v66 = (_DWORD *)((char *)v66 + 1);
      }
      ++v60;
    }
    while ( v60 != v71 );
    v46 = s[0];
    a4 = v89[0];
  }
  else
  {
    sub_AEC50(a1, 132, -2147483647);
    v46 = 0;
    sleep(0xAu);
  }
  free(ptr);
  v47 = *(_QWORD *)&dword_1B4000;
  v48 = &s[1];
  v49 = *(_QWORD *)&dword_1B4008;
  for ( i = &v89[1]; ; ++i )
  {
    v47 += v46;
    v49 += a4;
    if ( v48 == v89 )
      break;
    v51 = *v48++;
    v46 = v51;
    v52 = *i;
    a4 = v52;
  }
  *(_QWORD *)&dword_1B4000 = v47;
  *(_QWORD *)&dword_1B4008 = v49;
  V_LOCK();
  LOWORD(v53) = 27796;
  HIWORD(v53) = (unsigned int)"%1.f" >> 16;
  V_INT((int)&v82, v53, *(int *)(a1 + 256));
  logfmt_raw(
    v90,
    0x1000u,
    0,
    v84,
    v82,
    v83[0],
    v83[1],
    v83[2],
    v83[3],
    v83[4],
    v83[5],
    v84,
    "[PHY BIST ERR NUM] total 0x%llx",
    v58,
    dword_1B4000,
    dword_1B4004);
  V_UNLOCK();
  LOWORD(v54) = 11824;
  HIWORD(v54) = (unsigned int)&unk_172FF8 >> 16;
  zlog(g_zc, v54, 174, "phy_external_bist_rvn", 21, 1299, 60, v90);
  V_LOCK();
  LOWORD(v55) = 27796;
  HIWORD(v55) = (unsigned int)"%1.f" >> 16;
  V_INT((int)&v85, v55, *(int *)(a1 + 256));
  logfmt_raw(
    v90,
    0x1000u,
    0,
    v87,
    v85,
    v86[0],
    v86[1],
    v86[2],
    v86[3],
    v86[4],
    v86[5],
    v87,
    "[PHY BIST LOST NUM] total 0x%llx",
    v59,
    dword_1B4008,
    dword_1B400C);
  V_UNLOCK();
  LOWORD(v56) = 11824;
  HIWORD(v56) = (unsigned int)&unk_172FF8 >> 16;
  zlog(g_zc, v56, 174, "phy_external_bist_rvn", 21, 1300, 60, v90);
  return 0;
}
