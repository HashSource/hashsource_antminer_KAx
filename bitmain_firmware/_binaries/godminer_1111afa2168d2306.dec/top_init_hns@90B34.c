int __fastcall top_init_hns(int *a1)
{
  int v2; // r7
  int v3; // r4
  int v4; // r0
  int v5; // r1
  char v6; // r3
  void (__fastcall *v7)(int *, int, int); // r3
  _DWORD v9[7]; // [sp+28h] [bp-1024h] BYREF
  int v10; // [sp+44h] [bp-1008h]
  char v11[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v9, "chain", a1[64]);
  logfmt_raw(v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "top_init_hns");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_hns_2130/backend_hns_2130.c",
    171,
    "top_init_hns",
    12,
    524,
    40,
    v11);
  v2 = a1[88];
  v3 = a1[126];
  v4 = sub_145388(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    v5 = v3 - 1;
    v6 = 0;
    do
    {
      *(_BYTE *)++v5 = v6;
      v6 += v4;
    }
    while ( v5 != v3 - 1 + (unsigned __int8)v2 );
    v3 = a1[126];
  }
  v7 = (void (__fastcall *)(int *, int, int))a1[67];
  a1[111] = v4;
  v7(a1, v3, v2);
  sub_8CF0C((int)a1, 0);
  sub_90A28((int)a1);
  return 0;
}
