int __fastcall dhash_start_ltc(int a1)
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
  LOWORD(v2) = 27796;
  HIWORD(v2) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v7, v2, *(int *)(a1 + 256));
  LOWORD(v3) = 3860;
  HIWORD(v3) = (unsigned int)"chip_setting_misc_ltc" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v3);
  V_UNLOCK();
  LOWORD(v4) = 3060;
  HIWORD(v4) = (unsigned int)"te diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
  zlog(g_zc, v4, 171, "dhash_start_ltc", 15, 527, 40, v9);
  sub_A24C0(a1);
  v5 = *(unsigned __int8 *)(a1 + 476);
  result = 0;
  *(_BYTE *)(a1 + 264) = 1;
  if ( !v5 )
    *(_DWORD *)(a1 + 480) = (int)*(float *)(a1 + 996);
  return result;
}
