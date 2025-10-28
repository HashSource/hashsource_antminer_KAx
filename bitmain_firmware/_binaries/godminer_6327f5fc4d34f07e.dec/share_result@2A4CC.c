int __fastcall share_result(int a1, int a2, char *a3, double *a4)
{
  double v7; // d5
  double v8; // d7
  int v9; // r2
  __int64 v10; // kr10_8
  int v11; // r1
  int v12; // r2
  double v14; // d5
  __int64 v15; // r2
  double v16; // d7
  double v17; // d6
  time_t v18; // r0
  __int64 v19; // r6
  _DWORD v20[7]; // [sp+28h] [bp-1044h] BYREF
  int v21; // [sp+44h] [bp-1028h]
  _DWORD v22[7]; // [sp+48h] [bp-1024h] BYREF
  int v23; // [sp+64h] [bp-1008h]
  char v24[4100]; // [sp+68h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_107BB4);
  if ( a1 )
  {
    v14 = a4[225];
    LODWORD(v15) = *((_DWORD *)a4 + 480);
    v16 = a4[244] + v14;
    ++total_accepted;
    HIDWORD(v15) = *((_DWORD *)a4 + 481);
    v17 = total_diff_accepted + v14;
    *((_QWORD *)a4 + 240) = v15 + 1;
    a4[244] = v16;
    total_diff_accepted = v17;
    v18 = time(0);
    v19 = *((_QWORD *)a4 + 225);
    *((_DWORD *)a4 + 402) = v18;
    *((_QWORD *)a4 + 202) = v19;
    pthread_mutex_unlock(&stru_107BB4);
    return 1;
  }
  else
  {
    v7 = a4[225];
    v8 = total_diff_rejected + v7;
    v9 = total_rejected;
    v10 = *((_QWORD *)a4 + 241) + 1LL;
    a4[245] = a4[245] + v7;
    *((_DWORD *)a4 + 482) = v10;
    v11 = dword_11A82C;
    total_diff_rejected = v8;
    *((_DWORD *)a4 + 483) = HIDWORD(v10);
    *(_QWORD *)&total_rejected = __PAIR64__(v11, v9) + 1;
    pthread_mutex_unlock(&stru_107BB4);
    if ( a3 )
    {
      sub_294A8(a3);
      V_LOCK();
      V_INT((int)v20, "poolno", *(int *)a4);
      logfmt_raw(
        v24,
        0x1000u,
        0,
        v21,
        v20[0],
        v20[1],
        v20[2],
        v20[3],
        v20[4],
        v20[5],
        v20[6],
        v21,
        "reject reason: %s",
        a3);
      V_UNLOCK();
      v12 = 523;
    }
    else
    {
      sub_294A8("NULL");
      V_LOCK();
      V_INT((int)v22, "poolno", *(int *)a4);
      logfmt_raw(
        v24,
        0x1000u,
        0,
        v23,
        v22[0],
        v22[1],
        v22[2],
        v22[3],
        v22[4],
        v22[5],
        v22[6],
        v23,
        "reject reason:: NULL");
      V_UNLOCK();
      v12 = 526;
    }
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "share_result",
      12,
      v12,
      80,
      v24);
    return 1;
  }
}
