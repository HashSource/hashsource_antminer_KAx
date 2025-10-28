int __fastcall get_working_voltage_base(int (__fastcall **a1)(_DWORD, int))
{
  int v1; // r9
  int temp; // r4
  int working_voltage; // r0
  int v5; // r1
  int v6; // r7
  int v7; // r2
  int v8; // r2
  bool v9; // cc
  int v10; // r2
  int v11; // r8
  int v12; // r5
  char v14[4100]; // [sp+10h] [bp-1004h] BYREF

  temp = get_temp(1);
  working_voltage = get_working_voltage();
  v6 = working_voltage;
  if ( temp == -64 )
  {
    v11 = 0;
    v12 = working_voltage;
    v1 = 0;
  }
  else
  {
    v7 = dword_1063F8;
    dword_1063F8 = temp;
    v8 = v7 - temp;
    v9 = v8 <= 5;
    if ( v8 <= 5 )
      v10 = 34664;
    else
      v10 = (unsigned __int16)&dword_108768;
    if ( v9 )
      v5 = 0;
    else
      HIWORD(v10) = (unsigned int)&dword_108768 >> 16;
    if ( v9 )
    {
      HIWORD(v10) = 16;
      v1 = v5;
    }
    else
    {
      v5 = *(_DWORD *)v10;
    }
    if ( !v9 )
    {
      v1 = 10;
      ++v5;
    }
    *(_DWORD *)v10 = v5;
    v11 = (*a1)(a1, temp);
    v12 = v6 + v11 + v1;
  }
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "temp:%d, working_voltage:%d, compensate:%d, bias:%d", temp, v6, v11, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "get_working_voltage_base",
    24,
    245,
    20,
    v14);
  return v12;
}
