int __fastcall bitmain_set_watchdog(int a1)
{
  int result; // r0
  int v3; // r5
  const char *v4; // r2
  int v5; // r2
  int *v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r1
  _DWORD s[512]; // [sp+10h] [bp-1804h] BYREF
  char v15[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_1B4604 )
  {
    v3 = sub_C9384();
    if ( v3 < 0 )
    {
      LOWORD(v4) = 31052;
      HIWORD(v4) = (unsigned int)"rom list get error!" >> 16;
      snprintf((char *)s, 0x800u, v4, "bitmain_set_watchdog");
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, s);
      V_UNLOCK();
      v5 = 604;
LABEL_7:
      LOWORD(v13) = 30700;
      HIWORD(v13) = (unsigned int)"sion < 0 will close power" >> 16;
      zlog(g_zc, v13, 173, "bitmain_set_watchdog", 20, v5, 100, v15);
      return v3;
    }
  }
  result = sub_C8E8C((void *)dword_1B4600, a1 == 1);
  v3 = result;
  if ( result < 0 )
  {
    LOWORD(v6) = 31316;
    HIWORD(v6) = (unsigned int)"backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v10 = v6[3];
    v6 += 4;
    s[0] = v7;
    s[1] = v8;
    s[2] = v9;
    s[3] = v10;
    v11 = v6[1];
    v12 = v6[2];
    s[4] = *v6;
    s[5] = v11;
    s[6] = v12;
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    v5 = 616;
    goto LABEL_7;
  }
  return result;
}
