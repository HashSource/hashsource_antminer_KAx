int __fastcall set_frequency_with_voltage_kas(int a1)
{
  int *v1; // r9
  pthread_mutex_t **all_created_runtime; // r0
  pthread_mutex_t *v4; // r3
  float v5; // s15
  pthread_mutex_t **v6; // r7
  float v7; // s17
  float v8; // s16
  int current_voltage; // r5
  int working_voltage; // r8
  int v11; // r2
  float v12; // s19
  int v13; // s18
  pthread_mutex_t **v14; // r6
  int j; // r5
  pthread_mutex_t *v16; // t1
  float v17; // s16
  int v18; // r10
  pthread_mutex_t *v19; // r0
  pthread_mutex_t **v20; // r6
  int v21; // r5
  pthread_mutex_t *v22; // t1
  int v23; // r0
  int v24; // r10
  float v26; // s16
  int v27; // s21
  int v28; // r11
  pthread_mutex_t *v29; // r0
  pthread_mutex_t **v30; // r6
  int v31; // r5
  pthread_mutex_t *v32; // t1
  pthread_mutex_t **v33; // r6
  int v34; // r5
  pthread_mutex_t *v35; // t1
  int v36; // r6
  _BOOL4 v37; // r3
  int i; // r10
  pthread_mutex_t **v39; // r7
  int k; // r4
  pthread_mutex_t *v41; // t1
  pthread_mutex_t *v42; // r2
  float v43; // s16
  int lock; // r3
  unsigned int v45; // r5
  float *v46; // r10
  float v47; // s15
  float v48; // s17
  int eeprom_sweep_freq; // r10
  int kind; // r5
  int eeprom_freq; // r0
  int v52; // [sp+18h] [bp-121Ch]
  int v53; // [sp+1Ch] [bp-1218h]
  int v54; // [sp+20h] [bp-1214h] BYREF
  float v55; // [sp+24h] [bp-1210h] BYREF
  int v56; // [sp+28h] [bp-120Ch] BYREF
  int v57; // [sp+2Ch] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+30h] [bp-1204h] BYREF
  char v59[4100]; // [sp+230h] [bp-1004h] BYREF

  v54 = 0;
  all_created_runtime = (pthread_mutex_t **)get_all_created_runtime(&v54);
  v4 = *all_created_runtime;
  v5 = *(float *)(a1 + 104);
  v56 = -64;
  v6 = all_created_runtime;
  v7 = *(float *)&v4[39].__count;
  v57 = 255;
  v8 = *(float *)&v4[39].__lock;
  if ( v7 > v5 )
    v7 = v5;
  current_voltage = get_current_voltage();
  v52 = current_voltage;
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 92) == -64 )
  {
    v12 = v7 * *(float *)(a1 + 112);
    v53 = (current_voltage - working_voltage) / 10;
    v13 = (int)(float)((float)(v7 - v8) / 6.25);
  }
  else
  {
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
    v11 = *(_DWORD *)(a1 + 92);
    if ( v11 > 19 )
      v1 = &g_zc;
    v12 = v7 * *(float *)(a1 + 112);
    v53 = (current_voltage - working_voltage) / 10;
    v13 = (int)(float)((float)(v7 - v8) / 6.25);
    if ( v11 > 19 )
      goto LABEL_7;
  }
  V_LOCK();
  v1 = &g_zc;
  logfmt_raw(v59, 0x1000u, 0, "Warming up chains, please wait, this may take up 5 minutes");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    179,
    "set_frequency_with_voltage_kas",
    30,
    359,
    60,
    v59);
  v26 = *(float *)&(*v6)[39].__lock;
  v27 = (int)(float)((float)(900.0 - v26) / 6.25);
  if ( v27 > 0 )
  {
    v28 = 0;
    while ( 1 )
    {
      v26 = v26 + 6.25;
      if ( v54 > 0 )
        break;
LABEL_43:
      if ( v27 == ++v28 )
        goto LABEL_44;
    }
    v29 = *v6;
    if ( !*v6 )
      goto LABEL_30;
    v30 = v6;
    v31 = 0;
    while ( 1 )
    {
      ++v31;
      v24 = ((int (__fastcall *)(pthread_mutex_t *, _DWORD))v29[7].__spins)(v29, 0);
      send_fake_work_kas(*v30);
      if ( v24 )
        return v24;
      usleep(*(_DWORD *)(a1 + 100));
      if ( v54 <= v31 )
        goto LABEL_43;
      v32 = v30[1];
      ++v30;
      v29 = v32;
      if ( !v32 )
        goto LABEL_30;
    }
  }
LABEL_44:
  v36 = 180;
  check_temperature_base(a1, &v56, &v57);
  while ( v56 <= 19 )
  {
    v37 = v57 <= 19;
    if ( !v36 )
      v37 = 0;
    if ( !v37 )
      break;
    v36 -= 10;
    sleep(0xAu);
    if ( v54 > 0 )
    {
      for ( i = 0; i < v54; ++i )
      {
        check_temperature_base(a1, &v56, &v57);
        printf("min temp %d max temp %d\n", v56, v57);
      }
    }
  }
LABEL_7:
  V_LOCK();
  logfmt_raw(v59, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 2 minutes...");
  V_UNLOCK();
  zlog(
    *v1,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    179,
    "set_frequency_with_voltage_kas",
    30,
    389,
    60,
    v59);
  if ( v54 > 0 )
  {
    v14 = v6 - 1;
    for ( j = 0; j < v54; ++j )
    {
      v16 = v14[1];
      ++v14;
      ((void (*)(void))v16[2].__owner)();
    }
  }
  v17 = *(float *)&(*v6)[39].__lock;
  if ( v13 > 0 )
  {
    v18 = 0;
    while ( 1 )
    {
      v17 = v17 + 6.25;
      if ( v54 > 0 )
        break;
LABEL_31:
      if ( working_voltage + 20 < v52 && v17 > v12 && v13 - v53 <= v18 )
      {
        v52 -= 10;
        v23 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, v52);
        if ( v23 )
          return v23;
        usleep((__useconds_t)&loc_30D40);
      }
      if ( ++v18 == v13 )
        goto LABEL_37;
    }
    v19 = *v6;
    if ( *v6 )
    {
      v20 = v6;
      v21 = 0;
      do
      {
        ++v21;
        v23 = ((int (__fastcall *)(pthread_mutex_t *, _DWORD))v19[7].__spins)(v19, 0);
        if ( v23 )
          return v23;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v54 <= v21 )
          goto LABEL_31;
        v22 = v20[1];
        ++v20;
        v19 = v22;
      }
      while ( v22 );
    }
LABEL_30:
    printf(aInvalidPointer, "be_runtimes[b]");
    return 3;
  }
LABEL_37:
  if ( v17 != v7 && v54 > 0 )
  {
    v33 = v6 - 1;
    v34 = 0;
    do
    {
      v35 = v33[1];
      ++v33;
      ++v34;
      v23 = ((int (*)(void))v35[7].__spins)();
      if ( v23 )
        return v23;
      usleep(*(_DWORD *)(a1 + 100));
    }
    while ( v54 > v34 );
  }
  V_LOCK();
  logfmt_raw(v59, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v7, v52);
  V_UNLOCK();
  zlog(
    *v1,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    179,
    "set_frequency_with_voltage_kas",
    30,
    549,
    60,
    v59);
  if ( v54 > 0 )
  {
    v39 = v6 - 1;
    for ( k = 0; k < v54; ++k )
    {
      v41 = v39[1];
      ++v39;
      if ( api_get_eeprom_fmt_version(v41[9].__kind) == 4 && !api_get_eeprom_asic_freqs((*v39)[9].__kind, dest, &v55) )
      {
        v42 = *v39;
        v43 = 0.0;
        lock = (*v39)[13].__lock;
        if ( lock )
        {
          v45 = 0;
          v46 = (float *)dest;
          do
          {
            v47 = *v46++;
            v43 = v43 + v47;
            printf("%-6.1f ", v47);
            if ( (v45 & 0xF) == 0xF || (v42 = *v39, lock = (*v39)[13].__lock, lock - 1 == v45) )
            {
              putchar(10);
              v42 = *v39;
              lock = (*v39)[13].__lock;
            }
            ++v45;
          }
          while ( lock > v45 );
        }
        v48 = v43 / (float)lock;
        v42[18].__owner = (int)v48;
        *(float *)&v42[39].__count = (float)(int)v48;
        eeprom_sweep_freq = api_get_eeprom_sweep_freq(k);
        V_LOCK();
        kind = (*v39)[9].__kind;
        eeprom_freq = api_get_eeprom_freq(k);
        logfmt_raw(
          v59,
          0x1000u,
          0,
          "chain:%d, PT2_freq: %d, sweep_average_freq: %.2f, sweep_level_freq: %d\n",
          kind,
          eeprom_freq,
          v48,
          eeprom_sweep_freq);
        V_UNLOCK();
        zlog(
          *v1,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          179,
          "set_frequency_with_voltage_kas",
          30,
          571,
          40,
          v59);
        ((void (*)(void))(*v39)[8].__owner)();
      }
    }
  }
  return 0;
}
