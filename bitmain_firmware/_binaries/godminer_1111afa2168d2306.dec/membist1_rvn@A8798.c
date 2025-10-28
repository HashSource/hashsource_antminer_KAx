int __fastcall membist1_rvn(int a1)
{
  char *v2; // r1
  int v3; // r5
  int v4; // r1
  int v5; // r8
  char *v6; // r1
  int v7; // r1
  char *v8; // r3
  unsigned int *v9; // r4
  int v10; // r5
  int v11; // r1
  int v12; // r6
  char *v13; // r1
  int v14; // r4
  int v15; // r1
  char *v16; // r3
  unsigned int *v17; // r4
  int v18; // r5
  int v19; // r1
  __int64 v20; // r4
  _DWORD *v21; // r3
  unsigned int v22; // t1
  const char *v23; // r1
  int v24; // r0
  int (**v25)(); // r0
  int v27; // r1
  int v28; // r1
  char *v29; // [sp+30h] [bp-138h]
  char *v30; // [sp+30h] [bp-138h]
  void *ptr; // [sp+38h] [bp-130h]
  size_t n; // [sp+3Ch] [bp-12Ch]
  _DWORD v33[7]; // [sp+48h] [bp-120h] BYREF
  int v34; // [sp+64h] [bp-104h]
  _DWORD v35[7]; // [sp+68h] [bp-100h] BYREF
  int v36; // [sp+84h] [bp-E4h]
  _DWORD v37[7]; // [sp+88h] [bp-E0h] BYREF
  int v38; // [sp+A4h] [bp-C4h]
  _DWORD v39[7]; // [sp+A8h] [bp-C0h] BYREF
  int v40; // [sp+C4h] [bp-A4h]
  _DWORD v41[7]; // [sp+C8h] [bp-A0h] BYREF
  int v42; // [sp+E4h] [bp-84h]
  _DWORD v43[7]; // [sp+E8h] [bp-80h] BYREF
  int v44; // [sp+104h] [bp-64h]
  _DWORD v45[7]; // [sp+108h] [bp-60h] BYREF
  int v46; // [sp+124h] [bp-44h]
  _DWORD v47[8]; // [sp+128h] [bp-40h] BYREF
  _DWORD s[8]; // [sp+148h] [bp-20h] BYREF
  char v49[4100]; // [sp+168h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = 27796;
  HIWORD(v2) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v33, v2, *(int *)(a1 + 256));
  LOWORD(v3) = -13668;
  HIWORD(v3) = (unsigned int)"ist0 final pattern %08x" >> 16;
  n = 0;
  logfmt_raw(v49, 0x1000u, 0, v34, v33[0], v33[1], v33[2], v33[3], v33[4], v33[5], v33[6], v34, v3, "membist1_rvn");
  V_UNLOCK();
  LOWORD(v4) = 9580;
  HIWORD(v4) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v4, 171, "membist1_rvn", 12, 894, 60, v49);
  memset(s, 0, sizeof(s));
  memset(v47, 0, sizeof(v47));
  ptr = malloc(0x1800u);
  do
  {
    sub_A47BC(a1, n, 28, 1);
    usleep(0x61A80u);
    sub_A47BC(a1, n, 160, -2147483647);
    usleep(0xC3500u);
    memset(ptr, 0, 0x1800u);
    v5 = sub_A4B30(a1, (unsigned __int16)n, 161, ptr);
    if ( v5 == 8 )
      goto LABEL_4;
    V_LOCK();
    LOWORD(v6) = 27796;
    HIWORD(v6) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v35, v6, *(int *)(a1 + 256));
    logfmt_raw(
      v49,
      0x1000u,
      0,
      v36,
      v35[0],
      v35[1],
      v35[2],
      v35[3],
      v35[4],
      v35[5],
      v35[6],
      v36,
      "get membist err cnt failed!");
    V_UNLOCK();
    LOWORD(v7) = 9580;
    HIWORD(v7) = (unsigned int)"get membist lost cnt failed!" >> 16;
    zlog(g_zc, v7, 171, "membist1_rvn", 12, 914, 100, v49);
    if ( v5 > 0 )
    {
LABEL_4:
      LOWORD(v8) = 27796;
      v9 = (unsigned int *)ptr;
      HIWORD(v8) = (unsigned int)"%1.f" >> 16;
      v10 = 0;
      v29 = v8;
      do
      {
        while ( (*v9 & 0x80) == 0 )
        {
          V_LOCK();
          ++v10;
          v9 += 3;
          V_INT((int)v39, v29, *(int *)(a1 + 256));
          logfmt_raw(
            v49,
            0x1000u,
            0,
            v40,
            v39[0],
            v39[1],
            v39[2],
            v39[3],
            v39[4],
            v39[5],
            v39[6],
            v40,
            "chip %02x core %02x membist not done!",
            *((unsigned __int8 *)v9 - 8),
            *((unsigned __int8 *)v9 - 4));
          V_UNLOCK();
          LOWORD(v11) = 9580;
          HIWORD(v11) = (unsigned int)"get membist lost cnt failed!" >> 16;
          zlog(g_zc, v11, 171, "membist1_rvn", 12, 930, 100, v49);
          if ( v5 <= v10 )
            goto LABEL_10;
        }
        if ( (*v9 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v37, v29, *(int *)(a1 + 256));
          logfmt_raw(
            v49,
            0x1000u,
            0,
            v38,
            v37[0],
            v37[1],
            v37[2],
            v37[3],
            v37[4],
            v37[5],
            v37[6],
            v38,
            "chip %02x core %02x membist err cnt: %08x",
            *((unsigned __int8 *)v9 + 4),
            *((unsigned __int8 *)v9 + 8),
            bswap32(*v9));
          V_UNLOCK();
          LOWORD(v27) = 9580;
          HIWORD(v27) = (unsigned int)"get membist lost cnt failed!" >> 16;
          zlog(g_zc, v27, 171, "membist1_rvn", 12, 923, 100, v49);
          s[*((unsigned __int8 *)v9 + 4)] += bswap32(*v9) & 0x7FFFFF;
        }
        ++v10;
        v9 += 3;
      }
      while ( v5 > v10 );
    }
LABEL_10:
    memset(ptr, 0, 0x1800u);
    v12 = sub_A4B30(a1, (unsigned __int16)n, 162, ptr);
    if ( v12 == 8 )
      goto LABEL_12;
    V_LOCK();
    LOWORD(v13) = 27796;
    HIWORD(v13) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v41, v13, *(int *)(a1 + 256));
    LOWORD(v14) = 10036;
    HIWORD(v14) = (unsigned int)"data" >> 16;
    logfmt_raw(v49, 0x1000u, 0, v42, v41[0], v41[1], v41[2], v41[3], v41[4], v41[5], v41[6], v42, v14);
    V_UNLOCK();
    LOWORD(v15) = 9580;
    HIWORD(v15) = (unsigned int)"get membist lost cnt failed!" >> 16;
    zlog(g_zc, v15, 171, "membist1_rvn", 12, 938, 100, v49);
    if ( v12 > 0 )
    {
LABEL_12:
      LOWORD(v16) = 27796;
      v17 = (unsigned int *)ptr;
      HIWORD(v16) = (unsigned int)"%1.f" >> 16;
      v18 = 0;
      v30 = v16;
      do
      {
        while ( (*v17 & 0x80) == 0 )
        {
          V_LOCK();
          ++v18;
          v17 += 3;
          V_INT((int)v45, v30, *(int *)(a1 + 256));
          logfmt_raw(
            v49,
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
            "chip %02x core %02x membist not done!",
            *((unsigned __int8 *)v17 - 8),
            *((unsigned __int8 *)v17 - 4));
          V_UNLOCK();
          LOWORD(v19) = 9580;
          HIWORD(v19) = (unsigned int)"get membist lost cnt failed!" >> 16;
          zlog(g_zc, v19, 171, "membist1_rvn", 12, 954, 100, v49);
          if ( v12 <= v18 )
            goto LABEL_18;
        }
        if ( (*v17 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v43, v30, *(int *)(a1 + 256));
          logfmt_raw(
            v49,
            0x1000u,
            0,
            v44,
            v43[0],
            v43[1],
            v43[2],
            v43[3],
            v43[4],
            v43[5],
            v43[6],
            v44,
            "chip %02x core %02x membist lost cnt: %08x",
            *((unsigned __int8 *)v17 + 4),
            *((unsigned __int8 *)v17 + 8),
            bswap32(*v17));
          V_UNLOCK();
          LOWORD(v28) = 9580;
          HIWORD(v28) = (unsigned int)"get membist lost cnt failed!" >> 16;
          zlog(g_zc, v28, 171, "membist1_rvn", 12, 947, 100, v49);
          v47[*((unsigned __int8 *)v17 + 4)] += bswap32(*v17) & 0x7FFFFF;
        }
        ++v18;
        v17 += 3;
      }
      while ( v12 > v18 );
    }
LABEL_18:
    ++n;
  }
  while ( n != 64 );
  v20 = 0;
  free(ptr);
  memset(v49, 0, 0x40u);
  v21 = &v47[7];
  do
  {
    v22 = v21[1];
    ++v21;
    v20 += v22;
  }
  while ( &s[7] != v21 );
  LOWORD(v23) = 10068;
  HIWORD(v23) = (unsigned int)" upload row data" >> 16;
  v24 = sprintf(v49, v23, v20);
  v25 = dev_ctrl(v24);
  ((void (__fastcall *)(_DWORD))v25[25])(*(_DWORD *)(a1 + 248));
  unk_1B3FD4 = s[0];
  unk_1B3FD8 = s[1];
  unk_1B3FDC = s[2];
  unk_1B3FE0 = s[3];
  unk_1B3FE4 = s[4];
  unk_1B3FE8 = s[5];
  unk_1B3FEC = s[6];
  unk_1B3FF0 = s[7];
  return 0;
}
