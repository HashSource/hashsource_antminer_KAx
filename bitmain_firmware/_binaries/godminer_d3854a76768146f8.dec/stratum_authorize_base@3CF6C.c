int __fastcall stratum_authorize_base(int a1, int a2)
{
  const char *v4; // r9
  size_t v5; // r6
  size_t v6; // r0
  char *v7; // r0
  const char *v8; // r1
  char *v9; // r7
  int v10; // r8
  void *v12; // r6
  double *v13; // r5
  char *v14; // r1
  int v15; // r0
  char *v16; // r1
  _DWORD *v17; // r9
  int v18; // r0
  char *v19; // r1
  _DWORD *v20; // r6
  int v21; // r0
  int v22; // r0
  _BOOL4 v23; // r3
  int v24; // r10
  int v25; // r3
  int v26; // r1
  unsigned int *v27; // r3
  unsigned int v28; // r2
  unsigned int v29; // r2
  int v30; // r3
  int v31; // r1
  char v32[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v33[160]; // [sp+70h] [bp-10A0h] BYREF
  char v34[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = *(const char **)(a2 + 20);
  v5 = strlen(*(const char **)(a2 + 16));
  v6 = strlen(v4);
  v7 = (char *)malloc(v5 + v6 + 80);
  LOWORD(v8) = 15092;
  v9 = v7;
  HIWORD(v8) = (unsigned int)"enkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c" >> 16;
  ++*(_DWORD *)(a2 + 1920);
  sprintf(v7, v8);
  v10 = (*(int (__fastcall **)(int, char *))(a1 + 12))(a2, v9);
  if ( !v10 )
  {
LABEL_2:
    free(v9);
    return v10;
  }
  while ( 1 )
  {
    v12 = (void *)(*(int (__fastcall **)(int))(a1 + 8))(a2);
    if ( !v12 )
    {
      v10 = 0;
      goto LABEL_2;
    }
    if ( !(*(int (**)(void))(a1 + 20))() )
      break;
    free(v12);
  }
  v13 = json_loads((int)v12, 0, v32);
  free(v12);
  if ( !v13 )
  {
    v10 = 0;
    V_LOCK();
    LOWORD(v30) = 14512;
    HIWORD(v30) = (unsigned int)"/frontend_rvn/frontend_rvn.c" >> 16;
    logfmt_raw(v34, 0x1000u, 0, v30, *(_DWORD *)v32, v33);
    V_UNLOCK();
    LOWORD(v31) = 14256;
    HIWORD(v31) = (unsigned int)",\"%s\",\"%s\",\"%s\",\"%s\"]}" >> 16;
    zlog(g_zc, v31, 152, "stratum_authorize_base", 22, 283, 100, v34);
    free(v9);
    return v10;
  }
  LOWORD(v14) = 14556;
  HIWORD(v14) = (unsigned int)"ailed" >> 16;
  v15 = json_object_get(v13, v14);
  LOWORD(v16) = 4724;
  v17 = (_DWORD *)v15;
  HIWORD(v16) = (unsigned int)&unk_132B34 >> 16;
  v18 = json_object_get(v13, v16);
  LOWORD(v19) = 5212;
  v20 = (_DWORD *)v18;
  HIWORD(v19) = (unsigned int)"Null string passed to valid_hex" >> 16;
  v21 = json_object_get(v13, v19);
  v22 = json_integer_value(v21);
  v23 = v17 == 0;
  v24 = v22;
  if ( *(_DWORD *)(a2 + 1920) - 1 != v22 )
    v23 = 1;
  if ( v23 || *v17 == 6 || v20 && *v20 != 7 )
  {
    V_LOCK();
    LOWORD(v25) = 15152;
    HIWORD(v25) = (unsigned int)"uildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c" >> 16;
    v10 = 0;
    logfmt_raw(v34, 0x1000u, 0, v25, v24);
    V_UNLOCK();
    LOWORD(v26) = 14256;
    HIWORD(v26) = (unsigned int)",\"%s\",\"%s\",\"%s\",\"%s\"]}" >> 16;
    zlog(g_zc, v26, 152, "stratum_authorize_base", 22, 293, 100, v34);
  }
  free(v9);
  if ( *((_DWORD *)v13 + 1) == -1 )
    return v10;
  v27 = (unsigned int *)v13 + 1;
  __dmb(0xBu);
  do
  {
    v28 = __ldrex(v27);
    v29 = v28 - 1;
  }
  while ( __strex(v29, v27) );
  if ( v29 )
    return v10;
  json_delete(v13);
  return v10;
}
