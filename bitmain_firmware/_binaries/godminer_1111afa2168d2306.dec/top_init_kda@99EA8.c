int __fastcall top_init_kda(int a1)
{
  int v2; // r4
  char *v3; // r1
  int v4; // r9
  int v5; // r4
  int v6; // r0
  int v7; // r1
  char v8; // r3
  void (__fastcall *v9)(int, int, int); // r3
  char *v10; // r1
  int v11; // r1
  _DWORD v13[4]; // [sp+30h] [bp-1054h] BYREF
  _DWORD v14[7]; // [sp+40h] [bp-1044h] BYREF
  int v15; // [sp+5Ch] [bp-1028h]
  _DWORD v16[7]; // [sp+60h] [bp-1024h] BYREF
  int v17; // [sp+7Ch] [bp-1008h]
  char v18[4100]; // [sp+80h] [bp-1004h] BYREF

  LOWORD(v2) = 140;
  V_LOCK();
  LOWORD(v3) = 27796;
  HIWORD(v3) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v14, v3, *(int *)(a1 + 256));
  HIWORD(v2) = (unsigned int)"Setting_read_sensor_temp_local_on_ctrlboard_KS5_2382" >> 16;
  logfmt_raw(v18, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kda_2110/backend_kda_2110.c",
    171,
    "top_init_kda",
    12,
    462,
    40,
    v18);
  v4 = *(_DWORD *)(a1 + 352);
  v5 = *(_DWORD *)(a1 + 504);
  v6 = sub_145388(256, (unsigned __int8)v4);
  if ( (_BYTE)v4 )
  {
    v7 = v5 - 1;
    v8 = 0;
    do
    {
      *(_BYTE *)++v7 = v8;
      v8 += v6;
    }
    while ( v7 != v5 - 1 + (unsigned __int8)v4 );
    v5 = *(_DWORD *)(a1 + 504);
  }
  v9 = *(void (__fastcall **)(int, int, int))(a1 + 268);
  *(_DWORD *)(a1 + 444) = v6;
  v9(a1, v5, v4);
  sub_96488(a1, 0);
  v13[0] = 5381904;
  v13[2] = 1835009;
  v13[1] = 0;
  v13[3] = 0;
  V_LOCK();
  LOWORD(v10) = 27796;
  HIWORD(v10) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v16, v10, *(int *)(a1 + 256));
  logfmt_raw(
    v18,
    0x1000u,
    0,
    v17,
    v16[0],
    v16[1],
    v16[2],
    v16[3],
    v16[4],
    v16[5],
    v16[6],
    v17,
    "set misc ctrl %08x",
    v13[0]);
  V_UNLOCK();
  LOWORD(v11) = -23376;
  HIWORD(v11) = (unsigned int)"k: %s" >> 16;
  zlog(g_zc, v11, 150, "ChipSetting_misc_ctrl_KDA_2110", 30, 286, 40, v18);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v13);
  usleep(0x2710u);
  return 0;
}
