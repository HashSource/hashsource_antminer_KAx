int __fastcall dhash_start_kas(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r1
  int v5; // r3
  int result; // r0
  _DWORD v7[7]; // [sp+28h] [bp-1024h] BYREF
  int v8; // [sp+44h] [bp-1008h]
  char v9[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 27796;
  HIWORD(v2) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v7, v2, *(int *)(a1 + 256));
  LOWORD(v3) = -13956;
  HIWORD(v3) = (unsigned int)"08x" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v3, "dhash_start_kas");
  V_UNLOCK();
  LOWORD(v4) = -2140;
  HIWORD(v4) = (unsigned int)"ng work id ,err" >> 16;
  zlog(g_zc, v4, 171, "dhash_start_kas", 15, 430, 40, v9);
  v5 = *(unsigned __int8 *)(a1 + 476);
  result = 0;
  *(_BYTE *)(a1 + 264) = 1;
  if ( !v5 )
    *(_DWORD *)(a1 + 480) = (int)*(float *)(a1 + 996);
  return result;
}
