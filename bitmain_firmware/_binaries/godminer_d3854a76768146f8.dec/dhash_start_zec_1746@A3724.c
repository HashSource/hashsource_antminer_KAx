int __fastcall dhash_start_zec_1746(int a1)
{
  char *v2; // r1
  int v3; // r5
  int v4; // r1
  void (__fastcall *v5)(int, int *); // r3
  void (__fastcall *v6)(int, int *); // r3
  int v7; // r3
  int result; // r0
  _DWORD v9[7]; // [sp+28h] [bp-1024h] BYREF
  int v10; // [sp+44h] [bp-1008h]
  int p_st_size; // [sp+48h] [bp-1004h] BYREF
  int v12; // [sp+4Ch] [bp-1000h]
  int v13; // [sp+50h] [bp-FFCh]
  int v14; // [sp+54h] [bp-FF8h]

  V_LOCK();
  LOWORD(v2) = 588;
  HIWORD(v2) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v9, v2, *(int *)(a1 + 232));
  LOWORD(v3) = 14932;
  HIWORD(v3) = (unsigned int)"ui type = %d, port = %d, status = %d" >> 16;
  logfmt_raw((char *)&p_st_size, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, v3);
  V_UNLOCK();
  LOWORD(v4) = 14760;
  HIWORD(v4) = (unsigned int)"ild/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_ui.c" >> 16;
  zlog(g_zc, v4, 171, "dhash_start_zec_1746", 20, 707, 40, &p_st_size);
  v13 = 2621440;
  v14 = 0;
  p_st_size = (int)&stru_14818.st_size;
  v5 = *(void (__fastcall **)(int, int *))(a1 + 248);
  v12 = 0;
  LOBYTE(v13) = 1;
  v5(a1, &p_st_size);
  v14 = 0;
  v12 = 0;
  v13 = 5242881;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 248);
  p_st_size = 0;
  v6(a1, &p_st_size);
  v13 = 5767169;
  v14 = 0;
  v12 = 0;
  p_st_size = 2;
  (*(void (__fastcall **)(int, int *))(a1 + 248))(a1, &p_st_size);
  (*(void (__fastcall **)(int))(a1 + 148))(a1);
  v7 = *(unsigned __int8 *)(a1 + 436);
  result = 0;
  *(_BYTE *)(a1 + 237) = 1;
  if ( !v7 )
    *(_DWORD *)(a1 + 440) = (int)*(float *)(a1 + 940);
  return result;
}
