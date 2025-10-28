int __fastcall set_fan_control_1(int a1)
{
  int *v1; // r3
  int v2; // r4
  int *v4; // r12
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r12
  int v10; // r1
  int v11; // [sp+14h] [bp-1804h] BYREF
  _DWORD v12[510]; // [sp+18h] [bp-1800h] BYREF
  char v13[4096]; // [sp+818h] [bp-1000h] BYREF

  LOWORD(v1) = -23932;
  HIWORD(v1) = (unsigned int)&unk_18B744 >> 16;
  v2 = *v1;
  v11 = 0;
  if ( v2 )
  {
    fpga_write(160, a1);
    return fpga_read(160, &v11);
  }
  else
  {
    LOWORD(v4) = 18004;
    HIWORD(v4) = (unsigned int)"sic_sensor_addr OOM" >> 16;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v8 = v4[3];
    v9 = v4[4];
    v12[0] = v5;
    v12[1] = v6;
    v12[2] = v7;
    v12[3] = v8;
    v12[4] = v9;
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    LOWORD(v10) = 17724;
    HIWORD(v10) = (unsigned int)"Read configuration fail for chain %d." >> 16;
    return zlog(g_zc, v10, 174, "set_fan_control_1", 17, 1015, 100, v13);
  }
}
