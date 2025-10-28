_DWORD *__fastcall update_hashrate(int a1, int a2, _DWORD *a3)
{
  int v5; // r9
  __int64 v6; // r2
  double v7; // d6
  float v8; // s16
  int v9; // r4
  bool v10; // cc
  int v11; // r2
  int v12; // r7
  float v13; // s14
  int v14; // r3
  float v15; // s15
  int v16; // r2
  float v17; // s15
  int v18; // r1
  int v19; // r6
  int v20; // lr
  int v21; // r6
  __int64 v22; // kr00_8
  __int64 *v23; // r0
  __int64 v24; // t1
  float v25; // s13
  int v26; // r5
  float v27; // s15
  int i; // r2
  float v29; // s16
  int v30; // r4
  int v31; // r3
  int v32; // r2
  double v33; // d6
  unsigned int v35; // r6
  __int64 v36; // kr08_8
  int v37; // r0
  char v38; // r1
  int v39; // r3
  __int64 v40; // r0
  float v41; // s17
  float v42; // s17
  _DWORD *v43; // r4
  unsigned int v44; // r12
  int v45; // lr
  int v46; // r8
  __int64 v47; // r0
  float v48; // s17
  float v49; // r0
  unsigned int v50; // [sp+20h] [bp-1054h]
  unsigned __int64 v52; // [sp+30h] [bp-1044h]
  int v53; // [sp+3Ch] [bp-1038h]
  __int64 v54; // [sp+48h] [bp-102Ch] BYREF
  __int64 v55; // [sp+50h] [bp-1024h] BYREF
  double v56; // [sp+58h] [bp-101Ch] BYREF
  _BYTE v57[12]; // [sp+64h] [bp-1010h] BYREF
  char v58[4100]; // [sp+70h] [bp-1004h] BYREF

  (*(void (__fastcall **)(int, __int64 *))(a1 + 120))(a1, &v54);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 128))(a1, &v55);
  (*(void (__fastcall **)(int, double *))(a1 + 128))(a1, &v56);
  v5 = *(_DWORD *)(a1 + 196);
  v6 = v55;
  *(_QWORD *)(a2 + 48) = v54;
  *(_QWORD *)(a2 + 56) = v6;
  if ( v5 <= 16 )
  {
    v53 = 16 * v5;
    if ( !*((_BYTE *)&unk_10DC28 + v5) )
    {
      clock_gettime(1, (struct timespec *)&unk_10DC38 + 2 * v5);
      clock_gettime(1, (struct timespec *)&unk_10DD38 + 2 * v5);
      clock_gettime(1, (struct timespec *)&unk_10DE38 + 2 * v5);
      *((_QWORD *)&unk_10DF38 + v5) = 0;
      *((_BYTE *)&unk_10DC28 + v5) = 1;
    }
    clock_gettime(1, (struct timespec *)&unk_10DC38 + 2 * v5 + 1);
    *((float *)&v7 + 1) = (float)(1000LL
                                * (*((_DWORD *)&unk_10DC28 + 4 * v5 + 6) - *((_DWORD *)&unk_10DC28 + 4 * v5 + 4))
                                + (*((_DWORD *)&unk_10DC28 + 4 * v5 + 7) - *((_DWORD *)&unk_10DC28 + 4 * v5 + 5))
                                / 1000000);
    v8 = *((float *)&v7 + 1) / 1000.0;
    if ( (float)(*((float *)&v7 + 1) / 1000.0) >= 5.0 )
    {
      v35 = *(_DWORD *)(a1 + 392);
      v50 = *(_DWORD *)(a1 + 396);
      v36 = __PAIR64__(v50, v35) - *((_QWORD *)&unk_10DF38 + v5);
      get_miner_working_status((int)v57);
      if ( v57[6] )
      {
        v42 = 0.0;
      }
      else
      {
        v37 = *(_DWORD *)(a1 + 376);
        v38 = 32 - v37;
        v39 = 1 << (v37 - 32);
        LODWORD(v40) = 1 << v37;
        HIDWORD(v40) = v39 | (1u >> v38);
        v41 = COERCE_FLOAT(sub_DD668(v40));
        v42 = v41 * (float)(COERCE_FLOAT(sub_DD668(v36)) / v8);
      }
      V_LOCK();
      v7 = v42;
      logfmt_raw(
        v58,
        0x1000u,
        0,
        "[HashRate] time_passed_sec: %.2f, nc %llu, new %llu, %.2f H/s",
        v8,
        v35,
        v50,
        v36,
        v42);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
        190,
        "update_hashrate",
        15,
        107,
        20,
        v58);
      clock_gettime(1, (struct timespec *)&unk_10DC38 + 2 * v5);
      v43 = (_DWORD *)((char *)&unk_10DFB8 + 2896 * v5);
      *((_DWORD *)&unk_10DF38 + 2 * v5) = v35;
      v44 = v43[723];
      v45 = v43[720] + 1;
      v46 = v43[720];
      *((_DWORD *)&unk_10DF38 + 2 * v5 + 1) = v50;
      LODWORD(v47) = v43[722];
      HIDWORD(v47) = v44;
      v52 = __PAIR64__(v44, v47) + 1;
      *((float *)&unk_10DFB8 + 724 * v5 + v46) = v42;
      v43[720] = v45 % 720;
      v48 = v42 + (float)(COERCE_FLOAT(sub_DD668(v47)) * *(float *)(a2 + 40));
      v49 = COERCE_FLOAT(sub_DD668(v52));
      *((_QWORD *)v43 + 361) = v52;
      *(float *)(a2 + 40) = v48 / v49;
    }
    else
    {
      v52 = *((_QWORD *)&unk_10DFB8 + 362 * v5 + 361);
    }
    v9 = *((_DWORD *)&unk_10DFB8 + 724 * v5 + 720);
    if ( v52 )
    {
      v10 = HIDWORD(v52) != 0;
      v11 = 359;
      if ( !HIDWORD(v52) )
        v10 = (unsigned int)v52 > 0x167;
      if ( v10 )
      {
        HIDWORD(v7) = 1135869952;
        v12 = 360;
      }
      else
      {
        v11 = v52;
        v12 = v52;
      }
      v13 = *((float *)&unk_10DFB8 + 724 * v5 + (v9 + 719) % 720);
      v14 = v9 + 719;
      v15 = v13 + 0.0;
      *(float *)(a2 + 32) = v13 + 0.0;
      if ( !v10 )
        v15 = *(float *)&v11;
      v16 = 0;
      if ( !v10 )
        *((float *)&v7 + 1) = (float)SLODWORD(v15);
      v17 = 0.0;
      while ( 1 )
      {
        ++v16;
        v17 = v17 + v13;
        v18 = v14 % 720;
        if ( v16 >= v12 )
          break;
        v14 = v18 + 719;
        v13 = *((float *)&unk_10DFB8 + 724 * v5 + (v18 + 719) % 0x2D0u);
      }
    }
    else
    {
      HIDWORD(v7) = 0;
      v17 = 0.0;
      *(float *)(a2 + 32) = 0.0 / 0.0;
    }
    v19 = *(_DWORD *)(a1 + 280);
    *(float *)(a2 + 36) = v17 / *((float *)&v7 + 1);
    if ( v19 <= 0 )
    {
      v22 = 0;
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 400) + 16;
      v21 = v20 + 48 * v19;
      v22 = 0;
      do
      {
        v23 = (__int64 *)v20;
        do
        {
          v24 = *v23++;
          v22 += v24;
        }
        while ( (__int64 *)(v20 + 32) != v23 );
        v20 += 48;
      }
      while ( v21 != v20 );
    }
    *(_QWORD *)(a2 + 80) = v22;
    clock_gettime(1, (struct timespec *)&unk_10DD38 + 2 * v5 + 1);
    if ( (float)((float)(1000LL
                       * (*(_DWORD *)((char *)&unk_10DC28 + v53 + 280) - *(_DWORD *)((char *)&unk_10DC28 + v53 + 272))
                       + (*(_DWORD *)((char *)&unk_10DC28 + v53 + 284) - *(_DWORD *)((char *)&unk_10DC28 + v53 + 276))
                       / 1000000)
               / 1000.0) >= 900.0 )
    {
      if ( v52 <= 0xB3 )
      {
        v26 = v52;
        v25 = (float)(int)v52;
        if ( !(_DWORD)v52 )
        {
          v27 = 0.0;
          goto LABEL_29;
        }
      }
      else
      {
        v25 = 180.0;
        v26 = 180;
      }
      v27 = 0.0;
      for ( i = 0; i < v26; ++i )
      {
        v9 = (v9 + 719) % 720;
        v27 = v27 + *((float *)&unk_10DFB8 + 724 * v5 + v9);
      }
LABEL_29:
      v29 = v27 / v25;
      v30 = *(_DWORD *)(a2 + 200);
      if ( v30 > 23 )
      {
        memcpy((void *)(a2 + 104), (const void *)(a2 + 108), 0x5Cu);
        *(float *)(a2 + 196) = v29;
      }
      else
      {
        *(float *)(a2 + 4 * v30 + 104) = v29;
      }
      v31 = *(_DWORD *)(a2 + 208);
      v32 = *(_DWORD *)(a2 + 212);
      v33 = v56 * 0.97;
      *(_DWORD *)(a2 + 200) = v30 + 1;
      *(_DWORD *)(a2 + 208) = v31 + 1;
      *(_DWORD *)(a2 + 212) = __CFADD__(v31, 1) + v32;
      if ( v29 <= v33 )
        *a3 |= 1u;
      clock_gettime(1, (struct timespec *)((char *)&unk_10DD38 + v53));
    }
  }
  return a3;
}
