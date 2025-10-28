int __fastcall set_onechip_to_lower_level_ks5(int a1, int a2)
{
  char *v4; // r1
  int v5; // r5
  int v6; // r1
  int v7; // r3
  void (__fastcall *v8)(int, int *); // r2
  int v9; // r3
  int v10; // r5
  float v11; // s16
  float v12; // s17
  _DWORD v14[7]; // [sp+28h] [bp-1020h] BYREF
  int v15; // [sp+44h] [bp-1004h]
  int v16; // [sp+48h] [bp-1000h] BYREF
  int v17; // [sp+4Ch] [bp-FFCh]
  int v18; // [sp+50h] [bp-FF8h]
  int v19; // [sp+54h] [bp-FF4h]

  V_LOCK();
  LOWORD(v4) = 27796;
  HIWORD(v4) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v14, v4, *(int *)(a1 + 256));
  LOWORD(v5) = -1764;
  HIWORD(v5) = (unsigned int)"DA_2110" >> 16;
  logfmt_raw((char *)&v16, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, v5, a2);
  V_UNLOCK();
  LOWORD(v6) = 1808;
  HIWORD(v6) = (unsigned int)"Setting_freq_LTC_1489" >> 16;
  zlog(g_zc, v6, 171, "set_onechip_to_lower_level_ks5", 30, 683, 40, &v16);
  v7 = *(_DWORD *)(a1 + 372);
  v18 = 4456448;
  v19 = 0;
  v17 = 0;
  v16 = 3;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 276);
  BYTE1(v18) = v7 * a2;
  v8(a1, &v16);
  v9 = *(_DWORD *)(a1 + 372);
  v18 = 655360;
  v19 = 255;
  v17 = 0;
  v16 = 0;
  BYTE1(v18) = v9 * a2;
  (*(void (__fastcall **)(int, int *))(a1 + 280))(a1, &v16);
  usleep(0x4E20u);
  sub_9A900((int *)a1, 36);
  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 544) + 44 * a2 + 20));
  v10 = *(_DWORD *)(a1 + 544) + 44 * a2;
  v11 = *(float *)(v10 + 4);
  pthread_mutex_unlock((pthread_mutex_t *)(v10 + 20));
  v12 = *(float *)(a1 + 996) - 100.0;
  while ( v12 < v11 )
  {
    v11 = v11 - 6.25;
    (*(void (__fastcall **)(int, _DWORD, int))(a1 + 200))(a1, 0, a2);
    usleep((__useconds_t)&loc_493E0);
  }
  return 0;
}
