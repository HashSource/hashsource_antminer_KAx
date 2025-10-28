int __fastcall phy_external_bist_rvn(int a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  char *v8; // r1
  int v9; // r5
  int v10; // r1
  unsigned __int8 *v11; // r3
  char *v12; // r10
  unsigned __int8 *v13; // r6
  unsigned __int8 *v14; // r4
  unsigned __int16 v15; // t1
  unsigned __int8 *v16; // r5
  unsigned __int8 *v17; // r6
  unsigned __int8 v18; // t1
  char *v19; // r3
  unsigned __int16 v20; // t1
  char *v21; // r1
  int v22; // r8
  int v23; // r10
  unsigned __int16 v24; // r6
  int v25; // r3
  _DWORD *v26; // r10
  char *v27; // r4
  int v28; // r0
  char *v29; // r5
  char *v30; // r2
  unsigned __int16 v31; // r3
  int v32; // r1
  int v33; // r12
  unsigned __int16 v34; // t1
  unsigned __int16 v35; // r6
  char *v36; // r4
  int v37; // r0
  char *v38; // r5
  char *v39; // r2
  unsigned __int16 v40; // r3
  int v41; // r1
  int v42; // r12
  unsigned int v43; // r5
  __int64 v44; // r0
  unsigned int *v45; // r12
  __int64 v46; // r2
  unsigned int *i; // lr
  unsigned int v48; // t1
  unsigned int v49; // t1
  char *v50; // r1
  int v51; // r1
  char *v52; // r1
  int v53; // r1
  int v55; // [sp+24h] [bp-1168h]
  int v56; // [sp+24h] [bp-1168h]
  unsigned __int8 *v57; // [sp+3Ch] [bp-1150h]
  char *v58; // [sp+40h] [bp-114Ch]
  char *v59; // [sp+40h] [bp-114Ch]
  char *ptr; // [sp+44h] [bp-1148h]
  _DWORD *v62; // [sp+48h] [bp-1144h]
  int v63; // [sp+4Ch] [bp-1140h]
  unsigned __int8 *v64; // [sp+50h] [bp-113Ch]
  unsigned __int8 *v65; // [sp+5Ch] [bp-1130h]
  _DWORD v66[7]; // [sp+68h] [bp-1124h] BYREF
  int v67; // [sp+84h] [bp-1108h]
  _DWORD v68[7]; // [sp+88h] [bp-1104h] BYREF
  int v69; // [sp+A4h] [bp-10E8h]
  _DWORD v70[7]; // [sp+A8h] [bp-10E4h] BYREF
  int v71; // [sp+C4h] [bp-10C8h]
  _DWORD v72[7]; // [sp+C8h] [bp-10C4h] BYREF
  int v73; // [sp+E4h] [bp-10A8h]
  _DWORD v74[7]; // [sp+E8h] [bp-10A4h] BYREF
  int v75; // [sp+104h] [bp-1088h]
  int v76; // [sp+108h] [bp-1084h] BYREF
  _DWORD v77[6]; // [sp+10Ch] [bp-1080h] BYREF
  int v78; // [sp+124h] [bp-1068h]
  int v79; // [sp+128h] [bp-1064h] BYREF
  _DWORD v80[6]; // [sp+12Ch] [bp-1060h] BYREF
  int v81; // [sp+144h] [bp-1048h]
  _DWORD s[8]; // [sp+148h] [bp-1044h] BYREF
  _DWORD v83[8]; // [sp+168h] [bp-1024h] BYREF
  char v84[4100]; // [sp+188h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = 588;
  HIWORD(v8) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v66, v8, *(int *)(a1 + 232));
  LOWORD(v9) = -12320;
  HIWORD(v9) = (unsigned int)"eset_HNS_2130" >> 16;
  logfmt_raw(
    v84,
    0x1000u,
    0,
    v67,
    v66[0],
    v66[1],
    v66[2],
    v66[3],
    v66[4],
    v66[5],
    v66[6],
    v67,
    v9,
    "phy_external_bist_rvn");
  V_UNLOCK();
  LOWORD(v10) = 7660;
  HIWORD(v10) = (unsigned int)"%d] remote temp failed after retry %d times" >> 16;
  zlog(g_zc, v10, 174, "phy_external_bist_rvn", 21, 1095, 60, v84);
  memset(s, 0, sizeof(s));
  memset(v83, 0, sizeof(v83));
  ptr = (char *)malloc(0x300u);
  if ( a4 )
  {
    v11 = a3;
    v64 = a3 - 1;
    LOWORD(v12) = 588;
    v63 = (unsigned __int8)(a4 - 1);
    v13 = &a3[v63];
    v14 = v64;
    v57 = v11;
    do
    {
      while ( 1 )
      {
        v15 = *++v14;
        if ( check_core_reg_with_expect_data_rvn_0(a1, a2, v15, 64, 0xFF000100) )
          break;
        if ( v14 == v13 )
          goto LABEL_6;
      }
      V_LOCK();
      HIWORD(v12) = (unsigned int)": get test = %d" >> 16;
      V_INT((int)v68, v12, *(int *)(a1 + 232));
      logfmt_raw(
        v84,
        0x1000u,
        0,
        v69,
        v68[0],
        v68[1],
        v68[2],
        v68[3],
        v68[4],
        v68[5],
        v68[6],
        v69,
        1369836,
        "phy_external_bist_rvn",
        *v14);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
        174,
        "phy_external_bist_rvn",
        21,
        1227,
        100,
        v84);
    }
    while ( v14 != v13 );
LABEL_6:
    v16 = v64;
    v17 = v64;
    do
    {
      v18 = *++v17;
      sub_99D08(a1, v18, 133, 0xFFFF);
      sub_99D08(a1, *v17, 134, 1342177279);
    }
    while ( v14 != v17 );
    sub_99CC4(a1, 132, -2147483647);
    sleep(0xAu);
    LOWORD(v19) = 588;
    HIWORD(v19) = (unsigned int)": get test = %d" >> 16;
    v58 = v19;
    do
    {
      while ( 1 )
      {
        v20 = *++v16;
        if ( check_core_reg_with_expect_data_rvn_0(a1, a2, v20, 139, 0xFF0000FF) )
          break;
        if ( v17 == v16 )
          goto LABEL_12;
      }
      V_LOCK();
      V_INT((int)v70, v58, *(int *)(a1 + 232));
      logfmt_raw(
        v84,
        0x1000u,
        0,
        v71,
        v70[0],
        v70[1],
        v70[2],
        v70[3],
        v70[4],
        v70[5],
        v70[6],
        v71,
        1369872,
        "phy_external_bist_rvn",
        *v16);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
        174,
        "phy_external_bist_rvn",
        21,
        1249,
        100,
        v84);
    }
    while ( v17 != v16 );
LABEL_12:
    LOWORD(v22) = -23984;
    LOWORD(v21) = 588;
    HIWORD(v22) = (unsigned int)&unk_18B710 >> 16;
    v23 = a1;
    v65 = &a3[v63 + 1];
    HIWORD(v21) = (unsigned int)": get test = %d" >> 16;
    v59 = v21;
    do
    {
      v24 = 128;
      v76 = -2088599168;
      v25 = v23;
      v26 = (int *)((char *)&v76 + 1);
      a1 = v25;
      while ( 1 )
      {
        v27 = ptr;
        v28 = sub_99D5C(a1, *v57, v24, ptr);
        if ( v28 )
        {
          v29 = &ptr[12 * v28];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v27 + 3)) != v24 )
            {
              v27 += 12;
              if ( v29 == v27 )
                goto LABEL_21;
            }
            V_LOCK();
            v27 += 12;
            V_INT((int)v72, v59, *(int *)(a1 + 232));
            logfmt_raw(
              v84,
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
              1369968,
              (unsigned __int8)*(v27 - 8),
              (unsigned __int8)*(v27 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v27 - 3)),
              bswap32(*((_DWORD *)v27 - 3)));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
              174,
              "phy_external_bist_rvn",
              21,
              1265,
              20,
              v84);
            v30 = &v84[4 * (unsigned __int8)*(v27 - 8)];
            v31 = bswap32(*((_DWORD *)v27 - 3));
            v32 = *((_DWORD *)v30 - 8);
            v33 = v31;
            if ( v31 )
              v33 = 1;
            *(_DWORD *)v22 += 2 * v33;
            *((_DWORD *)v30 - 8) = v32 + 2 * v31;
          }
          while ( v29 != v27 );
        }
LABEL_21:
        if ( v77 == v26 )
          break;
        v34 = *(unsigned __int8 *)v26;
        v26 = (_DWORD *)((char *)v26 + 1);
        v24 = v34;
      }
      v23 = a1;
      v35 = 135;
      v62 = (int *)((char *)&v79 + 1);
      v79 = -1970698105;
      while ( 1 )
      {
        v36 = ptr;
        v37 = sub_99D5C(a1, *v57, v35, ptr);
        if ( v37 )
        {
          v38 = &ptr[12 * v37];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v36 + 3)) != v35 )
            {
              v36 += 12;
              if ( v38 == v36 )
                goto LABEL_31;
            }
            V_LOCK();
            v36 += 12;
            V_INT((int)v74, v59, *(int *)(a1 + 232));
            logfmt_raw(
              v84,
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
              1369908,
              (unsigned __int8)*(v36 - 8),
              (unsigned __int8)*(v36 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v36 - 3)),
              bswap32(*((_DWORD *)v36 - 3)));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
              174,
              "phy_external_bist_rvn",
              21,
              1283,
              20,
              v84);
            v39 = &v84[4 * (unsigned __int8)*(v36 - 8)];
            v40 = bswap32(*((_DWORD *)v36 - 3));
            v41 = *((_DWORD *)v39 - 16);
            v42 = v40;
            if ( v40 )
              v42 = 1;
            *(_DWORD *)(v22 + 4) += 2 * v42;
            *((_DWORD *)v39 - 16) = v41 + 2 * v40;
          }
          while ( v38 != v36 );
        }
LABEL_31:
        if ( v80 == v62 )
          break;
        v35 = *(unsigned __int8 *)v62;
        v62 = (_DWORD *)((char *)v62 + 1);
      }
      ++v57;
    }
    while ( v57 != v65 );
    v43 = s[0];
    a4 = v83[0];
  }
  else
  {
    LOWORD(v22) = -23984;
    sub_99CC4(a1, 132, -2147483647);
    v43 = 0;
    sleep(0xAu);
    HIWORD(v22) = (unsigned int)&unk_18B710 >> 16;
  }
  free(ptr);
  v44 = *(_QWORD *)(v22 + 8);
  v45 = &s[1];
  v46 = *(_QWORD *)(v22 + 0x10);
  for ( i = &v83[1]; ; ++i )
  {
    v44 += v43;
    v46 += a4;
    if ( v45 == v83 )
      break;
    v48 = *v45++;
    v43 = v48;
    v49 = *i;
    a4 = v49;
  }
  *(_QWORD *)(v22 + 8) = v44;
  *(_QWORD *)(v22 + 0x10) = v46;
  V_LOCK();
  LOWORD(v50) = 588;
  HIWORD(v50) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)&v76, v50, *(int *)(a1 + 232));
  logfmt_raw(
    v84,
    0x1000u,
    0,
    v78,
    v76,
    v77[0],
    v77[1],
    v77[2],
    v77[3],
    v77[4],
    v77[5],
    v78,
    "[PHY BIST ERR NUM] total 0x%llx",
    v55,
    *(_DWORD *)(v22 + 8),
    *(_DWORD *)(v22 + 8 + 4));
  V_UNLOCK();
  LOWORD(v51) = 7660;
  HIWORD(v51) = (unsigned int)"%d] remote temp failed after retry %d times" >> 16;
  zlog(g_zc, v51, 174, "phy_external_bist_rvn", 21, 1299, 60, v84);
  V_LOCK();
  LOWORD(v52) = 588;
  HIWORD(v52) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)&v79, v52, *(int *)(a1 + 232));
  logfmt_raw(
    v84,
    0x1000u,
    0,
    v81,
    v79,
    v80[0],
    v80[1],
    v80[2],
    v80[3],
    v80[4],
    v80[5],
    v81,
    "[PHY BIST LOST NUM] total 0x%llx",
    v56,
    *(_DWORD *)(v22 + 0x10),
    *(_DWORD *)(v22 + 0x10 + 4));
  V_UNLOCK();
  LOWORD(v53) = 7660;
  HIWORD(v53) = (unsigned int)"%d] remote temp failed after retry %d times" >> 16;
  zlog(g_zc, v53, 174, "phy_external_bist_rvn", 21, 1300, 60, v84);
  return 0;
}
