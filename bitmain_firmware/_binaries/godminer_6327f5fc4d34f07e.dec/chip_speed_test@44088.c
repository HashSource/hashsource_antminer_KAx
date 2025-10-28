int __fastcall chip_speed_test(_DWORD *a1, int a2)
{
  void (__fastcall *v3)(_DWORD *, float *); // r2
  int result; // r0
  int v6; // r12
  unsigned int *v7; // r2
  int v8; // r3
  float v9; // s14
  float v10; // [sp+14h] [bp-1008h] BYREF
  char v11[4100]; // [sp+18h] [bp-1004h] BYREF

  v3 = (void (__fastcall *)(_DWORD *, float *))a1[33];
  v10 = 0.0;
  v3(a1, &v10);
  v10 = v10 * 120.0;
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "qualify nonce count %f\n", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    193,
    "chip_speed_test",
    15,
    31,
    20,
    v11);
  get_miner_working_status((int)v11);
  if ( (int)a1[70] <= 0 )
    return 0;
  v6 = (unsigned __int8)v11[6];
  result = 0;
  v7 = (unsigned int *)a1[106];
  v8 = 0;
  v9 = v10;
  do
  {
    if ( v6 )
    {
      *(_DWORD *)(a2 + 4 * v8) = 2;
      result = 12;
    }
    else if ( (float)*v7 < v9 )
    {
      result = 12;
      if ( *v7 )
        *(_DWORD *)(a2 + 4 * v8) = 3;
      else
        *(_DWORD *)(a2 + 4 * v8) = 2;
    }
    else
    {
      *(_DWORD *)(a2 + 4 * v8) = 0;
    }
    *v7++ = 0;
    ++v8;
  }
  while ( a1[70] > v8 );
  return result;
}
