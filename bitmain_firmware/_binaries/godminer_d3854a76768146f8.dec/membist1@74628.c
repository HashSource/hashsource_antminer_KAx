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
  _DWORD *v28; // lr
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v36; // r1
  char *v37; // r2
  int v38; // r1
  char *v39; // r2
  int v40; // [sp+24h] [bp-1188h]
  char *v41; // [sp+40h] [bp-116Ch]
  char *v42; // [sp+40h] [bp-116Ch]
  __int64 v43; // [sp+40h] [bp-116Ch]
  void *ptr; // [sp+4Ch] [bp-1160h]
  unsigned int ptra; // [sp+4Ch] [bp-1160h]
  int v46; // [sp+50h] [bp-115Ch]
  __int64 v47; // [sp+50h] [bp-115Ch]
  int v48; // [sp+58h] [bp-1154h]
  _DWORD *v49; // [sp+58h] [bp-1154h]
  int v50; // [sp+5Ch] [bp-1150h]
  char *useconds; // [sp+60h] [bp-114Ch]
  int v52; // [sp+64h] [bp-1148h]
  _DWORD v53[7]; // [sp+68h] [bp-1144h] BYREF
  int v54; // [sp+84h] [bp-1128h]
  _DWORD v55[7]; // [sp+88h] [bp-1124h] BYREF
  int v56; // [sp+A4h] [bp-1108h]
  _DWORD v57[7]; // [sp+A8h] [bp-1104h] BYREF
  int v58; // [sp+C4h] [bp-10E8h]
  _DWORD v59[7]; // [sp+C8h] [bp-10E4h] BYREF
  int v60; // [sp+E4h] [bp-10C8h]
  _DWORD v61[7]; // [sp+E8h] [bp-10C4h] BYREF
  int v62; // [sp+104h] [bp-10A8h]
  _DWORD v63[7]; // [sp+108h] [bp-10A4h] BYREF
  int v64; // [sp+124h] [bp-1088h]
  _DWORD v65[7]; // [sp+128h] [bp-1084h] BYREF
  int v66; // [sp+144h] [bp-1068h]
  _DWORD v67[7]; // [sp+148h] [bp-1064h] BYREF
  _DWORD v68[9]; // [sp+164h] [bp-1048h] BYREF
  _DWORD s[8]; // [sp+188h] [bp-1024h] BYREF
  char v70[4100]; // [sp+1A8h] [bp-1004h] BYREF

  LOWORD(v2) = -11816;
  V_LOCK();
  LOWORD(v3) = 588;
  HIWORD(v3) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v53, v3, *(int *)(a1 + 232));
  HIWORD(v2) = (unsigned int)"Setting_read_sensor_temp_remote_on_pic_HNS_2130" >> 16;
  logfmt_raw(v70, 0x1000u, 0, v54, v53[0], v53[1], v53[2], v53[3], v53[4], v53[5], v53[6], v54, v2, "membist1");
  V_UNLOCK();
  LOWORD(v4) = -12308;
  HIWORD(v4) = (unsigned int)"0" >> 16;
  zlog(g_zc, v4, 171, "membist1", 8, 663, 60, v70);
  memset(s, 0, sizeof(s));
  LOWORD(v5) = -11068;
  HIWORD(v5) = (unsigned int)"ming remote temp(%d, %d)" >> 16;
  v46 = v5;
  memset(&v68[1], 0, 0x20u);
  v48 = 0;
  ptr = malloc(0x600u);
  do
  {
    sub_70158(a1, v48, 12, 1);
    usleep(0x61A80u);
    sub_70158(a1, v48, 160, -2147483647);
    usleep(0xC3500u);
    memset(ptr, 0, 0x600u);
    v6 = sub_703F8(a1, (unsigned __int16)v48, 161, ptr);
    if ( v6 == 8 )
      goto LABEL_4;
    V_LOCK();
    LOWORD(v7) = 588;
    HIWORD(v7) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v55, v7, *(int *)(a1 + 232));
    LOWORD(v8) = -11152;
    HIWORD(v8) = (unsigned int)"ming local temp(%d, %d)" >> 16;
    logfmt_raw(v70, 0x1000u, 0, v56, v55[0], v55[1], v55[2], v55[3], v55[4], v55[5], v55[6], v56, v8, v6);
    V_UNLOCK();
    LOWORD(v9) = -12308;
    HIWORD(v9) = (unsigned int)"0" >> 16;
    zlog(g_zc, v9, 171, "membist1", 8, 683, 100, v70);
    if ( v6 > 0 )
    {
LABEL_4:
      LOWORD(v10) = 588;
      v11 = (unsigned int *)ptr;
      HIWORD(v10) = (unsigned int)": get test = %d" >> 16;
      v12 = 0;
      v41 = v10;
      do
      {
        while ( (*v11 & 0x80) == 0 )
        {
          V_LOCK();
          ++v12;
          v11 += 3;
          V_INT((int)v59, v41, *(int *)(a1 + 232));
          logfmt_raw(
            v70,
            0x1000u,
            0,
            v60,
            v59[0],
            v59[1],
            v59[2],
            v59[3],
            v59[4],
            v59[5],
            v59[6],
            v60,
            v46,
            *((unsigned __int8 *)v11 - 8),
            *((unsigned __int8 *)v11 - 4));
          V_UNLOCK();
          LOWORD(v13) = -12308;
          HIWORD(v13) = (unsigned int)"0" >> 16;
          zlog(g_zc, v13, 171, "membist1", 8, 699, 100, v70);
          if ( v6 <= v12 )
            goto LABEL_10;
        }
        if ( (*v11 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v57, v41, *(int *)(a1 + 232));
          logfmt_raw(
            v70,
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
            "chip %02x core %02x membist err cnt: %08x",
            *((unsigned __int8 *)v11 + 4),
            *((unsigned __int8 *)v11 + 8),
            bswap32(*v11));
          V_UNLOCK();
          LOWORD(v36) = -12308;
          HIWORD(v36) = (unsigned int)"0" >> 16;
          zlog(g_zc, v36, 171, "membist1", 8, 692, 100, v70);
          v37 = &v70[4 * *((unsigned __int8 *)v11 + 4)];
          *((_DWORD *)v37 - 8) += bswap32(*v11) & 0x7FFFFF;
        }
        ++v12;
        v11 += 3;
      }
      while ( v6 > v12 );
    }
LABEL_10:
    memset(ptr, 0, 0x600u);
    v14 = sub_703F8(a1, (unsigned __int16)v48, 162, ptr);
    if ( v14 == 8 )
      goto LABEL_12;
    V_LOCK();
    LOWORD(v15) = 588;
    HIWORD(v15) = (unsigned int)": get test = %d" >> 16;
    V_INT((int)v61, v15, *(int *)(a1 + 232));
    logfmt_raw(
      v70,
      0x1000u,
      0,
      v62,
      v61[0],
      v61[1],
      v61[2],
      v61[3],
      v61[4],
      v61[5],
      v61[6],
      v62,
      "get membist lost failed, resp_num: %d",
      v14);
    V_UNLOCK();
    LOWORD(v16) = -12308;
    HIWORD(v16) = (unsigned int)"0" >> 16;
    zlog(g_zc, v16, 171, "membist1", 8, 707, 100, v70);
    if ( v14 > 0 )
    {
LABEL_12:
      LOWORD(v17) = 588;
      v18 = (unsigned int *)ptr;
      HIWORD(v17) = (unsigned int)": get test = %d" >> 16;
      v19 = 0;
      v42 = v17;
      do
      {
        while ( (*v18 & 0x80) == 0 )
        {
          V_LOCK();
          ++v19;
          v18 += 3;
          V_INT((int)v65, v42, *(int *)(a1 + 232));
          logfmt_raw(
            v70,
            0x1000u,
            0,
            v66,
            v65[0],
            v65[1],
            v65[2],
            v65[3],
            v65[4],
            v65[5],
            v65[6],
            v66,
            v46,
            *((unsigned __int8 *)v18 - 8),
            *((unsigned __int8 *)v18 - 4));
          V_UNLOCK();
          LOWORD(v20) = -12308;
          HIWORD(v20) = (unsigned int)"0" >> 16;
          zlog(g_zc, v20, 171, "membist1", 8, 723, 100, v70);
          if ( v14 <= v19 )
            goto LABEL_18;
        }
        if ( (*v18 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v63, v42, *(int *)(a1 + 232));
          logfmt_raw(
            v70,
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
            "chip %02x core %02x membist lost cnt: %08x",
            *((unsigned __int8 *)v18 + 4),
            *((unsigned __int8 *)v18 + 8),
            bswap32(*v18));
          V_UNLOCK();
          LOWORD(v38) = -12308;
          HIWORD(v38) = (unsigned int)"0" >> 16;
          zlog(g_zc, v38, 171, "membist1", 8, 716, 100, v70);
          v39 = &v70[4 * *((unsigned __int8 *)v18 + 4)];
          *((_DWORD *)v39 - 16) += bswap32(*v18) & 0x7FFFFF;
        }
        ++v19;
        v18 += 3;
      }
      while ( v14 > v19 );
    }
LABEL_18:
    ++v48;
  }
  while ( v48 != 16 );
  LOWORD(v21) = 588;
  LOWORD(v22) = -10944;
  HIWORD(v21) = (unsigned int)": get test = %d" >> 16;
  LOWORD(v23) = -12308;
  v24 = 0;
  HIWORD(v22) = (unsigned int)" calc value %04x expected value %04x" >> 16;
  useconds = v21;
  HIWORD(v23) = (unsigned int)"0" >> 16;
  v43 = 0;
  v47 = 0;
  v50 = v22;
  v52 = v23;
  free(ptr);
  v49 = v68;
  do
  {
    v25 = s[v24];
    ptra = v49[1];
    ++v49;
    V_LOCK();
    v43 += v25;
    v47 += ptra;
    V_INT((int)v67, useconds, *(int *)(a1 + 232));
    v40 = v24++;
    logfmt_raw(
      v70,
      0x1000u,
      0,
      v68[0],
      v67[0],
      v67[1],
      v67[2],
      v67[3],
      v67[4],
      v67[5],
      v67[6],
      v68[0],
      v50,
      v40,
      ptra,
      v25,
      v47,
      v43);
    V_UNLOCK();
    v26 = zlog(g_zc, v52, 171, "membist1", 8, 736, 100, v70);
  }
  while ( v24 != 8 );
  v27 = dev_ctrl(v26);
  ((void (__fastcall *)(_DWORD))v27[20])(*(_DWORD *)(a1 + 228));
  LOWORD(v28) = 8480;
  v29 = s[1];
  v30 = s[2];
  v31 = s[3];
  HIWORD(v28) = (unsigned int)&unk_1835E0 >> 16;
  *v28 = s[0];
  v28[1] = v29;
  v28[2] = v30;
  v28[3] = v31;
  v28 += 4;
  v32 = s[5];
  v33 = s[6];
  v34 = s[7];
  *v28 = s[4];
  v28[1] = v32;
  v28[2] = v33;
  v28[3] = v34;
  return 0;
}
