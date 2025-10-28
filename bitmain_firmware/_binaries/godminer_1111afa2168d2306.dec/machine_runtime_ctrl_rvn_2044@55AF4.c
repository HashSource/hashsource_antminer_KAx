void *machine_runtime_ctrl_rvn_2044()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v6; // r1
  const char *v7; // r0
  _DWORD v8[30]; // [sp+0h] [bp-78h] BYREF

  memset(&v8[4], 0, 0x60u);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = 23276;
    LOWORD(v3) = 23276;
    HIWORD(v2) = (unsigned int)machine_runtime_ctrl_rvn_2044 >> 16;
    LOWORD(v4) = 12612;
    HIWORD(v3) = (unsigned int)machine_runtime_ctrl_rvn_2044 >> 16;
    HIWORD(v4) = (unsigned int)&loc_5314C >> 16;
    v8[0] = v2;
    v8[1] = v3;
    v8[2] = v4;
    LOWORD(v3) = 13876;
    LOWORD(v4) = 13268;
    HIWORD(v3) = (unsigned int)&loc_5363C >> 16;
    HIWORD(v4) = (unsigned int)&loc_533DC >> 16;
    v8[3] = start_voltage_monitor_base;
    LOWORD(v2) = 19436;
    v8[7] = v3;
    HIWORD(v2) = (unsigned int)&flt_54BF4 >> 16;
    LOWORD(v3) = 10424;
    v8[8] = v4;
    LOWORD(v4) = 13908;
    HIWORD(v3) = (unsigned int)&loc_528C0 >> 16;
    HIWORD(v4) = (unsigned int)&loc_5365C >> 16;
    v8[9] = v2;
    v8[10] = v3;
    v8[11] = v4;
    LOWORD(v3) = 19216;
    LOWORD(v4) = 19428;
    HIWORD(v3) = (unsigned int)&loc_54B18 >> 16;
    HIWORD(v4) = (unsigned int)calc_freq_compensate_by_temp_base >> 16;
    v8[12] = start_mining_base;
    LOWORD(v2) = 15292;
    v8[13] = v3;
    HIWORD(v2) = (unsigned int)&loc_53BC4 >> 16;
    LOWORD(v3) = 10916;
    v8[14] = v4;
    LOWORD(v4) = -14084;
    HIWORD(v3) = (unsigned int)&loc_52AAC >> 16;
    HIWORD(v4) = (unsigned int)&unk_14C90C >> 16;
    v8[15] = v2;
    v8[16] = v3;
    v8[29] = v4;
    v8[19] = 35;
    v8[26] = 1145569280;
    v8[28] = 1065353216;
    v8[20] = 19200;
    v8[21] = 19200;
    v8[22] = 20;
    v8[24] = 1480;
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
