int platform_init()
{
  int v0; // r5
  int *v2; // r3
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r1
  int *v9; // r12
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r12
  int v15; // r0
  int v16; // r3
  int v17; // r1
  int *v18; // r12
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r12
  int v24; // [sp+14h] [bp-1804h] BYREF
  int s; // [sp+18h] [bp-1800h] BYREF
  int v26; // [sp+1Ch] [bp-17FCh]
  int v27; // [sp+20h] [bp-17F8h]
  int v28; // [sp+24h] [bp-17F4h]
  char v29; // [sp+28h] [bp-17F0h]
  char v30[4096]; // [sp+818h] [bp-1000h] BYREF

  if ( platform_inited )
    return 0;
  LOWORD(v2) = 17924;
  HIWORD(v2) = (unsigned int)"hip_die OOM" >> 16;
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  s = v3;
  v26 = v4;
  v27 = v5;
  LOWORD(v28) = v6;
  V_LOCK();
  logfmt_raw(v30, 0x1000u, 0, &s);
  V_UNLOCK();
  LOWORD(v7) = 17724;
  HIWORD(v7) = (unsigned int)"Read configuration fail for chain %d." >> 16;
  zlog(g_zc, v7, 174, "platform_init", 13, 63, 60, v30);
  if ( fpga_init() )
  {
    LOWORD(v9) = 17940;
    HIWORD(v9) = (unsigned int)"de chip_marking OOM" >> 16;
    v0 = -1;
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    v13 = v9[3];
    v14 = v9[4];
    s = v10;
    v26 = v11;
    v27 = v12;
    v28 = v13;
    v29 = v14;
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, &s);
    V_UNLOCK();
    v15 = g_zc;
    v16 = 67;
LABEL_9:
    LOWORD(v17) = 17724;
    HIWORD(v17) = (unsigned int)"Read configuration fail for chain %d." >> 16;
    zlog(v15, v17, 174, "platform_init", 13, v16, 100, v30);
    return v0;
  }
  if ( gpio_init() )
  {
    LOWORD(v18) = 17960;
    HIWORD(v18) = (unsigned int)"encode Chip FT Program Version OOM" >> 16;
    v0 = -2;
    v19 = *v18;
    v20 = v18[1];
    v21 = v18[2];
    v22 = v18[3];
    v23 = v18[4];
    s = v19;
    v26 = v20;
    v27 = v21;
    v28 = v22;
    v29 = v23;
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, &s);
    V_UNLOCK();
    v15 = g_zc;
    v16 = 73;
    goto LABEL_9;
  }
  memset(&unk_18A288, 0, 0x124u);
  v24 = 0;
  fpga_read(0, &v24);
  v24 |= 0x20000000u;
  snprintf((char *)&s, 0x800u, "HARDWARE_VERSION = 0x%x", v24);
  V_LOCK();
  logfmt_raw(v30, 0x1000u, 0, &s);
  V_UNLOCK();
  LOWORD(v8) = 17724;
  HIWORD(v8) = (unsigned int)"Read configuration fail for chain %d." >> 16;
  zlog(g_zc, v8, 174, "platform_init", 13, 86, 40, v30);
  fpga_write(0, v24);
  platform_inited = 1;
  fan_init();
  uart_init();
  return 0;
}
