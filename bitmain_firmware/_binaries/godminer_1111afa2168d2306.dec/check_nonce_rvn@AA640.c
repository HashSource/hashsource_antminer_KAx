int __fastcall check_nonce_rvn(int a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  int v3; // t1
  _DWORD *v4; // r4
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // t1
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r1
  unsigned __int8 *v19; // r3
  _BYTE *v20; // r2
  unsigned int v21; // r0
  unsigned int v22; // t1
  unsigned int v23; // t1
  bool v24; // cf
  unsigned __int8 *v25; // r3
  _BYTE *v26; // r2
  unsigned int v27; // r0
  unsigned int v28; // t1
  unsigned int v29; // t1
  bool v30; // cf
  int v32; // r3
  int v33; // r1
  int v34; // r3
  int v35; // r1
  _DWORD v36[8]; // [sp+10h] [bp-1084h] BYREF
  int v37[8]; // [sp+30h] [bp-1064h] BYREF
  _BYTE v38[32]; // [sp+50h] [bp-1044h] BYREF
  _BYTE v39[32]; // [sp+70h] [bp-1024h] BYREF
  _DWORD v40[8]; // [sp+90h] [bp-1004h] BYREF
  _BYTE v41[4068]; // [sp+B0h] [bp-FE4h] BYREF

  v3 = *(_DWORD *)((char *)a2 + 34);
  v2 = (_DWORD *)((char *)a2 + 34);
  v4 = a2;
  v6 = *(_DWORD *)((char *)a2 + 38);
  v7 = v2[2];
  v8 = v2[3];
  v36[0] = v3;
  v36[1] = v6;
  v36[2] = v7;
  v36[3] = v8;
  v9 = v2[5];
  v10 = v2[6];
  v11 = v2[7];
  v36[4] = v2[4];
  v36[5] = v9;
  v36[6] = v10;
  v36[7] = v11;
  v12 = *(_DWORD *)((char *)v4 + 98);
  v4 = (_DWORD *)((char *)v4 + 98);
  v13 = v4[1];
  v14 = v4[2];
  v15 = v4[3];
  v37[0] = v12;
  v37[1] = v13;
  v37[2] = v14;
  v37[3] = v15;
  v16 = v4[6];
  v17 = v4[7];
  v18 = v4[5];
  v37[4] = v4[4];
  v37[5] = v18;
  v37[6] = v16;
  v37[7] = v17;
  ethash_get_expected_difficulty(v38, *(_DWORD *)(a1 + 448));
  ethash_get_expected_difficulty(v39, 9u);
  ethash_quick_hash(v40, (int)v36, *(_DWORD *)((char *)a2 + 26), *(_DWORD *)((char *)a2 + 30), v37);
  v19 = v39;
  v20 = v40;
  while ( 1 )
  {
    v22 = (unsigned __int8)*v20++;
    v21 = v22;
    v23 = *v19++;
    v24 = v21 >= v23;
    if ( v21 != v23 )
      break;
    if ( v20 == v41 )
      goto LABEL_4;
  }
  if ( v24 )
  {
    V_LOCK();
    LOWORD(v34) = 10148;
    HIWORD(v34) = (unsigned int)"tatus not ready!" >> 16;
    logfmt_raw((char *)v40, 0x1000u, 0, v34);
    V_UNLOCK();
    LOWORD(v35) = 9580;
    HIWORD(v35) = (unsigned int)"get membist lost cnt failed!" >> 16;
    zlog(g_zc, v35, 171, "check_nonce_rvn", 15, 1838, 40, v40);
    return 2;
  }
LABEL_4:
  ethash_quick_hash(v40, (int)v36, *(_DWORD *)((char *)a2 + 26), *(_DWORD *)((char *)a2 + 30), v37);
  v25 = v38;
  v26 = v40;
  while ( 1 )
  {
    v28 = (unsigned __int8)*v26++;
    v27 = v28;
    v29 = *v25++;
    v30 = v27 >= v29;
    if ( v27 != v29 )
      break;
    if ( v26 == v41 )
      return 0;
  }
  if ( !v30 )
    return 0;
  V_LOCK();
  LOWORD(v32) = 10160;
  HIWORD(v32) = (unsigned int)"ady!" >> 16;
  logfmt_raw((char *)v40, 0x1000u, 0, v32);
  V_UNLOCK();
  LOWORD(v33) = 9580;
  HIWORD(v33) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v33, 171, "check_nonce_rvn", 15, 1843, 40, v40);
  return 1;
}
