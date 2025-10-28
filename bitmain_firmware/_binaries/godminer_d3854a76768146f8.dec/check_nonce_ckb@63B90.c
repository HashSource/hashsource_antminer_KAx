int __fastcall check_nonce_ckb(int a1, int a2)
{
  _DWORD *v2; // r8
  int v3; // r12
  int v6; // r4
  unsigned int v7; // r7
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // t1
  int v21; // r3
  int v22; // r1
  int v23; // r2
  unsigned int v24; // r0
  unsigned int v25; // r8
  unsigned int v26; // r3
  unsigned __int8 *v27; // r3
  int v28; // r4
  int v29; // r2
  int v30; // r4
  unsigned int v31; // r0
  unsigned int v32; // t1
  unsigned int v33; // t1
  bool v34; // cc
  char *v36; // r1
  int v37; // r1
  char *v38; // r1
  int v39; // r1
  char *v40; // r1
  int v41; // r1
  _DWORD v42[7]; // [sp+30h] [bp-10B4h] BYREF
  int v43; // [sp+4Ch] [bp-1098h]
  _DWORD v44[7]; // [sp+50h] [bp-1094h] BYREF
  int v45; // [sp+6Ch] [bp-1078h]
  _DWORD v46[7]; // [sp+70h] [bp-1074h] BYREF
  int v47; // [sp+8Ch] [bp-1058h]
  _BYTE v48[32]; // [sp+90h] [bp-1054h] BYREF
  _DWORD v49[8]; // [sp+B0h] [bp-1034h] BYREF
  int v50; // [sp+D0h] [bp-1014h]
  int v51; // [sp+D4h] [bp-1010h]
  int v52; // [sp+D8h] [bp-100Ch]
  int v53; // [sp+DCh] [bp-1008h]
  char v54[4100]; // [sp+E0h] [bp-1004h] BYREF

  v2 = (_DWORD *)a2;
  v3 = *(unsigned __int8 *)(a2 + 65);
  v6 = *(_DWORD *)(a1 + 800);
  v7 = *(_DWORD *)(v6 + 4 * (v3 + 2816));
  v8 = (int *)(v6 + 48 * v3 + 5120);
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  v8 += 4;
  v49[0] = v9;
  v49[1] = v10;
  v49[2] = v11;
  v49[3] = v12;
  v13 = *v8;
  v14 = v8[1];
  v15 = v8[2];
  v16 = v8[3];
  v8 += 4;
  v49[4] = v13;
  v49[5] = v14;
  v49[6] = v15;
  v49[7] = v16;
  v17 = v8[1];
  v18 = v8[2];
  v19 = v8[3];
  v50 = *v8;
  v51 = v17;
  v52 = v18;
  v53 = v19;
  v20 = v2[12];
  v2 += 12;
  v21 = v2[3];
  v22 = v2[1];
  v23 = v2[2];
  v50 = v20;
  v51 = v22;
  v52 = v23;
  v53 = v21;
  EaglesongHash((int)v48, (int)v49, 0x30u);
  v24 = target_to_diff_ckb((int)v48);
  v25 = v24;
  if ( v24 <= 0x26 )
  {
    V_LOCK();
    LOWORD(v40) = 588;
    HIWORD(v40) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v42, v40, *(int *)(a1 + 232));
    logfmt_raw(
      v54,
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
      "hw error calculate diff %d ans diff %d TICKET_MASK_CKB_2042 %d",
      v25,
      *(unsigned __int8 *)(a2 + 64),
      39);
    V_UNLOCK();
    LOWORD(v41) = -21148;
    HIWORD(v41) = (unsigned int)"all_phy" >> 16;
    zlog(g_zc, v41, 171, "check_nonce_ckb", 15, 560, 20, v54);
    return 2;
  }
  else
  {
    v26 = *(unsigned __int8 *)(a2 + 64);
    if ( v26 == v24 )
    {
      if ( v7 > v26 )
      {
LABEL_11:
        V_LOCK();
        LOWORD(v36) = 588;
        HIWORD(v36) = (unsigned int)": get test = %d" >> 16;
        V_INT((int)v46, v36, *(int *)(a1 + 232));
        logfmt_raw(
          v54,
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
          "hw diff (%d<%d) not reach pool",
          *(unsigned __int8 *)(a2 + 64),
          v7);
        V_UNLOCK();
        LOWORD(v37) = -21148;
        HIWORD(v37) = (unsigned int)"all_phy" >> 16;
        zlog(g_zc, v37, 171, "check_nonce_ckb", 15, 590, 20, v54);
        return 1;
      }
    }
    else if ( v7 > v24 )
    {
      V_LOCK();
      LOWORD(v38) = 588;
      HIWORD(v38) = (unsigned int)": get test = %d" >> 16;
      V_INT((int)v44, v38, *(int *)(a1 + 232));
      logfmt_raw(
        v54,
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
        "diff not match (%d!=%d) expected diff %d",
        v25,
        *(unsigned __int8 *)(a2 + 64),
        v7);
      V_UNLOCK();
      LOWORD(v39) = -21148;
      HIWORD(v39) = (unsigned int)"all_phy" >> 16;
      zlog(g_zc, v39, 171, "check_nonce_ckb", 15, 565, 20, v54);
      return 3;
    }
    v27 = v48;
    v28 = v6 + 32 * (*(unsigned __int8 *)(a2 + 65) + 368);
    v29 = v28 - 1;
    v30 = v28 + 31;
    do
    {
      v32 = *v27++;
      v31 = v32;
      v33 = *(unsigned __int8 *)++v29;
      v34 = v31 > v33;
      if ( v31 < v33 )
        break;
      if ( v34 )
        goto LABEL_11;
    }
    while ( v29 != v30 );
    return 0;
  }
}
