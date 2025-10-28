void fpga_uninit()
{
  int *v0; // r12
  int v1; // r0
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r12
  int v10; // r1
  int *v11; // r12
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r12
  int v21; // r1
  int v22; // [sp+10h] [bp-1804h] BYREF
  int v23; // [sp+14h] [bp-1800h]
  int v24; // [sp+18h] [bp-17FCh]
  int v25; // [sp+1Ch] [bp-17F8h]
  int v26; // [sp+20h] [bp-17F4h]
  int v27; // [sp+24h] [bp-17F0h]
  int v28; // [sp+28h] [bp-17ECh]
  int v29; // [sp+2Ch] [bp-17E8h]
  char v30; // [sp+30h] [bp-17E4h]
  char v31[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_18A3DC )
  {
    if ( munmap((void *)dword_18A3E4, 0x1200u) < 0 )
    {
      LOWORD(v0) = 18908;
      HIWORD(v0) = (unsigned int)"libration_data" >> 16;
      v1 = *v0;
      v2 = v0[1];
      v3 = v0[2];
      v4 = v0[3];
      v0 += 4;
      v22 = v1;
      v23 = v2;
      v24 = v3;
      v25 = v4;
      v5 = *v0;
      v6 = v0[1];
      v7 = v0[2];
      v8 = v0[3];
      v9 = v0[4];
      v26 = v5;
      v27 = v6;
      v28 = v7;
      v29 = v8;
      v30 = v9;
      V_LOCK();
      logfmt_raw(v31, 0x1000u, 0, &v22);
      V_UNLOCK();
      LOWORD(v10) = 18472;
      HIWORD(v10) = (unsigned int)"456789ABCDEFGHIJKLMNOPQRSTUVWXYZbitmain_power_version" >> 16;
      zlog(g_zc, v10, 172, "fpga_uninit", 11, 95, 100, v31);
    }
    if ( munmap((void *)dword_18A3E8, 0x1000000u) < 0 )
    {
      LOWORD(v11) = 18944;
      HIWORD(v11) = (unsigned int)"libration_data" >> 16;
      v12 = *v11;
      v13 = v11[1];
      v14 = v11[2];
      v15 = v11[3];
      v11 += 4;
      v22 = v12;
      v23 = v13;
      v24 = v14;
      v25 = v15;
      v16 = *v11;
      v17 = v11[1];
      v18 = v11[2];
      v19 = v11[3];
      v20 = v11[4];
      v26 = v16;
      v27 = v17;
      v28 = v18;
      v29 = v19;
      v30 = v20;
      V_LOCK();
      logfmt_raw(v31, 0x1000u, 0, &v22);
      V_UNLOCK();
      LOWORD(v21) = 18472;
      HIWORD(v21) = (unsigned int)"456789ABCDEFGHIJKLMNOPQRSTUVWXYZbitmain_power_version" >> 16;
      zlog(g_zc, v21, 172, "fpga_uninit", 11, 101, 100, v31);
    }
    dword_18A3DC = 0;
    close(dword_18A3E0);
  }
}
