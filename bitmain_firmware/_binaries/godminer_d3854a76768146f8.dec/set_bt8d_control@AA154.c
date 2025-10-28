int __fastcall set_bt8d_control(int a1)
{
  _DWORD *v1; // r3
  int *v3; // r12
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r12
  int v9; // r1
  _DWORD v10[512]; // [sp+10h] [bp-1804h] BYREF
  char v11[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v1) = -23932;
  HIWORD(v1) = (unsigned int)&unk_18B744 >> 16;
  if ( *v1 )
    return fpga_write(60, a1);
  LOWORD(v3) = 18004;
  HIWORD(v3) = (unsigned int)"sic_sensor_addr OOM" >> 16;
  v4 = *v3;
  v5 = v3[1];
  v6 = v3[2];
  v7 = v3[3];
  v8 = v3[4];
  v10[0] = v4;
  v10[1] = v5;
  v10[2] = v6;
  v10[3] = v7;
  v10[4] = v8;
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, v10);
  V_UNLOCK();
  LOWORD(v9) = 17724;
  HIWORD(v9) = (unsigned int)"Read configuration fail for chain %d." >> 16;
  return zlog(g_zc, v9, 174, "set_bt8d_control", 16, 1042, 100, v11);
}
