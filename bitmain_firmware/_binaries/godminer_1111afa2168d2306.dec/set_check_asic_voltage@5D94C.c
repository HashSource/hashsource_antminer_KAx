int __fastcall set_check_asic_voltage(int a1)
{
  int v2; // r3
  int v3; // r1
  int result; // r0
  int v5; // r3
  int v6; // r1
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 30616;
  HIWORD(v2) = (unsigned int)"teps error!" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v2);
  V_UNLOCK();
  LOWORD(v3) = 30260;
  HIWORD(v3) = (unsigned int)"" >> 16;
  zlog(g_zc, v3, 150, "set_check_asic_voltage", 22, 563, 40, v7);
  if ( a1 )
    result = set_voltage_by_steps(dword_196B14, (unsigned __int8)byte_196B00, 0x64u);
  else
    result = set_voltage(dword_196B14, (unsigned __int8)byte_196B00);
  if ( result )
  {
    V_LOCK();
    LOWORD(v5) = 30640;
    HIWORD(v5) = (unsigned int)"et_power_status failed(%d) <<" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v5);
    V_UNLOCK();
    LOWORD(v6) = 30260;
    HIWORD(v6) = (unsigned int)"" >> 16;
    zlog(g_zc, v6, 150, "set_check_asic_voltage", 22, 571, 100, v7);
    return -1;
  }
  return result;
}
