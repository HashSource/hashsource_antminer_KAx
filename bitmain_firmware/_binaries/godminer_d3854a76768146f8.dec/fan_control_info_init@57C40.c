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
  dword_1726DC = a1;
  dword_1726E0 = a2;
  dword_1726E4 = a3;
  dword_1726E8 = a4;
  dword_1726EC = a5;
  dword_1726F0 = a6;
  flt_1726F4 = a7;
  dword_1726F8 = a8;
  dword_1726FC = a9;
  dword_172700 = a10;
  dword_172704 = a11;
  dword_172708 = a12;
  dword_17270C = a13;
  memset(&flt_175280, 0, 0x2Cu);
  if ( dword_1726DC == 2 )
  {
    LODWORD(flt_175290) = dword_172700;
    flt_175288 = (float)SLODWORD(flt_1726F4);
    LODWORD(flt_175294) = dword_172704;
    LODWORD(flt_175298) = dword_172708;
    flt_175284 = (float)dword_1726E0;
    LODWORD(flt_17529C) = dword_17270C;
    flt_175280 = (float)dword_1726E4;
  }
  V_LOCK();
  logfmt_raw(
    var1004,
    0x1000u,
    0,
    1345720,
    flt_175290,
    flt_175294,
    flt_175298,
    flt_17529C,
    flt_175288,
    flt_175284,
    flt_175280);
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
