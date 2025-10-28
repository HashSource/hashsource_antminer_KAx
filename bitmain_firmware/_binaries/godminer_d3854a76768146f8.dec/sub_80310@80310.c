int __fastcall sub_80310(int a1, int a2)
{
  _DWORD *v2; // r6
  int v3; // r2
  int *v5; // r10
  int v6; // r11
  int v7; // r3
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  void (__fastcall *v12)(int, int *, int *, _DWORD, int, int, int, int, _DWORD); // r8
  int v13; // r2
  int v14; // r1
  int v15; // r3
  int v16; // r12
  int v17; // r0
  int v18; // lr
  bool v19; // cc
  int v20; // r12
  int v21; // r7
  int v22; // r8
  int v23; // r2
  int v24; // r2
  int v26; // r3
  int v27; // [sp+44h] [bp-10E0h]
  int v28; // [sp+50h] [bp-10D4h] BYREF
  int v29; // [sp+54h] [bp-10D0h] BYREF
  int v30; // [sp+58h] [bp-10CCh] BYREF
  int v31; // [sp+5Ch] [bp-10C8h] BYREF
  _DWORD v32[7]; // [sp+60h] [bp-10C4h] BYREF
  int v33; // [sp+7Ch] [bp-10A8h]
  _DWORD v34[7]; // [sp+80h] [bp-10A4h] BYREF
  int v35; // [sp+9Ch] [bp-1088h]
  _DWORD v36[7]; // [sp+A0h] [bp-1084h] BYREF
  int v37; // [sp+BCh] [bp-1068h]
  _DWORD v38[7]; // [sp+C0h] [bp-1064h] BYREF
  int v39; // [sp+DCh] [bp-1048h]
  _DWORD v40[7]; // [sp+E0h] [bp-1044h] BYREF
  int v41; // [sp+FCh] [bp-1028h]
  _DWORD v42[7]; // [sp+100h] [bp-1024h] BYREF
  int v43; // [sp+11Ch] [bp-1008h]
  char v44[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = *(_DWORD **)(a1 + 364);
  v3 = *(_DWORD *)(a1 + 372);
  v27 = v3;
  v28 = -64;
  v29 = -64;
  if ( v3 > 0 )
  {
    v5 = (int *)(a2 + 4);
    v6 = 0;
    do
    {
      v30 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 152))(
        a1,
        &v28,
        &v30,
        *v2,
        v2[1],
        v2[2],
        v2[3],
        v2[4],
        v2[5]);
      if ( v30 )
      {
        v7 = v28;
        if ( v28 >= -63 )
          goto LABEL_4;
        v28 = -64;
        V_LOCK();
        V_INT((int)v32, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v44,
          0x1000u,
          0,
          v33,
          v32[0],
          v32[1],
          v32[2],
          v32[3],
          v32[4],
          v32[5],
          v32[6],
          v33,
          "got uneffective temp, sensor[%d], addr:%02x",
          *v2,
          v2[5]);
        V_UNLOCK();
        v23 = 299;
      }
      else
      {
        v28 = -64;
        V_LOCK();
        V_INT((int)v34, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v44,
          0x1000u,
          0,
          v35,
          v34[0],
          v34[1],
          v34[2],
          v34[3],
          v34[4],
          v34[5],
          v34[6],
          v35,
          "read sensor failed, sensor[%d], addr:%02x",
          *v2,
          v2[5]);
        V_UNLOCK();
        v23 = 304;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        171,
        "read_temperature_hns",
        20,
        v23,
        100,
        v44);
      v7 = v28;
LABEL_4:
      *(v5 - 1) = v7;
      v8 = v2[1];
      v9 = v2[2];
      v10 = v2[3];
      v11 = v2[4];
      v12 = *(void (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 156);
      v31 = 0;
      v12(a1, &v29, &v31, *v2, v8, v9, v10, v11, v2[5]);
      if ( v31 )
      {
        v13 = v29;
        if ( v29 >= -63 )
          goto LABEL_6;
        v29 = -64;
        V_LOCK();
        V_INT((int)v36, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v44,
          0x1000u,
          0,
          v37,
          v36[0],
          v36[1],
          v36[2],
          v36[3],
          v36[4],
          v36[5],
          v36[6],
          v37,
          "got uneffective temp, sensor[%d], addr:%02x",
          *v2,
          v2[5]);
        V_UNLOCK();
        v24 = 315;
      }
      else
      {
        v29 = -64;
        V_LOCK();
        V_INT((int)v38, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v44,
          0x1000u,
          0,
          v39,
          v38[0],
          v38[1],
          v38[2],
          v38[3],
          v38[4],
          v38[5],
          v38[6],
          v39,
          "read sensor failed, sensor[%d], addr:%02x",
          *v2,
          v2[5]);
        V_UNLOCK();
        v24 = 320;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        171,
        "read_temperature_hns",
        20,
        v24,
        100,
        v44);
      v13 = v29;
LABEL_6:
      *v5 = v13;
      v14 = v28;
      v15 = v6 + 2 * *(_DWORD *)(a1 + 228);
      v16 = v13 - *(unsigned __int8 *)(a1 + 952) - v28;
      v17 = v15;
      if ( v16 < 0 )
        v16 = v28 - (v13 - *(unsigned __int8 *)(a1 + 952));
      v18 = dword_172968[v15];
      v19 = v16 <= 3;
      v20 = dword_172968[v17 + 6];
      if ( v19 )
        goto LABEL_17;
      if ( v18 == -64 && v20 == -64 )
      {
        v20 = -64;
        v18 = -64;
        goto LABEL_17;
      }
      v21 = v28 - v18;
      v22 = v13 - v20;
      if ( v28 - v18 < 0 )
        v21 = v18 - v28;
      if ( v22 < 0 )
        v22 = v20 - v13;
      if ( v21 > v22 )
      {
        V_LOCK();
        V_INT((int)v40, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v44,
          0x1000u,
          0,
          v41,
          v40[0],
          v40[1],
          v40[2],
          v40[3],
          v40[4],
          v40[5],
          v40[6],
          v41,
          "large diff in temperature between two readings(%d, %d), trimming local temp(%d, %d)",
          v28,
          v29 - *(unsigned __int8 *)(a1 + 952),
          v21,
          v22);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          171,
          "read_temperature_hns",
          20,
          332,
          20,
          v44);
        v13 = v29;
        v14 = v29 - *(unsigned __int8 *)(a1 + 952);
        *(v5 - 1) = v14;
        v26 = *(_DWORD *)(a1 + 228);
        v28 = v14;
LABEL_31:
        v15 = v6 + 2 * v26;
        v17 = v15;
        v18 = dword_172968[v15];
        v20 = dword_172968[v15 + 6];
        goto LABEL_17;
      }
      if ( v21 < v22 )
      {
        V_LOCK();
        V_INT((int)v42, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v44,
          0x1000u,
          0,
          v43,
          v42[0],
          v42[1],
          v42[2],
          v42[3],
          v42[4],
          v42[5],
          v42[6],
          v43,
          "large diff in temperature between two readings(%d, %d), trimming remote temp(%d, %d)",
          v29,
          *(unsigned __int8 *)(a1 + 952) + v28,
          v21,
          v22);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          171,
          "read_temperature_hns",
          20,
          337,
          20,
          v44);
        v14 = v28;
        v13 = *(unsigned __int8 *)(a1 + 952) + v28;
        *v5 = v13;
        v29 = v13;
        v26 = *(_DWORD *)(a1 + 228);
        goto LABEL_31;
      }
LABEL_17:
      ++v6;
      if ( v18 != v14 )
        dword_172968[v15] = v14;
      if ( v20 != v13 )
        dword_172968[v17 + 6] = v13;
      v2 += 6;
      v5 += 2;
    }
    while ( v27 != v6 );
  }
  return 0;
}
