int create_pool_connect()
{
  int pool_stratum_threads; // r8
  int v1; // r4
  _BYTE *v2; // r5
  int v3; // r3
  int v4; // r1
  int v6; // r3
  int v7; // r1
  int *v8; // r10
  int v9; // r3
  int v10; // r1
  int v11; // r3
  int v12; // r1
  int v13; // r3
  _DWORD *v14; // r11
  int v15; // r8
  int v16; // r5
  const char *v17; // r6
  bool v18; // zf
  bool v19; // r0
  int v20; // r3
  int v21; // r1
  char *all_created_runtime; // r0
  int v23; // r3
  char *v24; // r4
  int v25; // t1
  int v26; // r3
  int v27; // r1
  const char *v28; // r1
  int v29; // [sp+14h] [bp-1010h]
  _BYTE *v30; // [sp+1Ch] [bp-1008h]
  _DWORD v31[1025]; // [sp+20h] [bp-1004h] BYREF

  pool_stratum_threads = create_pool_stratum_threads();
  if ( pool_stratum_threads )
  {
    V_LOCK();
    LOWORD(v3) = 7724;
    HIWORD(v3) = (unsigned int)"om pool: %s" >> 16;
    logfmt_raw((char *)v31, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v4) = 32144;
    HIWORD(v4) = (unsigned int)"k_asic_voltage_enable: %s" >> 16;
    zlog(g_zc, v4, 151, "create_pool_connect", 19, 153, 100, v31);
    return 1;
  }
  else
  {
    LOWORD(v2) = 17345;
    v1 = 60;
    HIWORD(v2) = (unsigned int)&unk_1758B1 >> 16;
    do
    {
      sleep(1u);
      if ( *v2 )
        return 0;
      --v1;
    }
    while ( v1 );
    V_LOCK();
    LOWORD(v6) = 32504;
    HIWORD(v6) = (unsigned int)"failed!" >> 16;
    logfmt_raw((char *)v31, 0x1000u, 0, v6);
    V_UNLOCK();
    LOWORD(v7) = 32144;
    HIWORD(v7) = (unsigned int)"k_asic_voltage_enable: %s" >> 16;
    LOWORD(v8) = 17040;
    HIWORD(v8) = (unsigned int)&unk_175780 >> 16;
    zlog(g_zc, v7, 151, "create_pool_connect", 19, 165, 100, v31);
    V_LOCK();
    LOWORD(v9) = 32564;
    HIWORD(v9) = (unsigned int)"_speed_temp_type failed!" >> 16;
    logfmt_raw((char *)v31, 0x1000u, 0, v9);
    V_UNLOCK();
    LOWORD(v10) = 32144;
    HIWORD(v10) = (unsigned int)"k_asic_voltage_enable: %s" >> 16;
    zlog(g_zc, v10, 151, "create_pool_connect", 19, 166, 100, v31);
    V_LOCK();
    LOWORD(v11) = 32640;
    HIWORD(v11) = (unsigned int)"full_speed_temp failed!" >> 16;
    logfmt_raw((char *)v31, 0x1000u, 0, v11);
    V_UNLOCK();
    LOWORD(v12) = 32144;
    HIWORD(v12) = (unsigned int)"k_asic_voltage_enable: %s" >> 16;
    zlog(g_zc, v12, 151, "create_pool_connect", 19, 167, 100, v31);
    if ( *v8 > 0 )
    {
      LOWORD(v13) = 32380;
      HIWORD(v13) = (unsigned int)"fan_control_mode: %d" >> 16;
      LOWORD(v14) = 17044;
      v29 = v13;
      LOWORD(v13) = 32144;
      HIWORD(v13) = (unsigned int)"k_asic_voltage_enable: %s" >> 16;
      v15 = v13;
      v30 = v2;
      do
      {
        HIWORD(v14) = (unsigned int)&unk_175784 >> 16;
        v16 = *(_DWORD *)(*v14 + 4 * v1);
        V_LOCK();
        logfmt_raw(
          (char *)v31,
          0x1000u,
          0,
          v29,
          *(_DWORD *)v16,
          *(_DWORD *)(v16 + 12),
          *(_DWORD *)(v16 + 16),
          *(_DWORD *)(v16 + 20));
        V_UNLOCK();
        zlog(g_zc, v15, 151, "create_pool_connect", 19, 173, 80, v31);
        if ( *(_DWORD *)(v16 + 20) )
        {
          v17 = *(const char **)(v16 + 16);
          if ( v17 )
          {
            v18 = strstr(*(const char **)(v16 + 20), "stats") == 0;
            v19 = 1;
            if ( v18 )
            {
              LOWORD(v28) = 32424;
              HIWORD(v28) = (unsigned int)"pwm_percent_min failed!" >> 16;
              v19 = strcmp(v17, v28) == 0;
            }
            *(_BYTE *)(v16 + 1648) = v19;
          }
        }
        ++v1;
      }
      while ( *v8 > v1 );
      pool_stratum_threads = 0;
      v2 = v30;
    }
    V_LOCK();
    LOWORD(v20) = 32436;
    HIWORD(v20) = (unsigned int)"min failed!" >> 16;
    logfmt_raw((char *)v31, 0x1000u, 0, v20);
    V_UNLOCK();
    LOWORD(v21) = 32144;
    HIWORD(v21) = (unsigned int)"k_asic_voltage_enable: %s" >> 16;
    zlog(g_zc, v21, 151, "create_pool_connect", 19, 179, 100, v31);
    v31[0] = 0;
    all_created_runtime = (char *)get_all_created_runtime(v31);
    v23 = v31[0];
    if ( v31[0] > 0 )
    {
      v24 = all_created_runtime - 4;
      do
      {
        v25 = *((_DWORD *)v24 + 1);
        v24 += 4;
        ++pool_stratum_threads;
        (*(void (**)(void))(v25 + 20))();
        (*(void (**)(void))(*(_DWORD *)v24 + 28))();
        v23 = v31[0];
      }
      while ( pool_stratum_threads < v31[0] );
    }
    if ( v23 )
      fan_pwm_set(0x14u);
    green_led_on();
    red_led_on();
    while ( !*v2 )
      sleep(1u);
    V_LOCK();
    LOWORD(v26) = 32464;
    HIWORD(v26) = (unsigned int)" %d" >> 16;
    logfmt_raw((char *)v31, 0x1000u, 0, v26);
    V_UNLOCK();
    LOWORD(v27) = 32144;
    HIWORD(v27) = (unsigned int)"k_asic_voltage_enable: %s" >> 16;
    zlog(g_zc, v27, 151, "create_pool_connect", 19, 181, 80, v31);
    return 0;
  }
}
