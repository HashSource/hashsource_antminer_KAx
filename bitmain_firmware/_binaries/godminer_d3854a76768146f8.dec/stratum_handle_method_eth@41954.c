int __fastcall stratum_handle_method_eth(int (__fastcall **a1)(_DWORD, _DWORD, _DWORD), int a2, int a3)
{
  double *v5; // r0
  double *v6; // r4
  int v7; // r0
  int v8; // r0
  char *v9; // r1
  int v10; // r8
  _DWORD *v11; // r0
  int v12; // r5
  bool v13; // zf
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  char *v18; // r1
  _DWORD *v19; // r0
  const char *v20; // r8
  char *v21; // r1
  int v22; // r9
  const char *v23; // r1
  const char *v24; // r1
  int v25; // r3
  int v26; // r1
  char *v27; // r1
  int v28; // r0
  __int64 v29; // r10
  int v30; // r0
  _BYTE *v31; // r1
  char *v32; // r1
  const char *v33; // r1
  const char *v34; // r1
  _QWORD *v35; // r0
  int v36; // r1
  const char *v37; // r0
  char v38[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v39[160]; // [sp+70h] [bp-10A4h] BYREF
  char v40[4100]; // [sp+110h] [bp-1004h] BYREF

  v5 = json_loads(a3, 0, v38);
  v6 = v5;
  if ( v5 )
  {
    v7 = json_object_get(v5, "id");
    v8 = json_integer_value(v7);
    LOWORD(v9) = 14556;
    v10 = v8;
    HIWORD(v9) = (unsigned int)"ailed" >> 16;
    v11 = (_DWORD *)json_object_get(v6, v9);
    v12 = *(unsigned __int8 *)(a2 + 1656);
    if ( *(_BYTE *)(a2 + 1656) )
    {
      if ( !v11 )
        goto LABEL_7;
      v13 = *v11 == 1;
      if ( *v11 == 1 )
        v13 = v10 == 0;
      if ( !v13 )
        goto LABEL_7;
      v30 = sub_401AC(v11, a2);
      goto LABEL_23;
    }
    LOWORD(v18) = 14540;
    HIWORD(v18) = (unsigned int)"" >> 16;
    v19 = (_DWORD *)json_object_get(v6, v18);
    v20 = (const char *)json_string_value(v19);
    if ( v20 )
    {
      LOWORD(v21) = 14548;
      HIWORD(v21) = (unsigned int)"er_ptr failed" >> 16;
      v22 = json_object_get(v6, v21);
      if ( !v22 )
      {
        LOWORD(v32) = 14556;
        HIWORD(v32) = (unsigned int)"ailed" >> 16;
        v22 = json_object_get(v6, v32);
      }
      LOWORD(v23) = 14564;
      HIWORD(v23) = (unsigned int)"epoch:%d targetdiff:%02x" >> 16;
      if ( !strcasecmp(v20, v23) )
      {
        LOWORD(v27) = 18512;
        HIWORD(v27) = (unsigned int)"t_temp_monitor_base" >> 16;
        v28 = json_object_get(v6, v27);
        v29 = json_integer_value(v28);
        if ( v29 )
        {
          v35 = *(_QWORD **)(a2 + 1588);
          if ( !v35 )
          {
            v35 = calloc(1u, 0x6Bu);
            *(_DWORD *)(a2 + 1588) = v35;
            if ( !v35 )
            {
              LOWORD(v36) = 15684;
              LOWORD(v37) = 5860;
              HIWORD(v36) = (unsigned int)"s\"]}" >> 16;
              HIWORD(v37) = (unsigned int)"big negative integer" >> 16;
              printf(v37, v36);
              return v12;
            }
          }
          v35[12] = v29;
        }
        v30 = a1[12](a1, a2, v22);
        goto LABEL_23;
      }
      LOWORD(v24) = 14580;
      HIWORD(v24) = (unsigned int)"iff:%02x" >> 16;
      if ( !strcasecmp(v20, v24)
        || (LOWORD(v33) = 14604,
            HIWORD(v33) = (unsigned int)"nvert header to header_ptr in parse_notify" >> 16,
            !strcasecmp(v20, v33)) )
      {
        v12 = a1[14](a1, a2, v22);
        goto LABEL_8;
      }
      LOWORD(v34) = 14624;
      HIWORD(v34) = (unsigned int)"er_ptr in parse_notify" >> 16;
      if ( !strcasecmp(v20, v34) )
      {
        v30 = a1[13](a1, a2, v22);
LABEL_23:
        v12 = v30;
        v31 = (_BYTE *)(a2 + 1916);
        if ( v30 )
          pool_tset(a2, v31, 1);
        else
          pool_tclear(a2, v31, 0);
LABEL_8:
        if ( *((_DWORD *)v6 + 1) != -1 )
        {
          v14 = (unsigned int *)v6 + 1;
          __dmb(0xBu);
          do
          {
            v15 = __ldrex(v14);
            v16 = v15 - 1;
          }
          while ( __strex(v16, v14) );
          if ( !v16 )
            json_delete(v6);
        }
        return v12;
      }
    }
LABEL_7:
    v12 = 0;
    goto LABEL_8;
  }
  V_LOCK();
  LOWORD(v25) = 14512;
  HIWORD(v25) = (unsigned int)"/frontend_rvn/frontend_rvn.c" >> 16;
  logfmt_raw(v40, 0x1000u, 0, v25, *(_DWORD *)v38, v39);
  V_UNLOCK();
  LOWORD(v26) = 17676;
  HIWORD(v26) = (unsigned int)"sleep on!" >> 16;
  zlog(g_zc, v26, 164, "stratum_handle_method_eth", 25, 685, 100, v40);
  return 0;
}
