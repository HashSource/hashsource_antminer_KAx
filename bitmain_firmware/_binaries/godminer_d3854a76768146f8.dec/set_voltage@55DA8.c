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
    LOWORD(v3) = -31904;
    HIWORD(v3) = (unsigned int)"_num failed" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v3, a1);
    V_UNLOCK();
    LOWORD(v4) = -32212;
    HIWORD(v4) = (unsigned int)"asic_id" >> 16;
    zlog(g_zc, v4, 150, "set_voltage", 11, 453, 40, v11);
    return sub_55AFC(a1);
  }
  else
  {
    V_LOCK();
    LOWORD(v6) = -31936;
    HIWORD(v6) = (unsigned int)"core_num" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v6);
    V_UNLOCK();
    LOWORD(v7) = -32212;
    HIWORD(v7) = (unsigned int)"asic_id" >> 16;
    zlog(g_zc, v7, 150, "set_voltage", 11, 449, 100, v11);
    V_LOCK();
    LOWORD(v8) = 5520;
    LOWORD(v9) = 4752;
    HIWORD(v8) = (unsigned int)"\\b" >> 16;
    HIWORD(v9) = (unsigned int)&unk_132B50 >> 16;
    logfmt_raw(v11, 0x1000u, 0, v9, v8);
    V_UNLOCK();
    LOWORD(v10) = -32212;
    HIWORD(v10) = (unsigned int)"asic_id" >> 16;
    zlog(g_zc, v10, 150, "set_voltage", 11, 450, 100, v11);
    return -1;
  }
}
