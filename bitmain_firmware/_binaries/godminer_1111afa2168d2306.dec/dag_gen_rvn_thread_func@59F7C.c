void __noreturn dag_gen_rvn_thread_func()
{
  int v0; // r1
  unsigned int v1; // r4
  int v2; // r1
  int v3; // r3
  int v4; // r0
  _DWORD *v5; // r2
  int *v6; // r3
  int v7; // r1
  _DWORD *v8; // r5
  char *v9; // r6
  _DWORD *v10; // r7
  unsigned int v11; // r0
  int v12; // t1
  int v13; // r1
  unsigned int v14; // r0
  int v15; // t1
  int v16; // r1
  int v17; // r4
  int v18; // r9
  char v19; // r1
  char v20; // r1
  int v21; // r12
  unsigned int v22; // r3
  char v23; // r3
  _DWORD *v24; // r2
  char v25; // r3
  int v26; // r6
  int v27; // r5
  unsigned int v28; // r0
  unsigned int v29; // r1
  char v30; // r3
  char v31; // r3
  int v32; // r0
  unsigned int v33; // r5
  unsigned int v34; // r3
  unsigned int v35; // r5
  unsigned int v36; // r0
  unsigned int v37; // lr
  char v38; // r1
  int v39; // r0
  char v40; // r1
  char v41; // r2
  int v42; // r3
  int v43; // r6
  int v44; // r9
  int v45; // r8
  char v46; // r7
  unsigned int v47; // r0
  char v48; // lr
  int v49; // r12
  _DWORD *v50; // r12
  unsigned int v51; // r3
  int v52; // r3
  int v53; // r2
  int v54; // r1
  char *v55; // r6
  int *v56; // r5
  int v57; // r4
  int v58; // r0
  int v59; // t1
  int v60; // r7
  int v61; // r8
  int v62; // r3
  unsigned int v63; // r1
  char v64; // [sp+10h] [bp-D0h]
  unsigned int v65; // [sp+10h] [bp-D0h]
  int v66; // [sp+10h] [bp-D0h]
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
  int v92; // [sp+68h] [bp-78h]
  int v93; // [sp+6Ch] [bp-74h]
  int v94; // [sp+70h] [bp-70h]
  int v95; // [sp+74h] [bp-6Ch]
  int v96; // [sp+78h] [bp-68h]
  int v97; // [sp+7Ch] [bp-64h]
  char *all_created_runtime; // [sp+80h] [bp-60h]
  int v99; // [sp+84h] [bp-5Ch]
  int v100; // [sp+88h] [bp-58h]
  int v101; // [sp+8Ch] [bp-54h]
  __int64 v102; // [sp+90h] [bp-50h]
  unsigned int v103; // [sp+ACh] [bp-34h] BYREF
  unsigned int v104; // [sp+B0h] [bp-30h] BYREF
  unsigned int v105; // [sp+B4h] [bp-2Ch]
  int v106; // [sp+B8h] [bp-28h]
  int v107; // [sp+BCh] [bp-24h]
  _DWORD s[8]; // [sp+C0h] [bp-20h] BYREF
  int v109; // [sp+E0h] [bp+0h] BYREF
  _DWORD v110[30]; // [sp+E4h] [bp+4h] BYREF
  int v111; // [sp+15Ch] [bp+7Ch] BYREF
  _DWORD v112[32]; // [sp+160h] [bp+80h] BYREF
  char v113; // [sp+1E0h] [bp+100h] BYREF

  LOWORD(v0) = 10544;
  HIWORD(v0) = (unsigned int)&unk_162AF8 >> 16;
  v101 = v0;
  while ( 1 )
  {
    do
    {
      do
      {
        v1 = 0;
        memset(s, 0, sizeof(s));
        get_cur_seed_rvn(s);
        v103 = 0;
        all_created_runtime = (char *)get_all_created_runtime(&v103);
      }
      while ( !qword_196AC0 );
    }
    while ( qword_196AC0 == *(_QWORD *)&dword_196AC8 );
    V_LOCK();
    logfmt_raw((char *)v112, 0x1000u, 0, "cur_block_num enter: %llu", qword_196AC0);
    V_UNLOCK();
    LOWORD(v2) = 26956;
    LOWORD(v3) = -5896;
    HIWORD(v3) = (unsigned int)&unk_15EAC0 >> 16;
    HIWORD(v2) = (unsigned int)"c/zec_1746/zec_1746_content.c" >> 16;
    zlog(g_zc, v2, 164, v3, 23, 353, 60, v112);
    v102 = qword_196AC0;
    v4 = sub_145C6C(qword_196AC0, 3u);
    v5 = &s[7];
    v6 = &v111;
    v104 = 16777619 * (v4 ^ 0x811C9DC5);
    v105 = 16777619 * (v104 ^ v7);
    v106 = 16777619 * (v4 ^ v105);
    v107 = 16777619 * (v7 ^ v106);
    do
    {
      v5[1] = v1;
      ++v5;
      v6[1] = v1;
      ++v6;
      ++v1;
    }
    while ( v1 != 32 );
    v8 = v112;
    v9 = &v113;
    v10 = v110;
    do
    {
      v11 = sub_59CB8(&v104);
      v12 = *--v8;
      sub_14536C(v11, v1);
      *v8 = v110[v13 - 1];
      v110[v13 - 1] = v12;
      v14 = sub_59CB8(&v104);
      v15 = *((_DWORD *)v9 - 1);
      v9 -= 4;
      sub_14536C(v14, v1--);
      *(_DWORD *)v9 = v112[v16];
      v112[v16] = v15;
    }
    while ( v110 != v8 );
    v17 = 0;
    v100 = 0;
    v18 = 0;
    v71 = 0;
    v99 = 0;
    v77 = 0;
    v83 = 0;
    v95 = 0;
    v82 = 0;
    v88 = 0;
    v93 = 0;
    v80 = 0;
    v90 = 0;
    v94 = 0;
    v81 = 0;
    v89 = 0;
    v92 = 0;
    v79 = 0;
    v91 = 0;
    v84 = 0;
    v96 = 0;
    v73 = 0;
    v85 = 0;
    v97 = 0;
    v86 = 0;
    v87 = 0;
    v75 = 0;
    do
    {
      while ( 1 )
      {
        v24 = &v112[v18 & 0x1F];
        v25 = v18 + 1;
        if ( v17 > 10 )
        {
          LOBYTE(v10) = 4 * v17;
          ++v18;
        }
        v26 = *(v24 - 32);
        if ( v17 <= 10 )
        {
          v64 = v25;
          v18 += 2;
          v27 = v112[v75 & 0x1F];
          v28 = sub_59CB8(&v104);
          ++v75;
          LOBYTE(v10) = 4 * v17;
          v73 |= (v28 & 3) << (2 * v17);
          v29 = HIWORD(v28)
              - 31
              * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v28)) >> 32)
                              + ((unsigned int)(HIWORD(v28) - ((138547333 * (unsigned __int64)HIWORD(v28)) >> 32)) >> 1)) >> 4)
              + 1;
          v30 = 5 * v17;
          if ( v17 <= 5 )
          {
            v39 = v97 | (v26 << v30);
            v26 = v110[(v64 & 0x1F) - 1];
            v97 = v39;
            v87 |= v27 << v30;
            v96 |= v29 << v30;
          }
          else
          {
            v31 = v30 - 30;
            v32 = v85 | (v26 << v31);
            v26 = v110[(v64 & 0x1F) - 1];
            v85 = v32;
            v86 |= v27 << v31;
            v84 |= v29 << v31;
          }
        }
        v33 = sub_59CB8(&v104) % 0x3E0;
        v34 = v33 >> 5;
        v35 = v33 & 0x1F;
        if ( v35 <= v34 )
          ++v34;
        v68 = v34;
        v65 = sub_59CB8(&v104);
        v36 = sub_59CB8(&v104);
        v37 = HIWORD(v36)
            - 31
            * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v36)) >> 32)
                            + ((unsigned int)(HIWORD(v36) - ((138547333 * (unsigned __int64)HIWORD(v36)) >> 32)) >> 1)) >> 4)
            + 1;
        if ( v17 <= 5 )
        {
          v21 = v36 & 3;
          v89 |= v35 << ((_BYTE)v10 + v17);
          v90 |= v68 << ((_BYTE)v10 + v17);
          v88 |= v26 << ((_BYTE)v10 + v17);
          v91 |= v37 << ((_BYTE)v10 + v17);
          v22 = v65 % 0xB;
LABEL_24:
          v83 |= v22 << (char)v10;
          goto LABEL_14;
        }
        v19 = (_BYTE)v10 + v17;
        if ( v17 > 11 )
        {
          v38 = v19 - 60;
          v94 |= v35 << v38;
          v93 |= v68 << v38;
          v95 |= v26 << v38;
          v92 |= v37 << v38;
        }
        else
        {
          v20 = v19 - 30;
          v81 |= v35 << v20;
          v80 |= v68 << v20;
          v82 |= v26 << v20;
          v79 |= v37 << v20;
        }
        v21 = v36 & 3;
        v22 = v65 % 0xB;
        if ( v17 <= 7 )
          goto LABEL_24;
        if ( v17 > 15 )
          break;
        v77 |= v22 << (4 * (v17 - 8));
LABEL_14:
        v23 = 2 * v17++;
        v71 |= v21 << v23;
        if ( v17 == 18 )
          goto LABEL_28;
      }
      v40 = 4 * (v17 - 16);
      v41 = 2 * (v17++ - 16);
      v99 |= v22 << v40;
      v100 |= v21 << v41;
    }
    while ( v17 != 18 );
LABEL_28:
    v42 = v18;
    v66 = 0;
    v43 = 0;
    v76 = 0;
    v44 = 0;
    v69 = 0;
    v45 = v42;
    while ( 1 )
    {
      v46 = 5 * v43;
      v47 = sub_59CB8(&v104);
      v48 = 2 * v43++;
      v44 |= (v47 & 3) << v48;
      v49 = v45++ & 0x1F;
      v50 = &v112[v49];
      v66 |= v76 << v46;
      v51 = v69
          | ((HIWORD(v47)
            - 31
            * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v47)) >> 32)
                            + ((unsigned int)(HIWORD(v47) - ((138547333 * (unsigned __int64)HIWORD(v47)) >> 32)) >> 1)) >> 4)
            + 1) << v46);
      v69 = v51;
      if ( v43 == 4 )
        break;
      v76 = *(v50 - 32);
    }
    v109 = v87;
    v110[1] = v97;
    v110[0] = v86;
    v110[2] = v85;
    v110[3] = v73;
    v110[4] = v96;
    v110[5] = v84;
    v110[6] = v91;
    v110[7] = v79;
    v110[8] = v92;
    v110[9] = v89;
    v110[10] = v81;
    v110[11] = v94;
    v110[12] = v90;
    v110[13] = v80;
    v110[14] = v93;
    v110[24] = v44;
    v110[15] = v88;
    v110[25] = v51;
    v110[16] = v82;
    v110[17] = v95;
    v110[18] = v83;
    v110[19] = v77;
    v110[20] = v99;
    v110[21] = v71;
    v110[22] = v100;
    v110[23] = v66;
    *(_QWORD *)&dword_196AC8 = v102;
    if ( v103 )
    {
      v72 = 0;
      LOWORD(v52) = 27124;
      LOWORD(v53) = -5896;
      LOWORD(v54) = 26956;
      v55 = all_created_runtime - 4;
      HIWORD(v52) = (unsigned int)"r_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/dhash_content/dcr/dcr_1727/dcr_1727_content.c" >> 16;
      HIWORD(v53) = (unsigned int)&unk_15EAC0 >> 16;
      HIWORD(v54) = (unsigned int)"c/zec_1746/zec_1746_content.c" >> 16;
      v78 = v52;
      v67 = v53;
      v70 = v54;
      do
      {
        V_LOCK();
        logfmt_raw((char *)v112, 0x1000u, 0, v78);
        V_UNLOCK();
        v56 = &v109;
        v57 = 0;
        zlog(g_zc, v70, 164, v67, 23, 362, 40, v112);
        v58 = sub_145C6C(qword_196AC0, 0x1D4Cu);
        v59 = *((_DWORD *)v55 + 1);
        v55 += 4;
        v60 = *(__int64 *)(v101 + 8 * v58) >> 8;
        v61 = *(_DWORD *)(v101 + 8 * v58 + 4) >> 8;
        v74 = *(void (__fastcall **)(int, _DWORD, int, int))(v59 + 12);
        printf("dag_load: %lx\n", v59);
        v74(v59, v74, v60, v61);
        while ( 1 )
        {
          ++v57;
          (*(void (**)(void))(*(_DWORD *)v55 + 8))();
          if ( v57 == 27 )
            break;
          ++v56;
        }
        V_LOCK();
        LOWORD(v62) = 27164;
        HIWORD(v62) = (unsigned int)"/release/build/godminer-origin_godminer-new/dhash_content/dcr/dcr_1727/dcr_1727_content.c" >> 16;
        ++v72;
        logfmt_raw((char *)v112, 0x1000u, 0, v62);
        V_UNLOCK();
        zlog(g_zc, v70, 164, v67, 23, 368, 40, v112);
        v63 = v103;
        *(_BYTE *)(*(_DWORD *)v55 + 266) = 1;
      }
      while ( v63 > v72 );
    }
  }
}
