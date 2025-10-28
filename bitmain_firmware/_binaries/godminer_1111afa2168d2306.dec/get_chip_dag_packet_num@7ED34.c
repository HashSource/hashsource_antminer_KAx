int __fastcall get_chip_dag_packet_num(int a1)
{
  char *v1; // r9
  int v2; // r8
  int v4; // r4
  unsigned int v5; // r7
  int v6; // r1
  char *v7; // r3
  int v8; // r2
  int v9; // r7
  signed int v10; // r10
  int v11; // r1
  char *v13; // r1
  int v14; // lr
  int v15; // r1
  char *v16; // r1
  int v17; // r9
  char *v18; // r7
  char *v19; // lr
  int v20; // r1
  char *v21; // r2
  int v22; // r8
  unsigned __int8 *v23; // r4
  _DWORD *v24; // r7
  unsigned int v25; // r3
  unsigned __int64 v26; // r10
  char *v27; // r9
  char *v28; // r1
  int v29; // r6
  int v30; // r1
  int v31; // [sp+28h] [bp-1104h]
  int v32; // [sp+28h] [bp-1104h]
  char *s; // [sp+38h] [bp-10F4h]
  unsigned __int64 sa; // [sp+38h] [bp-10F4h]
  unsigned __int8 *ptr; // [sp+40h] [bp-10ECh]
  _DWORD *v36; // [sp+44h] [bp-10E8h]
  int v37; // [sp+48h] [bp-10E4h]
  int v38; // [sp+48h] [bp-10E4h]
  char *v39; // [sp+50h] [bp-10DCh]
  char *v40; // [sp+54h] [bp-10D8h]
  signed int v41; // [sp+60h] [bp-10CCh]
  int v42; // [sp+64h] [bp-10C8h]
  _DWORD v43[7]; // [sp+68h] [bp-10C4h] BYREF
  int v44; // [sp+84h] [bp-10A8h]
  _DWORD v45[7]; // [sp+88h] [bp-10A4h] BYREF
  int v46; // [sp+A4h] [bp-1088h]
  _DWORD v47[7]; // [sp+A8h] [bp-1084h] BYREF
  int v48; // [sp+C4h] [bp-1068h]
  _DWORD v49[7]; // [sp+C8h] [bp-1064h] BYREF
  int v50; // [sp+E4h] [bp-1048h]
  _DWORD v51[7]; // [sp+E8h] [bp-1044h] BYREF
  int v52; // [sp+104h] [bp-1028h]
  _DWORD v53[7]; // [sp+108h] [bp-1024h] BYREF
  int v54; // [sp+124h] [bp-1008h]
  char v55[4100]; // [sp+128h] [bp-1004h] BYREF

  LOWORD(v1) = 27796;
  LOWORD(v2) = -12312;
  v4 = 0;
  ptr = (unsigned __int8 *)malloc(0x60u);
  v36 = malloc(0x60u);
  while ( 1 )
  {
    v5 = sub_79958(a1, 86, ptr);
    if ( v5 == 8 )
      break;
    V_LOCK();
    HIWORD(v1) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v43, v1, *(int *)(a1 + 256));
    v31 = v4++;
    HIWORD(v2) = (unsigned int)"tus_ETH" >> 16;
    logfmt_raw(v55, 0x1000u, 0, v44, v43[0], v43[1], v43[2], v43[3], v43[4], v43[5], v43[6], v44, v2, v5, v31);
    V_UNLOCK();
    LOWORD(v6) = -13944;
    HIWORD(v6) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
    zlog(g_zc, v6, 171, "get_chip_dag_packet_num", 23, 1668, 100, v55);
    if ( v4 == 5 )
    {
      v42 = 12;
      goto LABEL_6;
    }
    usleep(0x2710u);
  }
  v42 = 0;
LABEL_6:
  LOWORD(v7) = 27796;
  LOWORD(v8) = -12248;
  v9 = 0;
  HIWORD(v7) = (unsigned int)"%1.f" >> 16;
  HIWORD(v8) = (unsigned int)"get_single_core_status_ETH" >> 16;
  s = v7;
  v37 = v8;
  while ( 1 )
  {
    v10 = sub_79958(a1, 83, v36);
    if ( v10 == 8 )
      goto LABEL_14;
    V_LOCK();
    V_INT((int)v45, s, *(int *)(a1 + 256));
    v32 = v9++;
    logfmt_raw(v55, 0x1000u, 0, v46, v45[0], v45[1], v45[2], v45[3], v45[4], v45[5], v45[6], v46, v37, v10, v32);
    V_UNLOCK();
    LOWORD(v11) = -13944;
    HIWORD(v11) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
    zlog(g_zc, v11, 171, "get_chip_dag_packet_num", 23, 1682, 100, v55);
    if ( v9 == 5 )
      break;
    usleep(0x2710u);
  }
  if ( !v10 )
  {
LABEL_11:
    v42 = 12;
    goto LABEL_12;
  }
  V_LOCK();
  LOWORD(v13) = 27796;
  HIWORD(v13) = (unsigned int)"%1.f" >> 16;
  v42 = 12;
  V_INT((int)v47, v13, *(int *)(a1 + 256));
  LOWORD(v14) = -12184;
  HIWORD(v14) = (unsigned int)"TH" >> 16;
  logfmt_raw(v55, 0x1000u, 0, v48, v47[0], v47[1], v47[2], v47[3], v47[4], v47[5], v47[6], v48, v14, 8 - v10);
  V_UNLOCK();
  LOWORD(v15) = -13944;
  HIWORD(v15) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
  zlog(g_zc, v15, 171, "get_chip_dag_packet_num", 23, 1695, 100, v55);
LABEL_14:
  sa = (unsigned __int64)(bswap32(*(_DWORD *)ptr) & 0x7FFFFFFF) << 6;
  if ( sa )
  {
    V_LOCK();
    LOWORD(v16) = 27796;
    HIWORD(v16) = (unsigned int)"%1.f" >> 16;
    LOWORD(v17) = -12120;
    LOWORD(v18) = -21852;
    HIWORD(v18) = (unsigned int)"Failed to convert cb1 to cb1_bin in parse_notify" >> 16;
    V_INT((int)v51, v16, *(int *)(a1 + 256));
    HIWORD(v17) = (unsigned int)"lose_ctle" >> 16;
    v38 = v17;
    v19 = "no";
    if ( *v36 )
      v19 = v18;
    logfmt_raw(v55, 0x1000u, 0, v52, v51[0], v51[1], v51[2], v51[3], v51[4], v51[5], v51[6], v52, v17, ptr[4], sa, v19);
    V_UNLOCK();
    LOWORD(v20) = -13944;
    HIWORD(v20) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
    zlog(g_zc, v20, 171, "get_chip_dag_packet_num", 23, 1707, 60, v55);
    if ( v10 > 1 )
    {
      LOWORD(v21) = 27796;
      HIWORD(v21) = (unsigned int)"%1.f" >> 16;
      v39 = v18;
      v40 = v21;
      v22 = 1;
      v23 = ptr;
      v24 = v36;
      v41 = v10;
      do
      {
        v25 = *((_DWORD *)v23 + 3);
        ++v22;
        v24 += 3;
        v23 += 12;
        v26 = (unsigned __int64)(bswap32(v25) & 0x7FFFFFFF) << 6;
        V_LOCK();
        V_INT((int)v53, v40, *(int *)(a1 + 256));
        v27 = "no";
        if ( *v24 )
          v27 = v39;
        logfmt_raw(
          v55,
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
          v38,
          v23[4],
          v26,
          v27);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          171,
          "get_chip_dag_packet_num",
          23,
          1713,
          60,
          v55);
        if ( sa != v26 )
          goto LABEL_11;
      }
      while ( v22 != v41 );
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v28) = 27796;
    v42 = 12;
    HIWORD(v28) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v49, v28, *(int *)(a1 + 256));
    LOWORD(v29) = -12156;
    HIWORD(v29) = (unsigned int)"shake" >> 16;
    logfmt_raw(v55, 0x1000u, 0, v50, v49[0], v49[1], v49[2], v49[3], v49[4], v49[5], v49[6], v50, v29);
    V_UNLOCK();
    LOWORD(v30) = -13944;
    HIWORD(v30) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
    zlog(g_zc, v30, 171, "get_chip_dag_packet_num", 23, 1703, 100, v55);
  }
LABEL_12:
  free(ptr);
  free(v36);
  return v42;
}
