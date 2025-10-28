int __fastcall sortValidator(int *a1, int a2)
{
  int *v2; // r8
  int v3; // r4
  signed int v5; // r11
  int v6; // r6
  int v7; // r0
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  int v11; // t1
  int v12; // r3
  int v13; // r4
  int v15; // r4
  int *v16; // r10
  int v17; // r3
  int v18; // r6
  char *v19; // r9
  unsigned int v20; // t1
  int v21; // r0
  int v22; // r1
  int v23; // r5
  char *v24; // r2
  _BYTE *i; // r1
  char v26; // t1
  _BYTE *j; // r3
  int v28; // t1
  size_t v29; // r9
  int (*v30)(const void *, const void *); // r3
  char *v31; // r10
  int v32; // r8
  char *v33; // r5
  char *v34; // r11
  int v35; // r4
  char *v36; // r0
  _BYTE *v37; // r12
  char *v38; // lr
  char v39; // r3
  char v40; // t1
  char v41; // t1
  int v42; // r4
  char *v43; // r0
  int v44; // r4
  char *v45; // r1
  bool v46; // zf
  char *v47; // r3
  char *v48; // r2
  unsigned int *v49; // r9
  unsigned int v50; // t1
  int v51; // r10
  unsigned int *v52; // r9
  int v53; // r6
  unsigned int *v54; // r8
  char *v55; // r5
  int v56; // t1
  int v57; // r0
  int v58; // r1
  int v59; // r4
  unsigned int v60; // r4
  int v61; // r0
  void *v62; // r0
  char *v63; // r10
  size_t v64; // r9
  int v65; // r8
  char *v66; // r11
  char *v67; // r5
  int v68; // r4
  char *v69; // r0
  _BYTE *v70; // r12
  char *v71; // lr
  char v72; // r3
  char v73; // t1
  char v74; // t1
  int v75; // r4
  char *v76; // r0
  size_t v77; // r4
  char *v78; // r1
  char *v79; // r3
  int v80; // lr
  char *v81; // r6
  unsigned int v82; // r2
  unsigned int v83; // r3
  char *v84; // r0
  char *v85; // r4
  int v86; // r1
  void *v87; // r0
  void *v88; // r0
  int v89; // r1
  int v90; // r2
  int v91; // r3
  int v92; // r1
  int v93; // r2
  int v94; // r3
  char *v95; // r3
  int v96; // t1
  unsigned int v97; // [sp+Ch] [bp-5E4h]
  int v98; // [sp+Ch] [bp-5E4h]
  void *v99; // [sp+10h] [bp-5E0h]
  unsigned int v100; // [sp+10h] [bp-5E0h]
  int v101; // [sp+14h] [bp-5DCh]
  int v102; // [sp+14h] [bp-5DCh]
  unsigned int v103; // [sp+18h] [bp-5D8h]
  int v104; // [sp+1Ch] [bp-5D4h]
  int v105; // [sp+1Ch] [bp-5D4h]
  int v106; // [sp+20h] [bp-5D0h]
  char *ptr; // [sp+24h] [bp-5CCh]
  char *v108; // [sp+28h] [bp-5C8h]
  int v109; // [sp+28h] [bp-5C8h]
  unsigned int nmemb; // [sp+2Ch] [bp-5C4h]
  size_t nmemba; // [sp+2Ch] [bp-5C4h]
  int *v112; // [sp+30h] [bp-5C0h]
  size_t v113; // [sp+34h] [bp-5BCh]
  unsigned int *v114; // [sp+38h] [bp-5B8h]
  int v115; // [sp+3Ch] [bp-5B4h]
  int (*compar)(const void *, const void *); // [sp+44h] [bp-5ACh]
  signed int v117; // [sp+4Ch] [bp-5A4h]
  _BYTE s[30]; // [sp+50h] [bp-5A0h] BYREF
  char v119; // [sp+6Eh] [bp-582h] BYREF
  _BYTE v120[32]; // [sp+70h] [bp-580h] BYREF
  _BYTE v121[31]; // [sp+90h] [bp-560h] BYREF
  char v122; // [sp+AFh] [bp-541h] BYREF
  _BYTE src[1328]; // [sp+B0h] [bp-540h] BYREF
  char v124; // [sp+5ECh] [bp-4h] BYREF
  char v125; // [sp+5EFh] [bp-1h] BYREF
  _DWORD v126[508]; // [sp+5F0h] [bp+0h] BYREF
  int v127; // [sp+DECh] [bp+7FCh] BYREF
  _BYTE v128[2000]; // [sp+DF0h] [bp+800h] BYREF
  int v129; // [sp+15ECh] [bp+FFCh] BYREF

  LOWORD(v2) = 15704;
  v3 = a1[1];
  v5 = *a1;
  HIWORD(v2) = (unsigned int)&unk_172D28 >> 16;
  v6 = v3 + 1;
  v112 = v2;
  v99 = (void *)a1[2];
  v7 = sub_12EA10(*a1, v3 + 1);
  *v2 = 3;
  v97 = v7;
  expandArray(a2, ((v7 + 1) << v3) / 8, (int)v126, 2048, v7 + 1, 1u);
  memset(s, 0, sizeof(s));
  ptr = (char *)malloc(0x4400u);
  v108 = (char *)malloc(0x4400u);
  memset(v120, 0, 0x1Eu);
  v8 = v126;
  v9 = 0;
  while ( ++v9 != 512 )
  {
    v10 = *v8;
    v11 = v8[1];
    ++v8;
    if ( v10 == v11 )
    {
LABEL_7:
      v13 = 1;
      goto LABEL_8;
    }
    v12 = v9;
    while ( ++v12 != 512 )
    {
      if ( v10 == v126[v12] )
        goto LABEL_7;
    }
  }
  v15 = 0;
  v16 = (int *)&v124;
  v17 = v97 + 7;
  if ( (int)(v97 + 7) < 0 )
    v17 = v97 + 14;
  v18 = v6 * (v17 >> 3);
  v19 = ptr;
  v103 = sub_12EA10(512, v5);
  v101 = v5 / 8;
  v106 = v18 + 4;
  v104 = (int)(v103 * v5) / 8;
  do
  {
    v20 = v16[1];
    ++v16;
    v21 = sub_12ECA4(bswap32(v20), v103);
    v23 = v5 * v22;
    sub_CB03C(v99, v21, v128, v104);
    expandArray((int)&v128[v23 / 8], v5 / 8, (int)src, v18, v97, 0);
    if ( v18 )
    {
      v24 = src;
      for ( i = s; ; LOBYTE(v15) = *i )
      {
        v26 = *v24++;
        *i++ = v15 ^ v26;
        if ( v24 == &src[v18] )
          break;
      }
      v15 = s[0];
    }
    memcpy(v19, src, v18);
    *(_DWORD *)&v19[v18] = *v16;
    v19 += v106;
  }
  while ( v16 != &v127 );
  for ( j = s; ; ++j )
  {
    if ( v15 )
    {
      v13 = 2;
      goto LABEL_8;
    }
    if ( j == &s[29] )
      break;
    v28 = (unsigned __int8)j[1];
    v15 = v28;
  }
  v29 = 4;
  memset(s, 0, sizeof(s));
  LOWORD(v30) = -20436;
  v31 = v108;
  HIWORD(v30) = (unsigned int)&loc_CA1FC >> 16;
  v117 = v5;
  compar = v30;
  v115 = 9;
  nmemb = 512;
  while ( 1 )
  {
    v32 = 0;
    qsort(ptr, nmemb, v18 + v29, compar);
    v109 = 2 * (v18 + v29);
    v33 = &ptr[v18 + v29 + v18];
    v34 = &ptr[v18];
    nmemb = ((nmemb - 1) >> 1) + 1;
    do
    {
      v35 = 2 * v32;
      if ( v18 )
      {
        v36 = &v33[-v18];
        v37 = v120;
        v38 = &v34[~v18];
        do
        {
          v40 = *v36++;
          v39 = v40;
          v41 = *++v38;
          *v37++ = v39 ^ v41;
        }
        while ( v33 != v36 );
      }
      ++v32;
      v42 = (v18 + v29 + v29) * (v35 >> 1);
      v43 = &v31[v42];
      v44 = v42 + v18;
      memcpy(v43, v120, v18);
      v45 = v34;
      v34 += v109;
      memcpy(&v31[v44], v45, v29);
      memcpy(&v31[v44 + v29], v33, v29);
      v33 += v109;
    }
    while ( v32 != nmemb );
    v29 *= 2;
    v46 = v115-- == 1;
    *v112 += 3;
    if ( v46 )
      break;
    v47 = ptr;
    ptr = v31;
    v31 = v47;
  }
  v48 = &v31[v18 - 4];
  v49 = (unsigned int *)&v127;
  v108 = v31;
  do
  {
    v50 = *((_DWORD *)v48 + 1);
    v48 += 4;
    v49[1] = bswap32(v50);
    ++v49;
  }
  while ( &v129 != (int *)v49 );
  v51 = 0;
  v113 = v18;
  v114 = v49;
  do
  {
    v52 = (unsigned int *)v128;
    v53 = 0;
    do
    {
      v53 += 2 << v51;
      sort_pair(v52, 1 << v51);
      v52 += 2 << v51;
    }
    while ( v53 < 512 );
    ++v51;
  }
  while ( v51 != 9 );
  v54 = (unsigned int *)&v127;
  v55 = v108;
  do
  {
    v56 = v54[1];
    ++v54;
    v57 = sub_12ECA4(v56, v103);
    v59 = v117 * v58;
    sub_CB03C(v99, v57, src, v104);
    expandArray((int)&src[v59 / 8], v101, (int)v121, v113, v97, 0);
    v60 = *v54;
    memcpy(v55, v121, v113);
    *(_DWORD *)&v55[v113] = bswap32(v60);
    v61 = (int)v55;
    v55 += v106;
    v62 = abin2hex(v61, 34);
    free(v62);
  }
  while ( v54 != v114 );
  v63 = ptr;
  v64 = 4;
  v100 = 512;
  v105 = *v112 + 3;
  nmemba = *v112 + 30;
  while ( 1 )
  {
    v65 = 0;
    v102 = v113 + 2 * v64;
    v66 = &v108[v113];
    v67 = &v108[v113 + v102 - v64];
    v100 = ((v100 - 1) >> 1) + 1;
    v98 = 2 * (v102 - v64);
    do
    {
      v68 = 2 * v65;
      if ( v113 )
      {
        v69 = &v67[-v113];
        v70 = v120;
        v71 = &v66[~v113];
        do
        {
          v73 = *v69++;
          v72 = v73;
          v74 = *++v71;
          *v70++ = v72 ^ v74;
        }
        while ( v67 != v69 );
      }
      ++v65;
      v75 = v102 * (v68 >> 1);
      v76 = &v63[v75];
      v77 = v75 + v113;
      memcpy(v76, v120, v113);
      v78 = v66;
      v66 += v98;
      memcpy(&v63[v77], v78, v64);
      memcpy(&v63[v77 + v64], v67, v64);
      v67 += v98;
    }
    while ( v100 != v65 );
    v64 *= 2;
    *v112 = v105;
    v105 += 3;
    if ( nmemba == v105 )
      break;
    v79 = v108;
    v108 = v63;
    v63 = v79;
  }
  v80 = 0;
  v81 = &v63[v113];
  v82 = 0;
  v83 = 0;
  v84 = &v122;
  ptr = v63;
  do
  {
    if ( v83 <= 7 )
    {
      v85 = &v81[v80];
      v83 += 21;
      v86 = (unsigned __int8)v81[v80 + 3];
      v80 += 4;
      v82 = v86 | (v82 << 21) | ((unsigned __int8)v85[2] << 8) | ((v85[1] & 0x1F) << 16);
    }
    v83 -= 8;
    *++v84 = v82 >> v83;
  }
  while ( &v125 != v84 );
  v87 = abin2hex((int)src, 1344);
  free(v87);
  v88 = abin2hex((int)v63, v102);
  free(v88);
  v89 = *((_DWORD *)v63 + 1);
  v90 = *((_DWORD *)v63 + 2);
  v91 = *((_DWORD *)v63 + 3);
  *(_DWORD *)s = *(_DWORD *)v63;
  *(_DWORD *)&s[4] = v89;
  *(_DWORD *)&s[8] = v90;
  *(_DWORD *)&s[12] = v91;
  v92 = *((_DWORD *)v63 + 5);
  v93 = *((_DWORD *)v63 + 6);
  v94 = *((_DWORD *)v63 + 7);
  *(_DWORD *)&s[16] = *((_DWORD *)v63 + 4);
  *(_DWORD *)&s[20] = v92;
  *(_DWORD *)&s[24] = v93;
  *(_WORD *)&s[28] = v94;
  v95 = s;
  while ( 1 )
  {
    v96 = (unsigned __int8)*v95++;
    v13 = v96;
    if ( v96 )
      break;
    if ( &v119 == v95 )
      goto LABEL_8;
  }
  v13 = 3;
LABEL_8:
  free(ptr);
  free(v108);
  return v13;
}
