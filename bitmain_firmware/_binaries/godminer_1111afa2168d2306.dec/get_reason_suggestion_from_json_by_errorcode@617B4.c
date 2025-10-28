int __fastcall get_reason_suggestion_from_json_by_errorcode(const char *a1, char *a2, char *a3, size_t a4)
{
  int result; // r0
  char *v9; // r1
  _DWORD *v10; // r0
  _DWORD *v11; // r5
  int v12; // r4
  int v13; // r3
  char *v14; // r7
  unsigned int v15; // r4
  _DWORD *v16; // r0
  _DWORD *v17; // r6
  _DWORD *v18; // r0
  const char *v19; // r0
  bool v20; // cc
  unsigned int v21; // r1
  int v22; // r3
  int v23; // r1
  int v24; // r4
  int v25; // r3
  char *v26; // r1
  _DWORD *v27; // r0
  const char *v28; // r0
  char *v29; // r1
  _DWORD *v30; // r0
  const char *v31; // r0
  char v32[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( byte_196FC8 || (result = miner_6060info_errorcode_init()) != 0 )
  {
    LOWORD(v9) = -31952;
    HIWORD(v9) = (unsigned int)"chain %d device %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n" >> 16;
    v10 = (_DWORD *)json_object_get((_DWORD *)dword_196FCC, v9);
    v11 = v10;
    if ( !v10 || *v10 != 1 )
    {
      LOWORD(v12) = -32308;
      V_LOCK();
      HIWORD(v12) = (unsigned int)"%s" >> 16;
      LOWORD(v13) = -31940;
      HIWORD(v13) = (unsigned int)"ice %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n" >> 16;
      logfmt_raw(v32, 0x1000u, 0, v13, v12, 256);
      V_UNLOCK();
      zlog(g_zc, v12, 169, "get_reason_suggestion_from_json_by_errorcode", 44, 256, 100, v32);
    }
    LOWORD(v14) = 26720;
    v15 = 0;
    do
    {
      v20 = (unsigned int)json_array_size(v11) > v15;
      v21 = v15++;
      if ( !v20 )
      {
        V_LOCK();
        LOWORD(v22) = -31848;
        HIWORD(v22) = (unsigned int)"chip status str %s detail:\n" >> 16;
        logfmt_raw(v32, 0x1000u, 0, v22, a1);
        V_UNLOCK();
        LOWORD(v23) = -32308;
        HIWORD(v23) = (unsigned int)"%s" >> 16;
        zlog(g_zc, v23, 169, "get_reason_suggestion_from_json_by_errorcode", 44, 286, 100, v32);
        return 0;
      }
      v16 = json_array_get(v11, v21);
      v17 = v16;
      if ( !v16 || *v16 )
      {
        LOWORD(v24) = -32308;
        V_LOCK();
        HIWORD(v24) = (unsigned int)"%s" >> 16;
        LOWORD(v25) = -31912;
        HIWORD(v25) = (unsigned int)"vg hashrate %s 30min avg hashrate %s hw %llu\n" >> 16;
        logfmt_raw(v32, 0x1000u, 0, v25, v24, 265);
        V_UNLOCK();
        zlog(g_zc, v24, 169, "get_reason_suggestion_from_json_by_errorcode", 44, 265, 100, v32);
        return 0;
      }
      HIWORD(v14) = (unsigned int)"GHS 5s" >> 16;
      v18 = (_DWORD *)json_object_get(v16, v14);
      v19 = (const char *)json_string_value(v18);
    }
    while ( strcmp(a1, v19) );
    LOWORD(v26) = -31880;
    HIWORD(v26) = (unsigned int)"e %s hw %llu\n" >> 16;
    v27 = (_DWORD *)json_object_get(v17, v26);
    v28 = (const char *)json_string_value(v27);
    snprintf(a2, a4, v28);
    LOWORD(v29) = -31872;
    HIWORD(v29) = (unsigned int)"%llu\n" >> 16;
    v30 = (_DWORD *)json_object_get(v17, v29);
    v31 = (const char *)json_string_value(v30);
    snprintf(a3, a4, v31);
    return 1;
  }
  return result;
}
