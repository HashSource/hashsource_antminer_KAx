void *machine_runtime_ctrl_hns_2130()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r3
  int v3; // r1
  int v4; // r2
  int v6; // r1
  const char *v7; // r0
  _DWORD v8[30]; // [sp+0h] [bp-7Ch] BYREF

  memset(&v8[5], 0, 0x5Cu);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = -1796;
    LOWORD(v3) = -1948;
    HIWORD(v2) = (unsigned int)&loc_4F904 >> 16;
    HIWORD(v3) = (unsigned int)&loc_4F86C >> 16;
    LOWORD(v4) = 12612;
    v8[0] = v2;
    LOWORD(v2) = 12980;
    HIWORD(v4) = (unsigned int)&loc_5314C >> 16;
    HIWORD(v2) = (unsigned int)&loc_532BC >> 16;
    v8[1] = v3;
    LOWORD(v3) = 13556;
    v8[2] = v4;
    HIWORD(v3) = (unsigned int)&loc_534FC >> 16;
    LOWORD(v4) = -1292;
    v8[3] = v2;
    LOWORD(v2) = 13876;
    HIWORD(v4) = (unsigned int)sub_4FAFC >> 16;
    HIWORD(v2) = (unsigned int)&loc_5363C >> 16;
    v8[4] = v3;
    v8[6] = v4;
    v8[7] = v2;
    LOWORD(v4) = 19436;
    LOWORD(v2) = 10424;
    HIWORD(v4) = (unsigned int)&flt_54BF4 >> 16;
    HIWORD(v2) = (unsigned int)&loc_528C0 >> 16;
    v8[8] = start_freq_compensate_thread_base;
    LOWORD(v3) = 13908;
    v8[9] = v4;
    HIWORD(v3) = (unsigned int)&loc_5365C >> 16;
    LOWORD(v4) = 17732;
    v8[10] = v2;
    LOWORD(v2) = 19216;
    HIWORD(v4) = (unsigned int)&loc_5454C >> 16;
    HIWORD(v2) = (unsigned int)&loc_54B18 >> 16;
    v8[11] = v3;
    v8[12] = v4;
    v8[13] = v2;
    LOWORD(v4) = 15292;
    LOWORD(v2) = 10916;
    HIWORD(v4) = (unsigned int)&loc_53BC4 >> 16;
    HIWORD(v2) = (unsigned int)&loc_52AAC >> 16;
    v8[14] = reset_mining_base;
    v8[15] = v4;
    v8[16] = v2;
    LOWORD(v2) = -14096;
    HIWORD(v2) = (unsigned int)"sn" >> 16;
    v8[21] = 3000000;
    v8[20] = "tu_t_table";
    v8[25] = &loc_493E0;
    v8[29] = v2;
    v8[19] = 37;
    v8[26] = 1141882880;
    v8[28] = 1065353216;
    v8[22] = 20;
    v8[24] = 1700;
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
