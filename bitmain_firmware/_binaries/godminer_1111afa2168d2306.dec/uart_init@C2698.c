int uart_init()
{
  int *v1; // lr
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  _DWORD v10[7]; // [sp+10h] [bp-1804h] BYREF
  char v11; // [sp+2Ch] [bp-17E8h]
  char v12[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited )
    return 0;
  LOWORD(v1) = 22408;
  HIWORD(v1) = (unsigned int)"device/hal/platform/7007/7007_fpga.c" >> 16;
  v2 = *v1;
  v3 = v1[1];
  v4 = v1[2];
  v5 = v1[3];
  v1 += 4;
  v10[0] = v2;
  v10[1] = v3;
  v10[2] = v4;
  v10[3] = v5;
  v6 = v1[1];
  v7 = v1[2];
  v8 = v1[3];
  v10[4] = *v1;
  v10[5] = v6;
  v10[6] = v7;
  v11 = v8;
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, v10);
  V_UNLOCK();
  LOWORD(v9) = 25628;
  HIWORD(v9) = (unsigned int)"%d malloc buffer error" >> 16;
  zlog(g_zc, v9, 172, "uart_init", 9, 344, 100, v12);
  return -1;
}
