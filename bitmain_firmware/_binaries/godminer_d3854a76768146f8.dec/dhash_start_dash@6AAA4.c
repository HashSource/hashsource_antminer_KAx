int __fastcall dhash_start_dash(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r1
  int v5; // r3
  int result; // r0
  _DWORD v7[7]; // [sp+28h] [bp-1020h] BYREF
  int v8; // [sp+44h] [bp-1004h]
  char v9[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = 588;
  HIWORD(v2) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v7, v2, *(int *)(a1 + 232));
  LOWORD(v3) = -16932;
  HIWORD(v3) = (unsigned int)"nal_loop_ate_setup" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v3);
  V_UNLOCK();
  LOWORD(v4) = -17504;
  HIWORD(v4) = (unsigned int)"resp_num: %d, retry_time: %d" >> 16;
  zlog(g_zc, v4, 173, "dhash_start_dash", 16, 662, 40, v9);
  sub_6A858(a1);
  v5 = *(unsigned __int8 *)(a1 + 436);
  result = 0;
  *(_BYTE *)(a1 + 237) = 1;
  if ( !v5 )
    *(_DWORD *)(a1 + 440) = (int)*(float *)(a1 + 940);
  return result;
}
