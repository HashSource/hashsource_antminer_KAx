int __fastcall stratum_subscribe_base(int a1, int *a2)
{
  int v2; // r4
  double *v5; // r7
  void *v6; // r11
  const char *v7; // r0
  size_t v8; // r0
  char *v9; // r0
  char *v10; // r6
  const char *v11; // r1
  size_t v12; // r2
  int v13; // r2
  int v14; // r0
  int v15; // r1
  int v17; // r0
  _DWORD *v18; // r10
  int v19; // r0
  int v20; // r9
  _BOOL4 v21; // r2
  int v22; // r9
  unsigned int *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  unsigned int *v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r2
  const char *v29; // r0
  int v30; // r10
  int v31; // [sp+4h] [bp-1158h]
  _DWORD *v32; // [sp+30h] [bp-112Ch]
  _DWORD v33[7]; // [sp+38h] [bp-1124h] BYREF
  int v34; // [sp+54h] [bp-1108h]
  char v35[92]; // [sp+5Ch] [bp-1100h] BYREF
  _BYTE v36[160]; // [sp+B8h] [bp-10A4h] BYREF
  char v37[4100]; // [sp+158h] [bp-1004h] BYREF

  v2 = *((unsigned __int8 *)a2 + 1648);
  if ( !*((_BYTE *)a2 + 1648) )
  {
    v5 = (double *)*((unsigned __int8 *)a2 + 1648);
    v6 = v5;
    while ( 1 )
    {
      v7 = (const char *)a2[17];
      v8 = v7 ? strlen(v7) + 128 : 128;
      v9 = (char *)malloc(v8);
      v10 = v9;
      if ( v2 )
      {
        v11 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null]}";
        v12 = 77;
      }
      else
      {
        v11 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}";
        v12 = 76;
      }
      memcpy(v9, v11, v12);
      if ( !(*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v10) )
        break;
      if ( !socket_full(a2[8], 30) )
      {
        V_LOCK();
        V_INT((int)v33, "poolno", *a2);
        logfmt_raw(
          v37,
          0x1000u,
          0,
          v34,
          v33[0],
          v33[1],
          v33[2],
          v33[3],
          v33[4],
          v33[5],
          v33[6],
          v34,
          "stratum_subscribe timed out");
        V_UNLOCK();
        v14 = g_zc;
        v13 = 136;
        LOWORD(v15) = 5900;
        goto LABEL_11;
      }
      v17 = (*(int (__fastcall **)(int *))(a1 + 8))(a2);
      v6 = (void *)v17;
      if ( !v17 )
        goto LABEL_12;
      v5 = json_loads(v17, 0, v35);
      free(v6);
      if ( v5 )
      {
        v18 = (_DWORD *)json_object_get(v5, "result");
        v32 = (_DWORD *)json_object_get(v5, "error");
        v19 = json_object_get(v5, "id");
        v20 = json_integer_value(v19);
        v21 = v18 == 0;
        if ( v20 != 1 )
          v21 = 1;
        if ( v21 || *v18 == 7 )
        {
          if ( !v2 )
            goto LABEL_41;
          if ( v32 )
            goto LABEL_28;
          v10 = (char *)malloc(0x11u);
          if ( v10 )
            strcpy(v10, "(unknown reason)");
LABEL_29:
          V_LOCK();
          v31 = v20;
          v22 = 0;
          logfmt_raw(v37, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v10, v31);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_base.c",
            152,
            "stratum_subscribe_base",
            22,
            162,
            100,
            v37);
        }
        else
        {
          if ( v32 && *v32 != 7 )
          {
            if ( !v2 )
            {
LABEL_41:
              v22 = v2;
              if ( v10 )
                goto LABEL_42;
              goto LABEL_31;
            }
LABEL_28:
            v10 = json_dumps(v32, 3);
            goto LABEL_29;
          }
          v22 = (*(int (__fastcall **)(int, int *, _DWORD *, int))(a1 + 48))(a1, a2, v18, 1);
          if ( v22 )
          {
            v29 = (const char *)a2[7];
            a2[478] = 2;
            if ( v29 )
            {
              if ( strstr(v29, "nicehash") )
              {
                a2[478] = 3;
                sprintf(v10, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
                v30 = (*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v10);
                if ( v30 )
                {
                  v22 = socket_full(a2[8], 30);
                  if ( v22 )
                  {
                    (*(void (__fastcall **)(int *))(a1 + 8))(a2);
                    free(v10);
                    goto LABEL_31;
                  }
                  v22 = v30;
                }
LABEL_42:
                free(v10);
LABEL_31:
                if ( *((_DWORD *)v5 + 1) != -1 )
                {
                  v23 = (unsigned int *)v5 + 1;
                  __dmb(0xBu);
                  do
                  {
                    v24 = __ldrex(v23);
                    v25 = v24 - 1;
                  }
                  while ( __strex(v25, v23) );
                  if ( !v25 )
LABEL_47:
                    json_delete(v5);
                }
                if ( v22 )
                  return 1;
                goto LABEL_15;
              }
            }
          }
        }
        if ( v10 )
          goto LABEL_42;
        goto LABEL_31;
      }
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v35, v36);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_base.c",
        152,
        "stratum_subscribe_base",
        22,
        147,
        100,
        v37);
      if ( v10 )
        free(v10);
LABEL_15:
      if ( v6 )
        v2 ^= 1u;
      else
        v2 = 0;
      if ( !v2 )
        return 0;
    }
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "stratum_subscribe send failed");
    V_UNLOCK();
    v13 = 131;
    v14 = g_zc;
    LOWORD(v15) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp"
                                    "/release/build/godminer-origin_godminer-new/frontend/frontend_base.c";
LABEL_11:
    HIWORD(v15) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/frontend/frontend_base.c" >> 16;
    zlog(v14, v15, 152, "stratum_subscribe_base", 22, v13, 100, v37);
LABEL_12:
    if ( v10 )
    {
      free(v10);
      if ( v5 )
      {
        v22 = 0;
        goto LABEL_31;
      }
    }
    else if ( v5 )
    {
      if ( *((_DWORD *)v5 + 1) != -1 )
      {
        v26 = (unsigned int *)v5 + 1;
        __dmb(0xBu);
        do
        {
          v27 = __ldrex(v26);
          v28 = v27 - 1;
        }
        while ( __strex(v28, v26) );
        if ( !v28 )
        {
          v22 = 0;
          goto LABEL_47;
        }
      }
    }
    goto LABEL_15;
  }
  return 1;
}
