int __fastcall close_one_chip_cores_kas(int a1, int a2)
{
  int v4; // r3
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  _DWORD v8[2]; // [sp+48h] [bp-1000h] BYREF
  int v9; // [sp+50h] [bp-FF8h]
  int v10; // [sp+54h] [bp-FF4h]

  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    (char *)v8,
    0x1000u,
    0,
    v7,
    v6[0],
    v6[1],
    v6[2],
    v6[3],
    v6[4],
    v6[5],
    v6[6],
    v7,
    "close chip %d's cores",
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "close_one_chip_cores_kas",
    24,
    676,
    40,
    v8);
  v4 = *(_DWORD *)(a1 + 332);
  v9 = 1835008;
  v10 = 0;
  v8[1] = 0;
  v8[0] = -1069408496;
  BYTE1(v9) = v4 * a2;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v8);
  return 0;
}
