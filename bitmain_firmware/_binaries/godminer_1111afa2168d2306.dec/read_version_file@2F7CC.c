int read_version_file()
{
  int v0; // r1
  FILE *v1; // r6
  signed int v2; // r6
  char *v3; // r0
  char *v4; // r7
  char *v5; // r7
  char *v6; // r0
  size_t v7; // r2
  size_t v8; // r0
  int v9; // r3
  size_t v10; // r0
  int v11; // r3
  int *v12; // r5
  int v13; // r3
  int v14; // r1
  int v16; // r3
  int v17; // r1
  int v18; // r1
  char v19[256]; // [sp+10h] [bp-1104h] BYREF
  char v20[4100]; // [sp+110h] [bp-1004h] BYREF

  LOWORD(v0) = 32192;
  HIWORD(v0) = (unsigned int)"ted non-option argument -- '%s'" >> 16;
  v1 = (FILE *)fopen64(opt_version_path, v0);
  memset(v19, 0, sizeof(v19));
  if ( v1 )
  {
    v2 = fread(v19, 1u, 0x100u, v1);
    if ( v2 <= 0 )
    {
      V_LOCK();
      v12 = &g_zc;
      logfmt_raw(v20, 0x1000u, 0, "Read miner version file %s error %d", opt_version_path, v2);
      V_UNLOCK();
      LOWORD(v18) = 31476;
      HIWORD(v18) = (unsigned int)"SR1 received, reload log" >> 16;
      v5 = g_miner_type;
      zlog(g_zc, v18, 139, "read_version_file", 17, 443, 100, v20);
    }
    else
    {
      v3 = strchr(v19, 10);
      v4 = v3;
      if ( v3 )
      {
        memcpy(g_miner_compiletime, v19, v3 - v19);
        v5 = (char *)stpcpy(v19, v4 + 1);
        v6 = strchr(v19, 10);
        if ( v6 )
          v5 = g_miner_type;
        else
          v7 = v5 - v19;
        if ( v6 )
          v7 = v6 - v19;
        else
          v5 = g_miner_type;
        if ( !v6 )
          ++v7;
        memcpy(v5, v19, v7);
      }
      else
      {
        v5 = g_miner_type;
        strcpy(g_miner_compiletime, v19);
      }
      v8 = strlen(g_miner_compiletime) - 1;
      v9 = *((unsigned __int8 *)&dword_1958A0[20] + v8);
      if ( v9 == 10 )
      {
        *((_BYTE *)&dword_1958A0[20] + v8) = 0;
        v8 = strlen(g_miner_compiletime) - 1;
        v9 = *((unsigned __int8 *)&dword_1958A0[20] + v8);
      }
      if ( v9 == 13 )
        *((_BYTE *)&dword_1958A0[20] + v8) = 0;
      v10 = strlen(g_miner_type) - 1;
      v11 = *((unsigned __int8 *)&dword_1958A0[36] + v10);
      if ( v11 == 10 )
      {
        *((_BYTE *)&dword_1958A0[36] + v10) = 0;
        v10 = strlen(g_miner_type) - 1;
        v11 = *((unsigned __int8 *)&dword_1958A0[36] + v10);
      }
      v12 = &g_zc;
      if ( v11 == 13 )
        *((_BYTE *)&dword_1958A0[36] + v10) = 0;
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v16) = 32196;
    HIWORD(v16) = (unsigned int)"non-option argument -- '%s'" >> 16;
    v12 = &g_zc;
    logfmt_raw(v20, 0x1000u, 0, v16, opt_version_path);
    V_UNLOCK();
    LOWORD(v17) = 31476;
    HIWORD(v17) = (unsigned int)"SR1 received, reload log" >> 16;
    v5 = g_miner_type;
    zlog(g_zc, v17, 139, "read_version_file", 17, 438, 100, v20);
  }
  V_LOCK();
  LOWORD(v13) = 32268;
  HIWORD(v13) = (unsigned int)" pool server." >> 16;
  logfmt_raw(v20, 0x1000u, 0, v13, g_miner_compiletime, v5);
  V_UNLOCK();
  LOWORD(v14) = 31476;
  HIWORD(v14) = (unsigned int)"SR1 received, reload log" >> 16;
  return zlog(*v12, v14, 139, "read_version_file", 17, 478, 60, v20);
}
