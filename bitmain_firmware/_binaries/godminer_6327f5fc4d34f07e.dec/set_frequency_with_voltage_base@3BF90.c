int __fastcall set_frequency_with_voltage_base(int a1)
{
  char *all_created_runtime; // r8
  float v3; // s17
  float v4; // s16
  int working_voltage; // r9
  float v6; // s20
  int v7; // s19
  int v8; // r0
  char *v9; // r5
  int v10; // r4
  int v11; // t1
  int v12; // r3
  char *v15; // r8
  int v16; // r4
  int v17; // t1
  int current_voltage; // [sp+14h] [bp-1018h]
  int v19; // [sp+18h] [bp-1014h]
  int v20; // [sp+1Ch] [bp-1010h]
  int v21; // [sp+24h] [bp-1008h] BYREF
  char v22[4100]; // [sp+28h] [bp-1004h] BYREF

  v21 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v21);
  v3 = *(float *)(*(_DWORD *)all_created_runtime + 900);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 896);
  if ( v3 > *(float *)(a1 + 72) )
    v3 = *(float *)(a1 + 72);
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 68) != -64 )
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
  v6 = v3 * *(float *)(a1 + 80);
  V_LOCK();
  logfmt_raw(v22, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 2 minutes...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "set_frequency_with_voltage_base",
    31,
    320,
    60,
    v22);
  v20 = (current_voltage - working_voltage) / 10;
  v7 = (int)(float)((float)(v3 - v4) / 6.25);
  if ( v7 <= 0 )
  {
LABEL_21:
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "set freq to %.2f, current voltage %d", v3, current_voltage);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "set_frequency_with_voltage_base",
      31,
      345,
      60,
      v22);
    if ( v3 == v4 || v21 <= 0 )
    {
      return 0;
    }
    else
    {
      v15 = all_created_runtime - 4;
      v16 = 0;
      while ( 1 )
      {
        v17 = *((_DWORD *)v15 + 1);
        v15 += 4;
        ++v16;
        v12 = (*(int (**)(void))(v17 + 176))();
        if ( v12 )
          break;
        usleep((__useconds_t)&loc_30D40);
        if ( v21 <= v16 )
          return 0;
      }
    }
  }
  else
  {
    v19 = 0;
    while ( 1 )
    {
      v4 = v4 + 6.25;
      if ( v21 > 0 )
        break;
LABEL_14:
      if ( working_voltage + 20 < current_voltage && v6 < v4 && v7 - v20 <= v19 )
      {
        current_voltage -= 10;
        v12 = (*(int (__fastcall **)(int, int))(a1 + 16))(a1, current_voltage);
        if ( v12 )
          return v12;
        usleep((__useconds_t)"rl_kda_2110");
      }
      if ( v7 == ++v19 )
        goto LABEL_21;
    }
    v8 = *(_DWORD *)all_created_runtime;
    if ( *(_DWORD *)all_created_runtime )
    {
      v9 = all_created_runtime;
      v10 = 0;
      while ( 1 )
      {
        ++v10;
        v12 = (*(int (__fastcall **)(int, _DWORD))(v8 + 176))(v8, 0);
        if ( v12 )
          break;
        usleep((__useconds_t)&loc_30D40);
        if ( v21 <= v10 )
          goto LABEL_14;
        v11 = *((_DWORD *)v9 + 1);
        v9 += 4;
        v8 = v11;
        if ( !v11 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      printf("invalid pointer(%s)!\n", "be_runtimes[b]");
      return 3;
    }
  }
  return v12;
}
