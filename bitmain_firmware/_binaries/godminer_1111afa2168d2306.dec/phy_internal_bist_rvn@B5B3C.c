int __fastcall phy_internal_bist_rvn(int a1, int a2, unsigned int a3, int a4)
{
  char *v8; // r1
  int v9; // r5
  int v10; // r1
  int v11; // r5
  char *v12; // r1
  char *v13; // r1
  int v14; // r7
  int v15; // r5
  int v16; // r1
  int v17; // r2
  __int16 v18; // r2
  _DWORD *v19; // r4
  int v20; // r0
  _DWORD *v21; // r7
  int v22; // r2
  char *v23; // r9
  __int16 v24; // r2
  _DWORD *v25; // r4
  int v26; // r0
  _DWORD *v27; // r7
  char *v29; // r1
  int v30; // r7
  char *v31; // r1
  int v32; // r7
  char *v33; // r1
  char *v34; // r1
  int v35; // r5
  _DWORD *v37; // [sp+60h] [bp-1184h]
  int v38; // [sp+64h] [bp-1180h]
  int v39; // [sp+68h] [bp-117Ch]
  int v40; // [sp+68h] [bp-117Ch]
  _DWORD *i; // [sp+6Ch] [bp-1178h]
  _DWORD *j; // [sp+6Ch] [bp-1178h]
  int v43; // [sp+78h] [bp-116Ch] BYREF
  int v44; // [sp+7Ch] [bp-1168h] BYREF
  _DWORD v45[7]; // [sp+80h] [bp-1164h] BYREF
  int v46; // [sp+9Ch] [bp-1148h]
  _DWORD v47[7]; // [sp+A0h] [bp-1144h] BYREF
  int v48; // [sp+BCh] [bp-1128h]
  _DWORD v49[7]; // [sp+C0h] [bp-1124h] BYREF
  int v50; // [sp+DCh] [bp-1108h]
  _DWORD v51[7]; // [sp+E0h] [bp-1104h] BYREF
  int v52; // [sp+FCh] [bp-10E8h]
  _DWORD v53[7]; // [sp+100h] [bp-10E4h] BYREF
  int v54; // [sp+11Ch] [bp-10C8h]
  _DWORD v55[7]; // [sp+120h] [bp-10C4h] BYREF
  int v56; // [sp+13Ch] [bp-10A8h]
  _DWORD v57[7]; // [sp+140h] [bp-10A4h] BYREF
  int v58; // [sp+15Ch] [bp-1088h]
  _DWORD v59[8]; // [sp+160h] [bp-1084h] BYREF
  _DWORD v60[7]; // [sp+180h] [bp-1064h] BYREF
  int v61; // [sp+19Ch] [bp-1048h]
  _DWORD v62[8]; // [sp+1A0h] [bp-1044h] BYREF
  _DWORD v63[7]; // [sp+1C0h] [bp-1024h] BYREF
  int v64; // [sp+1DCh] [bp-1008h]
  char v65[4100]; // [sp+1E0h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = 27796;
  HIWORD(v8) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v45, v8, *(int *)(a1 + 256));
  LOWORD(v9) = -13956;
  HIWORD(v9) = (unsigned int)"08x" >> 16;
  logfmt_raw(
    v65,
    0x1000u,
    0,
    v46,
    v45[0],
    v45[1],
    v45[2],
    v45[3],
    v45[4],
    v45[5],
    v45[6],
    v46,
    v9,
    "phy_internal_bist_rvn");
  V_UNLOCK();
  LOWORD(v10) = 11824;
  HIWORD(v10) = (unsigned int)&unk_172FF8 >> 16;
  zlog(g_zc, v10, 174, "phy_internal_bist_rvn", 21, 870, 20, v65);
  v37 = malloc(0x1800u);
  sub_AEC94(a1, a3, 86, 3670024);
  usleep(0x12Cu);
  sub_AEC94(a1, a3, 85, 109905420);
  usleep(0x12Cu);
  sub_AEC94(a1, a3, 101, -268374016);
  usleep(0x12Cu);
  sub_AEC94(a1, a3, 64, 256);
  usleep(0x12Cu);
  sub_AEC94(a1, a3, 80, 33423870);
  usleep(0x12Cu);
  sub_AEC94(a1, a3, 81, 832516511);
  usleep(0x12Cu);
  sub_AEC94(a1, a3, 88, -1);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 125, 0x70007000u) )
  {
    V_LOCK();
    LOWORD(v31) = 27796;
    HIWORD(v31) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v47, v31, *(int *)(a1 + 256));
    LOWORD(v32) = -10512;
    HIWORD(v32) = (unsigned int)"verride tx_width_r" >> 16;
    logfmt_raw(
      v65,
      0x1000u,
      0,
      v48,
      v47[0],
      v47[1],
      v47[2],
      v47[3],
      v47[4],
      v47[5],
      v47[6],
      v48,
      v32,
      "phy_internal_bist_rvn",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_internal_bist_rvn",
      21,
      902,
      100,
      v65);
  }
  sub_AEC94(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_AEC94(a1, a3, 80, 0);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 119, 0) )
  {
    V_LOCK();
    LOWORD(v29) = 27796;
    HIWORD(v29) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v49, v29, *(int *)(a1 + 256));
    LOWORD(v30) = -7972;
    HIWORD(v30) = (unsigned int)"02x reg %04x rdata %04x" >> 16;
    logfmt_raw(
      v65,
      0x1000u,
      0,
      v50,
      v49[0],
      v49[1],
      v49[2],
      v49[3],
      v49[4],
      v49[5],
      v49[6],
      v50,
      v30,
      "phy_internal_bist_rvn",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_internal_bist_rvn",
      21,
      915,
      100,
      v65);
  }
  sub_AEC94(a1, a3, 82, 0);
  LOWORD(v11) = -7936;
  usleep(0x64u);
  V_LOCK();
  LOWORD(v12) = 27796;
  HIWORD(v12) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v51, v12, *(int *)(a1 + 256));
  HIWORD(v11) = (unsigned int)"R NUM] chip %02x core %02x reg %04x rdata %04x" >> 16;
  logfmt_raw(
    v65,
    0x1000u,
    0,
    v52,
    v51[0],
    v51[1],
    v51[2],
    v51[3],
    v51[4],
    v51[5],
    v51[6],
    v52,
    v11,
    "phy_internal_bist_rvn",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "phy_internal_bist_rvn",
    21,
    921,
    20,
    v65);
  sub_AEC94(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 83, 0) )
  {
    V_LOCK();
    LOWORD(v13) = 27796;
    HIWORD(v13) = (unsigned int)"%1.f" >> 16;
    LOWORD(v14) = -7900;
    V_INT((int)v63, v13, *(int *)(a1 + 256));
    LOWORD(v15) = -10968;
    HIWORD(v15) = (unsigned int)"%s PHY core %02x sram boot failed!" >> 16;
    HIWORD(v14) = (unsigned int)"rdata %04x" >> 16;
    logfmt_raw(
      v65,
      0x1000u,
      0,
      v64,
      v63[0],
      v63[1],
      v63[2],
      v63[3],
      v63[4],
      v63[5],
      v63[6],
      v64,
      v15,
      "phy_handshake_rvn",
      a3,
      v14);
    V_UNLOCK();
    LOWORD(v16) = 11824;
    HIWORD(v16) = (unsigned int)&unk_172FF8 >> 16;
    zlog(g_zc, v16, 174, "phy_handshake_rvn", 17, 827, 100, v65);
  }
  phy_pll_switch_rvn(a1, a2, a3, a4);
  sub_AEC94(a1, a3, 98, -1426085121);
  usleep(0x64u);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 64, 0xFF000100) )
  {
    V_LOCK();
    LOWORD(v34) = 27796;
    HIWORD(v34) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v53, v34, *(int *)(a1 + 256));
    LOWORD(v35) = -7888;
    HIWORD(v35) = (unsigned int)"[PHY BIST RESULT CHIP-%d] phy_err: 0x%x, phy_lost: 0x%x, phy_unlock: 0x%x" >> 16;
    logfmt_raw(
      v65,
      0x1000u,
      0,
      v54,
      v53[0],
      v53[1],
      v53[2],
      v53[3],
      v53[4],
      v53[5],
      v53[6],
      v54,
      v35,
      "phy_internal_bist_rvn",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_internal_bist_rvn",
      21,
      934,
      100,
      v65);
  }
  sub_AEC94(a1, a3, 133, 255);
  usleep(0x64u);
  sub_AEC94(a1, a3, 134, 255);
  usleep(0x64u);
  sub_AEC94(a1, a3, 132, -2147483647);
  sleep(6u);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 139, 0xFF0000FF) )
  {
    V_LOCK();
    LOWORD(v33) = 27796;
    HIWORD(v33) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v55, v33, *(int *)(a1 + 256));
    logfmt_raw(
      v65,
      0x1000u,
      0,
      v56,
      v55[0],
      v55[1],
      v55[2],
      v55[3],
      v55[4],
      v55[5],
      v55[6],
      v56,
      "%s PHY core %02x mac bist failed!",
      "phy_internal_bist_rvn",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_internal_bist_rvn",
      21,
      950,
      100,
      v65);
  }
  v38 = (unsigned __int16)a3;
  LOWORD(v17) = -7816;
  HIWORD(v17) = (unsigned int)"x" >> 16;
  v39 = v17;
  v43 = -1970698105;
  v18 = 135;
  for ( i = (int *)((char *)&v43 + 1); ; i = (_DWORD *)((char *)i + 1) )
  {
    v19 = v37;
    v20 = sub_AECE4(a1, v38, v18, v37);
    if ( v20 )
    {
      v21 = &v37[3 * v20];
      do
      {
        while ( !*v19 )
        {
          v19 += 3;
          if ( v19 == v21 )
            goto LABEL_17;
        }
        V_LOCK();
        v19 += 3;
        V_INT((int)v57, "chain", *(int *)(a1 + 256));
        V_INT((int)v59, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v65,
          0x1000u,
          0,
          v58,
          v57[0],
          v57[1],
          v57[2],
          v57[3],
          v57[4],
          v57[5],
          v57[6],
          v58,
          v59[0],
          v59[1],
          v59[2],
          v59[3],
          v59[4],
          v59[5],
          v59[6],
          v59[7],
          v39,
          a2,
          *((unsigned __int8 *)v19 - 4),
          *((unsigned __int16 *)v19 - 3),
          bswap32(*(v19 - 3)));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
          174,
          "phy_internal_bist_rvn",
          21,
          963,
          60,
          v65);
      }
      while ( v19 != v21 );
    }
LABEL_17:
    if ( i == (int *)((char *)&v44 + 1) )
      break;
    v18 = *(unsigned __int8 *)i;
  }
  LOWORD(v23) = 27796;
  LOWORD(v22) = -7756;
  HIWORD(v23) = (unsigned int)"%1.f" >> 16;
  HIWORD(v22) = (unsigned int)"[PHY BIST LOST NUM TOTAL] phy_lost: 0x%llx, lane_lost: %u" >> 16;
  v40 = v22;
  v44 = -2088599168;
  v24 = 128;
  for ( j = (int *)((char *)&v44 + 1); ; j = (_DWORD *)((char *)j + 1) )
  {
    v25 = v37;
    v26 = sub_AECE4(a1, v38, v24, v37);
    if ( v26 )
    {
      v27 = &v37[3 * v26];
      do
      {
        while ( !*v25 )
        {
          v25 += 3;
          if ( v25 == v27 )
            goto LABEL_25;
        }
        V_LOCK();
        v25 += 3;
        V_INT((int)v60, v23, *(int *)(a1 + 256));
        V_INT((int)v62, v23, *(int *)(a1 + 256));
        logfmt_raw(
          v65,
          0x1000u,
          0,
          v61,
          v60[0],
          v60[1],
          v60[2],
          v60[3],
          v60[4],
          v60[5],
          v60[6],
          v61,
          v62[0],
          v62[1],
          v62[2],
          v62[3],
          v62[4],
          v62[5],
          v62[6],
          v62[7],
          v40,
          a2,
          *((unsigned __int8 *)v25 - 4),
          *((unsigned __int16 *)v25 - 3),
          bswap32(*(v25 - 3)));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
          174,
          "phy_internal_bist_rvn",
          21,
          978,
          60,
          v65);
      }
      while ( v25 != v27 );
    }
LABEL_25:
    if ( (_DWORD *)((char *)v45 + 1) == j )
      break;
    v24 = *(unsigned __int8 *)j;
  }
  return 0;
}
