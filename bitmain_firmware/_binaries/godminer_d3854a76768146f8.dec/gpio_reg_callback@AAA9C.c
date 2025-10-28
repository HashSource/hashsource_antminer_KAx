int __fastcall gpio_reg_callback(int a1, int a2)
{
  const char *v3; // r2
  int v4; // r1
  const char *v6; // r2
  int v7; // r1
  int *v8; // lr
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r1
  int *v18; // r2
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // [sp+14h] [bp-1808h] BYREF
  int s; // [sp+18h] [bp-1804h] BYREF
  int v24; // [sp+1Ch] [bp-1800h]
  int v25; // [sp+20h] [bp-17FCh]
  int v26; // [sp+24h] [bp-17F8h]
  int v27; // [sp+28h] [bp-17F4h]
  int v28; // [sp+2Ch] [bp-17F0h]
  int v29; // [sp+30h] [bp-17ECh]
  char v30; // [sp+34h] [bp-17E8h]
  _DWORD v31[1025]; // [sp+818h] [bp-1004h] BYREF

  v22 = a1;
  if ( !a2 )
  {
    LOWORD(v18) = 8496;
    HIWORD(v18) = (unsigned int)"%s json id is null!" >> 16;
    v19 = *v18;
    v20 = v18[1];
    v21 = v18[2];
    s = v19;
    v24 = v20;
    LOWORD(v25) = v21;
    V_LOCK();
    logfmt_raw((char *)v31, 0x1000u, 0, &s);
    V_UNLOCK();
    v16 = 147;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_18A3F0) )
  {
    LOWORD(v8) = 19344;
    HIWORD(v8) = (unsigned int)"ain power close ===========" >> 16;
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[2];
    v12 = v8[3];
    v8 += 4;
    s = v9;
    v24 = v10;
    v25 = v11;
    v26 = v12;
    v13 = v8[1];
    v14 = v8[2];
    v15 = v8[3];
    v27 = *v8;
    v28 = v13;
    v29 = v14;
    v30 = v15;
    V_LOCK();
    logfmt_raw((char *)v31, 0x1000u, 0, &s);
    V_UNLOCK();
    v16 = 152;
LABEL_9:
    LOWORD(v17) = 19168;
    HIWORD(v17) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
    zlog(g_zc, v17, 172, "gpio_reg_callback", 17, v16, 100, v31);
    return -1;
  }
  if ( exists_c_map((int *)dword_18A408, (int)&v22) )
  {
    LOWORD(v3) = 19400;
    HIWORD(v3) = (unsigned int)"open, but open power failed" >> 16;
    snprintf((char *)&s, 0x800u, v3, v22);
    V_LOCK();
    logfmt_raw((char *)v31, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v4) = 19168;
    HIWORD(v4) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
    zlog(g_zc, v4, 172, "gpio_reg_callback", 17, 165, 20, v31);
  }
  else
  {
    LOWORD(v6) = 19376;
    HIWORD(v6) = (unsigned int)"auto exec bitmain_power_open, but open power failed" >> 16;
    snprintf((char *)&s, 0x800u, v6, v22);
    V_LOCK();
    logfmt_raw((char *)v31, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v7) = 19168;
    HIWORD(v7) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
    zlog(g_zc, v7, 172, "gpio_reg_callback", 17, 158, 20, v31);
    v31[0] = a2;
    v31[1] = -1;
    insert_c_map((int *)dword_18A408, &v22, 4u, v31, 8u);
  }
  pthread_mutex_unlock(&stru_18A3F0);
  return 0;
}
