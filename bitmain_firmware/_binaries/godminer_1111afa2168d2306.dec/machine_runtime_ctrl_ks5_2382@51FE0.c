void *machine_runtime_ctrl_ks5_2382()
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
    LOWORD(v2) = 4300;
    LOWORD(v3) = 4776;
    HIWORD(v2) = (unsigned int)&loc_510D4 >> 16;
    LOWORD(v4) = 12612;
    HIWORD(v3) = (unsigned int)&loc_512B0 >> 16;
    HIWORD(v4) = (unsigned int)&loc_5314C >> 16;
    v8[0] = v2;
    v8[1] = v3;
    v8[2] = v4;
    LOWORD(v3) = 8116;
    LOWORD(v4) = 13876;
    HIWORD(v3) = (unsigned int)&loc_51FBC >> 16;
    HIWORD(v4) = (unsigned int)&loc_5363C >> 16;
    v8[3] = start_voltage_monitor_base;
    LOWORD(v2) = 13268;
    v8[6] = v3;
    HIWORD(v2) = (unsigned int)&loc_533DC >> 16;
    LOWORD(v3) = 4548;
    v8[7] = v4;
    LOWORD(v4) = 10424;
    HIWORD(v3) = (unsigned int)&loc_511CC >> 16;
    HIWORD(v4) = (unsigned int)&loc_528C0 >> 16;
    v8[8] = v2;
    v8[9] = v3;
    v8[10] = v4;
    LOWORD(v3) = 5072;
    LOWORD(v4) = 19216;
    HIWORD(v3) = (unsigned int)&loc_513D8 >> 16;
    HIWORD(v4) = (unsigned int)&loc_54B18 >> 16;
    v8[11] = set_frequency_with_voltage_ks5;
    LOWORD(v2) = 19428;
    v8[12] = v3;
    HIWORD(v2) = (unsigned int)calc_freq_compensate_by_temp_base >> 16;
    LOWORD(v3) = 15292;
    v8[13] = v4;
    LOWORD(v4) = 10916;
    HIWORD(v3) = (unsigned int)&loc_53BC4 >> 16;
    HIWORD(v4) = (unsigned int)&loc_52AAC >> 16;
    v8[14] = v2;
    v8[15] = v3;
    v8[16] = v4;
    LOWORD(v4) = -14096;
    HIWORD(v4) = (unsigned int)"sn" >> 16;
    v8[21] = 3000000;
    v8[20] = "tu_t_table";
    v8[25] = &loc_30D40;
    v8[29] = v4;
    v8[28] = 1065353216;
    v8[26] = 1143930880;
    v8[19] = 35;
    v8[22] = 20;
    v8[24] = 1500;
    memcpy(v0, v8, 0x78u);
  }
  else
  {
    LOWORD(v6) = -14736;
    LOWORD(v7) = 32664;
    HIWORD(v6) = (unsigned int)"ime" >> 16;
    HIWORD(v7) = (unsigned int)"2.0.0_release_clean_master_02407a8dcb3ba67d09c39f48bef282a34fa1f935_May 28 2024 09:51:18" >> 16;
    printf(v7, v6);
  }
  return v1;
}
