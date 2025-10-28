int __fastcall set_frequency_with_voltage_kas(int a1)
{
  int *v1; // r9
  int *all_created_runtime; // r0
  int v4; // r3
  float v5; // s15
  int *v6; // r7
  float v7; // s17
  float v8; // s16
  int current_voltage; // r5
  int working_voltage; // r8
  int v11; // r2
  float v12; // s19
  int v13; // s18
  int v14; // r3
  int v15; // r1
  int *v16; // r6
  int i; // r5
  int v18; // t1
  float v19; // s16
  int v20; // r10
  int v21; // r0
  int *v22; // r6
  int v23; // r5
  int v24; // t1
  int v25; // r0
  int v26; // r10
  int v28; // r3
  int v29; // r1
  float v30; // s16
  int v31; // s21
  int v32; // r11
  int v33; // r0
  int *v34; // r6
  int v35; // r5
  int v36; // t1
  int v37; // r1
  const char *v38; // r0
  int *v39; // r6
  int v40; // r5
  int v41; // t1
  const char *v42; // r5
  int v43; // r6
  _BOOL4 v44; // r3
  int v45; // r10
  int v46; // r3
  int v47; // r1
  int v48; // r8
  int v49; // r6
  int *v50; // r7
  int j; // r4
  int v52; // t1
  int v53; // r1
  int v54; // r2
  float v55; // s16
  int v56; // r3
  const char *v57; // r11
  unsigned int v58; // r5
  float *v59; // r10
  float v60; // s15
  float v61; // s17
  int eeprom_sweep_freq; // r10
  int v63; // r5
  int eeprom_freq; // r0
  int v65; // [sp+18h] [bp-121Ch]
  int v66; // [sp+1Ch] [bp-1218h]
  int v67; // [sp+20h] [bp-1214h] BYREF
  float v68; // [sp+24h] [bp-1210h] BYREF
  int v69; // [sp+28h] [bp-120Ch] BYREF
  int v70; // [sp+2Ch] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+30h] [bp-1204h] BYREF
  char v72[4100]; // [sp+230h] [bp-1004h] BYREF

  v67 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v67);
  v4 = *all_created_runtime;
  v5 = *(float *)(a1 + 104);
  v69 = -64;
  v6 = all_created_runtime;
  v7 = *(float *)(v4 + 996);
  v70 = 255;
  v8 = *(float *)(v4 + 992);
  if ( v7 > v5 )
    v7 = v5;
  current_voltage = get_current_voltage();
  v65 = current_voltage;
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 92) == -64 )
  {
    v12 = v7 * *(float *)(a1 + 112);
    v66 = (current_voltage - working_voltage) / 10;
    v13 = (int)(float)((float)(v7 - v8) / 6.25);
  }
  else
  {
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
    v11 = *(_DWORD *)(a1 + 92);
    if ( v11 > 19 )
      v1 = &g_zc;
    v12 = v7 * *(float *)(a1 + 112);
    v66 = (current_voltage - working_voltage) / 10;
    v13 = (int)(float)((float)(v7 - v8) / 6.25);
    if ( v11 > 19 )
      goto LABEL_7;
  }
  V_LOCK();
  LOWORD(v28) = -13072;
  HIWORD(v28) = (unsigned int)&unk_14CEB8 >> 16;
  v1 = &g_zc;
  logfmt_raw(v72, 0x1000u, 0, v28);
  V_UNLOCK();
  LOWORD(v29) = -13528;
  HIWORD(v29) = (unsigned int)"Warming up chains, please wait, this may take up 5 minutes" >> 16;
  zlog(g_zc, v29, 179, "set_frequency_with_voltage_kas", 30, 310, 60, v72);
  v30 = *(float *)(*v6 + 992);
  v31 = (int)(float)((float)(900.0 - v30) / 6.25);
  if ( v31 > 0 )
  {
    v32 = 0;
    while ( 1 )
    {
      v30 = v30 + 6.25;
      if ( v67 > 0 )
        break;
LABEL_43:
      if ( v31 == ++v32 )
        goto LABEL_44;
    }
    v33 = *v6;
    if ( !*v6 )
      goto LABEL_30;
    v34 = v6;
    v35 = 0;
    while ( 1 )
    {
      ++v35;
      v26 = (*(int (__fastcall **)(int, _DWORD))(v33 + 192))(v33, 0);
      send_fake_work_kas(*v34);
      if ( v26 )
        return v26;
      usleep(*(_DWORD *)(a1 + 100));
      if ( v67 <= v35 )
        goto LABEL_43;
      v36 = v34[1];
      ++v34;
      v33 = v36;
      if ( !v36 )
        goto LABEL_30;
    }
  }
LABEL_44:
  LOWORD(v42) = -12996;
  v43 = 180;
  check_temperature_base(a1, &v69, &v70);
  while ( v69 <= 19 )
  {
    v44 = v70 <= 19;
    if ( !v43 )
      v44 = 0;
    if ( !v44 )
      break;
    v43 -= 10;
    sleep(0xAu);
    if ( v67 > 0 )
    {
      v45 = 0;
      do
      {
        ++v45;
        check_temperature_base(a1, &v69, &v70);
        HIWORD(v42) = (unsigned int)"" >> 16;
        printf(v42, v69, v70);
      }
      while ( v67 > v45 );
    }
  }
LABEL_7:
  V_LOCK();
  LOWORD(v14) = -12968;
  HIWORD(v14) = (unsigned int)"ge_ks5" >> 16;
  logfmt_raw(v72, 0x1000u, 0, v14);
  V_UNLOCK();
  LOWORD(v15) = -13528;
  HIWORD(v15) = (unsigned int)"Warming up chains, please wait, this may take up 5 minutes" >> 16;
  zlog(*v1, v15, 179, "set_frequency_with_voltage_kas", 30, 340, 60, v72);
  if ( v67 > 0 )
  {
    v16 = v6 - 1;
    for ( i = 0; i < v67; ++i )
    {
      v18 = v16[1];
      ++v16;
      (*(void (**)(void))(v18 + 60))();
    }
  }
  v19 = *(float *)(*v6 + 992);
  if ( v13 > 0 )
  {
    v20 = 0;
    while ( 1 )
    {
      v19 = v19 + 6.25;
      if ( v67 > 0 )
        break;
LABEL_31:
      if ( working_voltage + 20 < v65 && v19 > v12 && v13 - v66 <= v20 )
      {
        v65 -= 10;
        v25 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, v65);
        if ( v25 )
          return v25;
        usleep((__useconds_t)&loc_30D40);
      }
      if ( ++v20 == v13 )
        goto LABEL_37;
    }
    v21 = *v6;
    if ( *v6 )
    {
      v22 = v6;
      v23 = 0;
      do
      {
        ++v23;
        v25 = (*(int (__fastcall **)(int, _DWORD))(v21 + 192))(v21, 0);
        if ( v25 )
          return v25;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v67 <= v23 )
          goto LABEL_31;
        v24 = v22[1];
        ++v22;
        v21 = v24;
      }
      while ( v24 );
    }
LABEL_30:
    LOWORD(v37) = -13012;
    LOWORD(v38) = 32664;
    HIWORD(v37) = (unsigned int)"start_mining_ks5" >> 16;
    HIWORD(v38) = (unsigned int)" DOAROA LOG" >> 16;
    printf(v38, v37);
    return 3;
  }
LABEL_37:
  if ( v19 != v7 && v67 > 0 )
  {
    v39 = v6 - 1;
    v40 = 0;
    do
    {
      v41 = v39[1];
      ++v39;
      ++v40;
      v25 = (*(int (**)(void))(v41 + 192))();
      if ( v25 )
        return v25;
      usleep(*(_DWORD *)(a1 + 100));
    }
    while ( v67 > v40 );
  }
  V_LOCK();
  LOWORD(v46) = -12892;
  HIWORD(v46) = (unsigned int)"fs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c" >> 16;
  logfmt_raw(v72, 0x1000u, 0, v46, v7, v65);
  V_UNLOCK();
  LOWORD(v47) = -13528;
  HIWORD(v47) = (unsigned int)"Warming up chains, please wait, this may take up 5 minutes" >> 16;
  zlog(*v1, v47, 179, "set_frequency_with_voltage_kas", 30, 500, 60, v72);
  if ( v67 > 0 )
  {
    LOWORD(v48) = -12840;
    LOWORD(v49) = -13528;
    v50 = v6 - 1;
    for ( j = 0; j < v67; ++j )
    {
      v52 = v50[1];
      ++v50;
      if ( api_get_eeprom_fmt_version(*(_DWORD *)(v52 + 248)) == 4
        && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v50 + 248), dest, &v68) )
      {
        v54 = *v50;
        v55 = 0.0;
        v56 = *(_DWORD *)(*v50 + 352);
        if ( v56 )
        {
          LOWORD(v57) = -12848;
          v58 = 0;
          v59 = (float *)dest;
          do
          {
            v60 = *v59++;
            HIWORD(v57) = (unsigned int)"in_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c" >> 16;
            v55 = v55 + v60;
            printf(v57, v53, v60);
            if ( (v58 & 0xF) == 0xF || (v54 = *v50, v56 = *(_DWORD *)(*v50 + 352), v53 = v56 - 1, v56 - 1 == v58) )
            {
              putchar(10);
              v54 = *v50;
              v56 = *(_DWORD *)(*v50 + 352);
            }
            ++v58;
          }
          while ( v56 > v58 );
        }
        v61 = v55 / (float)v56;
        *(_DWORD *)(v54 + 480) = (int)v61;
        *(float *)(v54 + 996) = (float)(int)v61;
        eeprom_sweep_freq = api_get_eeprom_sweep_freq(j);
        V_LOCK();
        v63 = *(_DWORD *)(*v50 + 248);
        eeprom_freq = api_get_eeprom_freq(j);
        HIWORD(v48) = (unsigned int)"ner-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c" >> 16;
        logfmt_raw(v72, 0x1000u, 0, v48, v63, eeprom_freq, v61, eeprom_sweep_freq);
        V_UNLOCK();
        HIWORD(v49) = (unsigned int)"Warming up chains, please wait, this may take up 5 minutes" >> 16;
        zlog(*v1, v49, 179, "set_frequency_with_voltage_kas", 30, 522, 40, v72);
        (*(void (**)(void))(*v50 + 204))();
      }
    }
  }
  return 0;
}
