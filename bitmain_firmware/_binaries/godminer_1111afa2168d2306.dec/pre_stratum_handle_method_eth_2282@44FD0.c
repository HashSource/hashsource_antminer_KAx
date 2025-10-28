int __fastcall pre_stratum_handle_method_eth_2282(
        int (__fastcall **a1)(_DWORD, _DWORD, _DWORD),
        int a2,
        int a3,
        _DWORD *a4)
{
  double *v8; // r0
  double *v9; // r4
  _DWORD *v10; // r6
  const char *v11; // r0
  bool v12; // zf
  char *v13; // r1
  _DWORD *v14; // r0
  const char *v15; // r6
  char *v16; // r1
  int v17; // r7
  char *v18; // r1
  const char *v19; // r1
  const char *v20; // r1
  int v21; // r3
  int v22; // r6
  unsigned int *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  int v27; // r3
  int v28; // r1
  char *v29; // r1
  int v30; // r0
  char *v31; // r1
  _DWORD *v32; // r6
  char *v33; // r1
  _DWORD *v34; // r5
  int v35; // r3
  int v36; // r1
  char *v37; // r1
  _DWORD *v38; // r0
  char *v39; // r1
  int v40; // r0
  __int64 v41; // r10
  _BYTE *v42; // r1
  int v43; // r3
  char *v44; // r1
  int v45; // r3
  int v46; // r1
  const char *v47; // r1
  const char *v48; // r1
  char *v49; // r1
  int v50; // r1
  const char *v51; // r0
  char v52[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v53[160]; // [sp+70h] [bp-10A4h] BYREF
  char v54[4100]; // [sp+110h] [bp-1004h] BYREF

  v8 = json_loads(a3, 0, v52);
  v9 = v8;
  if ( v8 )
  {
    v10 = (_DWORD *)json_object_get(v8, "jsonrpc");
    v11 = (const char *)json_string_value(v10);
    v12 = v10 == 0;
    if ( v10 )
      v12 = v11 == 0;
    if ( !v12 && !strcasecmp(v11, "2.0") )
    {
      LOWORD(v37) = -23464;
      *(_BYTE *)(a2 + 1656) = 1;
      HIWORD(v37) = (unsigned int)"cribe send failed" >> 16;
      v38 = (_DWORD *)json_object_get(v9, v37);
      if ( !v38 )
      {
        LOWORD(v49) = -23456;
        HIWORD(v49) = (unsigned int)"nd failed" >> 16;
        v38 = (_DWORD *)json_object_get(v9, v49);
      }
      v22 = sub_43FF0(v38, a2);
      if ( !v22 )
      {
        V_LOCK();
        LOWORD(v45) = -23364;
        HIWORD(v45) = (unsigned int)"=%d" >> 16;
        logfmt_raw(v54, 0x1000u, 0, v45, a3);
        V_UNLOCK();
        LOWORD(v46) = -18936;
        HIWORD(v46) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
        zlog(g_zc, v46, 174, "pre_stratum_handle_method_eth_2282", 34, 1126, 80, v54);
        goto LABEL_31;
      }
    }
    else
    {
      LOWORD(v13) = -23472;
      *(_BYTE *)(a2 + 1656) = 0;
      HIWORD(v13) = (unsigned int)"tum_subscribe send failed" >> 16;
      v14 = (_DWORD *)json_object_get(v9, v13);
      v15 = (const char *)json_string_value(v14);
      if ( v15 )
      {
        LOWORD(v16) = -23464;
        HIWORD(v16) = (unsigned int)"cribe send failed" >> 16;
        v17 = json_object_get(v9, v16);
        if ( !v17 )
        {
          LOWORD(v44) = -23456;
          HIWORD(v44) = (unsigned int)"nd failed" >> 16;
          v17 = json_object_get(v9, v44);
        }
        LOWORD(v18) = 32160;
        HIWORD(v18) = (unsigned int)"version" >> 16;
        json_object_get(v9, v18);
        LOWORD(v19) = -23448;
        HIWORD(v19) = (unsigned int)"d" >> 16;
        if ( !strcasecmp(v15, v19) )
        {
          LOWORD(v39) = -19500;
          HIWORD(v39) = (unsigned int)"et_eth_2282" >> 16;
          v40 = json_object_get(v9, v39);
          v41 = json_integer_value(v40);
          if ( v41 )
          {
            v22 = *(_DWORD *)(a2 + 1588);
            if ( !v22 )
            {
              v22 = (int)calloc(1u, 0x6Bu);
              *(_DWORD *)(a2 + 1588) = v22;
              if ( !v22 )
              {
                LOWORD(v50) = -22328;
                LOWORD(v51) = 32664;
                HIWORD(v50) = (unsigned int)"lease/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c" >> 16;
                HIWORD(v51) = (unsigned int)" DOAROA LOG" >> 16;
                printf(v51, v50);
                return v22;
              }
            }
            *(_QWORD *)(v22 + 96) = v41;
          }
          v22 = a1[12](a1, a2, v17);
          v42 = (_BYTE *)(a2 + 1916);
          if ( v22 )
          {
            LOWORD(v43) = -21348;
            HIWORD(v43) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c" >> 16;
            *a4 = v43;
            pool_tset(a2, v42, 1);
            goto LABEL_12;
          }
          goto LABEL_35;
        }
        LOWORD(v20) = -23432;
        HIWORD(v20) = (unsigned int)"cribe timed out" >> 16;
        if ( !strcasecmp(v15, v20)
          || (LOWORD(v47) = -23408, HIWORD(v47) = (unsigned int)" reason)" >> 16, !strcasecmp(v15, v47)) )
        {
          LOWORD(v21) = -23336;
          HIWORD(v21) = (unsigned int)"method\": \"mining.extranonce.subscribe\", \"params\": []}" >> 16;
          *a4 = v21;
          v22 = a1[14](a1, a2, v17);
          goto LABEL_12;
        }
        LOWORD(v48) = -23388;
        HIWORD(v48) = (unsigned int)" call failed: %s, req_id=%d" >> 16;
        if ( !strcasecmp(v15, v48) )
        {
          v22 = a1[13](a1, a2, v17);
          v42 = (_BYTE *)(a2 + 1916);
          if ( v22 )
          {
            pool_tset(a2, v42, 1);
LABEL_12:
            if ( *((_DWORD *)v9 + 1) != -1 )
            {
              v23 = (unsigned int *)v9 + 1;
              __dmb(0xBu);
              do
              {
                v24 = __ldrex(v23);
                v25 = v24 - 1;
              }
              while ( __strex(v25, v23) );
              if ( !v25 )
                json_delete(v9);
            }
            return v22;
          }
LABEL_35:
          pool_tclear(a2, v42, 0);
          goto LABEL_12;
        }
      }
      LOWORD(v29) = -23456;
      HIWORD(v29) = (unsigned int)"nd failed" >> 16;
      v30 = json_object_get(v9, v29);
      LOWORD(v31) = 31628;
      v32 = (_DWORD *)v30;
      HIWORD(v31) = (unsigned int)"pwm value error!" >> 16;
      json_object_get(v9, v31);
      LOWORD(v33) = 32160;
      HIWORD(v33) = (unsigned int)"version" >> 16;
      v34 = (_DWORD *)json_object_get(v9, v33);
      if ( v32 && *v32 != 7 && v32 != json_false() )
        json_string_value(v32);
      json_true();
      if ( !v34 || *v34 == 7 || json_integer_value((int)v34) != 2 )
      {
        V_LOCK();
        LOWORD(v35) = -19492;
        HIWORD(v35) = (unsigned int)"282" >> 16;
        logfmt_raw(v54, 0x1000u, 0, v35, "pre_stratum_handle_method_eth_2282");
        V_UNLOCK();
        LOWORD(v36) = -18936;
        HIWORD(v36) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
        v22 = 0;
        zlog(g_zc, v36, 174, "pre_stratum_handle_method_eth_2282", 34, 1118, 40, v54);
        goto LABEL_12;
      }
    }
    v22 = 1;
LABEL_31:
    *a4 = "notify";
    goto LABEL_12;
  }
  V_LOCK();
  LOWORD(v27) = -23500;
  HIWORD(v27) = (unsigned int)"GodMiner/2.0.1\", null]}" >> 16;
  logfmt_raw(v54, 0x1000u, 0, v27, *(_DWORD *)v52, v53);
  V_UNLOCK();
  LOWORD(v28) = -18936;
  HIWORD(v28) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
  zlog(g_zc, v28, 174, "pre_stratum_handle_method_eth_2282", 34, 1027, 100, v54);
  return 0;
}
