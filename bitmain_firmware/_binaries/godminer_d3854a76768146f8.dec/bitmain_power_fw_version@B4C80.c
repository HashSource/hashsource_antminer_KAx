int bitmain_power_fw_version()
{
  int v0; // r5
  int v1; // r3
  const char *v3; // r2
  int v4; // r1
  int *v5; // lr
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r1
  int v13; // [sp+10h] [bp-1810h] BYREF
  __int16 v14; // [sp+14h] [bp-180Ch]
  int v15; // [sp+18h] [bp-1808h] BYREF
  int v16; // [sp+1Ch] [bp-1804h]
  _DWORD s[6]; // [sp+20h] [bp-1800h] BYREF
  char v18; // [sp+38h] [bp-17E8h]
  char v19[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_18A85C || (v0 = sub_B44D4(), v0 >= 0) )
  {
    v16 = 0;
    v15 = 0;
    v13 = 17082965;
    v14 = 5;
    if ( sub_B3B48((void *)dword_18A858, (unsigned __int8 *)&v13, 6u, (unsigned __int8 *)&v15, 8u) )
    {
      LOWORD(v5) = 26852;
      HIWORD(v5) = (unsigned int)"_root=%s\n" >> 16;
      v6 = *v5;
      v7 = v5[1];
      v8 = v5[2];
      v9 = v5[3];
      v5 += 4;
      s[0] = v6;
      s[1] = v7;
      s[2] = v8;
      s[3] = v9;
      v10 = v5[1];
      v11 = v5[2];
      s[4] = *v5;
      s[5] = v10;
      v18 = v11;
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v12) = 26444;
      HIWORD(v12) = (unsigned int)"ZcashPoW" >> 16;
      zlog(g_zc, v12, 173, "_bitmain_get_power_fw_version", 29, 255, 100, v19);
      v1 = -2147482880;
      v0 = -2147482880;
    }
    else
    {
      v0 = (unsigned __int16)v16;
      v1 = (unsigned __int16)v16;
    }
    dword_18A864 = v1;
  }
  else
  {
    LOWORD(v3) = 26796;
    HIWORD(v3) = (unsigned int)"=%u\n" >> 16;
    snprintf((char *)s, 0x800u, v3, "bitmain_power_fw_version");
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v4) = 26444;
    HIWORD(v4) = (unsigned int)"ZcashPoW" >> 16;
    zlog(g_zc, v4, 173, "bitmain_power_fw_version", 24, 670, 100, v19);
  }
  return v0;
}
