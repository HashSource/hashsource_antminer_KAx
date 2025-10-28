int __fastcall phy_internal_bist(int a1, int a2, unsigned int a3, int a4)
{
  char *v8; // r1
  int v9; // r5
  int v10; // r1
  char *v11; // r1
  char *v12; // r1
  int v13; // r5
  int v14; // r1
  __int16 v15; // r2
  _DWORD *v16; // r4
  int v17; // r0
  _DWORD *v18; // r7
  char *v19; // r9
  __int16 v20; // r2
  _DWORD *v21; // r4
  int v22; // r0
  _DWORD *v23; // r7
  char *v25; // r1
  char *v26; // r1
  char *v27; // r1
  char *v28; // r1
  _DWORD *v30; // [sp+60h] [bp-1184h]
  int v31; // [sp+64h] [bp-1180h]
  _DWORD *i; // [sp+6Ch] [bp-1178h]
  _DWORD *j; // [sp+6Ch] [bp-1178h]
  int v34; // [sp+78h] [bp-116Ch] BYREF
  int v35; // [sp+7Ch] [bp-1168h] BYREF
  _DWORD v36[7]; // [sp+80h] [bp-1164h] BYREF
  int v37; // [sp+9Ch] [bp-1148h]
  _DWORD v38[7]; // [sp+A0h] [bp-1144h] BYREF
  int v39; // [sp+BCh] [bp-1128h]
  _DWORD v40[7]; // [sp+C0h] [bp-1124h] BYREF
  int v41; // [sp+DCh] [bp-1108h]
  _DWORD v42[7]; // [sp+E0h] [bp-1104h] BYREF
  int v43; // [sp+FCh] [bp-10E8h]
  _DWORD v44[7]; // [sp+100h] [bp-10E4h] BYREF
  int v45; // [sp+11Ch] [bp-10C8h]
  _DWORD v46[7]; // [sp+120h] [bp-10C4h] BYREF
  int v47; // [sp+13Ch] [bp-10A8h]
  _DWORD v48[7]; // [sp+140h] [bp-10A4h] BYREF
  int v49; // [sp+15Ch] [bp-1088h]
  _DWORD v50[8]; // [sp+160h] [bp-1084h] BYREF
  _DWORD v51[7]; // [sp+180h] [bp-1064h] BYREF
  int v52; // [sp+19Ch] [bp-1048h]
  _DWORD v53[8]; // [sp+1A0h] [bp-1044h] BYREF
  _DWORD v54[7]; // [sp+1C0h] [bp-1024h] BYREF
  int v55; // [sp+1DCh] [bp-1008h]
  char v56[4100]; // [sp+1E0h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = 588;
  HIWORD(v8) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v36, v8, *(int *)(a1 + 232));
  LOWORD(v9) = -12320;
  HIWORD(v9) = (unsigned int)"eset_HNS_2130" >> 16;
  logfmt_raw(v56, 0x1000u, 0, v37, v36[0], v36[1], v36[2], v36[3], v36[4], v36[5], v36[6], v37, v9, "phy_internal_bist");
  V_UNLOCK();
  LOWORD(v10) = -9656;
  HIWORD(v10) = (unsigned int)"t_kas" >> 16;
  zlog(g_zc, v10, 174, "phy_internal_bist", 17, 933, 0x14u, v56);
  v30 = malloc(0x600u);
  sub_7660C(a1, a3, 86, 3670024);
  usleep(0x12Cu);
  sub_7660C(a1, a3, 85, 109905420);
  usleep(0x12Cu);
  sub_7660C(a1, a3, 101, -268374016);
  usleep(0x12Cu);
  sub_7660C(a1, a3, 64, 256);
  usleep(0x12Cu);
  sub_7660C(a1, a3, 80, 33423870);
  usleep(0x12Cu);
  sub_7660C(a1, a3, 81, 832516511);
  usleep(0x12Cu);
  sub_7660C(a1, a3, 88, -1);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 125, 0x70007000u) )
  {
    V_LOCK();
    LOWORD(v26) = 588;
    HIWORD(v26) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v38, v26, *(int *)(a1 + 232));
    logfmt_raw(
      v56,
      0x1000u,
      0,
      v39,
      v38[0],
      v38[1],
      v38[2],
      v38[3],
      v38[4],
      v38[5],
      v38[6],
      v39,
      1369716,
      "phy_internal_bist",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_internal_bist",
      17,
      965,
      100,
      v56);
  }
  sub_7660C(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_7660C(a1, a3, 80, 0);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 119, 0) )
  {
    V_LOCK();
    LOWORD(v25) = 588;
    HIWORD(v25) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v40, v25, *(int *)(a1 + 232));
    logfmt_raw(
      v56,
      0x1000u,
      0,
      v41,
      v40[0],
      v40[1],
      v40[2],
      v40[3],
      v40[4],
      v40[5],
      v40[6],
      v41,
      1369752,
      "phy_internal_bist",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_internal_bist",
      17,
      978,
      100,
      v56);
  }
  sub_7660C(a1, a3, 82, 0);
  usleep(0x64u);
  V_LOCK();
  LOWORD(v11) = 588;
  HIWORD(v11) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v42, v11, *(int *)(a1 + 232));
  logfmt_raw(
    v56,
    0x1000u,
    0,
    v43,
    v42[0],
    v42[1],
    v42[2],
    v42[3],
    v42[4],
    v42[5],
    v42[6],
    v43,
    1369788,
    "phy_internal_bist",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_internal_bist",
    17,
    984,
    20,
    v56);
  sub_7660C(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 83, 0) )
  {
    V_LOCK();
    LOWORD(v12) = 588;
    HIWORD(v12) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v54, v12, *(int *)(a1 + 232));
    LOWORD(v13) = -9696;
    HIWORD(v13) = (unsigned int)"" >> 16;
    logfmt_raw(
      v56,
      0x1000u,
      0,
      v55,
      v54[0],
      v54[1],
      v54[2],
      v54[3],
      v54[4],
      v54[5],
      v54[6],
      v55,
      v13,
      "phy_handshake",
      a3,
      1369824);
    V_UNLOCK();
    LOWORD(v14) = -9656;
    HIWORD(v14) = (unsigned int)"t_kas" >> 16;
    zlog(g_zc, v14, 174, "phy_handshake", 13, 890, 100, v56);
  }
  phy_pll_switch(a1, a2, a3, a4);
  sub_7660C(a1, a3, 98, -1426085121);
  usleep(0x64u);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 64, 0xFF000100) )
  {
    V_LOCK();
    LOWORD(v28) = 588;
    HIWORD(v28) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v44, v28, *(int *)(a1 + 232));
    logfmt_raw(
      v56,
      0x1000u,
      0,
      v45,
      v44[0],
      v44[1],
      v44[2],
      v44[3],
      v44[4],
      v44[5],
      v44[6],
      v45,
      1369836,
      "phy_internal_bist",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_internal_bist",
      17,
      997,
      100,
      v56);
  }
  sub_7660C(a1, a3, 133, 255);
  usleep(0x64u);
  sub_7660C(a1, a3, 134, 255);
  usleep(0x64u);
  sub_7660C(a1, a3, 132, -2147483647);
  sleep(6u);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 139, 0xFF0000FF) )
  {
    V_LOCK();
    LOWORD(v27) = 588;
    HIWORD(v27) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v46, v27, *(int *)(a1 + 232));
    logfmt_raw(
      v56,
      0x1000u,
      0,
      v47,
      v46[0],
      v46[1],
      v46[2],
      v46[3],
      v46[4],
      v46[5],
      v46[6],
      v47,
      "%s PHY core %02x mac bist failed!",
      "phy_internal_bist",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_internal_bist",
      17,
      1013,
      100,
      v56);
  }
  v31 = (unsigned __int16)a3;
  v34 = -1970698105;
  v15 = 135;
  for ( i = (int *)((char *)&v34 + 1); ; i = (_DWORD *)((char *)i + 1) )
  {
    v16 = v30;
    v17 = sub_76660(a1, v31, v15, v30);
    if ( v17 )
    {
      v18 = &v30[3 * v17];
      do
      {
        while ( !*v16 )
        {
          v16 += 3;
          if ( v16 == v18 )
            goto LABEL_17;
        }
        V_LOCK();
        v16 += 3;
        V_INT((int)v48, "chain", *(int *)(a1 + 232));
        V_INT((int)v50, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v56,
          0x1000u,
          0,
          v49,
          v48[0],
          v48[1],
          v48[2],
          v48[3],
          v48[4],
          v48[5],
          v48[6],
          v49,
          v50[0],
          v50[1],
          v50[2],
          v50[3],
          v50[4],
          v50[5],
          v50[6],
          v50[7],
          1369908,
          a2,
          *((unsigned __int8 *)v16 - 4),
          *((unsigned __int16 *)v16 - 3),
          bswap32(*(v16 - 3)));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          174,
          "phy_internal_bist",
          17,
          1026,
          20,
          v56);
      }
      while ( v16 != v18 );
    }
LABEL_17:
    if ( i == (int *)((char *)&v35 + 1) )
      break;
    v15 = *(unsigned __int8 *)i;
  }
  LOWORD(v19) = 588;
  HIWORD(v19) = (unsigned int)": get test = %d" >> 16;
  v35 = -2088599168;
  v20 = 128;
  for ( j = (int *)((char *)&v35 + 1); ; j = (_DWORD *)((char *)j + 1) )
  {
    v21 = v30;
    v22 = sub_76660(a1, v31, v20, v30);
    if ( v22 )
    {
      v23 = &v30[3 * v22];
      do
      {
        while ( !*v21 )
        {
          v21 += 3;
          if ( v21 == v23 )
            goto LABEL_25;
        }
        V_LOCK();
        v21 += 3;
        V_INT((int)v51, v19, *(int *)(a1 + 232));
        V_INT((int)v53, v19, *(int *)(a1 + 232));
        logfmt_raw(
          v56,
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
          v53[0],
          v53[1],
          v53[2],
          v53[3],
          v53[4],
          v53[5],
          v53[6],
          v53[7],
          1369968,
          a2,
          *((unsigned __int8 *)v21 - 4),
          *((unsigned __int16 *)v21 - 3),
          bswap32(*(v21 - 3)));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          174,
          "phy_internal_bist",
          17,
          1041,
          20,
          v56);
      }
      while ( v21 != v23 );
    }
LABEL_25:
    if ( (_DWORD *)((char *)v36 + 1) == j )
      break;
    v20 = *(unsigned __int8 *)j;
  }
  return 0;
}
