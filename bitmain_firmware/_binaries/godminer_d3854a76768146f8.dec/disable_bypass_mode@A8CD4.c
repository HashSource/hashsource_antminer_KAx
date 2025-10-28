int disable_bypass_mode()
{
  int *v0; // r3
  int v1; // r5
  int *v3; // r12
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r12
  int v9; // r1
  int v10; // [sp+14h] [bp-1808h] BYREF
  _DWORD v11[510]; // [sp+18h] [bp-1804h] BYREF
  char v12[4100]; // [sp+818h] [bp-1004h] BYREF

  LOWORD(v0) = -23932;
  HIWORD(v0) = (unsigned int)&unk_18B744 >> 16;
  v1 = *v0;
  v10 = 0;
  if ( v1 )
  {
    fpga_read(0, &v10);
    v10 &= ~0x20000000u;
    fpga_write(0, v10);
    return 0;
  }
  else
  {
    LOWORD(v3) = 18004;
    HIWORD(v3) = (unsigned int)"sic_sensor_addr OOM" >> 16;
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    v8 = v3[4];
    v11[0] = v4;
    v11[1] = v5;
    v11[2] = v6;
    v11[3] = v7;
    v11[4] = v8;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    LOWORD(v9) = 17724;
    HIWORD(v9) = (unsigned int)"Read configuration fail for chain %d." >> 16;
    zlog(g_zc, v9, 174, "disable_bypass_mode", 19, 294, 100, v12);
    return -2;
  }
}
