void *machine_runtime_ctrl_dash_1766()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r3
  int v3; // r1
  int v4; // r2
  int v6; // r1
  const char *v7; // r0
  _DWORD v8[30]; // [sp+0h] [bp-7Ch] BYREF

  memset(&v8[4], 0, 0x68u);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = -26924;
    LOWORD(v3) = -26540;
    HIWORD(v2) = (unsigned int)&loc_4979C >> 16;
    HIWORD(v3) = (unsigned int)&loc_4991C >> 16;
    LOWORD(v4) = -14252;
    v8[0] = v2;
    LOWORD(v2) = -13884;
    HIWORD(v4) = (unsigned int)&loc_4C91C >> 16;
    HIWORD(v2) = (unsigned int)&loc_4CA8C >> 16;
    v8[1] = v3;
    LOWORD(v3) = -26584;
    v8[2] = v4;
    HIWORD(v3) = (unsigned int)&loc_498F0 >> 16;
    LOWORD(v4) = -13268;
    v8[3] = v2;
    LOWORD(v2) = -16440;
    HIWORD(v4) = (unsigned int)&loc_4CCF4 >> 16;
    HIWORD(v2) = (unsigned int)&loc_4C090 >> 16;
    v8[6] = v3;
    v8[7] = v4;
    v8[10] = v2;
    LOWORD(v4) = -9412;
    LOWORD(v2) = -7924;
    HIWORD(v4) = (unsigned int)&loc_4DC04 >> 16;
    HIWORD(v2) = (unsigned int)&loc_4E1D4 >> 16;
    v8[11] = set_frequency_with_voltage_base;
    LOWORD(v3) = -7712;
    v8[12] = v4;
    HIWORD(v3) = (unsigned int)&loc_4E2A8 >> 16;
    LOWORD(v4) = -11852;
    v8[13] = v2;
    LOWORD(v2) = -15948;
    HIWORD(v4) = (unsigned int)&loc_4D27C >> 16;
    HIWORD(v2) = (unsigned int)&loc_4C27C >> 16;
    v8[14] = v3;
    v8[15] = v4;
    v8[16] = v2;
    v8[20] = "t";
    v8[21] = 3000000;
    v8[25] = &loc_30D40;
    v8[19] = 51;
    v8[26] = 1142292480;
    v8[28] = 1065353216;
    v8[22] = 17;
    v8[24] = 1500;
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
