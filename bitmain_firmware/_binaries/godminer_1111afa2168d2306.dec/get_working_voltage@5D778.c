int get_working_voltage()
{
  int v0; // r4
  int v2; // r1
  int v3; // r3
  int v4; // r1
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = (unsigned __int8)byte_196B00;
  if ( byte_196B00 )
    return dword_196B0C;
  V_LOCK();
  LOWORD(v2) = 32324;
  HIWORD(v2) = (unsigned int)&word_147FAC >> 16;
  LOWORD(v3) = 31656;
  HIWORD(v3) = (unsigned int)"e: %d!" >> 16;
  logfmt_raw(v5, 0x1000u, v0, v3, v2);
  V_UNLOCK();
  LOWORD(v4) = 30260;
  HIWORD(v4) = (unsigned int)"" >> 16;
  zlog(g_zc, v4, 150, "get_working_voltage", 19, 521, 100, v5);
  return -1;
}
