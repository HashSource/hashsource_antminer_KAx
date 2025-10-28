_DWORD *__fastcall update_hashrate(int a1, int a2, _DWORD *a3)
{
  int v6; // r7
  __int64 v7; // r2
  int v8; // r8
  float v9; // s16
  int v10; // r10
  int v11; // lr
  int v12; // r10
  __int64 v13; // kr00_8
  __int64 *v14; // r2
  __int64 v15; // t1
  int v17; // r5
  int v18; // r3
  int v19; // r2
  double v20; // d6
  int v21; // r5
  unsigned int v22; // r3
  bool v23; // cf
  unsigned int v24; // r3
  float v25; // s17
  _DWORD *v26; // r10
  unsigned int v27; // r12
  int *v28; // r3
  __int64 v29; // r0
  int v30; // lr
  __int64 v31; // kr08_8
  float v32; // s17
  int v33; // r0
  int v34; // r0
  char v35; // r1
  int v36; // r3
  __int64 v37; // r0
  float v38; // s17
  char *v39; // [sp+38h] [bp-114Ch]
  int *v40; // [sp+44h] [bp-1140h]
  int v41; // [sp+44h] [bp-1140h]
  int v42; // [sp+48h] [bp-113Ch]
  __int64 v43; // [sp+4Ch] [bp-1138h]
  _BYTE v44[4]; // [sp+5Ch] [bp-1128h] BYREF
  __int64 v45; // [sp+60h] [bp-1124h] BYREF
  __int64 v46; // [sp+68h] [bp-111Ch] BYREF
  double v47; // [sp+70h] [bp-1114h] BYREF
  _BYTE v48[8]; // [sp+7Ch] [bp-1108h] BYREF
  unsigned __int8 v49; // [sp+84h] [bp-1100h]
  _DWORD v50[7]; // [sp+88h] [bp-10FCh] BYREF
  int v51; // [sp+A4h] [bp-10E0h]
  _BYTE v52[32]; // [sp+A8h] [bp-10DCh] BYREF
  float v53; // [sp+C8h] [bp-10BCh]
  float v54; // [sp+D0h] [bp-10B4h]
  float v55; // [sp+D4h] [bp-10B0h]
  char v56[4100]; // [sp+180h] [bp-1004h] BYREF

  (*(void (__fastcall **)(int, __int64 *))(a1 + 136))(a1, &v45);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 144))(a1, &v46);
  (*(void (__fastcall **)(int, double *, _BYTE *))(a1 + 140))(a1, &v47, v44);
  v6 = *(_DWORD *)(a1 + 248);
  v7 = v46;
  *(_QWORD *)(a2 + 48) = v45;
  *(_QWORD *)(a2 + 56) = v7;
  if ( v6 <= 16 )
  {
    v8 = 16 * v6;
    if ( !byte_198280[v6] )
    {
      clock_gettime(1, (struct timespec *)&byte_198280[v8 + 16]);
      clock_gettime(1, (struct timespec *)&byte_198280[v8 + 272]);
      clock_gettime(1, (struct timespec *)((char *)&unk_198490 + v8));
      *((_QWORD *)&unk_198590 + v6) = 0;
      byte_198280[v6] = 1;
    }
    if ( *(_QWORD *)(a1 + 464) )
    {
      if ( !byte_198610 )
        byte_198610 = 1;
    }
    else if ( !byte_198610 )
    {
      clock_gettime(1, (struct timespec *)&byte_198280[v8 + 16]);
      clock_gettime(1, (struct timespec *)&byte_198280[v8 + 272]);
      clock_gettime(1, (struct timespec *)((char *)&unk_198490 + v8));
      *((_QWORD *)&unk_198590 + v6) = 0;
      return a3;
    }
    v40 = (int *)(a1 + 464);
    clock_gettime(1, (struct timespec *)&byte_198280[v8 + 24]);
    v9 = (float)(1000LL * (*(_DWORD *)&byte_198280[v8 + 24] - *(_DWORD *)&byte_198280[v8 + 16])
               + (*(_DWORD *)&byte_198280[v8 + 28] - *(_DWORD *)&byte_198280[v8 + 20]) / 1000000)
       / 1000.0;
    v39 = (char *)&unk_198618 + 2896 * v6;
    if ( v9 >= 5.0 )
    {
      v22 = *((_DWORD *)&unk_198590 + 2 * v6);
      v23 = *v40 >= v22;
      v24 = *v40 - v22;
      v41 = *v40;
      LODWORD(v43) = v24;
      v42 = *(_DWORD *)(a1 + 468);
      HIDWORD(v43) = v42 - (*((_DWORD *)&unk_198590 + 2 * v6 + 1) + !v23);
      get_miner_working_status((int)v52);
      if ( v52[6] || v52[0] )
      {
        v25 = 0.0;
      }
      else
      {
        v34 = *(_DWORD *)(a1 + 448);
        v35 = 32 - v34;
        v36 = 1 << (v34 - 32);
        LODWORD(v37) = 1 << v34;
        HIDWORD(v37) = v36 | (1u >> v35);
        v38 = COERCE_FLOAT(sub_145B40(v37));
        v25 = v38 * (float)(COERCE_FLOAT(sub_145B40(v43)) / v9);
      }
      V_LOCK();
      logfmt_raw(
        v56,
        0x1000u,
        0,
        "[HashRate] time_passed_sec: %.2f, nc %llu, new %llu, %.2f H/s",
        v9,
        v41,
        v42,
        v43,
        v25);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
        190,
        "update_hashrate",
        15,
        126,
        20,
        v56);
      v26 = (_DWORD *)((char *)&unk_198618 + 2896 * v6);
      clock_gettime(1, (struct timespec *)&byte_198280[v8 + 16]);
      v27 = v26[723];
      v28 = (int *)((char *)&unk_198590 + 8 * v6);
      *v28 = v41;
      LODWORD(v29) = v26[722];
      v30 = v26[720] + 1;
      v28[1] = v42;
      HIDWORD(v29) = v27;
      *((float *)&unk_198618 + 724 * v6 + v26[720]) = v25;
      v31 = __PAIR64__(v27, v29) + 1;
      v26[720] = v30 % 720;
      v32 = v25 + (float)(COERCE_FLOAT(sub_145B40(v29)) * *(float *)(a2 + 44));
      *(float *)(a2 + 44) = v32 / COERCE_FLOAT(sub_145B40(v31));
      *((_QWORD *)v26 + 361) = v31;
    }
    sub_63638((int)v39);
    *(float *)(a2 + 32) = 5.0;
    sub_63638((int)v39);
    *(_DWORD *)(a2 + 36) = 1114636288;
    sub_63638((int)v39);
    v10 = *(_DWORD *)(a1 + 352);
    *(_DWORD *)(a2 + 40) = 1155596288;
    if ( v10 <= 0 )
    {
      v13 = 0;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 472) + 16;
      v12 = v11 + 48 * v10;
      v13 = 0;
      do
      {
        v14 = (__int64 *)v11;
        do
        {
          v15 = *v14++;
          v13 += v15;
        }
        while ( (__int64 *)(v11 + 32) != v14 );
        v11 += 48;
      }
      while ( v12 != v11 );
    }
    *(_QWORD *)(a2 + 80) = v13;
    clock_gettime(1, (struct timespec *)&byte_198280[v8 + 280]);
    if ( (float)((float)(1000LL * (*(_DWORD *)&byte_198280[v8 + 280] - *(_DWORD *)&byte_198280[v8 + 272])
                       + (*(_DWORD *)&byte_198280[v8 + 284] - *(_DWORD *)&byte_198280[v8 + 276]) / 1000000)
               / 1000.0) >= 900.0 )
    {
      sub_63638((int)v39);
      v17 = *(_DWORD *)(a2 + 200);
      if ( v17 > 23 )
      {
        memcpy((void *)(a2 + 104), (const void *)(a2 + 108), 0x5Cu);
        *(_DWORD *)(a2 + 196) = 1147207680;
      }
      else
      {
        *(_DWORD *)(a2 + 4 * v17 + 104) = 1147207680;
      }
      v18 = *(_DWORD *)(a2 + 208);
      v19 = *(_DWORD *)(a2 + 212);
      v20 = v47 * 0.97;
      *(_DWORD *)(a2 + 200) = v17 + 1;
      *(_DWORD *)(a2 + 208) = v18 + 1;
      *(_DWORD *)(a2 + 212) = __CFADD__(v18, 1) + v19;
      if ( v20 < 900.0 )
      {
        v33 = *(_DWORD *)(a1 + 256);
        a3[2] |= 1u;
        set_miner_6060info_low_hashrate_err(v33, 0);
      }
      else
      {
        *a3 |= 1u;
        get_miner_working_status((int)v48);
        v21 = v49;
        if ( !v49 )
        {
          V_LOCK();
          V_INT((int)v50, "chain", *(int *)(a1 + 256));
          logfmt_raw(
            v56,
            0x1000u,
            v21,
            v51,
            v50[0],
            v50[1],
            v50[2],
            v50[3],
            v50[4],
            v50[5],
            v50[6],
            v51,
            "%s low hashrate happened!",
            "update_hashrate");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
            190,
            "update_hashrate",
            15,
            173,
            80,
            v56);
          read_status_from_monitor(v52, a1);
          V_LOCK();
          logfmt_raw(v56, 0x1000u, v21, "no ratio hashrate last_5s: %f", v53 / 1000000000.0);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
            190,
            "update_hashrate",
            15,
            176,
            80,
            v56);
          V_LOCK();
          logfmt_raw(v56, 0x1000u, v21, "no ratio hashrate last_30min: %f", v54 / 1000000000.0);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
            190,
            "update_hashrate",
            15,
            177,
            80,
            v56);
          V_LOCK();
          logfmt_raw(v56, 0x1000u, v21, "no ratio hashrate lifetime: %f", v55 / 1000000000.0);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
            190,
            "update_hashrate",
            15,
            178,
            80,
            v56);
          set_miner_6060info_low_hashrate_err(*(_DWORD *)(a1 + 256), 1);
        }
      }
      clock_gettime(1, (struct timespec *)&byte_198280[v8 + 272]);
    }
  }
  return a3;
}
