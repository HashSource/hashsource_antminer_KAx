int __fastcall is_gpio_exist(int a1)
{
  const char *v2; // r2
  const char *v4; // r2
  int v5; // r1
  int *v6; // lr
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // lr
  int v12; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  _DWORD v14[4]; // [sp+50h] [bp-1800h] BYREF
  __int16 v15; // [sp+60h] [bp-17F0h]
  char v16; // [sp+62h] [bp-17EEh]
  char v17[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18A40C) )
  {
    LOWORD(v6) = 19512;
    HIWORD(v6) = (unsigned int)"en power_version = 0x%x" >> 16;
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v10 = v6[3];
    v11 = v6[4];
    v14[0] = v7;
    v14[1] = v8;
    v14[2] = v9;
    v14[3] = v10;
    v15 = v11;
    v16 = BYTE2(v11);
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, v14);
    V_UNLOCK();
    LOWORD(v12) = 19168;
    HIWORD(v12) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
    zlog(g_zc, v12, 172, "is_gpio_exist", 13, 443, 100, v17);
    return -1;
  }
  else
  {
    LOWORD(v2) = 19532;
    HIWORD(v2) = (unsigned int)"x%x" >> 16;
    snprintf(s, 0x40u, v2, a1);
    if ( access(s, 0) )
    {
      pthread_mutex_unlock(&stru_18A40C);
      return 0;
    }
    else
    {
      LOWORD(v4) = 19556;
      HIWORD(v4) = (unsigned int)"can nont get sample voltage" >> 16;
      snprintf((char *)v14, 0x800u, v4, a1);
      V_LOCK();
      logfmt_raw(v17, 0x1000u, 0, v14);
      V_UNLOCK();
      LOWORD(v5) = 19168;
      HIWORD(v5) = (unsigned int)"ower/bitmain_power_APW9.c" >> 16;
      zlog(g_zc, v5, 172, "is_gpio_exist", 13, 449, 20, v17);
      pthread_mutex_unlock(&stru_18A40C);
      return 1;
    }
  }
}
