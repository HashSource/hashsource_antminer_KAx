int uart_init()
{
  _DWORD *v0; // r3
  int *v2; // lr
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  _DWORD v11[7]; // [sp+10h] [bp-1804h] BYREF
  char v12; // [sp+2Ch] [bp-17E8h]
  char v13[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v0) = -23932;
  HIWORD(v0) = (unsigned int)&unk_18B744 >> 16;
  if ( *v0 )
    return 0;
  LOWORD(v2) = 18152;
  HIWORD(v2) = (unsigned int)"ot match" >> 16;
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  v2 += 4;
  v11[0] = v3;
  v11[1] = v4;
  v11[2] = v5;
  v11[3] = v6;
  v7 = v2[1];
  v8 = v2[2];
  v9 = v2[3];
  v11[4] = *v2;
  v11[5] = v7;
  v11[6] = v8;
  v12 = v9;
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, v11);
  V_UNLOCK();
  LOWORD(v10) = 21372;
  HIWORD(v10) = (unsigned int)"ns/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/chip_reg_io_base.c" >> 16;
  zlog(g_zc, v10, 172, "uart_init", 9, 342, 100, v13);
  return -1;
}
