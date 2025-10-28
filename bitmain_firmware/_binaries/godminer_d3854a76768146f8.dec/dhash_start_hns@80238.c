int __fastcall dhash_start_hns(int a1)
{
  char *v2; // r1
  int v3; // r3
  int result; // r0
  _DWORD v5[7]; // [sp+28h] [bp-1020h] BYREF
  int v6; // [sp+44h] [bp-1004h]
  char v7[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = 588;
  HIWORD(v2) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v5, v2, *(int *)(a1 + 232));
  logfmt_raw(v7, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, 1371904);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_hns_2130/backend_hns_2130.c",
    171,
    "dhash_start_hns",
    15,
    567,
    40,
    v7);
  v3 = *(unsigned __int8 *)(a1 + 436);
  result = 0;
  *(_BYTE *)(a1 + 237) = 1;
  if ( !v3 )
    *(_DWORD *)(a1 + 440) = (int)*(float *)(a1 + 940);
  return result;
}
