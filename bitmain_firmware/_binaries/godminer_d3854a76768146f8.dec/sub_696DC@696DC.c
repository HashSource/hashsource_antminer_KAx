int __fastcall sub_696DC(int a1, int a2)
{
  int v4; // r2
  int v6; // r8
  _QWORD *v7; // r7
  __int64 v8; // r0
  _DWORD v9[7]; // [sp+30h] [bp-1040h] BYREF
  int v10; // [sp+4Ch] [bp-1024h]
  _DWORD v11[7]; // [sp+50h] [bp-1020h] BYREF
  int v12; // [sp+6Ch] [bp-1004h]
  char v13[4096]; // [sp+70h] [bp-1000h] BYREF

  if ( a2 == 700 )
  {
    v6 = 820;
LABEL_6:
    v7 = (_QWORD *)(a1 + 960);
    LODWORD(v8) = sub_12F2F4(*(_QWORD *)(a1 + 960), a2);
    *v7 = v8 * (int)*(float *)(a1 + 940);
    *(float *)(a1 + 940) = (float)a2;
    *(_DWORD *)(a1 + 944) = v6;
    V_LOCK();
    V_INT((int)v11, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v13,
      0x1000u,
      0,
      v12,
      v11[0],
      v11[1],
      v11[2],
      v11[3],
      v11[4],
      v11[5],
      v11[6],
      v12,
      "overclock freq %d voltage %d",
      (int)*(float *)(a1 + 940),
      *(_DWORD *)(a1 + 944));
    V_UNLOCK();
    v4 = 989;
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
             173,
             "overclock_update_dash",
             21,
             v4,
             40,
             v13);
  }
  if ( a2 == 750 )
  {
    v6 = 830;
    goto LABEL_6;
  }
  V_LOCK();
  V_INT((int)v9, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v13,
    0x1000u,
    0,
    v10,
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v10,
    "cannot overclock with freq %d",
    a2);
  V_UNLOCK();
  v4 = 991;
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
           173,
           "overclock_update_dash",
           21,
           v4,
           40,
           v13);
}
