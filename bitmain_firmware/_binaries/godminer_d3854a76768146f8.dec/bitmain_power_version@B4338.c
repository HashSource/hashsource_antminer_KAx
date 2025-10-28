int bitmain_power_version()
{
  int v0; // r5
  const char *v2; // r2
  int v3; // r1
  int *v4; // lr
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r1
  int v12; // [sp+10h] [bp-1810h] BYREF
  __int16 v13; // [sp+14h] [bp-180Ch]
  int v14; // [sp+18h] [bp-1808h] BYREF
  int v15; // [sp+1Ch] [bp-1804h]
  _DWORD s[6]; // [sp+20h] [bp-1800h] BYREF
  char v17; // [sp+38h] [bp-17E8h]
  char v18[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_18A85C || (v0 = bitmain_power_open(), v0 >= 0) )
  {
    v15 = 0;
    v14 = 0;
    v12 = 33860181;
    v13 = 6;
    if ( sub_B3B48((void *)dword_18A858, (unsigned __int8 *)&v12, 6u, (unsigned __int8 *)&v14, 8u) )
    {
      LOWORD(v4) = 26852;
      HIWORD(v4) = (unsigned int)"_root=%s\n" >> 16;
      v0 = -2147482880;
      v5 = *v4;
      v6 = v4[1];
      v7 = v4[2];
      v8 = v4[3];
      v4 += 4;
      s[0] = v5;
      s[1] = v6;
      s[2] = v7;
      s[3] = v8;
      v9 = v4[1];
      v10 = v4[2];
      s[4] = *v4;
      s[5] = v9;
      v17 = v10;
      V_LOCK();
      logfmt_raw(v18, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v11) = 26444;
      HIWORD(v11) = (unsigned int)"ZcashPoW" >> 16;
      zlog(g_zc, v11, 173, "_bitmain_get_power_version", 26, 300, 100, v18);
    }
    else
    {
      v0 = (unsigned __int16)v15;
      if ( (_WORD)v15 )
        dword_18A860 = (unsigned __int16)v15;
    }
  }
  else
  {
    LOWORD(v2) = 26796;
    HIWORD(v2) = (unsigned int)"=%u\n" >> 16;
    snprintf((char *)s, 0x800u, v2, "bitmain_power_version");
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v3) = 26444;
    HIWORD(v3) = (unsigned int)"ZcashPoW" >> 16;
    zlog(g_zc, v3, 173, "bitmain_power_version", 21, 681, 100, v18);
  }
  return v0;
}
