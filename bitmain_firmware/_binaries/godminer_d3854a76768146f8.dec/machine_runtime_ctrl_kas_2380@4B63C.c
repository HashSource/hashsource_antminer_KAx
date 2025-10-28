void *machine_runtime_ctrl_kas_2380()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v6; // r1
  const char *v7; // r0
  _DWORD v8[30]; // [sp+0h] [bp-7Ch] BYREF

  memset(&v8[4], 0, 0x60u);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = -23236;
    LOWORD(v3) = -22760;
    HIWORD(v2) = (unsigned int)&loc_4A604 >> 16;
    LOWORD(v4) = -14252;
    HIWORD(v3) = (unsigned int)&loc_4A7E0 >> 16;
    HIWORD(v4) = (unsigned int)&loc_4C91C >> 16;
    v8[0] = v2;
    v8[1] = v3;
    v8[2] = v4;
    LOWORD(v3) = -20744;
    LOWORD(v4) = -13268;
    HIWORD(v3) = (unsigned int)&loc_4AFC0 >> 16;
    HIWORD(v4) = (unsigned int)&loc_4CCF4 >> 16;
    v8[3] = start_voltage_monitor_base;
    LOWORD(v2) = -13596;
    v8[6] = v3;
    HIWORD(v2) = (unsigned int)&loc_4CBAC >> 16;
    LOWORD(v3) = -22988;
    v8[7] = v4;
    LOWORD(v4) = -16440;
    HIWORD(v3) = (unsigned int)&loc_4A6FC >> 16;
    HIWORD(v4) = (unsigned int)&loc_4C090 >> 16;
    v8[8] = v2;
    v8[9] = v3;
    v8[10] = v4;
    LOWORD(v3) = -20700;
    LOWORD(v4) = -7924;
    HIWORD(v3) = (unsigned int)&loc_4AFEC >> 16;
    HIWORD(v4) = (unsigned int)&loc_4E1D4 >> 16;
    v8[11] = set_frequency_with_voltage_kas;
    LOWORD(v2) = -7712;
    v8[12] = v3;
    HIWORD(v2) = (unsigned int)&loc_4E2A8 >> 16;
    LOWORD(v3) = -11852;
    v8[13] = v4;
    LOWORD(v4) = -15948;
    HIWORD(v3) = (unsigned int)&loc_4D27C >> 16;
    HIWORD(v4) = (unsigned int)&loc_4C27C >> 16;
    v8[14] = v2;
    v8[15] = v3;
    v8[16] = v4;
    LOWORD(v4) = 23176;
    HIWORD(v4) = (unsigned int)"uildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/hns_2130/machine_runtime_hns_2130.c" >> 16;
    v8[21] = 1500000;
    v8[20] = "t";
    v8[25] = &loc_30D40;
    v8[29] = v4;
    v8[28] = 1065353216;
    v8[26] = 1147617280;
    v8[19] = 35;
    v8[22] = 20;
    v8[24] = 1700;
    memcpy(v0, v8, 0x78u);
  }
  else
  {
    LOWORD(v6) = 22536;
    LOWORD(v7) = 5860;
    HIWORD(v6) = (unsigned int)"/build/godminer-origin_godminer-new/machine_runtime/dash_1766/machine_runtime_dash_1766.c" >> 16;
    HIWORD(v7) = (unsigned int)"failed" >> 16;
    printf(v7, v6);
  }
  return v1;
}
