int set_working_voltage_and_runtime_freq()
{
  int working_voltage; // r8
  int current_voltage; // r7
  int result; // r0
  int v3; // r10
  int v4; // r2
  unsigned __int8 v5; // r11
  int v6; // r3
  int v7; // r9
  int v8; // r4
  int v9; // r5
  int v10; // r0
  int v11; // t1
  _BOOL4 v12; // r6
  int v13; // r9
  int v14; // r4
  char *v15; // r5
  char *v16; // r6
  int v17; // t1
  int i; // r4
  int v19; // t1
  int v20; // r3
  int v21; // r1
  int v22; // r1
  int v23; // r3
  int v24; // r1
  char *all_created_runtime; // [sp+14h] [bp-1018h]
  int v26; // [sp+18h] [bp-1014h]
  int v27; // [sp+24h] [bp-1008h] BYREF
  char v28[4100]; // [sp+28h] [bp-1004h] BYREF

  working_voltage = get_working_voltage();
  current_voltage = get_current_voltage();
  v27 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v27);
  result = is_power_init();
  v3 = result;
  if ( result )
  {
    if ( opt_algo == 8 )
    {
      if ( working_voltage < current_voltage )
        v4 = -7;
      else
        v4 = 7;
      v26 = v4;
      v5 = 0;
LABEL_18:
      if ( v27 > 0 )
      {
        v13 = 0;
        v14 = 0;
        v15 = all_created_runtime - 4;
        v16 = all_created_runtime - 4;
        do
        {
          v17 = *((_DWORD *)v16 + 1);
          v16 += 4;
          ++v14;
          v13 |= (*(int (**)(void))(v17 + 188))();
        }
        while ( v27 > v14 );
        v12 = v13 == 0;
        if ( v13 )
        {
          usleep((__useconds_t)&loc_30D40);
          if ( v27 > 0 )
          {
            for ( i = 0; i < v27; ++i )
            {
              v19 = *((_DWORD *)v15 + 1);
              v15 += 4;
              v13 |= (*(int (**)(void))(v19 + 188))();
            }
            v12 = v13 == 0;
          }
        }
      }
      else
      {
        v12 = v3;
      }
      while ( 1 )
      {
        v6 = current_voltage - working_voltage;
        if ( current_voltage - working_voltage < 0 )
          v6 = working_voltage - current_voltage;
        if ( v6 > 7 )
        {
          current_voltage += v26;
          set_voltage(current_voltage, 1);
          if ( working_voltage == current_voltage )
          {
            v7 = v12;
            v5 = v3;
          }
          else
          {
            v7 = v12 & v5;
          }
        }
        else
        {
          v7 = v12;
          if ( working_voltage == current_voltage )
          {
            current_voltage = working_voltage;
            v5 = v3;
          }
          else
          {
            current_voltage = working_voltage;
            v5 = v3;
            set_voltage(working_voltage, 1);
          }
        }
        v8 = 0;
        *(_DWORD *)v28 = 0;
        result = (int)get_all_created_runtime(v28);
        if ( *(int *)v28 > 0 )
        {
          v9 = result - 4;
          do
          {
            v10 = dev_ctrl(result);
            v11 = *(_DWORD *)(v9 + 4);
            v9 += 4;
            ++v8;
            result = (*(int (__fastcall **)(_DWORD))(v10 + 100))(*(_DWORD *)(v11 + 248));
          }
          while ( v8 < *(int *)v28 );
        }
        if ( v7 )
          break;
        if ( !v12 )
          goto LABEL_18;
      }
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v20) = 32300;
    HIWORD(v20) = (unsigned int)"d!" >> 16;
    logfmt_raw(v28, 0x1000u, 0, v20, "set_working_voltage_and_runtime_freq");
    V_UNLOCK();
    LOWORD(v21) = 31476;
    HIWORD(v21) = (unsigned int)"SR1 received, reload log" >> 16;
    zlog(g_zc, v21, 139, "set_working_voltage_and_runtime_freq", 36, 1146, 100, v28);
    V_LOCK();
    LOWORD(v22) = 32324;
    LOWORD(v23) = 31656;
    HIWORD(v22) = (unsigned int)&word_147FAC >> 16;
    HIWORD(v23) = (unsigned int)"e: %d!" >> 16;
    logfmt_raw(v28, 0x1000u, 0, v23, v22);
    V_UNLOCK();
    LOWORD(v24) = 31476;
    HIWORD(v24) = (unsigned int)"SR1 received, reload log" >> 16;
    zlog(g_zc, v24, 139, "set_working_voltage_and_runtime_freq", 36, 1147, 100, v28);
    return -1;
  }
  return result;
}
