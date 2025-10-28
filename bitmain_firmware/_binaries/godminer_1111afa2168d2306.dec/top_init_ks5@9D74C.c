int __fastcall top_init_ks5(int a1)
{
  int v2; // r4
  char *v3; // r1
  int v4; // r1
  int v5; // r8
  int v6; // r4
  int v7; // r0
  int v8; // r1
  char v9; // r3
  int v10; // r1
  int v11; // r4
  void *v12; // r8
  char *v13; // r3
  int v14; // r11
  unsigned int *v15; // r5
  int v16; // r8
  int v17; // r1
  int v19; // [sp+4h] [bp-9Ch]
  void *ptr; // [sp+3Ch] [bp-64h]
  char *s; // [sp+40h] [bp-60h]
  int v22; // [sp+4Ch] [bp-54h] BYREF
  _DWORD v23[4]; // [sp+50h] [bp-50h] BYREF
  _DWORD v24[7]; // [sp+60h] [bp-40h] BYREF
  int v25; // [sp+7Ch] [bp-24h]
  _DWORD v26[7]; // [sp+80h] [bp-20h] BYREF
  int v27; // [sp+9Ch] [bp-4h]
  char v28[4100]; // [sp+A0h] [bp+0h] BYREF

  LOWORD(v2) = -13956;
  V_LOCK();
  LOWORD(v3) = 27796;
  HIWORD(v3) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v24, v3, *(int *)(a1 + 256));
  HIWORD(v2) = (unsigned int)"08x" >> 16;
  logfmt_raw(v28, 0x1000u, 0, v25, v24[0], v24[1], v24[2], v24[3], v24[4], v24[5], v24[6], v25, v2, "top_init_ks5");
  V_UNLOCK();
  LOWORD(v4) = 1808;
  HIWORD(v4) = (unsigned int)"Setting_freq_LTC_1489" >> 16;
  zlog(g_zc, v4, 171, "top_init_ks5", 12, 960, 60, v28);
  v5 = *(_DWORD *)(a1 + 352);
  v6 = *(_DWORD *)(a1 + 504);
  v7 = sub_145388(256, (unsigned __int8)v5);
  if ( (_BYTE)v5 )
  {
    v8 = v6 - 1;
    v9 = 0;
    do
    {
      *(_BYTE *)++v8 = v9;
      v9 += v7;
    }
    while ( v6 - 1 + (unsigned __int8)v5 != v8 );
    v6 = *(_DWORD *)(a1 + 504);
    v5 = *(_DWORD *)(a1 + 352);
  }
  v10 = v6;
  *(_DWORD *)(a1 + 444) = v7;
  v11 = 0;
  (*(void (__fastcall **)(int, int, int))(a1 + 268))(a1, v10, v5);
  v23[0] = 0;
  v23[2] = 1;
  v23[1] = 0;
  v22 = 0;
  v23[3] = 0;
  v12 = calloc(0x450u, 1u);
  ptr = v12;
  (*(void (__fastcall **)(int, _DWORD *, int, void *, int *, int, int, _DWORD))(a1 + 296))(
    a1,
    v23,
    92,
    v12,
    &v22,
    v19,
    2000,
    0);
  if ( v22 > 0 )
  {
    LOWORD(v13) = 27796;
    LOWORD(v14) = -13552;
    HIWORD(v13) = (unsigned int)"%1.f" >> 16;
    s = v13;
    v15 = (unsigned int *)v12;
    do
    {
      v16 = *((unsigned __int16 *)v15 + 3);
      if ( !*((_WORD *)v15 + 3) )
      {
        V_LOCK();
        V_INT((int)v26, s, *(int *)(a1 + 256));
        HIWORD(v14) = (unsigned int)" %02x core %02x membist err not done!" >> 16;
        logfmt_raw(
          v28,
          0x1000u,
          v16,
          v27,
          v26[0],
          v26[1],
          v26[2],
          v26[3],
          v26[4],
          v26[5],
          v26[6],
          v27,
          v14,
          v11,
          *((unsigned __int8 *)v15 + 4),
          *((unsigned __int16 *)v15 + 3),
          bswap32(*v15));
        V_UNLOCK();
        LOWORD(v17) = -23376;
        HIWORD(v17) = (unsigned int)"k: %s" >> 16;
        zlog(g_zc, v17, 150, "ChipSetting_get_chip_status_KS5_2382", 36, 1617, 20, v28);
      }
      ++v11;
      v15 += 3;
    }
    while ( v11 < v22 );
  }
  free(ptr);
  set_core_enable_ks5(a1, 23130);
  sub_9A900((int *)a1, 127);
  set_misc_control_ks5(a1);
  set_work_len_ks5(a1);
  set_nonce_len_ks5(a1);
  set_nonce_count_zero_ks5(a1);
  set_nonce_overflow_ks5(a1, 0);
  sub_9C5CC((int *)a1);
  return 0;
}
