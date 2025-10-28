int __fastcall packet_2_nonce_ks5(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v11; // r0
  int v13; // r5
  int v14; // r7
  int v15; // r3
  int v16; // r2
  int *v17; // r0
  int v18; // r1
  int v19; // r0
  int *v20; // r2
  int v21; // r1
  int v22; // r1
  int v23; // r2
  signed int v24; // r0
  int v25; // r3
  int v26; // r12
  int *v27; // r2
  int *v28; // r3
  int v29; // r2
  char *v30; // r1
  int v31; // r4
  int v32; // r1
  int v33; // lr
  int v34; // r3
  unsigned int v35; // r9
  unsigned __int64 v36; // r4
  int v37; // r7
  char *v38; // r8
  int v39; // lr
  unsigned int i; // r12
  __int64 v41; // r0
  int v42; // r12
  int v43; // lr
  int v44; // r1
  unsigned __int64 v45; // r2
  int v46; // r9
  int v47; // r8
  char *v48; // r10
  unsigned __int64 v49; // r0
  unsigned __int64 v50; // t1
  unsigned __int64 v51; // r2
  int v52; // r0
  signed int v53; // r1
  int v54; // r2
  int v55; // r1
  _QWORD *v56; // r12
  char *v57; // r2
  int v58; // r3
  __int64 v59; // t1
  int v60; // [sp+30h] [bp-1054h]
  _DWORD v61[7]; // [sp+60h] [bp-1024h] BYREF
  int v62; // [sp+7Ch] [bp-1008h]
  char s[4096]; // [sp+80h] [bp-1004h] BYREF

  v11 = BM_CRC5((_BYTE *)(a2 + 2), 91);
  if ( (*(_BYTE *)(a2 + 13) & 0x80) == 0 )
    return 10;
  v13 = *(_BYTE *)(a2 + 13) & 0x1F;
  v14 = v11;
  if ( v11 != v13 && *(_BYTE *)(a1 + 265) )
  {
    v28 = &dword_1ABEF8[*(_DWORD *)(a1 + 256)];
    v29 = v28[1];
    v28[1] = v29 + 1;
    if ( v29 <= 9 )
    {
      V_LOCK();
      LOWORD(v30) = 27796;
      HIWORD(v30) = (unsigned int)"%1.f" >> 16;
      V_INT((int)v61, v30, *(int *)(a1 + 256));
      LOWORD(v31) = -3992;
      HIWORD(v31) = (unsigned int)"al_on_ctrlboard_KAS_2380" >> 16;
      logfmt_raw(s, 0x1000u, 0, v62, v61[0], v61[1], v61[2], v61[3], v61[4], v61[5], v61[6], v62, v31, 0, v14, v13);
      V_UNLOCK();
      LOWORD(v32) = 1808;
      HIWORD(v32) = (unsigned int)"Setting_freq_LTC_1489" >> 16;
      zlog(g_zc, v32, 171, "packet_2_nonce_ks5", 18, 275, 40, s);
    }
    return 11;
  }
  else
  {
    v15 = *(unsigned __int8 *)(a2 + 12);
    v16 = *(_DWORD *)(a1 + 840);
    if ( (v15 & 0x80) != 0 )
    {
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "chip respond wrong work id ,err");
      V_UNLOCK();
      v54 = 284;
    }
    else
    {
      v17 = (int *)(v16 + 8 * v15);
      v18 = *v17;
      v19 = v17[1];
      *(_DWORD *)a3 = v18;
      *(_DWORD *)(a3 + 4) = v19;
      *a7 = v18;
      if ( v18 != -1 )
      {
        v20 = (int *)(v16 + 8 * (v15 + 128));
        v21 = *(_DWORD *)(a2 + 7);
        *(_DWORD *)(a3 + 26) = *(_DWORD *)(a2 + 3);
        *(_DWORD *)(a3 + 30) = v21;
        v22 = *v20;
        v23 = v20[1];
        *(_DWORD *)(a3 + 18) = v22;
        *(_DWORD *)(a3 + 22) = v23;
        LOBYTE(v23) = *(_BYTE *)(a2 + 11);
        *(_BYTE *)(a3 + 16) = v15;
        *(_BYTE *)(a3 + 17) = v23;
        v24 = (unsigned int)*(unsigned __int8 *)(a2 + 6) / *(_DWORD *)(a1 + 444);
        if ( v24 >= *(_DWORD *)(a1 + 352) )
        {
          v52 = rand();
          sub_14561C(v52, *(_DWORD *)(a1 + 352));
          v24 = v53;
        }
        *a6 = v24;
        *(_DWORD *)(a3 + 8) = v24;
        *(_DWORD *)(a3 + 12) = *(_BYTE *)(a2 + 10) & 0x7F;
        v25 = *(_DWORD *)(a3 + 30);
        *a5 = *(_DWORD *)(a3 + 26);
        a5[1] = v25;
        *a4 = 1;
        memset(s, 0, 0x800u);
        v26 = *(_DWORD *)(a1 + 248);
        v27 = &dword_1ABEF8[v26];
        if ( v27[4] != 999 )
        {
          ++v27[4];
          return 0;
        }
        v33 = *(_DWORD *)(a1 + 352);
        v27[4] = 0;
        if ( v33 <= 0 )
        {
          v44 = 2 * v26;
          v36 = 0;
LABEL_33:
          *(_QWORD *)&dword_1ABEF8[v44 + 20] = v36;
          return 0;
        }
        v34 = *(_DWORD *)(a1 + 472);
        v35 = 0;
        v60 = v26;
        v36 = 0;
        v37 = v33;
        v38 = s;
        v39 = v34 + 48 * v33;
        for ( i = 0; ; i = *((_DWORD *)v38 + 1) )
        {
          v41 = *(_QWORD *)(v34 + 4);
          v34 += 48;
          v36 += __PAIR64__(*(_DWORD *)(v34 - 36), *(_DWORD *)(v34 - 48)) + __PAIR64__(v41, HIDWORD(v41));
          *(_QWORD *)v38 = *(_QWORD *)(v34 - 32) + *(_QWORD *)(v34 - 16) + __PAIR64__(i, v35);
          v38 += 8;
          if ( v34 == v39 )
            break;
          v35 = *(_DWORD *)v38;
        }
        v42 = v60;
        v43 = v37;
        v44 = 2 * v60;
        v45 = *(_QWORD *)&dword_1ABEF8[2 * v60 + 20];
        if ( v45 >= v36 )
        {
          LOWORD(v46) = -16440;
        }
        else
        {
          LOWORD(v46) = (unsigned __int16)&unk_1ABFC8;
          if ( v36 - v45 <= 0x63 )
          {
            v47 = 0;
            HIWORD(v46) = (unsigned int)&unk_1ABFC8 >> 16;
            v48 = s;
            do
            {
              v50 = *(_QWORD *)v48;
              v48 += 8;
              v49 = v50;
              v51 = *(_QWORD *)(8 * (v47 + (v42 << 8)) + v46);
              if ( v50 > v51 && v49 - v51 > 0x190 )
              {
                close_one_chip_cores_ks5(a1, (unsigned __int8)v47);
                v42 = *(_DWORD *)(a1 + 248);
                v43 = *(_DWORD *)(a1 + 352);
              }
              ++v47;
            }
            while ( v43 > v47 );
            v44 = 2 * v42;
            if ( v43 <= 0 )
              goto LABEL_33;
            goto LABEL_31;
          }
        }
        HIWORD(v46) = (unsigned int)&unk_1ABFC8 >> 16;
LABEL_31:
        v56 = (_QWORD *)(v46 + (v42 << 11));
        v57 = s;
        v58 = 0;
        do
        {
          ++v58;
          v59 = *(_QWORD *)v57;
          v57 += 8;
          *v56++ = v59;
        }
        while ( v43 > v58 );
        goto LABEL_33;
      }
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "chip respond wrong work id ,err");
      V_UNLOCK();
      v54 = 291;
    }
    LOWORD(v55) = 1808;
    HIWORD(v55) = (unsigned int)"Setting_freq_LTC_1489" >> 16;
    zlog(g_zc, v55, 171, "packet_2_nonce_ks5", 18, v54, 20, s);
    return 12;
  }
}
