int __fastcall stratum_set_diff_or_target_base(int a1, int a2, _DWORD *a3)
{
  double v3; // d0
  _DWORD *v7; // r0
  void (__fastcall *v8)(int); // r3
  int v9; // r3
  int v10; // r1
  int v11; // r3
  int v12; // r1
  int v14; // r12
  int v15; // r3
  int v16; // r1
  _DWORD *v17; // r0
  const char *v18; // r0
  char *v19; // r5
  int v20; // r3
  int v21; // r1
  size_t v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // [sp+4h] [bp-1028h]
  _DWORD v30[1025]; // [sp+28h] [bp-1004h] BYREF

  if ( json_array_get(a3, 0) && *json_array_get(a3, 0) == 2 )
  {
    v17 = json_array_get(a3, 0);
    v18 = (const char *)json_string_value(v17);
    v19 = (char *)v18;
    if ( v18 && strlen(v18) == 64 )
    {
      V_LOCK();
      LOWORD(v20) = 14412;
      HIWORD(v20) = (unsigned int)"/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c" >> 16;
      logfmt_raw((char *)v30, 0x1000u, 0, v20, "stratum_set_diff_or_target_base", v19);
      V_UNLOCK();
      LOWORD(v21) = 14256;
      HIWORD(v21) = (unsigned int)",\"%s\",\"%s\",\"%s\",\"%s\"]}" >> 16;
      zlog(g_zc, v21, 152, "stratum_set_diff_or_target_base", 31, 24, 20, v30);
      v22 = strlen(v19);
      hex2bin((int)v30, (unsigned __int8 *)v19, v22 >> 1);
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
      v23 = v30[1];
      v24 = v30[2];
      v25 = v30[3];
      *(_DWORD *)(a2 + 1488) = v30[0];
      *(_DWORD *)(a2 + 1492) = v23;
      *(_DWORD *)(a2 + 1496) = v24;
      *(_DWORD *)(a2 + 1500) = v25;
      v26 = v30[5];
      v27 = v30[6];
      v28 = v30[7];
      *(_DWORD *)(a2 + 1504) = v30[4];
      *(_DWORD *)(a2 + 1508) = v26;
      *(_DWORD *)(a2 + 1512) = v27;
      *(_DWORD *)(a2 + 1516) = v28;
      (*(void (__fastcall **)(_DWORD *))(a1 + 68))(v30);
      *(double *)(a2 + 1520) = v3;
      *(double *)(a2 + 448) = v3;
      *(double *)(a2 + 1808) = v3;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      return 1;
    }
    V_LOCK();
    logfmt_raw((char *)v30, 0x1000u, 0, "Stratum set target: invalid parameters");
    V_UNLOCK();
    v14 = 20;
LABEL_7:
    LOWORD(v15) = 13984;
    LOWORD(v16) = 14256;
    HIWORD(v15) = (unsigned int)"/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c" >> 16;
    HIWORD(v16) = (unsigned int)",\"%s\",\"%s\",\"%s\",\"%s\"]}" >> 16;
    zlog(g_zc, v16, 152, v15, 31, v14, 100, v30);
    return 0;
  }
  v7 = json_array_get(a3, 0);
  json_number_value((int)v7);
  if ( v3 == 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)v30, 0x1000u, 0, "Stratum set target: invalid parameters");
    V_UNLOCK();
    v14 = 35;
    goto LABEL_7;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v8 = *(void (__fastcall **)(int))(a1 + 64);
  *(double *)(a2 + 1520) = v3;
  *(double *)(a2 + 448) = v3;
  *(double *)(a2 + 1808) = v3;
  v8(a2 + 1488);
  V_LOCK();
  LOWORD(v9) = 14436;
  HIWORD(v9) = (unsigned int)"ild/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c" >> 16;
  logfmt_raw((char *)v30, 0x1000u, 0, v9, "stratum_set_diff_or_target_base", v29, v3);
  V_UNLOCK();
  LOWORD(v10) = 14256;
  HIWORD(v10) = (unsigned int)",\"%s\",\"%s\",\"%s\",\"%s\"]}" >> 16;
  zlog(g_zc, v10, 152, "stratum_set_diff_or_target_base", 31, 42, 20, v30);
  V_LOCK();
  LOWORD(v11) = 14460;
  HIWORD(v11) = (unsigned int)"/release/build/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c" >> 16;
  logfmt_raw(
    (char *)v30,
    0x1000u,
    0,
    v11,
    "stratum_set_diff_or_target_base",
    *(_DWORD *)(a2 + 1488),
    *(_DWORD *)(a2 + 1492),
    *(_DWORD *)(a2 + 1496),
    *(_DWORD *)(a2 + 1500),
    *(_DWORD *)(a2 + 1504),
    *(_DWORD *)(a2 + 1508),
    *(_DWORD *)(a2 + 1512),
    *(_DWORD *)(a2 + 1516));
  V_UNLOCK();
  LOWORD(v12) = 14256;
  HIWORD(v12) = (unsigned int)",\"%s\",\"%s\",\"%s\",\"%s\"]}" >> 16;
  zlog(g_zc, v12, 152, "stratum_set_diff_or_target_base", 31, 43, 20, v30);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  return 1;
}
