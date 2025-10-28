int __fastcall stratum_authorize_kas(int a1, int *a2, void *a3)
{
  int v3; // r6
  double *v6; // r11
  int v8; // r8
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  const char *v12; // r8
  const char *v13; // r9
  size_t v14; // r5
  size_t v15; // r0
  char *v16; // r5
  void *v17; // r0
  char *v18; // r1
  int v19; // r0
  int v20; // r0
  char *v21; // r1
  _DWORD *v22; // r0
  char *v23; // r1
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  int v26; // r1
  int v28; // r3
  int v29; // r1
  int v30; // r1
  unsigned int *v31; // r3
  unsigned int v32; // r2
  unsigned int v33; // r2
  int v34; // r3
  int v35; // r1
  _DWORD *v36; // [sp+2Ch] [bp-1130h]
  int v37; // [sp+34h] [bp-1128h]
  _DWORD v38[7]; // [sp+38h] [bp-1124h] BYREF
  int v39; // [sp+54h] [bp-1108h]
  char v40[92]; // [sp+5Ch] [bp-1100h] BYREF
  _BYTE v41[160]; // [sp+B8h] [bp-10A4h] BYREF
  char v42[4100]; // [sp+158h] [bp-1004h] BYREF

  v3 = 0;
  v6 = 0;
  while ( 1 )
  {
    v12 = (const char *)a2[4];
    v13 = (const char *)a2[5];
    v14 = strlen(v12);
    v15 = strlen(v13);
    v16 = (char *)malloc(v14 + v15 + 128);
    sprintf(v16, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}", 2, v12, v13);
    if ( !(*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v16) )
      goto LABEL_2;
    v8 = socket_full(a2[9], 30);
    if ( !v8 )
    {
      V_LOCK();
      LOWORD(v34) = 14928;
      HIWORD(v34) = (unsigned int)": [\"%s\"]}" >> 16;
      logfmt_raw(v42, 0x1000u, 0, v34);
      V_UNLOCK();
      LOWORD(v35) = 19852;
      HIWORD(v35) = (unsigned int)" error!" >> 16;
      zlog(g_zc, v35, 164, "stratum_authorize_kas", 21, 139, 100, v42);
LABEL_2:
      free(v16);
      if ( !v6 )
        goto LABEL_10;
      goto LABEL_3;
    }
    v17 = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    a3 = v17;
    if ( v17 )
      break;
    free(v16);
    if ( !v6 )
      return 0;
LABEL_3:
    if ( *((_DWORD *)v6 + 1) != -1 )
    {
      v8 = 0;
LABEL_5:
      v9 = (unsigned int *)v6 + 1;
      __dmb(0xBu);
      do
      {
        v10 = __ldrex(v9);
        v11 = v10 - 1;
      }
      while ( __strex(v11, v9) );
      if ( !v11 )
        json_delete(v6);
      if ( v8 )
        return v8;
    }
LABEL_10:
    if ( a3 )
      v3 ^= 1u;
    else
      v3 = 0;
    if ( !v3 )
      return 0;
  }
  v6 = json_loads((int)v17, 0, v40);
  free(a3);
  if ( !v6 )
  {
    V_LOCK();
    LOWORD(v28) = 14512;
    HIWORD(v28) = (unsigned int)"/frontend_rvn/frontend_rvn.c" >> 16;
    logfmt_raw(v42, 0x1000u, 0, v28, *(_DWORD *)v40, v41);
    V_UNLOCK();
    LOWORD(v29) = 19852;
    HIWORD(v29) = (unsigned int)" error!" >> 16;
    zlog(g_zc, v29, 164, "stratum_authorize_kas", 21, 153, 100, v42);
    free(v16);
    goto LABEL_10;
  }
  LOWORD(v18) = 5212;
  HIWORD(v18) = (unsigned int)"Null string passed to valid_hex" >> 16;
  v19 = json_object_get(v6, v18);
  v20 = json_integer_value(v19);
  LOWORD(v21) = 4724;
  v37 = v20;
  HIWORD(v21) = (unsigned int)&unk_132B34 >> 16;
  v22 = (_DWORD *)json_object_get(v6, v21);
  v36 = v22;
  if ( !v22 || *v22 == 7 )
    goto LABEL_22;
  V_LOCK();
  LOWORD(v23) = 5040;
  HIWORD(v23) = (unsigned int)"ot a valid byte!" >> 16;
  V_INT((int)v38, v23, *a2);
  v24 = json_array_get(v36, 1u);
  v25 = json_string_value(v24);
  logfmt_raw(
    v42,
    0x1000u,
    0,
    v39,
    v38[0],
    v38[1],
    v38[2],
    v38[3],
    v38[4],
    v38[5],
    v38[6],
    v39,
    "authorize failed reason: %s",
    v25);
  V_UNLOCK();
  LOWORD(v26) = 19852;
  HIWORD(v26) = (unsigned int)" error!" >> 16;
  zlog(g_zc, v26, 164, "stratum_authorize_kas", 21, 163, 80, v42);
  if ( !v3
    || (v16 = json_dumps(v36, 3),
        V_LOCK(),
        logfmt_raw(v42, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v16, v37),
        V_UNLOCK(),
        LOWORD(v30) = 19852,
        HIWORD(v30) = (unsigned int)" error!" >> 16,
        zlog(g_zc, v30, 164, "stratum_authorize_kas", 21, 170, 100, v42),
        v16) )
  {
    v8 = 0;
LABEL_22:
    free(v16);
    if ( *((_DWORD *)v6 + 1) != -1 )
      goto LABEL_5;
    if ( v8 )
      return v8;
    goto LABEL_10;
  }
  if ( *((_DWORD *)v6 + 1) != -1 )
  {
    v31 = (unsigned int *)v6 + 1;
    __dmb(0xBu);
    do
    {
      v32 = __ldrex(v31);
      v33 = v32 - 1;
    }
    while ( __strex(v33, v31) );
    if ( !v33 )
      json_delete(v6);
  }
  return 0;
}
