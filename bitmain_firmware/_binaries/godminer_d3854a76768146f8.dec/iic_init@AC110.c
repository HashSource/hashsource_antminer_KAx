int __fastcall iic_init(int a1)
{
  pthread_mutex_t *v2; // r0
  int v3; // r5
  const char *v4; // r2
  int v5; // r3
  int v6; // r1
  int *v7; // r12
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r0
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r0
  int *v19; // lr
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // lr
  int v25; // r3
  int v26; // r1
  int *v27; // r2
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r1
  int *v33; // r12
  int v34; // r0
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int v38; // r12
  int *v39; // lr
  int v40; // r0
  int v41; // r1
  int v42; // r2
  int v43; // r3
  int v44; // lr
  int v45; // r3
  int v46; // r1
  int s; // [sp+10h] [bp-1800h] BYREF
  int v48; // [sp+14h] [bp-17FCh]
  int v49; // [sp+18h] [bp-17F8h]
  int v50; // [sp+1Ch] [bp-17F4h]
  int v51; // [sp+20h] [bp-17F0h]
  char v52; // [sp+24h] [bp-17ECh]
  char v53[4096]; // [sp+810h] [bp-1000h] BYREF

  LOWORD(v2) = -23508;
  HIWORD(v2) = (unsigned int)&unk_18B8EC >> 16;
  if ( pthread_mutex_lock(v2) )
  {
    LOWORD(v39) = 20336;
    HIWORD(v39) = (unsigned int)"slave: %d, addr: %d" >> 16;
    v40 = *v39;
    v41 = v39[1];
    v42 = v39[2];
    v43 = v39[3];
    v3 = -4;
    v44 = v39[4];
    s = v40;
    v48 = v41;
    v49 = v42;
    v50 = v43;
    LOWORD(v51) = v44;
    BYTE2(v51) = BYTE2(v44);
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v45) = 20256;
    LOWORD(v46) = 20356;
    HIWORD(v45) = (unsigned int)" but chain %d,slave_addr %d open failed" >> 16;
    HIWORD(v46) = (unsigned int)"fail to read tsensor by iic, chain: %d, slave: %d, addr: %d" >> 16;
    zlog(g_zc, v46, 171, v45, 8, 20, 100, v53);
    return v3;
  }
  if ( a1 )
  {
    v3 = i2c_init();
    if ( v3 < 0 )
    {
      LOWORD(v19) = 20528;
      HIWORD(v19) = (unsigned int)&unk_156D30 >> 16;
      v20 = *v19;
      v21 = v19[1];
      v22 = v19[2];
      v23 = v19[3];
      v3 = -1;
      v24 = v19[4];
      s = v20;
      v48 = v21;
      v49 = v22;
      v50 = v23;
      LOWORD(v51) = v24;
      BYTE2(v51) = BYTE2(v24);
      V_LOCK();
      logfmt_raw(v53, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v25) = 20256;
      LOWORD(v26) = 20356;
      HIWORD(v25) = (unsigned int)" but chain %d,slave_addr %d open failed" >> 16;
      HIWORD(v26) = (unsigned int)"fail to read tsensor by iic, chain: %d, slave: %d, addr: %d" >> 16;
      zlog(g_zc, v26, 171, v25, 8, 32, 100, v53);
    }
    else
    {
      LOWORD(v4) = 20548;
      HIWORD(v4) = (unsigned int)&unk_156D44 >> 16;
      snprintf(
        (char *)&s,
        0x800u,
        v4,
        *(_DWORD *)a1,
        *(unsigned __int16 *)(a1 + 4),
        *(unsigned __int8 *)(a1 + 6),
        *(unsigned __int8 *)(a1 + 7));
      V_LOCK();
      logfmt_raw(v53, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v5) = 20256;
      LOWORD(v6) = 20356;
      HIWORD(v5) = (unsigned int)" but chain %d,slave_addr %d open failed" >> 16;
      HIWORD(v6) = (unsigned int)"fail to read tsensor by iic, chain: %d, slave: %d, addr: %d" >> 16;
      zlog(g_zc, v6, 171, v5, 8, 36, 20, v53);
      if ( i2c_select(v3, *(unsigned __int16 *)(a1 + 4)) )
      {
        LOWORD(v7) = 20616;
        HIWORD(v7) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_base.c" >> 16;
        v8 = *v7;
        v9 = v7[1];
        v10 = v7[2];
        v11 = v7[3];
        v7 += 4;
        s = v8;
        v48 = v9;
        v49 = v10;
        v50 = v11;
        v12 = v7[1];
        v51 = *v7;
        v52 = v12;
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, &s);
        V_UNLOCK();
        v13 = g_zc;
        v14 = 38;
        goto LABEL_6;
      }
      if ( i2c_ioctl(v3, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      {
        LOWORD(v33) = 20640;
        HIWORD(v33) = (unsigned int)"ease/build/godminer-origin_godminer-new/backend/backend_base.c" >> 16;
        v34 = *v33;
        v35 = v33[1];
        v36 = v33[2];
        v37 = v33[3];
        v38 = v33[4];
        s = v34;
        v48 = v35;
        v49 = v36;
        v50 = v37;
        v51 = v38;
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, &s);
        V_UNLOCK();
        v13 = g_zc;
        v14 = 43;
LABEL_6:
        LOWORD(v15) = 20256;
        LOWORD(v16) = 20356;
        HIWORD(v15) = (unsigned int)" but chain %d,slave_addr %d open failed" >> 16;
        HIWORD(v16) = (unsigned int)"fail to read tsensor by iic, chain: %d, slave: %d, addr: %d" >> 16;
        zlog(v13, v16, 171, v15, 8, v14, 100, v53);
        if ( v3 )
        {
          v17 = v3;
          v3 = -1;
          i2c_uninit(v17);
        }
        else
        {
          v3 = -1;
        }
      }
    }
  }
  else
  {
    LOWORD(v27) = 8496;
    HIWORD(v27) = (unsigned int)"%s json id is null!" >> 16;
    v28 = *v27;
    v29 = v27[1];
    v30 = v27[2];
    v3 = -3;
    s = v28;
    v48 = v29;
    LOWORD(v49) = v30;
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v31) = 20256;
    LOWORD(v32) = 20356;
    HIWORD(v31) = (unsigned int)" but chain %d,slave_addr %d open failed" >> 16;
    HIWORD(v32) = (unsigned int)"fail to read tsensor by iic, chain: %d, slave: %d, addr: %d" >> 16;
    zlog(g_zc, v32, 171, v31, 8, 26, 100, v53);
  }
  pthread_mutex_unlock(&stru_18A42C);
  return v3;
}
