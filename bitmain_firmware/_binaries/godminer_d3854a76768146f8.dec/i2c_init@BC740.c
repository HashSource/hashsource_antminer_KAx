int i2c_init()
{
  int *v0; // r3
  int v1; // r4
  int v2; // r4
  int *v3; // r6
  int v5; // r0
  int *v6; // lr
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // [sp+14h] [bp-1804h] BYREF
  _DWORD v16[7]; // [sp+18h] [bp-1800h] BYREF
  char v17; // [sp+34h] [bp-17E4h]
  _DWORD v18[1024]; // [sp+818h] [bp-1000h] BYREF

  LOWORD(v0) = -23932;
  HIWORD(v0) = (unsigned int)&unk_18B744 >> 16;
  v1 = *v0;
  v15 = -1;
  if ( v1 )
  {
    v2 = dword_18B190;
    if ( dword_18B190 )
    {
      v3 = (int *)dword_18B194;
    }
    else
    {
      LOWORD(v5) = -14876;
      HIWORD(v5) = (unsigned int)&loc_BDDC4 >> 16;
      v3 = new_c_map(v5, 0, 0);
      dword_18B194 = (int)v3;
      pthread_mutex_init(&stru_18B198, 0);
      v2 = dword_18B190;
    }
    dword_18B190 = v2 + 1;
    v15 = v2 + 1;
    v18[0] = 0;
    v18[1] = 0;
    insert_c_map(v3, &v15, 4u, v18, 8u);
    return v15;
  }
  else
  {
    LOWORD(v6) = 18152;
    HIWORD(v6) = (unsigned int)"ot match" >> 16;
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v10 = v6[3];
    v6 += 4;
    v16[0] = v7;
    v16[1] = v8;
    v16[2] = v9;
    v16[3] = v10;
    v11 = v6[1];
    v12 = v6[2];
    v13 = v6[3];
    v16[4] = *v6;
    v16[5] = v11;
    v16[6] = v12;
    v17 = v13;
    V_LOCK();
    logfmt_raw((char *)v18, 0x1000u, 0, v16);
    V_UNLOCK();
    LOWORD(v14) = 31140;
    HIWORD(v14) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
    zlog(g_zc, v14, 171, "i2c_init", 8, 40, 100, v18);
    return -2;
  }
}
