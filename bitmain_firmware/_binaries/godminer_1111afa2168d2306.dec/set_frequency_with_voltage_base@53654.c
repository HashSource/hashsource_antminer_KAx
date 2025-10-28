int __fastcall set_frequency_with_voltage_base(int a1)
{
  int v2; // r6
  char *all_created_runtime; // r8
  float v4; // s17
  float v5; // s16
  int working_voltage; // r10
  float v7; // s20
  int v8; // r3
  int v9; // r1
  int current_voltage; // r0
  int v11; // r2
  int v12; // s19
  int v13; // r0
  char *v14; // r5
  int v15; // r4
  int v16; // t1
  char *v19; // r5
  int v20; // r4
  int v21; // t1
  int v22; // r1
  const char *v23; // r0
  int v24; // r3
  int v25; // r1
  int v26; // r3
  int v27; // r1
  _WORD *v28; // r5
  char *v29; // r8
  int i; // r4
  int v31; // t1
  unsigned int eeprom_asic_freqs; // r7
  int v33; // r3
  int v34; // r12
  float *v35; // r10
  float v36; // s16
  float v37; // s15
  size_t v38; // r0
  _WORD *v39; // r0
  float v40; // s17
  int v41; // r3
  int eeprom_sweep_freq; // r10
  int v43; // r7
  int eeprom_freq; // r0
  int v45; // r3
  int v46; // r1
  int v47; // [sp+18h] [bp-223Ch]
  int v48; // [sp+20h] [bp-2234h]
  int v49; // [sp+24h] [bp-2230h]
  int v50; // [sp+28h] [bp-222Ch] BYREF
  float v51; // [sp+2Ch] [bp-2228h] BYREF
  char src[32]; // [sp+30h] [bp-2224h] BYREF
  float dest; // [sp+50h] [bp-2204h] BYREF
  char v54; // [sp+54h] [bp-2200h] BYREF
  char s[4096]; // [sp+250h] [bp-2004h] BYREF
  char v56[4100]; // [sp+1250h] [bp-1004h] BYREF

  v2 = 0;
  v50 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v50);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 996);
  v5 = *(float *)(*(_DWORD *)all_created_runtime + 992);
  if ( v4 > *(float *)(a1 + 104) )
    v4 = *(float *)(a1 + 104);
  working_voltage = get_working_voltage();
  if ( !is_check_asic_voltage_enable() )
  {
    v2 = set_check_asic_voltage(1);
    V_LOCK();
    LOWORD(v24) = -10616;
    HIWORD(v24) = (unsigned int)"eeprom add device: %d" >> 16;
    logfmt_raw(v56, 0x1000u, 0, v24);
    V_UNLOCK();
    LOWORD(v25) = -11348;
    HIWORD(v25) = (unsigned int)"ck it, and reboot system" >> 16;
    zlog(g_zc, v25, 166, "set_frequency_with_voltage_base", 31, 519, 40, v56);
  }
  if ( *(_DWORD *)(a1 + 92) != -64 )
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
  v7 = v4 * *(float *)(a1 + 112);
  V_LOCK();
  LOWORD(v8) = -12968;
  HIWORD(v8) = (unsigned int)"ge_ks5" >> 16;
  logfmt_raw(v56, 0x1000u, 0, v8);
  V_UNLOCK();
  LOWORD(v9) = -11348;
  HIWORD(v9) = (unsigned int)"ck it, and reboot system" >> 16;
  zlog(g_zc, v9, 166, "set_frequency_with_voltage_base", 31, 529, 60, v56);
  current_voltage = get_current_voltage();
  v11 = 1717986919 * (current_voltage - working_voltage);
  v48 = current_voltage;
  v49 = (current_voltage - working_voltage) / 10;
  v12 = (int)(float)((float)(v4 - v5) / 6.25);
  if ( v12 <= 0 )
  {
LABEL_23:
    if ( v4 == v5 || v50 <= 0 )
    {
LABEL_30:
      V_LOCK();
      LOWORD(v26) = -12892;
      HIWORD(v26) = (unsigned int)"fs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c" >> 16;
      logfmt_raw(v56, 0x1000u, 0, v26, v4, v48);
      V_UNLOCK();
      LOWORD(v27) = -11348;
      HIWORD(v27) = (unsigned int)"ck it, and reboot system" >> 16;
      zlog(g_zc, v27, 166, "set_frequency_with_voltage_base", 31, 564, 60, v56);
      if ( v50 > 0 )
      {
        LOWORD(v28) = 32684;
        v29 = all_created_runtime - 4;
        for ( i = 0; i < v50; ++i )
        {
          v31 = *((_DWORD *)v29 + 1);
          v29 += 4;
          if ( api_get_eeprom_fmt_version(*(_DWORD *)(v31 + 248)) == 4 )
          {
            eeprom_asic_freqs = api_get_eeprom_asic_freqs(*(_DWORD *)(*(_DWORD *)v29 + 248), &dest, &v51);
            if ( !eeprom_asic_freqs )
            {
              memset(s, 0, sizeof(s));
              v33 = *(_DWORD *)v29;
              v34 = *(_DWORD *)(*(_DWORD *)v29 + 352);
              if ( v34 )
              {
                v35 = (float *)&v54;
                v36 = dest + 0.0;
                sprintf(src, "ASIC-%03d [%.2f] ", 0, dest);
                strcat(s, src);
                while ( 1 )
                {
                  v33 = *(_DWORD *)v29;
                  ++eeprom_asic_freqs;
                  v34 = *(_DWORD *)(*(_DWORD *)v29 + 352);
                  if ( v34 <= eeprom_asic_freqs )
                    break;
                  v37 = *v35++;
                  v36 = v36 + v37;
                  sprintf(src, "ASIC-%03d [%.2f] ", eeprom_asic_freqs, v37);
                  v38 = strlen(s);
                  v39 = (_WORD *)stpcpy(&s[v38], src);
                  if ( (eeprom_asic_freqs & 7) == 7 )
                  {
                    HIWORD(v28) = (unsigned int)"hreads dead, exiting." >> 16;
                    *v39 = *v28;
                  }
                }
              }
              else
              {
                v36 = 0.0;
              }
              v40 = v36 / (float)v34;
              (*(void (__fastcall **)(int, float *))(v33 + 204))(v33, &dest);
              v41 = *(_DWORD *)v29;
              *(_DWORD *)(v41 + 480) = (int)v40;
              *(float *)(v41 + 996) = (float)(int)v40;
              eeprom_sweep_freq = api_get_eeprom_sweep_freq(i);
              V_LOCK();
              v43 = *(_DWORD *)(*(_DWORD *)v29 + 248);
              eeprom_freq = api_get_eeprom_freq(i);
              LOWORD(v45) = -10560;
              HIWORD(v45) = (unsigned int)"" >> 16;
              logfmt_raw(v56, 0x1000u, 0, v45, v43, eeprom_freq, v40, eeprom_sweep_freq, s);
              V_UNLOCK();
              LOWORD(v46) = -11348;
              HIWORD(v46) = (unsigned int)"ck it, and reboot system" >> 16;
              zlog(g_zc, v46, 166, "set_frequency_with_voltage_base", 31, 597, 40, v56);
            }
          }
        }
      }
    }
    else
    {
      v19 = all_created_runtime - 4;
      v20 = 0;
      while ( 1 )
      {
        v21 = *((_DWORD *)v19 + 1);
        v19 += 4;
        ++v20;
        v2 = (*(int (**)(void))(v21 + 192))();
        if ( v2 )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v50 <= v20 )
          goto LABEL_30;
      }
    }
  }
  else
  {
    v47 = 0;
    while ( 1 )
    {
      v5 = v5 + 6.25;
      if ( v50 > 0 )
        break;
LABEL_16:
      if ( working_voltage + 20 < v48 && v7 < v5 && v12 - v49 <= v47 )
      {
        v48 -= 10;
        v2 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, v48);
        if ( v2 )
          return v2;
        usleep((__useconds_t)&loc_30D40);
      }
      v11 = v12;
      if ( v12 == ++v47 )
        goto LABEL_23;
    }
    v13 = *(_DWORD *)all_created_runtime;
    if ( *(_DWORD *)all_created_runtime )
    {
      v14 = all_created_runtime;
      v15 = 0;
      while ( 1 )
      {
        ++v15;
        v2 = (*(int (__fastcall **)(int, _DWORD, int))(v13 + 192))(v13, 0, v11);
        if ( v2 )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v50 <= v15 )
          goto LABEL_16;
        v16 = *((_DWORD *)v14 + 1);
        v14 += 4;
        v13 = v16;
        if ( !v16 )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      LOWORD(v22) = -13012;
      LOWORD(v23) = 32664;
      HIWORD(v22) = (unsigned int)"start_mining_ks5" >> 16;
      HIWORD(v23) = (unsigned int)" DOAROA LOG" >> 16;
      printf(v23, v22, v11);
      return 3;
    }
  }
  return v2;
}
