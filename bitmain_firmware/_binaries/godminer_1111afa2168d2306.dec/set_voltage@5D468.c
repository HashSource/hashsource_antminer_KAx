int __fastcall set_voltage(int a1, int a2)
{
  int v3; // r3
  int v4; // r1
  int v6; // r3
  int v7; // r1
  int v8; // r1
  int v9; // r3
  int v10; // r1
  char v11[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 )
  {
    V_LOCK();
    LOWORD(v3) = 30568;
    HIWORD(v3) = (unsigned int)"%d" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v3, a1);
    V_UNLOCK();
    LOWORD(v4) = 30260;
    HIWORD(v4) = (unsigned int)"" >> 16;
    zlog(g_zc, v4, 150, "set_voltage", 11, 459, 40, v11);
    return sub_5D1BC(a1);
  }
  else
  {
    V_LOCK();
    LOWORD(v6) = 30536;
    HIWORD(v6) = (unsigned int)"d" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v6);
    V_UNLOCK();
    LOWORD(v7) = 30260;
    HIWORD(v7) = (unsigned int)"" >> 16;
    zlog(g_zc, v7, 150, "set_voltage", 11, 455, 100, v11);
    V_LOCK();
    LOWORD(v8) = 32324;
    LOWORD(v9) = 31656;
    HIWORD(v8) = (unsigned int)&word_147FAC >> 16;
    HIWORD(v9) = (unsigned int)"e: %d!" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v9, v8);
    V_UNLOCK();
    LOWORD(v10) = 30260;
    HIWORD(v10) = (unsigned int)"" >> 16;
    zlog(g_zc, v10, 150, "set_voltage", 11, 456, 100, v11);
    return -1;
  }
}
