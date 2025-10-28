void __noreturn dag_gen_rvn_thread_func()
{
  int v0; // r3
  int v1; // r1
  unsigned int v2; // r4
  __int64 v3; // r0
  int v4; // r1
  int v5; // r0
  _DWORD *v6; // r2
  int *v7; // r3
  int v8; // r1
  _DWORD *v9; // r5
  char *v10; // r6
  _DWORD *v11; // r7
  unsigned int v12; // r0
  int v13; // t1
  int v14; // r1
  unsigned int v15; // r0
  int v16; // t1
  int v17; // r1
  int v18; // r4
  int v19; // r9
  char v20; // r1
  char v21; // r1
  int v22; // r12
  unsigned int v23; // r3
  char v24; // r3
  _DWORD *v25; // r2
  char v26; // r3
  int v27; // r6
  int v28; // r5
  unsigned int v29; // r0
  unsigned int v30; // r1
  char v31; // r3
  char v32; // r3
  int v33; // r0
  unsigned int v34; // r5
  unsigned int v35; // r3
  unsigned int v36; // r5
  unsigned int v37; // r0
  unsigned int v38; // lr
  char v39; // r1
  int v40; // r0
  char v41; // r1
  char v42; // r2
  int v43; // r3
  int v44; // r6
  int v45; // r9
  int v46; // r8
  char v47; // r7
  unsigned int v48; // r0
  char v49; // lr
  int v50; // r12
  _DWORD *v51; // r12
  unsigned int v52; // r3
  bool v53; // zf
  int v54; // r3
  int v55; // r1
  char *v56; // r6
  int *v57; // r5
  int v58; // r4
  int v59; // r0
  int v60; // t1
  int v61; // r7
  int v62; // r8
  int v63; // r3
  unsigned int v64; // r1
  char v65; // [sp+10h] [bp-D0h]
  unsigned int v66; // [sp+10h] [bp-D0h]
  int v67; // [sp+10h] [bp-D0h]
  unsigned int v68; // [sp+18h] [bp-C8h]
  unsigned int v69; // [sp+18h] [bp-C8h]
  int v70; // [sp+18h] [bp-C8h]
  int v71; // [sp+1Ch] [bp-C4h]
  unsigned int v72; // [sp+1Ch] [bp-C4h]
  int v73; // [sp+20h] [bp-C0h]
  void (__fastcall *v74)(int, _DWORD, int, int); // [sp+20h] [bp-C0h]
  int v75; // [sp+24h] [bp-BCh]
  int v76; // [sp+24h] [bp-BCh]
  int v77; // [sp+28h] [bp-B8h]
  int v78; // [sp+28h] [bp-B8h]
  int v79; // [sp+30h] [bp-B0h]
  int v80; // [sp+34h] [bp-ACh]
  int v81; // [sp+38h] [bp-A8h]
  int v82; // [sp+3Ch] [bp-A4h]
  int v83; // [sp+40h] [bp-A0h]
  int v84; // [sp+44h] [bp-9Ch]
  int v85; // [sp+48h] [bp-98h]
  int v86; // [sp+4Ch] [bp-94h]
  int v87; // [sp+50h] [bp-90h]
  int v88; // [sp+54h] [bp-8Ch]
  int v89; // [sp+58h] [bp-88h]
  int v90; // [sp+5Ch] [bp-84h]
  int v91; // [sp+60h] [bp-80h]
  int v92; // [sp+64h] [bp-7Ch]
  int v93; // [sp+68h] [bp-78h]
  int v94; // [sp+6Ch] [bp-74h]
  int v95; // [sp+70h] [bp-70h]
  int v96; // [sp+74h] [bp-6Ch]
  int v97; // [sp+78h] [bp-68h]
  int v98; // [sp+7Ch] [bp-64h]
  char *all_created_runtime; // [sp+80h] [bp-60h]
  int v100; // [sp+84h] [bp-5Ch]
  int v101; // [sp+88h] [bp-58h]
  int v102; // [sp+8Ch] [bp-54h]
  unsigned __int64 v103; // [sp+90h] [bp-50h]
  unsigned int v104; // [sp+ACh] [bp-34h] BYREF
  unsigned int v105; // [sp+B0h] [bp-30h] BYREF
  unsigned int v106; // [sp+B4h] [bp-2Ch]
  int v107; // [sp+B8h] [bp-28h]
  int v108; // [sp+BCh] [bp-24h]
  _DWORD s[8]; // [sp+C0h] [bp-20h] BYREF
  int v110; // [sp+E0h] [bp+0h] BYREF
  _DWORD v111[30]; // [sp+E4h] [bp+4h] BYREF
  int v112; // [sp+15Ch] [bp+7Ch] BYREF
  _DWORD v113[32]; // [sp+160h] [bp+80h] BYREF
  char v114; // [sp+1E0h] [bp+100h] BYREF

  LOWORD(v0) = 20928;
  LOWORD(v1) = 13848;
  HIWORD(v0) = (unsigned int)&unk_1766B8 >> 16;
  HIWORD(v1) = (unsigned int)&unk_145178 >> 16;
  v92 = v0;
  v102 = v1;
  while ( 1 )
  {
    do
    {
      do
      {
        v2 = 0;
        memset(s, 0, sizeof(s));
        get_cur_seed_rvn(s);
        v104 = 0;
        all_created_runtime = (char *)get_all_created_runtime(&v104);
        v3 = *(_QWORD *)(v92 + 0x38);
      }
      while ( !v3 );
    }
    while ( v3 == *(_QWORD *)(v92 + 0x40) );
    V_LOCK();
    logfmt_raw(
      (char *)v113,
      0x1000u,
      0,
      "cur_block_num enter: %llu",
      *(_DWORD *)(v92 + 0x38),
      *(_DWORD *)(v92 + 0x38 + 4));
    V_UNLOCK();
    LOWORD(v4) = 30260;
    HIWORD(v4) = (unsigned int)"s" >> 16;
    zlog(g_zc, v4, 164, "dag_gen_rvn_thread_func", 23, 353, 60, v113);
    v103 = *(_QWORD *)(v92 + 0x38);
    v5 = sub_12F2F4(v103, 3u);
    v6 = &s[7];
    v7 = &v112;
    v105 = 16777619 * (v5 ^ 0x811C9DC5);
    v106 = 16777619 * (v105 ^ v8);
    v107 = 16777619 * (v5 ^ v106);
    v108 = 16777619 * (v8 ^ v107);
    do
    {
      v6[1] = v2;
      ++v6;
      v7[1] = v2;
      ++v7;
      ++v2;
    }
    while ( v2 != 32 );
    v9 = v113;
    v10 = &v114;
    v11 = v111;
    do
    {
      v12 = sub_52670(&v105);
      v13 = *--v9;
      sub_12E9F4(v12, v2);
      *v9 = v111[v14 - 1];
      v111[v14 - 1] = v13;
      v15 = sub_52670(&v105);
      v16 = *((_DWORD *)v10 - 1);
      v10 -= 4;
      sub_12E9F4(v15, v2--);
      *(_DWORD *)v10 = v113[v17];
      v113[v17] = v16;
    }
    while ( v111 != v9 );
    v18 = 0;
    v101 = 0;
    v19 = 0;
    v71 = 0;
    v100 = 0;
    v77 = 0;
    v83 = 0;
    v96 = 0;
    v82 = 0;
    v88 = 0;
    v94 = 0;
    v80 = 0;
    v90 = 0;
    v95 = 0;
    v81 = 0;
    v89 = 0;
    v93 = 0;
    v79 = 0;
    v91 = 0;
    v84 = 0;
    v97 = 0;
    v73 = 0;
    v85 = 0;
    v98 = 0;
    v86 = 0;
    v87 = 0;
    v75 = 0;
    do
    {
      while ( 1 )
      {
        v25 = &v113[v19 & 0x1F];
        v26 = v19 + 1;
        if ( v18 > 10 )
        {
          LOBYTE(v11) = 4 * v18;
          ++v19;
        }
        v27 = *(v25 - 32);
        if ( v18 <= 10 )
        {
          v65 = v26;
          v19 += 2;
          v28 = v113[v75 & 0x1F];
          v29 = sub_52670(&v105);
          ++v75;
          LOBYTE(v11) = 4 * v18;
          v73 |= (v29 & 3) << (2 * v18);
          v30 = HIWORD(v29)
              - 31
              * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v29)) >> 32)
                              + ((unsigned int)(HIWORD(v29) - ((138547333 * (unsigned __int64)HIWORD(v29)) >> 32)) >> 1)) >> 4)
              + 1;
          v31 = 5 * v18;
          if ( v18 <= 5 )
          {
            v40 = v98 | (v27 << v31);
            v27 = v111[(v65 & 0x1F) - 1];
            v98 = v40;
            v87 |= v28 << v31;
            v97 |= v30 << v31;
          }
          else
          {
            v32 = v31 - 30;
            v33 = v85 | (v27 << v32);
            v27 = v111[(v65 & 0x1F) - 1];
            v85 = v33;
            v86 |= v28 << v32;
            v84 |= v30 << v32;
          }
        }
        v34 = sub_52670(&v105) % 0x3E0;
        v35 = v34 >> 5;
        v36 = v34 & 0x1F;
        if ( v36 <= v35 )
          ++v35;
        v68 = v35;
        v66 = sub_52670(&v105);
        v37 = sub_52670(&v105);
        v38 = HIWORD(v37)
            - 31
            * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v37)) >> 32)
                            + ((unsigned int)(HIWORD(v37) - ((138547333 * (unsigned __int64)HIWORD(v37)) >> 32)) >> 1)) >> 4)
            + 1;
        if ( v18 <= 5 )
        {
          v22 = v37 & 3;
          v89 |= v36 << ((_BYTE)v11 + v18);
          v90 |= v68 << ((_BYTE)v11 + v18);
          v88 |= v27 << ((_BYTE)v11 + v18);
          v91 |= v38 << ((_BYTE)v11 + v18);
          v23 = v66 % 0xB;
LABEL_24:
          v83 |= v23 << (char)v11;
          goto LABEL_14;
        }
        v20 = (_BYTE)v11 + v18;
        if ( v18 > 11 )
        {
          v39 = v20 - 60;
          v95 |= v36 << v39;
          v94 |= v68 << v39;
          v96 |= v27 << v39;
          v93 |= v38 << v39;
        }
        else
        {
          v21 = v20 - 30;
          v81 |= v36 << v21;
          v80 |= v68 << v21;
          v82 |= v27 << v21;
          v79 |= v38 << v21;
        }
        v22 = v37 & 3;
        v23 = v66 % 0xB;
        if ( v18 <= 7 )
          goto LABEL_24;
        if ( v18 > 15 )
          break;
        v77 |= v23 << (4 * (v18 - 8));
LABEL_14:
        v24 = 2 * v18++;
        v71 |= v22 << v24;
        if ( v18 == 18 )
          goto LABEL_28;
      }
      v41 = 4 * (v18 - 16);
      v42 = 2 * (v18++ - 16);
      v100 |= v23 << v41;
      v101 |= v22 << v42;
    }
    while ( v18 != 18 );
LABEL_28:
    v43 = v19;
    v67 = 0;
    v44 = 0;
    v76 = 0;
    v45 = 0;
    v69 = 0;
    v46 = v43;
    while ( 1 )
    {
      v47 = 5 * v44;
      v48 = sub_52670(&v105);
      v49 = 2 * v44++;
      v45 |= (v48 & 3) << v49;
      v50 = v46++ & 0x1F;
      v51 = &v113[v50];
      v67 |= v76 << v47;
      v52 = v69
          | ((HIWORD(v48)
            - 31
            * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v48)) >> 32)
                            + ((unsigned int)(HIWORD(v48) - ((138547333 * (unsigned __int64)HIWORD(v48)) >> 32)) >> 1)) >> 4)
            + 1) << v47);
      v69 = v52;
      if ( v44 == 4 )
        break;
      v76 = *(v51 - 32);
    }
    v53 = v104 == 0;
    v110 = v87;
    v111[1] = v98;
    v111[0] = v86;
    v111[2] = v85;
    v111[3] = v73;
    v111[4] = v97;
    v111[5] = v84;
    v111[6] = v91;
    v111[7] = v79;
    v111[8] = v93;
    v111[9] = v89;
    v111[10] = v81;
    v111[11] = v95;
    v111[12] = v90;
    v111[13] = v80;
    v111[14] = v94;
    v111[24] = v45;
    v111[15] = v88;
    v111[25] = v52;
    v111[16] = v82;
    v111[17] = v96;
    v111[18] = v83;
    v111[19] = v77;
    v111[20] = v100;
    v111[21] = v71;
    v111[22] = v101;
    v111[23] = v67;
    *(_QWORD *)(v92 + 0x40) = v103;
    if ( !v53 )
    {
      v72 = 0;
      LOWORD(v54) = 30428;
      LOWORD(v55) = 30260;
      v56 = all_created_runtime - 4;
      HIWORD(v54) = (unsigned int)"r_status/update_hashrate.c" >> 16;
      HIWORD(v55) = (unsigned int)"s" >> 16;
      v78 = v54;
      v70 = v55;
      do
      {
        V_LOCK();
        logfmt_raw((char *)v113, 0x1000u, 0, v78);
        V_UNLOCK();
        v57 = &v110;
        v58 = 0;
        zlog(g_zc, v70, 164, "dag_gen_rvn_thread_func", 23, 362, 40, v113);
        v59 = sub_12F2F4(*(_QWORD *)(v92 + 0x38), 0x1D4Cu);
        v60 = *((_DWORD *)v56 + 1);
        v56 += 4;
        v61 = *(__int64 *)(v102 + 8 * v59) >> 8;
        v62 = *(_DWORD *)(v102 + 8 * v59 + 4) >> 8;
        v74 = *(void (__fastcall **)(int, _DWORD, int, int))(v60 + 12);
        printf("dag_load: %llx\n", *(_QWORD *)(v102 + 8 * v59) >> 8);
        v74(v60, v74, v61, v62);
        while ( 1 )
        {
          ++v58;
          (*(void (**)(void))(*(_DWORD *)v56 + 8))();
          if ( v58 == 27 )
            break;
          ++v57;
        }
        V_LOCK();
        LOWORD(v63) = 30468;
        HIWORD(v63) = (unsigned int)"ature" >> 16;
        ++v72;
        logfmt_raw((char *)v113, 0x1000u, 0, v63);
        V_UNLOCK();
        zlog(g_zc, v70, 164, "dag_gen_rvn_thread_func", 23, 368, 40, v113);
        v64 = v104;
        *(_BYTE *)(*(_DWORD *)v56 + 239) = 1;
      }
      while ( v64 > v72 );
    }
  }
}
