int __fastcall pwm_set(int a1, unsigned int a2)
{
  int v2; // r4
  const char *v3; // r2
  int v4; // r1
  _DWORD *v6; // r3
  unsigned int v7; // r5
  int *v8; // r2
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r1
  _DWORD s[2]; // [sp+10h] [bp-1804h] BYREF
  __int16 v14; // [sp+18h] [bp-17FCh]
  char v15[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    LOWORD(v8) = 8496;
    HIWORD(v8) = (unsigned int)"%s json id is null!" >> 16;
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[2];
    s[0] = v9;
    s[1] = v10;
    v14 = v11;
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v12) = 20720;
    HIWORD(v12) = (unsigned int)"_enqueue of __resp_packet_queue is false" >> 16;
    zlog(g_zc, v12, 171, "pwm_set", 7, 62, 100, v15);
    return -3;
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 == 1 )
    {
      LOWORD(v6) = -23484;
      if ( a2 >= 0x64 )
        a2 = 100;
      HIWORD(v6) = (unsigned int)&unk_18B904 >> 16;
      v7 = (unsigned __int16)(*v6 * (100 - a2) / 0x64) | ((*v6 * a2 / 0x64) << 16);
      fpga_write(132, v7);
      fpga_write(160, v7);
      return v2;
    }
    else
    {
      LOWORD(v3) = 20892;
      HIWORD(v3) = (unsigned int)"ue is false" >> 16;
      snprintf((char *)s, 0x800u, v3, a1 - 1);
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v4) = 20720;
      HIWORD(v4) = (unsigned int)"_enqueue of __resp_packet_queue is false" >> 16;
      zlog(g_zc, v4, 171, "pwm_set", 7, 81, 100, v15);
      return 0;
    }
  }
}
