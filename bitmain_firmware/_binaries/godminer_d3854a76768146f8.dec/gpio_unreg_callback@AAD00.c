int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int *v2; // r12
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r1
  const char *v14; // r2
  int v15; // r1
  int *v16; // lr
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r2
  int v25; // r1
  int *v26; // r2
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // [sp+14h] [bp-1808h] BYREF
  int s; // [sp+18h] [bp-1804h] BYREF
  int v32; // [sp+1Ch] [bp-1800h]
  int v33; // [sp+20h] [bp-17FCh]
  int v34; // [sp+24h] [bp-17F8h]
  int v35; // [sp+28h] [bp-17F4h]
  int v36; // [sp+2Ch] [bp-17F0h]
  int v37; // [sp+30h] [bp-17ECh]
  int v38; // [sp+34h] [bp-17E8h]
  int v39; // [sp+38h] [bp-17E4h]
  int v40; // [sp+3Ch] [bp-17E0h]
  char v41[4100]; // [sp+818h] [bp-1004h] BYREF

  v30 = a1;
  if ( !a2 )
  {
    LOWORD(v26) = 8496;
    HIWORD(v26) = (unsigned int)"%s json id is null!" >> 16;
    v27 = *v26;
    v28 = v26[1];
    v29 = v26[2];
    s = v27;
    v32 = v28;
    LOWORD(v33) = v29;
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, &s);
    V_UNLOCK();
    v24 = 183;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_18A3F0) )
  {
    LOWORD(v16) = 19344;
    HIWORD(v16) = (unsigned int)"ain power close ===========" >> 16;
    v17 = *v16;
    v18 = v16[1];
    v19 = v16[2];
    v20 = v16[3];
    v16 += 4;
    s = v17;
    v32 = v18;
    v33 = v19;
    v34 = v20;
    v21 = v16[1];
    v22 = v16[2];
    v23 = v16[3];
    v35 = *v16;
    v36 = v21;
    v37 = v22;
    LOBYTE(v38) = v23;
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, &s);
    V_UNLOCK();
    v24 = 189;
LABEL_9:
    LOWORD(v25) = 19168;
    HIWORD(v25) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
    zlog(g_zc, v25, 172, "gpio_unreg_callback", 19, v24, 100, v41);
    return -1;
  }
  if ( exists_c_map((int *)dword_18A408, (int)&v30) == (int *)1 )
  {
    LOWORD(v14) = 19440;
    HIWORD(v14) = (unsigned int)"rsion failed" >> 16;
    snprintf((char *)&s, 0x800u, v14, v30);
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v15) = 19168;
    HIWORD(v15) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
    zlog(g_zc, v15, 172, "gpio_unreg_callback", 19, 195, 20, v41);
    remove_c_map((int *)dword_18A408, (int)&v30);
  }
  else
  {
    LOWORD(v2) = 19472;
    HIWORD(v2) = (unsigned int)"_version < 0 will close power" >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v6 = v2[3];
    v2 += 4;
    s = v3;
    v32 = v4;
    v33 = v5;
    v34 = v6;
    v7 = *v2;
    v8 = v2[1];
    v9 = v2[2];
    v10 = v2[3];
    v2 += 4;
    v35 = v7;
    v36 = v8;
    v37 = v9;
    v38 = v10;
    v11 = v2[1];
    v39 = *v2;
    v40 = v11;
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v12) = 19168;
    HIWORD(v12) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
    zlog(g_zc, v12, 172, "gpio_unreg_callback", 19, 200, 80, v41);
  }
  pthread_mutex_unlock(&stru_18A3F0);
  return 0;
}
