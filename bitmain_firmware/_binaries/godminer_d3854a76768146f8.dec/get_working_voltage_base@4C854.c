int __fastcall get_working_voltage_base(int a1)
{
  int temp; // r4
  int v3; // r11
  int working_voltage; // r0
  int v5; // r9
  _DWORD *v6; // r2
  int v7; // r7
  int (__fastcall *v8)(int, int); // r2
  int v9; // r10
  int v10; // r7
  int v11; // r6
  int v12; // r3
  int v13; // r1
  int result; // r0
  float v15[1025]; // [sp+18h] [bp-1004h] BYREF

  temp = get_temp(1);
  v3 = get_temp(2);
  working_voltage = get_working_voltage();
  v5 = working_voltage;
  if ( temp == -64 )
  {
    v9 = 0;
    v11 = working_voltage;
    v10 = 0;
  }
  else
  {
    if ( dword_1726C0 - temp > 5 )
    {
      if ( ++dword_174FC8 <= 1 )
        v7 = 0;
      else
        v7 = 20;
    }
    else
    {
      LOWORD(v6) = 20424;
      v7 = 0;
      HIWORD(v6) = (unsigned int)&unk_1764B8 >> 16;
      *v6 = 0;
    }
    v8 = *(int (__fastcall **)(int, int))a1;
    dword_1726C0 = temp;
    v9 = v8(a1, temp);
    platform_get_fan_control_info(v15);
    v10 = v7 + (*(int (__fastcall **)(int, int, int, _DWORD))(a1 + 4))(a1, temp, v3, LODWORD(v15[6]));
    v11 = v5 + v9 + v10;
  }
  V_LOCK();
  LOWORD(v12) = 25928;
  HIWORD(v12) = (unsigned int)&unk_138060 >> 16;
  logfmt_raw((char *)v15, 0x1000u, 0, v12, temp, v3, v5, v9, v10);
  V_UNLOCK();
  LOWORD(v13) = 25584;
  HIWORD(v13) = (unsigned int)&unk_137E7C >> 16;
  zlog(g_zc, v13, 166, "get_working_voltage_base", 24, 325, 20, v15);
  result = *(_DWORD *)(a1 + 96);
  if ( v11 < result )
    return v11;
  return result;
}
