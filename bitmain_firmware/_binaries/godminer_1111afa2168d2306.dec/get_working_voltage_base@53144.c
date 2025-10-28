int __fastcall get_working_voltage_base(int a1)
{
  int temp; // r4
  int v3; // r11
  int working_voltage; // r0
  int v5; // r9
  int v6; // r7
  int (__fastcall *v7)(int, int); // r2
  int v8; // r10
  int v9; // r7
  int v10; // r6
  int v11; // r3
  int v12; // r1
  int result; // r0
  float v14[1025]; // [sp+18h] [bp-1004h] BYREF

  temp = get_temp(1);
  v3 = get_temp(2);
  working_voltage = get_working_voltage();
  v5 = working_voltage;
  if ( temp == -64 )
  {
    v8 = 0;
    v10 = working_voltage;
    v9 = 0;
  }
  else
  {
    if ( dword_1936FC - temp > 5 )
    {
      if ( ++dword_196848 <= 1 )
        v6 = 0;
      else
        v6 = 20;
    }
    else
    {
      v6 = 0;
      dword_196848 = 0;
    }
    v7 = *(int (__fastcall **)(int, int))a1;
    dword_1936FC = temp;
    v8 = v7(a1, temp);
    platform_get_fan_control_info(v14);
    v9 = v6 + (*(int (__fastcall **)(int, int, int, _DWORD))(a1 + 4))(a1, temp, v3, LODWORD(v14[6]));
    v10 = v5 + v8 + v9;
  }
  V_LOCK();
  LOWORD(v11) = -10864;
  HIWORD(v11) = (unsigned int)"n[%d] check asic num test, loop:%d done, total failed times:%d" >> 16;
  logfmt_raw((char *)v14, 0x1000u, 0, v11, temp, v3, v5, v8, v9);
  V_UNLOCK();
  LOWORD(v12) = -11348;
  HIWORD(v12) = (unsigned int)"ck it, and reboot system" >> 16;
  zlog(g_zc, v12, 166, "get_working_voltage_base", 24, 331, 20, v14);
  result = *(_DWORD *)(a1 + 96);
  if ( v10 < result )
    return v10;
  return result;
}
