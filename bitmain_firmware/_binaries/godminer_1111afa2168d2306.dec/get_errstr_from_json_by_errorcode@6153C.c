int __fastcall get_errstr_from_json_by_errorcode(const char *a1, char *a2, size_t a3)
{
  int result; // r0
  char *v7; // r1
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  int v10; // r4
  int v11; // r3
  char *v12; // r7
  unsigned int v13; // r4
  _DWORD *v14; // r0
  _DWORD *v15; // r6
  _DWORD *v16; // r0
  const char *v17; // r11
  bool v18; // cc
  unsigned int v19; // r1
  int v20; // r3
  int v21; // r1
  int v22; // r4
  int v23; // r3
  char *v24; // r1
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  char *v27; // r1
  _DWORD *v28; // r4
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  const char *v31; // r2
  char v32[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( byte_196FC8 || (result = miner_6060info_errorcode_init()) != 0 )
  {
    LOWORD(v7) = -31952;
    HIWORD(v7) = (unsigned int)"chain %d device %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n" >> 16;
    v8 = (_DWORD *)json_object_get((_DWORD *)dword_196FCC, v7);
    v9 = v8;
    if ( !v8 || *v8 != 1 )
    {
      LOWORD(v10) = -32308;
      V_LOCK();
      HIWORD(v10) = (unsigned int)"%s" >> 16;
      LOWORD(v11) = -31940;
      HIWORD(v11) = (unsigned int)"ice %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n" >> 16;
      logfmt_raw(v32, 0x1000u, 0, v11, v10, 209);
      V_UNLOCK();
      zlog(g_zc, v10, 169, "get_errstr_from_json_by_errorcode", 33, 209, 100, v32);
    }
    LOWORD(v12) = 26720;
    v13 = 0;
    do
    {
      v18 = (unsigned int)json_array_size(v9) > v13;
      v19 = v13++;
      if ( !v18 )
      {
        V_LOCK();
        LOWORD(v20) = -31848;
        HIWORD(v20) = (unsigned int)"chip status str %s detail:\n" >> 16;
        logfmt_raw(v32, 0x1000u, 0, v20, a1);
        V_UNLOCK();
        LOWORD(v21) = -32308;
        HIWORD(v21) = (unsigned int)"%s" >> 16;
        zlog(g_zc, v21, 169, "get_errstr_from_json_by_errorcode", 33, 237, 100, v32);
        return 0;
      }
      v14 = json_array_get(v9, v19);
      v15 = v14;
      if ( !v14 || *v14 )
      {
        LOWORD(v22) = -32308;
        V_LOCK();
        HIWORD(v22) = (unsigned int)"%s" >> 16;
        LOWORD(v23) = -31912;
        HIWORD(v23) = (unsigned int)"vg hashrate %s 30min avg hashrate %s hw %llu\n" >> 16;
        logfmt_raw(v32, 0x1000u, 0, v23, v22, 218);
        V_UNLOCK();
        zlog(g_zc, v22, 169, "get_errstr_from_json_by_errorcode", 33, 218, 100, v32);
        return 0;
      }
      HIWORD(v12) = (unsigned int)"GHS 5s" >> 16;
      v16 = (_DWORD *)json_object_get(v14, v12);
      v17 = (const char *)json_string_value(v16);
    }
    while ( strcmp(a1, v17) );
    LOWORD(v24) = -31880;
    HIWORD(v24) = (unsigned int)"e %s hw %llu\n" >> 16;
    v25 = (_DWORD *)json_object_get(v15, v24);
    v26 = json_string_value(v25);
    LOWORD(v27) = -31872;
    v28 = v26;
    HIWORD(v27) = (unsigned int)"%llu\n" >> 16;
    v29 = (_DWORD *)json_object_get(v15, v27);
    v30 = json_string_value(v29);
    LOWORD(v31) = -31860;
    HIWORD(v31) = (unsigned int)"llu nc %llu chip status str %s detail:\n" >> 16;
    snprintf(a2, a3, v31, v17, v28, v30);
    return 1;
  }
  return result;
}
