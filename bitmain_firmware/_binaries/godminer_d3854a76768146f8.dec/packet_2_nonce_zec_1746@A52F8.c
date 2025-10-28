int __fastcall packet_2_nonce_zec_1746(int a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, unsigned int *a6, _DWORD *a7)
{
  char v7; // r4
  unsigned int v11; // r0
  unsigned int v12; // r9
  int v13; // r6
  int v14; // r4
  int v15; // r10
  int v16; // r3
  int v17; // r1
  int v18; // r4
  int v19; // r6
  unsigned __int8 *v20; // r8
  int v21; // r3
  int v22; // r1
  int v23; // r2
  char *v24; // r1
  int i; // r4
  char v26; // r3
  int v27; // r3
  int v28; // r2
  int v29; // r1
  int v30; // r3
  int v31; // r4
  int v32; // r0
  int v33; // r1
  int v34; // r3
  int v35; // r3
  int v36; // r4
  int v37; // r0
  int v38; // r1
  int v39; // r3
  int v40; // r3
  int v41; // r0
  int v42; // r4
  int v43; // r3
  int v44; // r4
  char *v45; // r5
  char *v46; // r11
  char *v47; // r0
  int v48; // r3
  char v49; // r2
  int v50; // r2
  int v52; // [sp+14h] [bp-1018h]
  int v53; // [sp+18h] [bp-1014h]
  int v54; // [sp+1Ch] [bp-1010h]
  unsigned __int16 v55; // [sp+26h] [bp-1006h]
  char var1004[4120]; // [sp+28h] [bp-1004h] BYREF

  v7 = a2[2];
  if ( (v7 & 0xF0) != 0xE0 )
    return 10;
  v11 = (unsigned int)(unsigned __int8)a2[3] / *(_DWORD *)(a1 + 404);
  v12 = v11;
  if ( v11 > 5 )
  {
    V_LOCK();
    LOWORD(v16) = 15368;
    HIWORD(v16) = (unsigned int)"pass" >> 16;
    logfmt_raw(var1004, 0x1000u, 0, v16, "packet_2_nonce_zec_1746", v12);
    V_UNLOCK();
    LOWORD(v17) = 14760;
    HIWORD(v17) = (unsigned int)"ild/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_ui.c" >> 16;
    zlog(g_zc, v17, 171, "packet_2_nonce_zec_1746", 23, 394, 80, var1004);
    return 14;
  }
  else
  {
    v13 = 1456 * v11;
    v14 = v7 & 0xF;
    v15 = *(_DWORD *)(a1 + 800);
    v53 = (unsigned __int8)a2[4];
    memcpy((void *)(v15 + 91 * (__int16)v14 + 1456 * v11 + 27649), a2 + 2, 0x5Bu);
    if ( v14 == 15 )
    {
      v18 = 0;
      v19 = v15 + 27649 + v13;
      v20 = (unsigned __int8 *)v19;
      do
      {
        v55 = __rev16(BM_CRC16(v20, 89));
        if ( __PAIR64__(HIBYTE(v55), (unsigned __int8)v55) != __PAIR64__(v20[90], v20[89]) )
        {
          V_LOCK();
          LOWORD(v21) = 15392;
          HIWORD(v21) = (unsigned int)"xture_info" >> 16;
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            v21,
            v55,
            *(unsigned __int8 *)(v19 + 91 * v18 + 89),
            *(unsigned __int8 *)(v19 + 91 * v18 + 90));
          V_UNLOCK();
          LOWORD(v22) = 14760;
          HIWORD(v22) = (unsigned int)"ild/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_ui.c" >> 16;
          zlog(g_zc, v22, 171, "verify_nonce_integrality_zec_1746", 33, 294, 20, var1004);
          return 11;
        }
        ++v18;
        v20 += 91;
        v23 = 0;
      }
      while ( v18 != 16 );
      v24 = (char *)v19;
      for ( i = 0; i != 16; ++i )
      {
        v26 = *v24;
        v24 += 91;
        if ( (v26 & 0xF) != i )
        {
          V_LOCK();
          LOWORD(v27) = 15440;
          HIWORD(v27) = (unsigned int)"miner_type" >> 16;
          logfmt_raw(var1004, 0x1000u, 0, v27, i);
          V_UNLOCK();
          v28 = 303;
LABEL_15:
          LOWORD(v29) = 14760;
          HIWORD(v29) = (unsigned int)"ild/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_ui.c" >> 16;
          zlog(g_zc, v29, 171, "verify_nonce_integrality_zec_1746", 33, v28, 20, var1004);
          return 36;
        }
      }
      v30 = v19;
      v31 = 0;
      do
      {
        v32 = *(unsigned __int8 *)(v30 + 92);
        v33 = v31 + 1;
        v30 += 91;
        if ( v32 != *(unsigned __int8 *)(v19 + 1) )
        {
          V_LOCK();
          LOWORD(v34) = 15468;
          HIWORD(v34) = (unsigned int)"get_pcb_version" >> 16;
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            v34,
            *(unsigned __int8 *)(v19 + 91 * v31 + 1),
            *(unsigned __int8 *)(v19 + 91 * (v31 + 1) + 1));
          V_UNLOCK();
          v28 = 312;
          goto LABEL_15;
        }
        ++v31;
      }
      while ( v33 != 15 );
      v35 = v19;
      v36 = 0;
      do
      {
        v37 = *(unsigned __int8 *)(v35 + 93);
        v38 = v36 + 1;
        v35 += 91;
        if ( v37 != *(unsigned __int8 *)(v19 + 2) )
        {
          V_LOCK();
          LOWORD(v39) = 15504;
          HIWORD(v39) = (unsigned int)"bom_version" >> 16;
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            v39,
            *(unsigned __int8 *)(v19 + 91 * v36 + 2),
            *(unsigned __int8 *)(v19 + 91 * (v36 + 1) + 2));
          V_UNLOCK();
          v28 = 321;
          goto LABEL_15;
        }
        ++v36;
      }
      while ( v38 != 15 );
      v40 = v19;
      do
      {
        v41 = *(unsigned __int8 *)(v40 + 94);
        v42 = v23 + 1;
        v40 += 91;
        if ( v41 != *(unsigned __int8 *)(v19 + 3) )
        {
          v52 = v23;
          V_LOCK();
          LOWORD(v43) = 15540;
          HIWORD(v43) = (unsigned int)"mt_version" >> 16;
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            v43,
            *(unsigned __int8 *)(v19 + 91 * v52 + 3),
            *(unsigned __int8 *)(v19 + 91 * v42 + 3),
            v12);
          V_UNLOCK();
          v28 = 330;
          goto LABEL_15;
        }
        ++v23;
      }
      while ( v42 != 15 );
      v54 = 1357 * v12;
      v44 = v15 + 36385 + 1357 * v12;
      v45 = (char *)v44;
      v46 = (char *)(v19 + 4);
      do
      {
        v47 = v45;
        v45 += 85;
        memcpy(v47, v46, 0x55u);
        v46 += 91;
      }
      while ( (char *)(v44 + 1275) != v45 );
      memcpy((void *)(v44 + 1275), (const void *)(v19 + 1369), 0x45u);
      *(_DWORD *)(v44 + 1352) = *(_DWORD *)(v19 + 1450);
      *(_BYTE *)(v44 + 1344) = *(_BYTE *)(v19 + 1366);
      *(_BYTE *)(v44 + 1345) = *(_BYTE *)(v19 + 1367);
      *(_BYTE *)(v44 + 1346) = *(_BYTE *)(v19 + 1368);
      *(_BYTE *)(v44 + 1347) = *(_BYTE *)(v19 + 1441);
      *(_DWORD *)(v44 + 1348) = *(_DWORD *)(v19 + 1442);
      v48 = *(_DWORD *)(v15 + 8 * v53);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(v15 + 8 * v53 + 4);
      *(_DWORD *)a3 = v48;
      *a7 = v48;
      strcpy((char *)(a3 + 16), (const char *)(v15 + 32 * (v53 + 32)));
      *(_DWORD *)(a3 + 48) = *(_DWORD *)(v15 + v54 + 37737);
      memcpy((void *)(a3 + 54), (const void *)(v15 + v54 + 36385), 0x540u);
      v49 = *(_BYTE *)(v15 + 1357 * v12 + 37732);
      *(_BYTE *)(a3 + 53) = v53;
      *(_BYTE *)(a3 + 52) = v49;
      *a6 = v12;
      v50 = *(_DWORD *)(a3 + 48);
      *(_DWORD *)(a3 + 8) = v12;
      *a5 = v50;
      *a4 = 1;
      return 0;
    }
    else
    {
      return 14;
    }
  }
}
