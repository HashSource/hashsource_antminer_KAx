int __fastcall set_hardware_type(int a1)
{
  int *v1; // r3
  int v2; // r5
  int v4; // r1
  int *v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r12
  int v12; // r1
  int v13; // [sp+14h] [bp-1808h] BYREF
  _DWORD v14[510]; // [sp+18h] [bp-1804h] BYREF
  char v15[4100]; // [sp+818h] [bp-1004h] BYREF

  LOWORD(v1) = -23932;
  HIWORD(v1) = (unsigned int)&unk_18B744 >> 16;
  v2 = *v1;
  v13 = 0;
  if ( v2 )
  {
    fpga_read(0, &v13);
    v4 = v13;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v4 = v13 | 0x80000000;
        v13 |= 0x80000000;
      }
    }
    else
    {
      v4 = v13 & 0x7FFFFFFF;
      v13 &= ~0x80000000;
    }
    fpga_write(0, v4);
    return 0;
  }
  else
  {
    LOWORD(v6) = 18004;
    HIWORD(v6) = (unsigned int)"sic_sensor_addr OOM" >> 16;
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v10 = v6[3];
    v11 = v6[4];
    v14[0] = v7;
    v14[1] = v8;
    v14[2] = v9;
    v14[3] = v10;
    v14[4] = v11;
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, v14);
    V_UNLOCK();
    LOWORD(v12) = 17724;
    HIWORD(v12) = (unsigned int)"Read configuration fail for chain %d." >> 16;
    zlog(g_zc, v12, 174, "set_hardware_type", 17, 257, 100, v15);
    return -2;
  }
}
