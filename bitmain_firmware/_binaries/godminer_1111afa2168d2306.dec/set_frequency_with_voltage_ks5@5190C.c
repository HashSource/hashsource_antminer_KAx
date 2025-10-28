int __fastcall set_frequency_with_voltage_ks5(int a1)
{
  int *v1; // r9
  _DWORD *all_created_runtime; // r0
  int v4; // r3
  float v5; // s15
  _DWORD *v6; // r7
  float v7; // s17
  float v8; // s16
  int current_voltage; // r10
  int working_voltage; // r8
  int v11; // r2
  float v12; // s19
  int v13; // s18
  int v14; // r3
  int v15; // r1
  _DWORD *v16; // r6
  int i; // r5
  int v18; // t1
  float v19; // s16
  int v20; // r0
  _DWORD *v21; // r6
  int v22; // r5
  int v23; // t1
  int result; // r0
  int v25; // r3
  int v26; // r1
  float v27; // s16
  int v28; // s21
  int v29; // r11
  int v30; // r0
  _DWORD *v31; // r6
  int v32; // r5
  int v33; // t1
  int v34; // r1
  const char *v35; // r0
  _DWORD *v36; // r6
  int v37; // r5
  int v38; // t1
  const char *v39; // r5
  int v40; // r6
  _BOOL4 v41; // r3
  int v42; // r11
  int v43; // r1
  int v44; // r8
  int v45; // r6
  _DWORD *v46; // r7
  int j; // r4
  int v48; // t1
  int v49; // r1
  int v50; // r2
  float v51; // s16
  int v52; // r3
  const char *v53; // r11
  unsigned int v54; // r5
  float *v55; // r10
  float v56; // s15
  float v57; // s17
  int eeprom_sweep_freq; // r10
  int v59; // r5
  int eeprom_freq; // r0
  int v61; // [sp+18h] [bp-121Ch]
  int v62; // [sp+1Ch] [bp-1218h]
  int v63; // [sp+20h] [bp-1214h] BYREF
  float v64; // [sp+24h] [bp-1210h] BYREF
  int v65; // [sp+28h] [bp-120Ch] BYREF
  int v66; // [sp+2Ch] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+30h] [bp-1204h] BYREF
  char v68[4100]; // [sp+230h] [bp-1004h] BYREF

  v63 = 0;
  all_created_runtime = get_all_created_runtime(&v63);
  v4 = *all_created_runtime;
  v5 = *(float *)(a1 + 104);
  v65 = -64;
  v6 = all_created_runtime;
  v7 = *(float *)(v4 + 996);
  v66 = 255;
  v8 = *(float *)(v4 + 992);
  if ( v7 > v5 )
    v7 = v5;
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 92) == -64 )
  {
    v12 = v7 * *(float *)(a1 + 112);
    v62 = (current_voltage - working_voltage) / 10;
    v13 = (int)(float)((float)(v7 - v8) / 6.25);
  }
  else
  {
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
    v11 = *(_DWORD *)(a1 + 92);
    if ( v11 > 19 )
      v1 = &g_zc;
    v12 = v7 * *(float *)(a1 + 112);
    v62 = (current_voltage - working_voltage) / 10;
    v13 = (int)(float)((float)(v7 - v8) / 6.25);
    if ( v11 > 19 )
    {
LABEL_7:
      V_LOCK();
      LOWORD(v14) = -12968;
      HIWORD(v14) = (unsigned int)"ge_ks5" >> 16;
      logfmt_raw(v68, 0x1000u, 0, v14);
      V_UNLOCK();
      LOWORD(v15) = -12504;
      HIWORD(v15) = (unsigned int)"_voltage_bias_ltc_1489() out" >> 16;
      zlog(*v1, v15, 179, "set_frequency_with_voltage_ks5", 30, 315, 60, v68);
      if ( v63 > 0 )
      {
        v16 = v6 - 1;
        for ( i = 0; i < v63; ++i )
        {
          v18 = v16[1];
          ++v16;
          (*(void (**)(void))(v18 + 60))();
        }
      }
      v19 = *(float *)(*v6 + 992);
      if ( v13 <= 0 )
      {
LABEL_36:
        if ( v7 == v19 || v63 <= 0 )
        {
LABEL_52:
          V_LOCK();
          logfmt_raw(v68, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v7, current_voltage);
          V_UNLOCK();
          LOWORD(v43) = -12504;
          HIWORD(v43) = (unsigned int)"_voltage_bias_ltc_1489() out" >> 16;
          zlog(*v1, v43, 179, "set_frequency_with_voltage_ks5", 30, 478, 60, v68);
          if ( v63 > 0 )
          {
            LOWORD(v44) = -12840;
            LOWORD(v45) = -12504;
            v46 = v6 - 1;
            for ( j = 0; j < v63; ++j )
            {
              v48 = v46[1];
              ++v46;
              if ( api_get_eeprom_fmt_version(*(_DWORD *)(v48 + 248)) == 4
                && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v46 + 248), dest, &v64) )
              {
                v50 = *v46;
                v51 = 0.0;
                v52 = *(_DWORD *)(*v46 + 352);
                if ( v52 )
                {
                  LOWORD(v53) = -12848;
                  v54 = 0;
                  v55 = (float *)dest;
                  do
                  {
                    v56 = *v55++;
                    HIWORD(v53) = (unsigned int)"in_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c" >> 16;
                    v51 = v51 + v56;
                    printf(v53, v49, v56);
                    if ( (v54 & 0xF) == 0xF
                      || (v50 = *v46, v52 = *(_DWORD *)(*v46 + 352), v49 = v52 - 1, v52 - 1 == v54) )
                    {
                      putchar(10);
                      v50 = *v46;
                      v52 = *(_DWORD *)(*v46 + 352);
                    }
                    ++v54;
                  }
                  while ( v52 > v54 );
                }
                v57 = v51 / (float)v52;
                *(_DWORD *)(v50 + 480) = (int)v57;
                *(float *)(v50 + 996) = (float)(int)v57;
                eeprom_sweep_freq = api_get_eeprom_sweep_freq(j);
                V_LOCK();
                v59 = *(_DWORD *)(*v46 + 248);
                eeprom_freq = api_get_eeprom_freq(j);
                HIWORD(v44) = (unsigned int)"ner-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c" >> 16;
                logfmt_raw(v68, 0x1000u, 0, v44, v59, eeprom_freq, v57, eeprom_sweep_freq);
                V_UNLOCK();
                HIWORD(v45) = (unsigned int)"_voltage_bias_ltc_1489() out" >> 16;
                zlog(*v1, v45, 179, "set_frequency_with_voltage_ks5", 30, 500, 40, v68);
                (*(void (**)(void))(*v46 + 204))();
              }
            }
          }
          return 0;
        }
        else
        {
          v36 = v6 - 1;
          v37 = 0;
          while ( 1 )
          {
            v38 = v36[1];
            ++v36;
            ++v37;
            result = (*(int (**)(void))(v38 + 192))();
            if ( result )
              break;
            usleep(*(_DWORD *)(a1 + 100));
            if ( v63 <= v37 )
              goto LABEL_52;
          }
        }
        return result;
      }
      v61 = 0;
      while ( 1 )
      {
        v19 = v19 + 6.25;
        if ( v63 > 0 )
          break;
LABEL_30:
        if ( working_voltage + 20 < current_voltage && v19 > v12 && v13 - v62 <= v61 )
        {
          current_voltage -= 10;
          result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
          if ( result )
            return result;
          usleep((__useconds_t)&loc_30D40);
        }
        if ( ++v61 == v13 )
          goto LABEL_36;
      }
      v20 = *v6;
      if ( *v6 )
      {
        v21 = v6;
        v22 = 0;
        do
        {
          ++v22;
          result = (*(int (__fastcall **)(int, _DWORD))(v20 + 192))(v20, 0);
          if ( result )
            return result;
          usleep(*(_DWORD *)(a1 + 100));
          if ( v63 <= v22 )
            goto LABEL_30;
          v23 = v21[1];
          ++v21;
          v20 = v23;
        }
        while ( v23 );
      }
LABEL_29:
      LOWORD(v34) = -13012;
      LOWORD(v35) = 32664;
      HIWORD(v34) = (unsigned int)"start_mining_ks5" >> 16;
      HIWORD(v35) = (unsigned int)" DOAROA LOG" >> 16;
      printf(v35, v34);
      return 3;
    }
  }
  V_LOCK();
  LOWORD(v25) = -13072;
  HIWORD(v25) = (unsigned int)&unk_14CEB8 >> 16;
  v1 = &g_zc;
  logfmt_raw(v68, 0x1000u, 0, v25);
  V_UNLOCK();
  LOWORD(v26) = -12504;
  HIWORD(v26) = (unsigned int)"_voltage_bias_ltc_1489() out" >> 16;
  zlog(g_zc, v26, 179, "set_frequency_with_voltage_ks5", 30, 286, 60, v68);
  v27 = *(float *)(*v6 + 992);
  v28 = (int)(float)((float)(600.0 - v27) / 6.25);
  if ( v28 <= 0 )
  {
LABEL_43:
    LOWORD(v39) = -12996;
    v40 = 180;
    check_temperature_base(a1, &v65, &v66);
    while ( v65 <= 19 )
    {
      v41 = v66 <= 19;
      if ( !v40 )
        v41 = 0;
      if ( !v41 )
        break;
      v40 -= 10;
      sleep(0xAu);
      if ( v63 > 0 )
      {
        v42 = 0;
        do
        {
          ++v42;
          check_temperature_base(a1, &v65, &v66);
          HIWORD(v39) = (unsigned int)"" >> 16;
          printf(v39, v65, v66);
        }
        while ( v63 > v42 );
      }
    }
    goto LABEL_7;
  }
  v29 = 0;
  while ( 1 )
  {
    v27 = v27 + 6.25;
    if ( v63 > 0 )
      break;
LABEL_42:
    if ( v28 == ++v29 )
      goto LABEL_43;
  }
  v30 = *v6;
  if ( !*v6 )
    goto LABEL_29;
  v31 = v6;
  v32 = 0;
  while ( 1 )
  {
    ++v32;
    result = (*(int (__fastcall **)(int, _DWORD))(v30 + 192))(v30, 0);
    if ( result )
      return result;
    usleep(*(_DWORD *)(a1 + 100));
    if ( v63 <= v32 )
      goto LABEL_42;
    v33 = v31[1];
    ++v31;
    v30 = v33;
    if ( !v33 )
      goto LABEL_29;
  }
}
