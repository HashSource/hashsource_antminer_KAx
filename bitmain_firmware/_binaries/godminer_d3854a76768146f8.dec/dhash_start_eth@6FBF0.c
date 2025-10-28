int __fastcall dhash_start_eth(int a1)
{
  int v2; // r5
  char *v3; // r1
  int v4; // r4
  int v5; // r1
  int result; // r0
  _DWORD v7[7]; // [sp+28h] [bp-20h] BYREF
  int v8; // [sp+44h] [bp-4h]
  char v9[4100]; // [sp+48h] [bp+0h] BYREF

  LOWORD(v2) = -15372;
  V_LOCK();
  LOWORD(v3) = 588;
  HIWORD(v3) = (unsigned int)": get test = %d" >> 16;
  HIWORD(v2) = (unsigned int)"Perform refb_clk_div2_en override" >> 16;
  V_INT((int)v7, v3, *(int *)(a1 + 232));
  LOWORD(v4) = -12320;
  HIWORD(v4) = (unsigned int)"eset_HNS_2130" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v4, v2);
  V_UNLOCK();
  LOWORD(v5) = -12308;
  HIWORD(v5) = (unsigned int)"0" >> 16;
  zlog(g_zc, v5, 171, v2, 15, 1105, 40, v9);
  result = 0;
  if ( !*(_BYTE *)(a1 + 436) )
    *(_DWORD *)(a1 + 440) = (int)*(float *)(a1 + 940);
  return result;
}
