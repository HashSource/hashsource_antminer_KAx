int __fastcall hardware_init(char *a1)
{
  int is_pic_mcu_en; // r0
  int v3; // r0
  int v4; // r6
  _DWORD *device_num; // r0
  _DWORD *v6; // r8
  _DWORD *v7; // r4
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  __int64 v14; // r0
  int v15; // r6
  int v16; // r9
  int eeprom_chain_load_state; // r0
  int v18; // r7
  int v19; // r0
  int v20; // r0
  int v21; // r0
  const char *v22; // r4
  char *v23; // r9
  char *v24; // r0
  size_t v25; // r2
  _BOOL4 v26; // r0
  char *v27; // r7
  size_t v28; // r4
  int v29; // r4
  char *all_created_runtime; // r0
  char *v31; // r7
  int v32; // t1
  int is_adjustable_power; // r0
  int v34; // r10
  int chain_sensor_num; // r0
  int v36; // r11
  int sensor_max_chip_temp; // r0
  int v38; // r10
  int sensor_max_pcb_temp; // r0
  int v40; // r11
  int sensor_min_pcb_temp; // r0
  int v42; // r10
  int psu_gpio_port; // r0
  char *v44; // r0
  char *v45; // r4
  int v46; // t1
  char pic_device_high; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r12
  int v53; // r2
  int v54; // [sp+0h] [bp-106Ch]
  char *dest; // [sp+28h] [bp-1044h]
  char *desta; // [sp+28h] [bp-1044h]
  int v57; // [sp+30h] [bp-103Ch] BYREF
  int v58[13]; // [sp+34h] [bp-1038h] BYREF
  _DWORD v59[1025]; // [sp+68h] [bp-1004h] BYREF

  machine_info_init();
  platform_get_fan_control_info((float *)v58);
  fan_control_info_init(
    v58[0],
    v58[1],
    v58[2],
    v58[3],
    v58[4],
    v58[5],
    *(float *)&v58[6],
    v58[7],
    v58[8],
    v58[9],
    v58[10],
    v58[11],
    v58[12]);
  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( is_pic_mcu_en )
  {
    pic_device_high = platform_get_pic_device_high(0);
    is_pic_mcu_en = set_pic_device_high(pic_device_high);
  }
  v3 = dev_ctrl(is_pic_mcu_en);
  v4 = (*(int (**)(void))(v3 + 8))();
  if ( v4 )
  {
    V_LOCK();
    logfmt_raw((char *)v59, 0x1000u, 0, "dev init failed!");
    V_UNLOCK();
    v52 = 100;
    v53 = 574;
    goto LABEL_33;
  }
  check_fan_valiad();
  device_num = (_DWORD *)query_device_num();
  v6 = device_num;
  if ( (int)device_num <= 0 )
  {
    V_LOCK();
    logfmt_raw((char *)v59, 0x1000u, 0, "query_device_num error code %d and then exit", v6);
    V_UNLOCK();
    v52 = 100;
    v53 = 585;
LABEL_33:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "hardware_init",
      13,
      v53,
      v52,
      v59);
    return 31;
  }
  v7 = 0;
  do
  {
    v8 = dev_ctrl(device_num);
    (*(void (__fastcall **)(_DWORD *))(v8 + 40))(v7);
    v7 = (_DWORD *)((char *)v7 + 1);
    device_num = runtime_ctrl((int)a1);
    if ( !device_num )
    {
      V_LOCK();
      logfmt_raw((char *)v59, 0x1000u, 0, "runtime ctrl error!");
      V_UNLOCK();
      v52 = 80;
      v53 = 593;
      goto LABEL_33;
    }
  }
  while ( v6 != v7 );
  do
  {
    v9 = V_LOCK();
    v10 = dev_ctrl(v9);
    v11 = (*(int (__fastcall **)(int))(v10 + 48))(v4);
    logfmt_raw((char *)v59, 0x1000u, 0, "eeprom add device :%d", v11);
    V_UNLOCK();
    v12 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/machine_runtime/machine_runtime_base.c",
            166,
            "hardware_init",
            13,
            600,
            60,
            v59);
    v13 = dev_ctrl(v12);
    v14 = ((__int64 (__fastcall *)(int))*(_DWORD *)(v13 + 48))(v4++);
    add_eeprom_device(v14, SHIDWORD(v14));
  }
  while ( (_DWORD *)v4 != v7 );
  v15 = eeprom_load();
  if ( v15 )
  {
    V_LOCK();
    logfmt_raw((char *)v59, 0x1000u, 0, "EEPROM load error!, pls check it");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "hardware_init",
      13,
      605,
      100,
      v59);
    return 32;
  }
  v16 = 0;
  dest = a1;
  while ( 2 )
  {
    while ( 2 )
    {
      eeprom_chain_load_state = api_get_eeprom_chain_load_state(v16);
      v18 = eeprom_chain_load_state;
      if ( eeprom_chain_load_state == -1 )
      {
        v49 = V_LOCK();
        v50 = dev_ctrl(v49);
        v51 = (*(int (__fastcall **)(int))(v50 + 48))(v16);
        logfmt_raw((char *)v59, 0x1000u, 0, "g_eeprom_data is not ready, chain = %d", v51);
        V_UNLOCK();
        ++v15;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "hardware_init",
          13,
          621,
          100,
          v59);
LABEL_12:
        if ( (_DWORD *)++v16 == v7 )
          goto LABEL_16;
        continue;
      }
      break;
    }
    if ( eeprom_chain_load_state )
      goto LABEL_12;
    v19 = V_LOCK();
    v20 = dev_ctrl(v19);
    v21 = (*(int (__fastcall **)(int))(v20 + 48))(v16++);
    logfmt_raw((char *)v59, 0x1000u, v18, "Chain%d load EEPROM error.", v21);
    V_UNLOCK();
    ++v15;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "hardware_init",
      13,
      624,
      100,
      v59);
    if ( (_DWORD *)v16 != v7 )
      continue;
    break;
  }
LABEL_16:
  if ( v15 )
  {
    V_LOCK();
    logfmt_raw((char *)v59, 0x1000u, 0, "Error! EEPROM data corrupted. pls check it");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "hardware_init",
      13,
      646,
      100,
      v59);
    return 32;
  }
  else
  {
    opt_custom_freq = eeprom_get_min_freq();
    opt_custom_voltage = eeprom_get_max_voltage();
    V_LOCK();
    logfmt_raw((char *)v59, 0x1000u, 0, "MAX voltage: %d", opt_custom_voltage);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "hardware_init",
      13,
      670,
      40,
      v59);
    V_LOCK();
    logfmt_raw((char *)v59, 0x1000u, 0, "MIN freq: %d", opt_custom_freq);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "hardware_init",
      13,
      671,
      40,
      v59);
    v22 = *(const char **)&aSetBaudBase_0[4 * (_DWORD)dest + 192];
    v23 = (char *)calloc(1u, 8u);
    v24 = strchr(v22, 95);
    v25 = v24 - v22;
    if ( v24 )
      v26 = v24 - v22 <= 7;
    else
      v26 = 0;
    if ( v26 )
      strncpy(v23, v22, v25);
    desta = (char *)calloc(1u, 8u);
    v27 = strchr(v22, 95);
    if ( v27 )
    {
      v28 = strlen(v22);
      if ( v28 - strlen(v27) <= 7 )
        strcpy(desta, v27 + 1);
    }
    v29 = 0;
    LOWORD(v57) = 0;
    str2hex((int)&v57, (int)desta, 4);
    v59[0] = 0;
    all_created_runtime = (char *)get_all_created_runtime(v59);
    if ( v59[0] > 0 )
    {
      v31 = all_created_runtime - 4;
      do
      {
        v32 = *((_DWORD *)v31 + 1);
        v31 += 4;
        strcpy((char *)(v32 + 264), v23);
        *(_DWORD *)(*(_DWORD *)v31 + 272) = (unsigned __int16)__rev16((unsigned __int16)v57);
        is_adjustable_power = platform_is_adjustable_power();
        v34 = *(_DWORD *)v31;
        *(_DWORD *)(*(_DWORD *)v31 + 928) = is_adjustable_power;
        chain_sensor_num = platform_get_chain_sensor_num(v29);
        v36 = *(_DWORD *)v31;
        *(_DWORD *)(v34 + 340) = chain_sensor_num;
        sensor_max_chip_temp = platform_get_sensor_max_chip_temp(v29);
        v38 = *(_DWORD *)v31;
        *(_DWORD *)(v36 + 344) = sensor_max_chip_temp;
        sensor_max_pcb_temp = platform_get_sensor_max_pcb_temp(v29);
        v40 = *(_DWORD *)v31;
        *(_DWORD *)(v38 + 348) = sensor_max_pcb_temp;
        sensor_min_pcb_temp = platform_get_sensor_min_pcb_temp(v29);
        v42 = *(_DWORD *)v31;
        *(_DWORD *)(v40 + 352) = sensor_min_pcb_temp;
        *(_DWORD *)(v42 + 356) = platform_get_sensor_max_uneffective_count(v29++);
      }
      while ( v29 < v59[0] );
    }
    free(v23);
    free(desta);
    psu_gpio_port = platform_get_psu_gpio_port();
    set_bitmain_power_gpio_port(psu_gpio_port);
    v57 = 0;
    v44 = (char *)get_all_created_runtime(&v57);
    if ( v57 > 0 )
    {
      v45 = v44 - 4;
      do
      {
        V_LOCK();
        v46 = *((_DWORD *)v45 + 1);
        v45 += 4;
        logfmt_raw((char *)v59, 0x1000u, 0, "chain[%d] %s", v15, v46 + 264);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "show_backend_info",
          17,
          39,
          20,
          v59);
        V_LOCK();
        v54 = v15++;
        logfmt_raw((char *)v59, 0x1000u, 0, "chain[%d] %x", v54, *(_DWORD *)(*(_DWORD *)v45 + 272));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "show_backend_info",
          17,
          40,
          20,
          v59);
      }
      while ( v15 < v57 );
    }
    return 0;
  }
}
