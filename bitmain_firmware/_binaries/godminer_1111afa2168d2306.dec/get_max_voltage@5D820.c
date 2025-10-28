int get_max_voltage()
{
  double v0; // d0
  int v1; // r4
  int v4; // r1
  int v5; // r3
  int v6; // r1
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = (unsigned __int8)byte_196B00;
  if ( byte_196B00 )
  {
    bitmain_convert_N_to_V();
    return (int)(v0 * 100.0);
  }
  else
  {
    V_LOCK();
    LOWORD(v4) = 32324;
    HIWORD(v4) = (unsigned int)&word_147FAC >> 16;
    LOWORD(v5) = 31656;
    HIWORD(v5) = (unsigned int)"e: %d!" >> 16;
    logfmt_raw(v7, 0x1000u, v1, v5, v4);
    V_UNLOCK();
    LOWORD(v6) = 30260;
    HIWORD(v6) = (unsigned int)"" >> 16;
    zlog(g_zc, v6, 150, "get_max_voltage", 15, 531, 100, v7);
    return -1;
  }
}
