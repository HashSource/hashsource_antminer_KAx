int __fastcall cache_dag_done_check_rvn(int a1, int a2, int a3)
{
  __int16 v3; // r5
  int v5; // r3
  int v6; // r5
  int v7; // r1
  char *v8; // r4
  int v9; // r4
  int v10; // r1
  int v11; // r1
  char *s; // [sp+38h] [bp-1084h]
  void *src; // [sp+44h] [bp-1078h]
  void *dest; // [sp+54h] [bp-1068h]
  __int16 v18; // [sp+58h] [bp-1064h]
  _DWORD v19[2]; // [sp+68h] [bp-1054h] BYREF
  int v20; // [sp+70h] [bp-104Ch]
  int v21; // [sp+74h] [bp-1048h]
  _DWORD v22[7]; // [sp+78h] [bp-1044h] BYREF
  int v23; // [sp+94h] [bp-1028h]
  char v24[4100]; // [sp+B8h] [bp-1004h] BYREF

  v3 = a2;
  V_LOCK();
  LOWORD(v5) = -13668;
  HIWORD(v5) = (unsigned int)"ist0 final pattern %08x" >> 16;
  v18 = v3;
  LOWORD(v6) = 10756;
  logfmt_raw(v24, 0x1000u, 0, v5, "cache_dag_done_check_rvn");
  V_UNLOCK();
  LOWORD(v7) = 9580;
  HIWORD(v7) = (unsigned int)"get membist lost cnt failed!" >> 16;
  LOWORD(v8) = 27796;
  zlog(g_zc, v7, 171, "cache_dag_done_check_rvn", 24, 2656, 40, v24);
  dest = malloc(0x1800u);
  HIWORD(v8) = (unsigned int)"%1.f" >> 16;
  s = v8;
  do
  {
    sleep(0xAu);
    v9 = *(_DWORD *)(a1 + 440);
    V_LOCK();
    V_INT((int)v22, s, *(int *)(a1 + 256));
    HIWORD(v6) = (unsigned int)"RVN" >> 16;
    logfmt_raw(
      v24,
      0x1000u,
      0,
      v23,
      v22[0],
      v22[1],
      v22[2],
      v22[3],
      v22[4],
      v22[5],
      v22[6],
      v23,
      v6,
      "ChipSetting_get_cache_done_status_rvn_RVN",
      v9 << 6);
    V_UNLOCK();
    LOWORD(v10) = -23376;
    HIWORD(v10) = (unsigned int)"k: %s" >> 16;
    zlog(g_zc, v10, 150, "ChipSetting_get_cache_done_status_rvn_RVN", 41, 1943, 40, v24);
    v19[0] = 0;
    v19[1] = 0;
    v20 = 0;
    v21 = 0;
    src = calloc(768 * v9, 1u);
    HIWORD(v20) = v18;
    (*(void (__fastcall **)(int, _DWORD *, int))(a1 + 316))(a1, v19, v9 << 6);
    if ( dest )
      memcpy(dest, src, 768 * v9);
    free(src);
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "%s resp_num: %d, work_mode: %d", "cache_dag_done_check_rvn", 0, a3);
    V_UNLOCK();
    LOWORD(v11) = 9580;
    HIWORD(v11) = (unsigned int)"get membist lost cnt failed!" >> 16;
    zlog(g_zc, v11, 171, "cache_dag_done_check_rvn", 24, 2671, 40, v24);
  }
  while ( a2 != 73 );
  return 0;
}
