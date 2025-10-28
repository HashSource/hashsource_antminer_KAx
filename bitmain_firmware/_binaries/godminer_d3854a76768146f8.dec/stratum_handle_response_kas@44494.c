int __fastcall stratum_handle_response_kas(int a1, int a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  int v6; // r0
  char *v7; // r1
  _DWORD *v8; // r5
  int v9; // r0
  char *v10; // r1
  _DWORD *v11; // r10
  _DWORD *v12; // r7
  _BYTE *v13; // r0
  _BOOL4 v14; // r8
  int v15; // r0
  int v16; // r6
  int v17; // r3
  int v18; // r1
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  int v23; // r3
  int v24; // r1
  _BOOL4 v25; // r5
  char *v26; // r0
  _DWORD *v27; // r0
  char *v28; // r0
  char v29[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v30[160]; // [sp+70h] [bp-10A0h] BYREF
  char v31[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = json_loads(a2, 0, v29);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    LOWORD(v23) = 14512;
    HIWORD(v23) = (unsigned int)"/frontend_rvn/frontend_rvn.c" >> 16;
    logfmt_raw(v31, 0x1000u, 0, v23, *(_DWORD *)v29, v30);
    V_UNLOCK();
    LOWORD(v24) = 19852;
    HIWORD(v24) = (unsigned int)" error!" >> 16;
    zlog(g_zc, v24, 164, "stratum_handle_response_kas", 27, 294, 40, v31);
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
  if ( !v8 || *v8 == 7 || v8 == json_false() )
    goto LABEL_15;
  v13 = json_string_value(v8);
  v14 = (_BOOL4)v13;
  if ( !v13 )
    goto LABEL_16;
  if ( *v13 == 111 && v13[1] == 107 )
  {
    v15 = (unsigned __int8)v13[2];
    v14 = (_BOOL4)v11;
    if ( v11 )
      v14 = 1;
    if ( v15 )
      v14 = 0;
    if ( v14 )
      v14 = *v11 == 7;
  }
  else
  {
LABEL_15:
    v14 = 0;
  }
LABEL_16:
  if ( v8 == json_true() )
  {
    if ( v11 )
    {
      if ( *v11 == 7 )
        v14 = 1;
      if ( !v12 )
        goto LABEL_28;
      goto LABEL_18;
    }
    v14 = 1;
  }
  if ( !v12 )
  {
LABEL_28:
    V_LOCK();
    LOWORD(v17) = 15196;
    HIWORD(v17) = (unsigned int)"odminer-new/frontend/frontend_zec/frontend_zec.c" >> 16;
    logfmt_raw(v31, 0x1000u, 0, v17, "stratum_handle_response_kas");
    V_UNLOCK();
    LOWORD(v18) = 19852;
    HIWORD(v18) = (unsigned int)" error!" >> 16;
    v16 = 0;
    zlog(g_zc, v18, 164, "stratum_handle_response_kas", 27, 326, 20, v31);
    goto LABEL_29;
  }
LABEL_18:
  if ( *v12 == 7 )
    goto LABEL_28;
  v16 = *(unsigned __int8 *)(a3 + 1656);
  if ( *(_BYTE *)(a3 + 1656) )
  {
    if ( v8 )
      v25 = 0;
    else
      v25 = v11 == 0;
    if ( !v25 )
    {
      v26 = json_dumps(v11, 24576);
      share_result(v14, 0, v26, (double *)a3);
      goto LABEL_29;
    }
  }
  else if ( v8 && json_integer_value((int)v12) >= 4 )
  {
    v27 = json_array_get(v11, 1u);
    v28 = (char *)json_string_value(v27);
    share_result(v14, v16, v28, (double *)a3);
    v16 = 1;
    goto LABEL_29;
  }
  v16 = 0;
LABEL_29:
  if ( *((_DWORD *)v5 + 1) != -1 )
  {
    v19 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v20 = __ldrex(v19);
      v21 = v20 - 1;
    }
    while ( __strex(v21, v19) );
    if ( !v21 )
      json_delete(v5);
  }
  return v16;
}
