int __fastcall sub_4EF1C(int a1, int a2, int a3, int a4)
{
  int v6; // r5
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a3 >= a4 || dword_193470 > 120 )
  {
    v6 = 0;
    dword_193470 = 0;
  }
  else if ( dword_193470 )
  {
    if ( a2 )
      v6 = 20;
    else
      v6 = 40;
    ++dword_193470;
  }
  else
  {
    v6 = 0;
  }
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "initial_cnt:%d, temp_max:%d, target_temp:%d, voltage_bias:%d", dword_193470, a3, a4, v6);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/dash_1766/machine_runtime_dash_1766.c",
    181,
    "calc_voltage_bias_dash_1766",
    27,
    72,
    20,
    v8);
  return v6;
}
