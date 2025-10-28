int __fastcall membist1(int a1)
{
  int v2; // r5
  char *v3; // r1
  int v4; // r1
  int v5; // r3
  int v6; // r6
  char *v7; // r1
  int v8; // r4
  int v9; // r1
  char *v10; // r3
  unsigned int *v11; // r4
  int v12; // r5
  int v13; // r1
  int v14; // r6
  char *v15; // r1
  int v16; // r1
  char *v17; // r3
  unsigned int *v18; // r4
  int v19; // r5
  int v20; // r1
  char *v21; // r0
  int v22; // r1
  int v23; // r12
  int v24; // r5
  unsigned int v25; // r10
  int v26; // r0
  int (**v27)(); // r0
  int v29; // r1
  char *v30; // r2
  int v31; // r1
  char *v32; // r2
  int v33; // [sp+24h] [bp-1188h]
  char *v34; // [sp+40h] [bp-116Ch]
  char *v35; // [sp+40h] [bp-116Ch]
  __int64 v36; // [sp+40h] [bp-116Ch]
  void *ptr; // [sp+4Ch] [bp-1160h]
  unsigned int ptra; // [sp+4Ch] [bp-1160h]
  int v39; // [sp+50h] [bp-115Ch]
  __int64 v40; // [sp+50h] [bp-115Ch]
  int v41; // [sp+58h] [bp-1154h]
  _DWORD *v42; // [sp+58h] [bp-1154h]
  int v43; // [sp+5Ch] [bp-1150h]
  char *useconds; // [sp+60h] [bp-114Ch]
  int v45; // [sp+64h] [bp-1148h]
  _DWORD v46[7]; // [sp+68h] [bp-1144h] BYREF
  int v47; // [sp+84h] [bp-1128h]
  _DWORD v48[7]; // [sp+88h] [bp-1124h] BYREF
  int v49; // [sp+A4h] [bp-1108h]
  _DWORD v50[7]; // [sp+A8h] [bp-1104h] BYREF
  int v51; // [sp+C4h] [bp-10E8h]
  _DWORD v52[7]; // [sp+C8h] [bp-10E4h] BYREF
  int v53; // [sp+E4h] [bp-10C8h]
  _DWORD v54[7]; // [sp+E8h] [bp-10C4h] BYREF
  int v55; // [sp+104h] [bp-10A8h]
  _DWORD v56[7]; // [sp+108h] [bp-10A4h] BYREF
  int v57; // [sp+124h] [bp-1088h]
  _DWORD v58[7]; // [sp+128h] [bp-1084h] BYREF
  int v59; // [sp+144h] [bp-1068h]
  _DWORD v60[7]; // [sp+148h] [bp-1064h] BYREF
  _DWORD v61[9]; // [sp+164h] [bp-1048h] BYREF
  _DWORD s[8]; // [sp+188h] [bp-1024h] BYREF
  char v63[4100]; // [sp+1A8h] [bp-1004h] BYREF

  LOWORD(v2) = -13668;
  V_LOCK();
  LOWORD(v3) = 27796;
  HIWORD(v3) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v46, v3, *(int *)(a1 + 256));
  HIWORD(v2) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw(v63, 0x1000u, 0, v47, v46[0], v46[1], v46[2], v46[3], v46[4], v46[5], v46[6], v47, v2, "membist1");
  V_UNLOCK();
  LOWORD(v4) = -13944;
  HIWORD(v4) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
  zlog(g_zc, v4, 171, "membist1", 8, 697, 60, v63);
  memset(s, 0, sizeof(s));
  LOWORD(v5) = -12656;
  HIWORD(v5) = (unsigned int)"try_time: %d" >> 16;
  v39 = v5;
  memset(&v61[1], 0, 0x20u);
  v41 = 0;
  ptr = malloc(0x600u);
  do
  {
    sub_790B0(a1, v41, 12, 1);
    usleep(0x61A80u);
    sub_790B0(a1, v41, 160, -2147483647);
    usleep(0xC3500u);
    memset(ptr, 0, 0x600u);
    v6 = sub_7934C(a1, (unsigned __int16)v41, 161, ptr);
    if ( v6 == 8 )
      goto LABEL_4;
    V_LOCK();
    LOWORD(v7) = 27796;
    HIWORD(v7) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v48, v7, *(int *)(a1 + 256));
    LOWORD(v8) = -12740;
    HIWORD(v8) = (unsigned int)"ed, resp_num: %d, retry_time: %d" >> 16;
    logfmt_raw(v63, 0x1000u, 0, v49, v48[0], v48[1], v48[2], v48[3], v48[4], v48[5], v48[6], v49, v8, v6);
    V_UNLOCK();
    LOWORD(v9) = -13944;
    HIWORD(v9) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
    zlog(g_zc, v9, 171, "membist1", 8, 721, 100, v63);
    if ( v6 > 0 )
    {
LABEL_4:
      LOWORD(v10) = 27796;
      v11 = (unsigned int *)ptr;
      HIWORD(v10) = (unsigned int)"%1.f" >> 16;
      v12 = 0;
      v34 = v10;
      do
      {
        while ( (*v11 & 0x80) == 0 )
        {
          V_LOCK();
          ++v12;
          v11 += 3;
          V_INT((int)v52, v34, *(int *)(a1 + 256));
          logfmt_raw(
            v63,
            0x1000u,
            0,
            v53,
            v52[0],
            v52[1],
            v52[2],
            v52[3],
            v52[4],
            v52[5],
            v52[6],
            v53,
            v39,
            *((unsigned __int8 *)v11 - 8),
            *((unsigned __int8 *)v11 - 4));
          V_UNLOCK();
          LOWORD(v13) = -13944;
          HIWORD(v13) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
          zlog(g_zc, v13, 171, "membist1", 8, 737, 100, v63);
          if ( v6 <= v12 )
            goto LABEL_10;
        }
        if ( (*v11 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v50, v34, *(int *)(a1 + 256));
          logfmt_raw(
            v63,
            0x1000u,
            0,
            v51,
            v50[0],
            v50[1],
            v50[2],
            v50[3],
            v50[4],
            v50[5],
            v50[6],
            v51,
            "chip %02x core %02x membist err cnt: %08x",
            *((unsigned __int8 *)v11 + 4),
            *((unsigned __int8 *)v11 + 8),
            bswap32(*v11));
          V_UNLOCK();
          LOWORD(v29) = -13944;
          HIWORD(v29) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
          zlog(g_zc, v29, 171, "membist1", 8, 730, 100, v63);
          v30 = &v63[4 * *((unsigned __int8 *)v11 + 4)];
          *((_DWORD *)v30 - 8) += bswap32(*v11) & 0x7FFFFF;
        }
        ++v12;
        v11 += 3;
      }
      while ( v6 > v12 );
    }
LABEL_10:
    memset(ptr, 0, 0x600u);
    v14 = sub_7934C(a1, (unsigned __int16)v41, 162, ptr);
    if ( v14 == 8 )
      goto LABEL_12;
    V_LOCK();
    LOWORD(v15) = 27796;
    HIWORD(v15) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v54, v15, *(int *)(a1 + 256));
    logfmt_raw(
      v63,
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
      "get membist lost failed, resp_num: %d",
      v14);
    V_UNLOCK();
    LOWORD(v16) = -13944;
    HIWORD(v16) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
    zlog(g_zc, v16, 171, "membist1", 8, 745, 100, v63);
    if ( v14 > 0 )
    {
LABEL_12:
      LOWORD(v17) = 27796;
      v18 = (unsigned int *)ptr;
      HIWORD(v17) = (unsigned int)"%1.f" >> 16;
      v19 = 0;
      v35 = v17;
      do
      {
        while ( (*v18 & 0x80) == 0 )
        {
          V_LOCK();
          ++v19;
          v18 += 3;
          V_INT((int)v58, v35, *(int *)(a1 + 256));
          logfmt_raw(
            v63,
            0x1000u,
            0,
            v59,
            v58[0],
            v58[1],
            v58[2],
            v58[3],
            v58[4],
            v58[5],
            v58[6],
            v59,
            v39,
            *((unsigned __int8 *)v18 - 8),
            *((unsigned __int8 *)v18 - 4));
          V_UNLOCK();
          LOWORD(v20) = -13944;
          HIWORD(v20) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
          zlog(g_zc, v20, 171, "membist1", 8, 761, 100, v63);
          if ( v14 <= v19 )
            goto LABEL_18;
        }
        if ( (*v18 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v56, v35, *(int *)(a1 + 256));
          logfmt_raw(
            v63,
            0x1000u,
            0,
            v57,
            v56[0],
            v56[1],
            v56[2],
            v56[3],
            v56[4],
            v56[5],
            v56[6],
            v57,
            "chip %02x core %02x membist lost cnt: %08x",
            *((unsigned __int8 *)v18 + 4),
            *((unsigned __int8 *)v18 + 8),
            bswap32(*v18));
          V_UNLOCK();
          LOWORD(v31) = -13944;
          HIWORD(v31) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
          zlog(g_zc, v31, 171, "membist1", 8, 754, 100, v63);
          v32 = &v63[4 * *((unsigned __int8 *)v18 + 4)];
          *((_DWORD *)v32 - 16) += bswap32(*v18) & 0x7FFFFF;
        }
        ++v19;
        v18 += 3;
      }
      while ( v14 > v19 );
    }
LABEL_18:
    ++v41;
  }
  while ( v41 != 16 );
  LOWORD(v21) = 27796;
  LOWORD(v22) = -12532;
  HIWORD(v21) = (unsigned int)"%1.f" >> 16;
  LOWORD(v23) = -13944;
  v24 = 0;
  HIWORD(v22) = (unsigned int)"r: %s" >> 16;
  useconds = v21;
  HIWORD(v23) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
  v36 = 0;
  v40 = 0;
  v43 = v22;
  v45 = v23;
  free(ptr);
  v42 = v61;
  do
  {
    v25 = s[v24];
    ptra = v42[1];
    ++v42;
    V_LOCK();
    v36 += v25;
    v40 += ptra;
    V_INT((int)v60, useconds, *(int *)(a1 + 256));
    v33 = v24++;
    logfmt_raw(
      v63,
      0x1000u,
      0,
      v61[0],
      v60[0],
      v60[1],
      v60[2],
      v60[3],
      v60[4],
      v60[5],
      v60[6],
      v61[0],
      v43,
      v33,
      ptra,
      v25,
      v40,
      v36);
    V_UNLOCK();
    v26 = zlog(g_zc, v45, 171, "membist1", 8, 774, 100, v63);
  }
  while ( v24 != 8 );
  v27 = dev_ctrl(v26);
  ((void (__fastcall *)(_DWORD))v27[25])(*(_DWORD *)(a1 + 248));
  unk_1A3DC8 = s[0];
  unk_1A3DCC = s[1];
  unk_1A3DD0 = s[2];
  unk_1A3DD4 = s[3];
  unk_1A3DD8 = s[4];
  unk_1A3DDC = s[5];
  unk_1A3DE0 = s[6];
  unk_1A3DE4 = s[7];
  return 0;
}
