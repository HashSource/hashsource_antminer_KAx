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
  dword_193720 = a1;
  dword_193724 = a2;
  dword_193728 = a3;
  dword_19372C = a4;
  dword_193730 = a5;
  dword_193734 = a6;
  flt_193738 = a7;
  dword_19373C = a8;
  dword_193740 = a9;
  dword_193744 = a10;
  dword_193748 = a11;
  dword_19374C = a12;
  dword_193750 = a13;
  memset(&flt_196B48, 0, 0x2Cu);
  if ( dword_193720 == 2 )
  {
    LODWORD(flt_196B58) = dword_193744;
    flt_196B50 = (float)SLODWORD(flt_193738);
    LODWORD(flt_196B5C) = dword_193748;
    LODWORD(flt_196B60) = dword_19374C;
    flt_196B4C = (float)dword_193724;
    LODWORD(flt_196B64) = dword_193750;
    flt_196B48 = (float)dword_193728;
  }
  V_LOCK();
  logfmt_raw(
    var1004,
    0x1000u,
    0,
    1473728,
    flt_196B58,
    flt_196B5C,
    flt_196B60,
    flt_196B64,
    flt_196B50,
    flt_196B4C,
    flt_196B48);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/set_pwm_by_temp.c",
    156,
    "fan_control_info_init",
    21,
    344,
    40,
    var1004);
  return 0;
}
