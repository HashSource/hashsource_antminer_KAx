int set_working_voltage_and_runtime_freq()
{
  char v0; // r10
  int working_voltage; // r8
  int current_voltage; // r7
  int result; // r0
  int v4; // r11
  int v5; // r6
  int v6; // r2
  int v7; // r3
  int v8; // r9
  int v9; // r4
  int v10; // r5
  int v11; // r0
  int v12; // t1
  int v13; // r5
  char *v14; // r4
  char *v15; // r9
  int v16; // t1
  int i; // r6
  int v18; // t1
  char *all_created_runtime; // [sp+14h] [bp-1018h]
  int v20; // [sp+18h] [bp-1014h]
  int v21; // [sp+24h] [bp-1008h] BYREF
  char v22[4100]; // [sp+28h] [bp-1004h] BYREF

  v0 = 0;
  working_voltage = get_working_voltage();
  current_voltage = get_current_voltage();
  v21 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v21);
  result = is_power_init();
  v4 = result;
  if ( result )
  {
    if ( opt_algo == 7 )
    {
      v5 = 0;
      if ( working_voltage < current_voltage )
        v6 = -7;
      else
        v6 = 7;
      v20 = v6;
LABEL_18:
      if ( v21 > 0 )
      {
        v13 = 0;
        v14 = all_created_runtime - 4;
        v15 = all_created_runtime - 4;
        do
        {
          v16 = *((_DWORD *)v15 + 1);
          v15 += 4;
          ++v5;
          v13 |= (*(int (**)(void))(v16 + 172))();
        }
        while ( v21 > v5 );
        v5 = v13 == 0;
        if ( v13 )
        {
          usleep((__useconds_t)&loc_30D40);
          if ( v21 > 0 )
          {
            for ( i = 0; i < v21; ++i )
            {
              v18 = *((_DWORD *)v14 + 1);
              v14 += 4;
              v13 |= (*(int (**)(void))(v18 + 172))();
            }
            v5 = v13 == 0;
          }
        }
      }
      else
      {
        v5 = v4;
      }
      while ( 1 )
      {
        v7 = current_voltage - working_voltage;
        if ( current_voltage - working_voltage < 0 )
          v7 = working_voltage - current_voltage;
        if ( v7 > 7 )
        {
          current_voltage += v20;
          set_voltage(current_voltage, 1);
          if ( working_voltage == current_voltage )
          {
            v8 = v5;
            v0 = v4;
          }
          else
          {
            v8 = (unsigned __int8)(v5 & v0);
          }
        }
        else
        {
          v8 = v5;
          if ( working_voltage == current_voltage )
          {
            current_voltage = working_voltage;
            v0 = v4;
          }
          else
          {
            current_voltage = working_voltage;
            v0 = v4;
            set_voltage(working_voltage, 1);
          }
        }
        v9 = 0;
        *(_DWORD *)v22 = 0;
        result = (int)get_all_created_runtime(v22);
        if ( *(int *)v22 > 0 )
        {
          v10 = result - 4;
          do
          {
            v11 = dev_ctrl(result);
            v12 = *(_DWORD *)(v10 + 4);
            v10 += 4;
            ++v9;
            result = (*(int (__fastcall **)(_DWORD))(v11 + 80))(*(_DWORD *)(v12 + 196));
          }
          while ( v9 < *(int *)v22 );
        }
        if ( v8 )
          break;
        if ( !v5 )
          goto LABEL_18;
      }
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "%s, power has not init!", "set_working_voltage_and_runtime_freq");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "set_working_voltage_and_runtime_freq",
      36,
      827,
      100,
      v22);
    return -1;
  }
  return result;
}
