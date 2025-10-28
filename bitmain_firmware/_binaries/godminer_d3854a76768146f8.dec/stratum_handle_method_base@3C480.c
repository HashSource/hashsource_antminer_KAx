const char *__fastcall stratum_handle_method_base(int (__fastcall **a1)(_DWORD, _DWORD, _DWORD), int a2, int a3)
{
  double *v6; // r0
  double *v7; // r4
  _DWORD *v8; // r0
  const char *v9; // r5
  char *v10; // r1
  int v11; // r9
  char *v12; // r1
  const char *v13; // r1
  int v14; // r0
  _BYTE *v15; // r1
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  int v20; // r3
  int v21; // r1
  char *v22; // r1
  const char *v23; // r1
  const char *v24; // r1
  const char *v25; // r1
  int v26; // r3
  int v27; // r1
  char v28[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v29[160]; // [sp+70h] [bp-10A4h] BYREF
  char v30[4100]; // [sp+110h] [bp-1004h] BYREF

  v6 = json_loads(a3, 0, v28);
  v7 = v6;
  if ( !v6 )
  {
    V_LOCK();
    LOWORD(v20) = 14512;
    HIWORD(v20) = (unsigned int)"/frontend_rvn/frontend_rvn.c" >> 16;
    logfmt_raw(v30, 0x1000u, 0, v20, *(_DWORD *)v28, v29);
    V_UNLOCK();
    LOWORD(v21) = 14256;
    HIWORD(v21) = (unsigned int)",\"%s\",\"%s\",\"%s\",\"%s\"]}" >> 16;
    zlog(g_zc, v21, 152, "stratum_handle_method_base", 26, 65, 100, v30);
    return 0;
  }
  v8 = (_DWORD *)json_object_get(v6, "method");
  v9 = (const char *)json_string_value(v8);
  if ( !v9 )
  {
LABEL_9:
    if ( *((_DWORD *)v7 + 1) != -1 )
      goto LABEL_10;
    return v9;
  }
  LOWORD(v10) = 14548;
  HIWORD(v10) = (unsigned int)"er_ptr failed" >> 16;
  v11 = json_object_get(v7, v10);
  if ( !v11 )
  {
    LOWORD(v22) = 14556;
    HIWORD(v22) = (unsigned int)"ailed" >> 16;
    v11 = json_object_get(v7, v22);
  }
  LOWORD(v12) = 5212;
  HIWORD(v12) = (unsigned int)"Null string passed to valid_hex" >> 16;
  json_object_get(v7, v12);
  LOWORD(v13) = 14564;
  HIWORD(v13) = (unsigned int)"epoch:%d targetdiff:%02x" >> 16;
  if ( !strcasecmp(v9, v13) )
  {
    v14 = a1[12](a1, a2, v11);
    goto LABEL_7;
  }
  LOWORD(v23) = 14580;
  HIWORD(v23) = (unsigned int)"iff:%02x" >> 16;
  if ( !strcasecmp(v9, v23)
    || (LOWORD(v24) = 14604,
        HIWORD(v24) = (unsigned int)"nvert header to header_ptr in parse_notify" >> 16,
        !strcasecmp(v9, v24)) )
  {
    v9 = (const char *)a1[14](a1, a2, v11);
    goto LABEL_9;
  }
  LOWORD(v25) = 14624;
  HIWORD(v25) = (unsigned int)"er_ptr in parse_notify" >> 16;
  if ( strcasecmp(v9, v25) )
  {
    V_LOCK();
    LOWORD(v26) = 14648;
    HIWORD(v26) = (unsigned int)"{\"worker\": \"%s\",\"id\":%d,\"jsonrpc\":\"2.0\",\"method\":\"rvn_submitWork\",        "
                                "         \"params\":[\"0x%s\",\"0x%s\",\"0x%s\"]}" >> 16;
    v9 = 0;
    logfmt_raw(v30, 0x1000u, 0, v26, a3);
    V_UNLOCK();
    LOWORD(v27) = 14256;
    HIWORD(v27) = (unsigned int)",\"%s\",\"%s\",\"%s\",\"%s\"]}" >> 16;
    zlog(g_zc, v27, 152, "stratum_handle_method_base", 26, 105, 80, v30);
    goto LABEL_9;
  }
  v14 = a1[13](a1, a2, v11);
LABEL_7:
  v9 = (const char *)v14;
  v15 = (_BYTE *)(a2 + 1916);
  if ( v14 )
  {
    pool_tset(a2, v15, 1);
    goto LABEL_9;
  }
  pool_tclear(a2, v15, 0);
  if ( *((_DWORD *)v7 + 1) == -1 )
    return v9;
LABEL_10:
  v16 = (unsigned int *)v7 + 1;
  __dmb(0xBu);
  do
  {
    v17 = __ldrex(v16);
    v18 = v17 - 1;
  }
  while ( __strex(v18, v16) );
  if ( v18 )
    return v9;
  json_delete(v7);
  return v9;
}
