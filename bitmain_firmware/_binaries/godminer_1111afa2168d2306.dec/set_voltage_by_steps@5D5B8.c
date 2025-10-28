int __fastcall set_voltage_by_steps(int a1, int a2, unsigned int a3)
{
  int v5; // r3
  int v6; // r1
  int v7; // r4
  int v8; // r5
  unsigned int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r6
  signed int v12; // r8
  int v14; // r1
  int v15; // r3
  int v16; // r1
  char v17[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 )
  {
    V_LOCK();
    LOWORD(v5) = 30588;
    HIWORD(v5) = (unsigned int)"ge_raw\t= %d" >> 16;
    logfmt_raw(v17, 0x1000u, 0, v5, a1);
    V_UNLOCK();
    LOWORD(v6) = 30260;
    HIWORD(v6) = (unsigned int)"" >> 16;
    zlog(g_zc, v6, 150, "set_voltage_by_steps", 20, 470, 40, v17);
    if ( byte_196B00 )
      v7 = dword_196B1C;
    else
      v7 = sub_5D0B8();
    v8 = a1 - v7;
    if ( a1 != v7 )
    {
      LOWORD(v9) = -13107;
      if ( a3 >= 0x64 )
        v10 = 100;
      else
        v10 = a3;
      HIWORD(v9) = -13108;
      v11 = (unsigned int)((v10 * (unsigned __int64)v9) >> 32) >> 3;
      if ( v8 < 0 )
        v11 = -v11;
      v12 = abs32(v11);
      while ( (int)abs32(v8) > v12 )
      {
        v7 += v11;
        v8 -= v11;
        sub_5D1BC(v7);
      }
      if ( a1 != v7 )
        sub_5D1BC(a1);
    }
    return 0;
  }
  else
  {
    V_LOCK();
    LOWORD(v14) = 32324;
    HIWORD(v14) = (unsigned int)&word_147FAC >> 16;
    LOWORD(v15) = 31656;
    HIWORD(v15) = (unsigned int)"e: %d!" >> 16;
    logfmt_raw(v17, 0x1000u, 0, v15, v14);
    V_UNLOCK();
    LOWORD(v16) = 30260;
    HIWORD(v16) = (unsigned int)"" >> 16;
    zlog(g_zc, v16, 150, "set_voltage_by_steps", 20, 466, 100, v17);
    return -1;
  }
}
