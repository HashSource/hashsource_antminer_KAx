int __fastcall set_frequency_with_voltage_zec(int a1)
{
  char *all_created_runtime; // r8
  float v3; // s17
  float v4; // s16
  int working_voltage; // r0
  float v6; // s19
  int v7; // r3
  int v8; // r1
  _DWORD *v9; // r0
  int *v10; // r2
  _DWORD *v11; // r3
  _DWORD *v12; // r4
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r0
  char *v19; // r7
  int v20; // r11
  int v21; // t1
  int v22; // r10
  int v23; // r2
  int v24; // r0
  char *v25; // r7
  int v26; // r4
  int v27; // t1
  int result; // r0
  char *v30; // r8
  int v31; // r4
  int v32; // t1
  int v33; // r3
  int v34; // r1
  int v35; // r1
  const char *v36; // r0
  int v37; // [sp+10h] [bp-101Ch]
  int v38; // [sp+10h] [bp-101Ch]
  int current_voltage; // [sp+14h] [bp-1018h]
  int v40; // [sp+18h] [bp-1014h]
  int v41; // [sp+1Ch] [bp-1010h]
  int v42; // [sp+24h] [bp-1008h] BYREF
  char v43[4100]; // [sp+28h] [bp-1004h] BYREF

  v42 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v42);
  v3 = *(float *)(*(_DWORD *)all_created_runtime + 996);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 992);
  if ( v3 > *(float *)(a1 + 104) )
    v3 = *(float *)(a1 + 104);
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v37 = working_voltage;
  if ( *(_DWORD *)(a1 + 92) != -64 )
    v37 = working_voltage + (*(int (__fastcall **)(int))a1)(a1);
  v6 = *(float *)(a1 + 112);
  V_LOCK();
  LOWORD(v7) = -9176;
  HIWORD(v7) = (unsigned int)"set voltage to %d successfully" >> 16;
  logfmt_raw(v43, 0x1000u, 0, v7);
  V_UNLOCK();
  LOWORD(v8) = -9100;
  HIWORD(v8) = (unsigned int)"rget_base" >> 16;
  zlog(g_zc, v8, 179, "set_frequency_with_voltage_zec", 30, 220, 60, v43);
  v9 = calloc(1u, 0xD8u);
  LOWORD(v10) = -8920;
  v11 = v9 + 2;
  HIWORD(v10) = (unsigned int)"ntent/base_common.c" >> 16;
  v12 = v9;
  v13 = *v10;
  v14 = v10[1];
  v15 = v10[2];
  *(_QWORD *)v12 = -1;
  *v11 = v13;
  v11[1] = v14;
  v11[2] = v15;
  v12[45] = 64;
  V_LOCK();
  LOWORD(v16) = -8908;
  HIWORD(v16) = (unsigned int)"ommon.c" >> 16;
  logfmt_raw(v43, 0x1000u, 0, v16);
  V_UNLOCK();
  LOWORD(v17) = -9100;
  HIWORD(v17) = (unsigned int)"rget_base" >> 16;
  zlog(g_zc, v17, 179, "set_frequency_with_voltage_zec", 30, 229, 60, v43);
  if ( v42 > 0 )
  {
    ++*((_BYTE *)v12 + 40);
    v18 = *(_DWORD *)all_created_runtime;
    if ( !*(_DWORD *)all_created_runtime )
      goto LABEL_31;
    v19 = all_created_runtime;
    v20 = 0;
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _DWORD *))(v18 + 36))(v18, v12);
      if ( v42 <= ++v20 )
        break;
      ++*((_BYTE *)v12 + 40);
      v21 = *((_DWORD *)v19 + 1);
      v19 += 4;
      v18 = v21;
      if ( !v21 )
        goto LABEL_31;
    }
  }
  free(v12);
  v40 = (int)(float)((float)(v3 - v4) / 6.25);
  if ( v40 <= 0 )
  {
LABEL_25:
    if ( v3 == v4 || v42 <= 0 )
    {
LABEL_30:
      V_LOCK();
      LOWORD(v33) = -8876;
      HIWORD(v33) = (unsigned int)"kspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/dhash_content/dash/dash_dhash_common.c" >> 16;
      logfmt_raw(v43, 0x1000u, 0, v33, v3, current_voltage);
      V_UNLOCK();
      LOWORD(v34) = -9100;
      HIWORD(v34) = (unsigned int)"rget_base" >> 16;
      zlog(g_zc, v34, 179, "set_frequency_with_voltage_zec", 30, 268, 60, v43);
      return 0;
    }
    else
    {
      v30 = all_created_runtime - 4;
      v31 = 0;
      while ( 1 )
      {
        v32 = *((_DWORD *)v30 + 1);
        v30 += 4;
        ++v31;
        result = (*(int (**)(void))(v32 + 192))();
        if ( result )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v42 <= v31 )
          goto LABEL_30;
      }
    }
    return result;
  }
  v22 = v37;
  v23 = current_voltage - v37;
  v38 = 0;
  v41 = v40 - v23 / 10;
  while ( 1 )
  {
    v4 = v4 + 6.25;
    if ( v42 > 0 )
      break;
LABEL_18:
    if ( v22 + 20 < current_voltage && (float)(v6 * v3) < v4 && v41 <= v38 )
    {
      current_voltage -= 10;
      result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
      if ( result )
        return result;
      usleep((__useconds_t)&loc_30D40);
    }
    if ( v40 == ++v38 )
      goto LABEL_25;
  }
  v24 = *(_DWORD *)all_created_runtime;
  if ( !*(_DWORD *)all_created_runtime )
  {
LABEL_31:
    LOWORD(v35) = -13012;
    LOWORD(v36) = 32664;
    HIWORD(v35) = (unsigned int)"start_mining_ks5" >> 16;
    HIWORD(v36) = (unsigned int)" DOAROA LOG" >> 16;
    printf(v36, v35);
    return 3;
  }
  v25 = all_created_runtime;
  v26 = 0;
  while ( 1 )
  {
    ++v26;
    result = (*(int (__fastcall **)(int, _DWORD))(v24 + 192))(v24, 0);
    if ( result )
      return result;
    usleep(*(_DWORD *)(a1 + 100));
    if ( v42 <= v26 )
      goto LABEL_18;
    v27 = *((_DWORD *)v25 + 1);
    v25 += 4;
    v24 = v27;
    if ( !v27 )
      goto LABEL_31;
  }
}
