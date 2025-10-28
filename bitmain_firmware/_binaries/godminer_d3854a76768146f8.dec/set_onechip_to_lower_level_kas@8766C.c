int __fastcall set_onechip_to_lower_level_kas(int a1, int a2)
{
  int v4; // r3
  void (__fastcall *v5)(int, int *); // r2
  int v6; // r3
  void (__fastcall *v7)(int, int *); // r2
  _DWORD v9[7]; // [sp+28h] [bp-1020h] BYREF
  int v10; // [sp+44h] [bp-1004h]
  int v11; // [sp+48h] [bp-1000h] BYREF
  int v12; // [sp+4Ch] [bp-FFCh]
  int v13; // [sp+50h] [bp-FF8h]
  int v14; // [sp+54h] [bp-FF4h]

  V_LOCK();
  V_INT((int)v9, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    (char *)&v11,
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
    "softreset chip id %d",
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "set_onechip_to_lower_level_kas",
    30,
    657,
    40,
    &v11);
  v4 = *(_DWORD *)(a1 + 332);
  v13 = 4456448;
  v14 = 0;
  v12 = 0;
  v11 = 3;
  v5 = *(void (__fastcall **)(int, int *))(a1 + 248);
  BYTE1(v13) = v4 * a2;
  v5(a1, &v11);
  v6 = *(_DWORD *)(a1 + 332);
  v13 = 655360;
  v14 = 255;
  v12 = 0;
  v11 = 0;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 252);
  BYTE1(v13) = v6 * a2;
  v7(a1, &v11);
  usleep((__useconds_t)&stru_13878.st_size);
  sub_845E4((int *)a1, 36);
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 196))(a1, 0, a2);
  return 0;
}
