int __fastcall stratum_handle_response_eth(int a1, int a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  int v6; // r0
  char *v7; // r1
  _DWORD *v8; // r6
  int v9; // r0
  char *v10; // r1
  _DWORD *v11; // r8
  _DWORD *v12; // r9
  _BOOL4 v13; // r10
  int v14; // r5
  _BOOL4 v15; // r6
  char *v16; // r0
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  _DWORD *v21; // r0
  char *v22; // r0
  int v23; // r3
  int v24; // r1
  int v25; // r3
  int v26; // r1
  char v27[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v28[160]; // [sp+70h] [bp-10A0h] BYREF
  char v29[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = json_loads(a2, 0, v27);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    LOWORD(v23) = 14512;
    HIWORD(v23) = (unsigned int)"/frontend_rvn/frontend_rvn.c" >> 16;
    logfmt_raw(v29, 0x1000u, 0, v23, *(_DWORD *)v27, v28);
    V_UNLOCK();
    LOWORD(v24) = 17676;
    HIWORD(v24) = (unsigned int)"sleep on!" >> 16;
    zlog(g_zc, v24, 164, "stratum_handle_response_eth", 27, 1118, 40, v29);
    return 0;
  }
  v6 = json_object_get(v4, "result");
  LOWORD(v7) = 4724;
  v8 = (_DWORD *)v6;
  HIWORD(v7) = (unsigned int)&unk_132B34 >> 16;
  v9 = json_object_get(v5, v7);
  LOWORD(v10) = 5212;
  v11 = (_DWORD *)v9;
  HIWORD(v10) = (unsigned int)"Null string passed to valid_hex" >> 16;
  v12 = (_DWORD *)json_object_get(v5, v10);
  if ( v8 && *v8 != 7 )
    json_false();
  if ( v8 == json_true() )
  {
    if ( !v11 || *v11 != 7 )
    {
      v14 = *(unsigned __int8 *)(a3 + 1656);
      v13 = v11 == 0;
      if ( *(_BYTE *)(a3 + 1656) )
        goto LABEL_9;
LABEL_23:
      if ( v8 )
      {
        v21 = json_array_get(v11, 1u);
        v22 = (char *)json_string_value(v21);
        share_result(v13, v14, v22, (double *)a3);
        v14 = 1;
      }
      goto LABEL_17;
    }
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  v14 = *(unsigned __int8 *)(a3 + 1656);
  if ( !*(_BYTE *)(a3 + 1656) )
    goto LABEL_23;
LABEL_9:
  if ( !v12 || *v12 == 7 )
  {
    V_LOCK();
    LOWORD(v25) = 15196;
    HIWORD(v25) = (unsigned int)"odminer-new/frontend/frontend_zec/frontend_zec.c" >> 16;
    logfmt_raw(v29, 0x1000u, 0, v25, "stratum_handle_response_eth");
    V_UNLOCK();
    LOWORD(v26) = 17676;
    HIWORD(v26) = (unsigned int)"sleep on!" >> 16;
    v14 = 0;
    zlog(g_zc, v26, 164, "stratum_handle_response_eth", 27, 1147, 40, v29);
  }
  else
  {
    if ( v8 )
      v15 = 0;
    else
      v15 = v11 == 0;
    if ( v15 )
    {
      v14 = 0;
    }
    else
    {
      v16 = json_dumps(v11, 24576);
      share_result(v13, 0, v16, (double *)a3);
    }
  }
LABEL_17:
  if ( *((_DWORD *)v5 + 1) != -1 )
  {
    v17 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v18 = __ldrex(v17);
      v19 = v18 - 1;
    }
    while ( __strex(v19, v17) );
    if ( !v19 )
      json_delete(v5);
  }
  return v14;
}
