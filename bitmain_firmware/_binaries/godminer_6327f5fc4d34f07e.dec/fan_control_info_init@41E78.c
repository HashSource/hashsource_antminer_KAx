int __fastcall fan_control_info_init(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  char var1004[4104]; // [sp+38h] [bp-1004h] BYREF
  int varg_r0; // [sp+1048h] [bp+Ch]
  int varg_r1; // [sp+104Ch] [bp+10h]
  int varg_r2; // [sp+1050h] [bp+14h]
  int varg_r3; // [sp+1054h] [bp+18h]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  dword_106408 = a1;
  dword_10640C = a2;
  dword_106410 = a3;
  dword_106414 = a4;
  dword_106418 = a5;
  dword_10641C = a6;
  flt_106420 = a7;
  dword_106424 = a8;
  dword_106428 = a9;
  dword_10642C = a10;
  dword_106430 = a11;
  dword_106434 = a12;
  dword_106438 = a13;
  memset(&flt_108900, 0, 0x2Cu);
  if ( dword_106408 == 2 )
  {
    LODWORD(flt_108910) = dword_10642C;
    flt_108908 = (float)SLODWORD(flt_106420);
    LODWORD(flt_108914) = dword_106430;
    LODWORD(flt_108918) = dword_106434;
    flt_108904 = (float)dword_10640C;
    LODWORD(flt_10891C) = dword_106438;
    flt_108900 = (float)dword_106410;
  }
  V_LOCK();
  logfmt_raw(
    var1004,
    0x1000u,
    0,
    "startup P: %f, p: %f, i: %f, d: %f   target: %f, min %f, max %f",
    flt_108910,
    flt_108914,
    flt_108918,
    flt_10891C,
    flt_108908,
    flt_108904,
    flt_108900);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/set_pwm_by_temp.c",
    156,
    "fan_control_info_init",
    21,
    331,
    40,
    var1004);
  return 0;
}
