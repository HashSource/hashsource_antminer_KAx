int __fastcall stratum_authorize_eth_2282(int a1, int *a2)
{
  int v4; // r3
  int v5; // r1
  char *v6; // r11
  const char *v7; // r10
  size_t v8; // r6
  size_t v9; // r0
  char *v10; // r0
  const char *v11; // r1
  char *v12; // r9
  int v13; // r10
  void *v15; // r6
  int v16; // r3
  int v17; // r1
  int v18; // r0
  time_t *v19; // r3
  time_t v20; // r1
  const char *v21; // r1
  double *v22; // r5
  char *v23; // r1
  int v24; // r0
  char *v25; // r1
  _DWORD *v26; // r11
  int v27; // r0
  char *v28; // r1
  _DWORD *v29; // r6
  int v30; // r0
  char *v31; // r1
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  int v34; // r1
  unsigned int *v35; // r3
  unsigned int v36; // r2
  unsigned int v37; // r2
  int v38; // r3
  int v39; // r1
  int v40; // r3
  int v41; // r1
  const char *v42; // r1
  const char *v43; // [sp+2Ch] [bp-1128h]
  _DWORD v44[7]; // [sp+30h] [bp-1124h] BYREF
  int v45; // [sp+4Ch] [bp-1108h]
  _DWORD s[23]; // [sp+54h] [bp-1100h] BYREF
  _BYTE v47[160]; // [sp+B0h] [bp-10A4h] BYREF
  time_t v48; // [sp+150h] [bp-1004h] BYREF
  char v49; // [sp+154h] [bp-1000h]
  unsigned __int8 v50; // [sp+162h] [bp-FF2h]
  unsigned __int8 v51; // [sp+163h] [bp-FF1h]
  unsigned __int8 v52; // [sp+164h] [bp-FF0h]
  unsigned __int8 v53; // [sp+165h] [bp-FEFh]
  unsigned __int8 v54; // [sp+166h] [bp-FEEh]
  unsigned __int8 v55; // [sp+167h] [bp-FEDh]

  if ( a2[6] )
  {
    V_LOCK();
    LOWORD(v4) = -19336;
    HIWORD(v4) = (unsigned int)"d_eth_2282" >> 16;
    logfmt_raw((char *)&v48, 0x1000u, 0, v4, a2[6]);
    V_UNLOCK();
    LOWORD(v5) = -18936;
    HIWORD(v5) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
    zlog(g_zc, v5, 174, "stratum_authorize_eth_2282", 26, 380, 20, &v48);
    v6 = (char *)a2[6];
    goto LABEL_3;
  }
  V_LOCK();
  LOWORD(v16) = -19472;
  HIWORD(v16) = (unsigned int)"tranonce_eth_2282" >> 16;
  logfmt_raw((char *)&v48, 0x1000u, 0, v16);
  V_UNLOCK();
  LOWORD(v17) = -18936;
  HIWORD(v17) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
  zlog(g_zc, v17, 174, "stratum_authorize_eth_2282", 26, 362, 20, &v48);
  memset(s, 0, 32);
  v18 = socket(2, 1, 0);
  if ( v18 < 0 )
  {
    perror("socket");
  }
  else
  {
    LOWORD(v19) = -19420;
    HIWORD(v19) = (unsigned int)"tum_handle_method_eth_2282" >> 16;
    v20 = v19[1];
    v48 = *v19;
    v49 = v20;
    if ( ioctl(v18, 0x8927u, &v48) >= 0 )
    {
      LOWORD(v21) = -19404;
      HIWORD(v21) = (unsigned int)"d_eth_2282" >> 16;
      sprintf((char *)s, v21, v50, v51, v52, v53, v54, v55);
      v6 = _strdup((const char *)s);
      a2[6] = (int)v6;
      goto LABEL_3;
    }
    perror("ioctl");
  }
  V_LOCK();
  LOWORD(v40) = -19376;
  HIWORD(v40) = (unsigned int)"esponse_eth_2282" >> 16;
  logfmt_raw((char *)&v48, 0x1000u, 0, v40);
  V_UNLOCK();
  LOWORD(v41) = -18936;
  HIWORD(v41) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
  zlog(g_zc, v41, 174, "stratum_authorize_eth_2282", 26, 371, 20, &v48);
  time(&v48);
  LOWORD(v42) = 27996;
  HIWORD(v42) = (unsigned int)"s: %lld" >> 16;
  sprintf((char *)s, v42, v48);
  v6 = _strdup((const char *)s);
  a2[6] = (int)v6;
LABEL_3:
  v7 = (const char *)a2[4];
  v8 = strlen(v7);
  v43 = (const char *)a2[5];
  v9 = strlen(v43);
  v10 = (char *)malloc(v8 + v9 + 128);
  LOWORD(v11) = -19308;
  v12 = v10;
  HIWORD(v11) = (unsigned int)"e_eth_2282" >> 16;
  sprintf(v10, v11, v6, v7, v43, 2);
  v13 = (*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v12);
  if ( !v13 )
  {
LABEL_4:
    free(v12);
    return v13;
  }
  while ( 1 )
  {
    v15 = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    if ( !v15 )
    {
      v13 = 0;
      goto LABEL_4;
    }
    if ( !(*(int (**)(void))(a1 + 20))() )
      break;
    free(v15);
  }
  v22 = json_loads((int)v15, 0, (char *)s);
  free(v15);
  if ( !v22 )
  {
    V_LOCK();
    LOWORD(v38) = -23500;
    HIWORD(v38) = (unsigned int)"GodMiner/2.0.1\", null]}" >> 16;
    v13 = 0;
    logfmt_raw((char *)&v48, 0x1000u, 0, v38, s[0], v47);
    V_UNLOCK();
    LOWORD(v39) = -18936;
    HIWORD(v39) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
    zlog(g_zc, v39, 174, "stratum_authorize_eth_2282", 26, 405, 100, &v48);
    free(v12);
    return v13;
  }
  LOWORD(v23) = -23456;
  HIWORD(v23) = (unsigned int)"nd failed" >> 16;
  v24 = json_object_get(v22, v23);
  LOWORD(v25) = 31628;
  v26 = (_DWORD *)v24;
  HIWORD(v25) = (unsigned int)"pwm value error!" >> 16;
  v27 = json_object_get(v22, v25);
  LOWORD(v28) = 32160;
  v29 = (_DWORD *)v27;
  HIWORD(v28) = (unsigned int)"version" >> 16;
  v30 = json_object_get(v22, v28);
  json_integer_value(v30);
  if ( v26 && *v26 != 6 && (!v29 || *v29 == 7) )
  {
    a2[480] = 40;
  }
  else
  {
    V_LOCK();
    LOWORD(v31) = -31340;
    HIWORD(v31) = (unsigned int)"has come" >> 16;
    v13 = 0;
    V_INT((int)v44, v31, *a2);
    v32 = json_array_get(v29, 1u);
    v33 = json_string_value(v32);
    logfmt_raw(
      (char *)&v48,
      0x1000u,
      0,
      v45,
      v44[0],
      v44[1],
      v44[2],
      v44[3],
      v44[4],
      v44[5],
      v44[6],
      v45,
      "authorize failed reason: %s",
      v33);
    V_UNLOCK();
    LOWORD(v34) = -18936;
    HIWORD(v34) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
    zlog(g_zc, v34, 174, "stratum_authorize_eth_2282", 26, 416, 80, &v48);
  }
  free(v12);
  if ( *((_DWORD *)v22 + 1) == -1 )
    return v13;
  v35 = (unsigned int *)v22 + 1;
  __dmb(0xBu);
  do
  {
    v36 = __ldrex(v35);
    v37 = v36 - 1;
  }
  while ( __strex(v37, v35) );
  if ( v37 )
    return v13;
  json_delete(v22);
  return v13;
}
