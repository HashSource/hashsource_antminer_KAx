int __fastcall stratum_check(int *a1)
{
  int v2; // r0
  int v3; // r7
  const char *v4; // r0
  void *v5; // r3
  int v6; // r3
  int v7; // r1
  int v8; // r3
  int v9; // r0
  int v10; // r3
  int v11; // r1
  int v12; // r3
  int v13; // r1
  int v14; // r3
  int v15; // r8
  int v16; // r0
  int v17; // r12
  int v18; // r2
  int v19; // r1
  int v21; // r3
  __time_t v22; // r8
  char *v23; // r3
  int v24; // r2
  int v25; // r11
  int v26; // r0
  void *v27; // r11
  _BYTE *v28; // r3
  int v29; // r3
  int v30; // r1
  void (__fastcall *v31)(int *); // r1
  int v32; // r2
  int v33; // r11
  int v34; // r1
  int v35; // r3
  int v36; // r1
  int v37; // r3
  int v38; // r1
  _DWORD v39[10]; // [sp+0h] [bp-1084h] BYREF
  _DWORD *v40; // [sp+28h] [bp-105Ch]
  _BYTE *v41; // [sp+2Ch] [bp-1058h]
  char *s; // [sp+30h] [bp-1054h]
  int v43; // [sp+34h] [bp-1050h]
  char v44[4]; // [sp+3Ch] [bp-1048h] BYREF
  _DWORD v45[7]; // [sp+40h] [bp-1044h] BYREF
  int v46; // [sp+5Ch] [bp-1028h]
  _DWORD v47[7]; // [sp+60h] [bp-1024h] BYREF
  int v48; // [sp+7Ch] [bp-1008h]
  char v49[4100]; // [sp+80h] [bp-1004h] BYREF

  v2 = frontend_runtime_instance();
  if ( !a1 || (v3 = v2, (v4 = (const char *)a1[3]) == 0) || !a1[4] )
  {
    V_LOCK();
    LOWORD(v12) = 9660;
    HIWORD(v12) = (unsigned int)"in in parse_notify" >> 16;
    logfmt_raw(v49, 0x1000u, 0, v12, *a1);
    V_UNLOCK();
    LOWORD(v13) = 8820;
    HIWORD(v13) = (unsigned int)"once2_size" >> 16;
    zlog(g_zc, v13, 145, "stratum_check", 13, 359, 100, v49);
    goto LABEL_10;
  }
  v5 = (void *)a1[8];
  v40 = *(_DWORD **)(*(_DWORD *)(v3 + 72) + 20);
  if ( v5 )
  {
    free(v5);
    v4 = (const char *)a1[3];
  }
  a1[8] = (int)_strdup(v4);
  V_LOCK();
  LOWORD(v6) = 9708;
  HIWORD(v6) = (unsigned int)"0000000000000000000000000000000000000000000000000000" >> 16;
  logfmt_raw(v49, 0x1000u, 0, v6, *a1, a1[3]);
  V_UNLOCK();
  LOWORD(v7) = 8820;
  HIWORD(v7) = (unsigned int)"once2_size" >> 16;
  zlog(g_zc, v7, 145, "stratum_check", 13, 367, 40, v49);
  v41 = a1 + 2;
  pool_tset((int)a1, (_BYTE *)a1 + 1904, 0);
  pool_tclear((int)a1, (_BYTE *)a1 + 1916, 0);
  pool_tclear((int)a1, (_BYTE *)a1 + 8, 0);
  if ( !(*(int (__fastcall **)(int *))v3)(a1) )
  {
    (*(void (__fastcall **)(int *))(v3 + 4))(a1);
    V_LOCK();
    LOWORD(v8) = 9744;
    HIWORD(v8) = (unsigned int)"0000000000000000" >> 16;
    logfmt_raw(v49, 0x1000u, 0, v8);
    V_UNLOCK();
    v9 = g_zc;
    v10 = 376;
LABEL_8:
    LOWORD(v11) = 8820;
    HIWORD(v11) = (unsigned int)"once2_size" >> 16;
    zlog(v9, v11, 145, "stratum_check", 13, v10, 100, v49);
LABEL_10:
    V_LOCK();
    LOWORD(v14) = 9944;
    HIWORD(v14) = (unsigned int)"l coinbase in parse_notify" >> 16;
    v15 = 0;
    logfmt_raw(v49, 0x1000u, 0, v14, *a1);
    V_UNLOCK();
    v16 = g_zc;
    v17 = 100;
    v18 = 441;
    goto LABEL_11;
  }
  if ( !(*(int (__fastcall **)(int, int *))(v3 + 16))(v3, a1) )
  {
    (*(void (__fastcall **)(int *))(v3 + 4))(a1);
    V_LOCK();
    LOWORD(v21) = 9784;
    HIWORD(v21) = (unsigned int)"ader to header_bin in parse_notify" >> 16;
    logfmt_raw(v49, 0x1000u, 0, v21);
    V_UNLOCK();
    v9 = g_zc;
    v10 = 383;
    goto LABEL_8;
  }
  v22 = (__time_t)v40;
  LOWORD(v23) = 5040;
  LOWORD(v24) = 9580;
  HIWORD(v23) = (unsigned int)"ot a valid byte!" >> 16;
  HIWORD(v24) = (unsigned int)"lloc pool swork merkle_bin" >> 16;
  s = v23;
  v43 = v24;
  while ( 1 )
  {
    wait_pool_to_be_current_timeout((int)a1);
    v25 = stratum_socket_full((int)a1, v22);
    if ( v25 )
      break;
    V_LOCK();
    V_INT((int)v45, s, *a1);
    v40 = v39;
    logfmt_raw(v49, 0x1000u, 0, v46, v45[0], v45[1], v45[2], v45[3], v45[4], v45[5], v45[6], v46, v43, v39[9]);
    V_UNLOCK();
    LOWORD(v30) = 8820;
    HIWORD(v30) = (unsigned int)"once2_size" >> 16;
    zlog(g_zc, v30, 145, "stratum_check", 13, 393, 100, v49);
LABEL_22:
    v31 = *(void (__fastcall **)(int *))(v3 + 4);
    v32 = total_go;
    ++a1[487];
    total_go = v32 + 1;
    v31(a1);
    pool_tclear((int)a1, (_BYTE *)a1 + 1916, 0);
    pool_died(a1);
    V_LOCK();
    V_INT((int)v47, s, *a1);
    LOWORD(v33) = 9608;
    HIWORD(v33) = (unsigned int)"merkle %d: %s" >> 16;
    logfmt_raw(v49, 0x1000u, 0, v48, v47[0], v47[1], v47[2], v47[3], v47[4], v47[5], v47[6], v48, v33);
    V_UNLOCK();
    LOWORD(v34) = 8820;
    HIWORD(v34) = (unsigned int)"once2_size" >> 16;
    zlog(g_zc, v34, 145, "stratum_check", 13, 408, 20, v49);
    sleep(0x1Eu);
  }
  v26 = (*(int (__fastcall **)(int *))(v3 + 8))(a1);
  if ( !v26 )
    goto LABEL_22;
  v15 = v25;
  v27 = (void *)v26;
  if ( (*(int (__fastcall **)(int, int *, int, char *))(v3 + 24))(v3, a1, v26, v44)
    || (*(int (__fastcall **)(int, void *, int *))(v3 + 28))(v3, v27, a1) )
  {
    free(v27);
    pool_tset((int)a1, v41, 0);
    pool_tclear((int)a1, (_BYTE *)a1 + 1904, 0);
    LOWORD(v28) = 17345;
    HIWORD(v28) = (unsigned int)&unk_1758B1 >> 16;
    *v28 = 1;
    update_miner_working_status();
    (*(void (__fastcall **)(int *))(v3 + 4))(a1);
    V_LOCK();
    LOWORD(v29) = 9916;
    HIWORD(v29) = (unsigned int)"tify" >> 16;
    logfmt_raw(v49, 0x1000u, 0, v29, *a1, a1[3]);
    V_UNLOCK();
    v16 = g_zc;
    v17 = 40;
    v18 = 437;
LABEL_11:
    LOWORD(v19) = 8820;
    HIWORD(v19) = (unsigned int)"once2_size" >> 16;
    zlog(v16, v19, 145, "stratum_check", 13, v18, v17, v49);
  }
  else
  {
    free(v27);
    (*(void (__fastcall **)(int *))(v3 + 4))(a1);
    V_LOCK();
    LOWORD(v35) = 9808;
    HIWORD(v35) = (unsigned int)"rse_notify" >> 16;
    logfmt_raw(v49, 0x1000u, 0, v35, *a1);
    v15 = 0;
    V_UNLOCK();
    LOWORD(v36) = 8820;
    HIWORD(v36) = (unsigned int)"once2_size" >> 16;
    zlog(g_zc, v36, 145, "stratum_check", 13, 426, 100, v49);
    V_LOCK();
    LOWORD(v37) = 9888;
    HIWORD(v37) = (unsigned int)"t cb2 to cb2_bin in parse_notify" >> 16;
    logfmt_raw(v49, 0x1000u, 0, v37, *a1);
    V_UNLOCK();
    LOWORD(v38) = 8820;
    HIWORD(v38) = (unsigned int)"once2_size" >> 16;
    zlog(g_zc, v38, 145, "stratum_check", 13, 427, 100, v49);
  }
  return v15;
}
