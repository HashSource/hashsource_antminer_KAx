int __fastcall power_init(int a1, int a2)
{
  double v2; // d0
  int v4; // r8
  int is_pic_mcu_en; // r7
  unsigned __int16 v6; // r0
  int v7; // r3
  int v8; // r1
  int v10; // r3
  int v11; // r1
  int v12; // r7
  int v13; // r3
  int v14; // r1
  int v15; // r3
  int v16; // r1
  int v17; // r1
  int v18; // r1
  int v19; // r1
  int v20; // r1
  bool v21; // zf
  int v22; // r9
  unsigned int v23; // r8
  int v24; // r1
  int v25; // r3
  int v26; // r1
  int v27; // r10
  int v28; // r3
  double v29; // d9
  int v30; // r9
  double v31; // d8
  int device_num; // r0
  double v33; // d14
  int v34; // r8
  int v35; // r6
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r1
  int v42; // r3
  int v43; // r1
  int v44; // r3
  int v45; // r1
  int v46; // r3
  int v47; // r1
  int v48; // r0
  int k; // r5
  int v50; // r0
  int v51; // r0
  int m; // r5
  int v53; // r0
  int v54; // r0
  int n; // r5
  int v56; // r0
  int v57; // r0
  int ii; // r5
  int v59; // r0
  int v60; // r0
  int jj; // r5
  int v62; // r0
  int v63; // r1
  int v64; // r3
  int v65; // r3
  int v66; // r2
  int v67; // r1
  int v68; // r3
  int v69; // r12
  int v70; // r1
  int v71; // r3
  int v72; // r1
  int v73; // r1
  int v74; // r3
  int v75; // r1
  int v76; // r3
  int v77; // r1
  int v78; // r3
  double v79; // d8
  int v80; // r7
  int chain_num; // r11
  int v82; // r6
  int v83; // r9
  int i; // r5
  int v85; // r0
  int v86; // r3
  int v87; // r1
  int v88; // r3
  int v89; // r1
  int v90; // r3
  int v91; // r0
  int j; // r8
  int v93; // r0
  unsigned int v94; // r0
  int v95; // r0
  int v96; // r0
  int v97; // r0
  unsigned int v98; // r0
  int v99; // r0
  int v100; // r0
  int v101; // r0
  int v102; // [sp+4h] [bp-1028h]
  int v103; // [sp+4h] [bp-1028h]
  int v104; // [sp+4h] [bp-1028h]
  int v105; // [sp+18h] [bp-1014h]
  int v106; // [sp+1Ch] [bp-1010h]
  int v107; // [sp+20h] [bp-100Ch]
  int v108; // [sp+24h] [bp-1008h] BYREF
  char v109[4100]; // [sp+28h] [bp-1004h] BYREF

  v108 = a2;
  get_all_created_runtime(&v108);
  if ( !platform_is_adjustable_power() )
  {
    V_LOCK();
    LOWORD(v71) = 30672;
    HIWORD(v71) = (unsigned int)"bitmain_get_power_status end!" >> 16;
    logfmt_raw(v109, 0x1000u, 0, v71, "power_init");
    V_UNLOCK();
    LOWORD(v72) = 30260;
    HIWORD(v72) = (unsigned int)"" >> 16;
    is_pic_mcu_en = -1;
    zlog(g_zc, v72, 150, "power_init", 10, 296, 100, v109);
    V_LOCK();
    LOWORD(v73) = 30720;
    LOWORD(v74) = 31656;
    HIWORD(v73) = (unsigned int)"k voltage = %.2f" >> 16;
    HIWORD(v74) = (unsigned int)"e: %d!" >> 16;
    logfmt_raw(v109, 0x1000u, 0, v74, v73);
    V_UNLOCK();
    LOWORD(v75) = 30260;
    HIWORD(v75) = (unsigned int)"" >> 16;
    zlog(g_zc, v75, 150, "power_init", 10, 297, 100, v109);
    return is_pic_mcu_en;
  }
  v4 = (unsigned __int16)bitmain_power_version();
  if ( !platform_is_psu_supported(v4) )
  {
    V_LOCK();
    LOWORD(v88) = 30724;
    HIWORD(v88) = (unsigned int)"ltage = %.2f" >> 16;
    logfmt_raw(v109, 0x1000u, 0, v88, v4);
    V_UNLOCK();
    LOWORD(v89) = 30260;
    HIWORD(v89) = (unsigned int)"" >> 16;
    is_pic_mcu_en = -1;
    zlog(g_zc, v89, 150, "power_init", 10, 303, 100, v109);
    return is_pic_mcu_en;
  }
  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( !is_pic_mcu_en )
  {
    v6 = bitmain_set_watchdog(0);
    v4 = v6;
    if ( v6 )
    {
      V_LOCK();
      LOWORD(v7) = 30756;
      HIWORD(v7) = (unsigned int)"age = %.2f" >> 16;
      logfmt_raw(v109, 0x1000u, 0, v7, v4);
      V_UNLOCK();
      LOWORD(v8) = 30260;
      HIWORD(v8) = (unsigned int)"" >> 16;
      zlog(g_zc, v8, 150, "power_init", 10, 310, 100, v109);
      return is_pic_mcu_en;
    }
    sleep(1u);
  }
  bitmain_power_off_0();
  byte_196B18 = 0;
  sleep(1u);
  if ( a1 )
  {
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  V_LOCK();
  LOWORD(v10) = 30788;
  HIWORD(v10) = (unsigned int)"t meet the target! centi_voltage %d feedback_voltage %f qualified_vol %f" >> 16;
  logfmt_raw(v109, 0x1000u, 0, v10);
  V_UNLOCK();
  LOWORD(v11) = 30260;
  HIWORD(v11) = (unsigned int)"" >> 16;
  zlog(g_zc, v11, 150, "power_init", 10, 322, 60, v109);
  if ( platform_is_pic_mcu_en() )
    goto LABEL_12;
  v79 = 0.0;
  v80 = 21;
  chain_num = platform_get_chain_num();
  v82 = 1;
  v83 = 100;
  while ( 1 )
  {
    if ( chain_num > 0 )
    {
      for ( i = 0; i != chain_num; ++i )
      {
        v85 = i;
        read_feedback_voltage(v85);
        if ( v2 > v79 )
          v79 = v2;
      }
    }
    if ( v79 <= 10.0 )
      break;
    if ( v83 > 20 )
    {
      v83 = 20;
      sleep(1u);
      if ( !--v80 )
        goto LABEL_93;
LABEL_89:
      v82 = 1;
    }
    else
    {
      sleep(1u);
      if ( !--v80 )
        goto LABEL_93;
      if ( ++v82 > 19 )
        goto LABEL_12;
      v83 = 20;
    }
  }
  if ( v79 <= 4.0 )
    goto LABEL_12;
  if ( v83 != 2 )
  {
    v83 = 2;
    sleep(1u);
    if ( !--v80 )
      goto LABEL_93;
    goto LABEL_89;
  }
  sleep(1u);
  if ( v80 != 1 )
    goto LABEL_12;
LABEL_93:
  V_LOCK();
  LOWORD(v86) = 30856;
  HIWORD(v86) = (unsigned int)"l %f" >> 16;
  logfmt_raw(v109, 0x1000u, 0, v86);
  V_UNLOCK();
  LOWORD(v87) = 30260;
  HIWORD(v87) = (unsigned int)"" >> 16;
  zlog(g_zc, v87, 150, "wait_for_psu_discharge", 22, 187, 100, v109);
LABEL_12:
  v12 = (unsigned __int16)bitmain_power_fw_version();
  V_LOCK();
  LOWORD(v13) = 30896;
  HIWORD(v13) = (unsigned int)"oltage %d feedback_voltage %f qualified_vol %f" >> 16;
  logfmt_raw(v109, 0x1000u, 0, v13, v12);
  V_UNLOCK();
  LOWORD(v14) = 30260;
  HIWORD(v14) = (unsigned int)"" >> 16;
  zlog(g_zc, v14, 150, "power_init", 10, 333, 60, v109);
  byte_196B19 = 0;
  dword_196B1C = 0;
  dword_196B20 = 0;
  byte_196B00 = 1;
  if ( opt_custom_voltage_swith || is_eeprom_loaded() )
    dword_196B0C = opt_custom_voltage;
  byte_196B04 = platform_is_adjustable_power();
  byte_196B10 = platform_is_check_asic_voltage_enable();
  dword_196B14 = platfrom_get_check_asic_voltage();
  V_LOCK();
  LOWORD(v15) = 30928;
  HIWORD(v15) = (unsigned int)"alified_vol %f" >> 16;
  logfmt_raw(v109, 0x1000u, 0, v15);
  V_UNLOCK();
  LOWORD(v16) = 30260;
  HIWORD(v16) = (unsigned int)"" >> 16;
  zlog(g_zc, v16, 150, "power_init", 10, 358, 40, v109);
  V_LOCK();
  logfmt_raw(v109, 0x1000u, 0, "current_voltage_raw\t\t= %d", dword_196B1C);
  V_UNLOCK();
  LOWORD(v17) = 30260;
  HIWORD(v17) = (unsigned int)"" >> 16;
  zlog(g_zc, v17, 150, "power_init", 10, 359, 40, v109);
  V_LOCK();
  logfmt_raw(v109, 0x1000u, 0, "working_voltage_raw\t\t= %d", dword_196B0C);
  V_UNLOCK();
  LOWORD(v18) = 30260;
  HIWORD(v18) = (unsigned int)"" >> 16;
  zlog(g_zc, v18, 150, "power_init", 10, 360, 40, v109);
  V_LOCK();
  logfmt_raw(v109, 0x1000u, 0, "check_asic_voltage_enable\t= %d", (unsigned __int8)byte_196B10);
  V_UNLOCK();
  LOWORD(v19) = 30260;
  HIWORD(v19) = (unsigned int)"" >> 16;
  zlog(g_zc, v19, 150, "power_init", 10, 361, 40, v109);
  V_LOCK();
  logfmt_raw(v109, 0x1000u, 0, "check_asic_voltage_raw\t= %d", dword_196B14);
  V_UNLOCK();
  LOWORD(v20) = 30260;
  HIWORD(v20) = (unsigned int)"" >> 16;
  zlog(g_zc, v20, 150, "power_init", 10, 362, 40, v109);
  if ( byte_196B04 && byte_196B10 )
    v105 = set_check_asic_voltage(0);
  else
    v105 = set_working_voltage(0);
  if ( v105 )
  {
    V_LOCK();
    LOWORD(v90) = 31056;
    HIWORD(v90) = (unsigned int)" %f" >> 16;
    is_pic_mcu_en = -1;
    logfmt_raw(v109, 0x1000u, 0, v90);
    V_UNLOCK();
    v69 = 370;
LABEL_67:
    LOWORD(v70) = 30260;
    HIWORD(v70) = (unsigned int)"" >> 16;
    zlog(g_zc, v70, 150, "power_init", 10, v69, 100, v109);
    return is_pic_mcu_en;
  }
  v21 = v4 == 113;
  if ( v4 != 113 )
    v21 = v4 == 116;
  LOWORD(v22) = 31084;
  v23 = 0;
  if ( !v21 )
  {
    while ( 1 )
    {
      is_pic_mcu_en = bitmain_get_power_status();
      ++v23;
      if ( !is_pic_mcu_en )
        break;
      if ( v23 == 5 * (v23 / 5) )
      {
        V_LOCK();
        HIWORD(v22) = (unsigned int)"rror!" >> 16;
        logfmt_raw(v109, 0x1000u, v23 % 5, v22, is_pic_mcu_en);
        V_UNLOCK();
        LOWORD(v24) = 30260;
        HIWORD(v24) = (unsigned int)"" >> 16;
        zlog(g_zc, v24, 150, "power_init", 10, 384, 100, v109);
      }
      sleep(3u);
      if ( v23 == 20 )
        goto LABEL_28;
    }
  }
  is_pic_mcu_en = 0;
LABEL_28:
  V_LOCK();
  LOWORD(v25) = 31128;
  HIWORD(v25) = (unsigned int)"pcb_temp" >> 16;
  logfmt_raw(v109, 0x1000u, 0, v25);
  V_UNLOCK();
  LOWORD(v26) = 30260;
  HIWORD(v26) = (unsigned int)"" >> 16;
  zlog(g_zc, v26, 150, "power_init", 10, 391, 40, v109);
  bitmain_power_on();
  byte_196B18 = 1;
  if ( (unsigned int)(opt_algo - 11) > 1 )
  {
    v91 = usleep(0x61A80u);
    if ( v108 > 0 )
    {
      for ( j = 0; j < v108; ++j )
      {
        v93 = dev_ctrl(v91);
        (*(void (__fastcall **)(int))(v93 + 48))(j);
        v94 = sleep(1u);
        v95 = dev_ctrl(v94);
        (*(void (__fastcall **)(int))(v95 + 52))(j);
        v96 = usleep((__useconds_t)&loc_493E0);
        v97 = dev_ctrl(v96);
        (*(void (__fastcall **)(int))(v97 + 48))(j);
        v98 = sleep(1u);
        v99 = dev_ctrl(v98);
        (*(void (__fastcall **)(int))(v99 + 52))(j);
        v100 = usleep((__useconds_t)&loc_493E0);
        v101 = dev_ctrl(v100);
        v91 = (*(int (__fastcall **)(int))(v101 + 48))(j);
      }
    }
  }
  if ( byte_196B00 )
    v27 = dword_196B1C;
  else
    v27 = sub_5D0B8();
  LOWORD(v28) = 31400;
  v29 = (double)v27;
  v30 = 3;
  HIWORD(v28) = (unsigned int)"min temp pcb: %d" >> 16;
  v107 = v28;
  v31 = (double)v27 * 0.75 / 100.0;
  while ( 2 )
  {
    sleep(1u);
    if ( platform_is_pic_mcu_en() )
    {
      device_num = query_device_num();
      v33 = 0.0;
      v106 = device_num;
      if ( device_num > 0 )
      {
        LOWORD(v34) = 31160;
        v35 = 0;
        do
        {
          v36 = dev_ctrl(device_num);
          v37 = (*(int (__fastcall **)(int))(v36 + 60))(v35);
          read_feedback_voltage(v37);
          v38 = V_LOCK();
          v39 = dev_ctrl(v38);
          v40 = (*(int (__fastcall **)(int))(v39 + 60))(v35);
          HIWORD(v34) = (unsigned int)"get_temp" >> 16;
          logfmt_raw(v109, 0x1000u, 0, v34, v40, v102, v2);
          V_UNLOCK();
          LOWORD(v41) = 30260;
          HIWORD(v41) = (unsigned int)"" >> 16;
          device_num = zlog(g_zc, v41, 150, "get_minimal_feedback_voltage", 28, 69, 40, v109);
          if ( v2 > 0.1 )
          {
            if ( v2 >= v33 )
            {
              if ( v33 < 0.1 )
                v33 = v2;
            }
            else
            {
              v33 = v2;
            }
          }
          ++v35;
        }
        while ( v106 != v35 );
      }
      V_LOCK();
      LOWORD(v42) = 31196;
      HIWORD(v42) = (unsigned int)"temp_in_pcb" >> 16;
      logfmt_raw(v109, 0x1000u, 0, v42, v33);
      V_UNLOCK();
      LOWORD(v43) = 30260;
      HIWORD(v43) = (unsigned int)"" >> 16;
      zlog(g_zc, v43, 150, "get_minimal_feedback_voltage", 28, 74, 20, v109);
      if ( v31 <= v33 )
      {
        V_LOCK();
        LOWORD(v44) = 31320;
        HIWORD(v44) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/miner_util/set_pwm_by_temp.c" >> 16;
        logfmt_raw(v109, 0x1000u, 0, v44, v27, v103, v33, v31);
        V_UNLOCK();
        LOWORD(v45) = 30260;
        HIWORD(v45) = (unsigned int)"" >> 16;
        zlog(g_zc, v45, 150, "check_feedback_voltage", 22, 95, 80, v109);
        goto LABEL_44;
      }
      V_LOCK();
      LOWORD(v78) = 31224;
      HIWORD(v78) = (unsigned int)"y a bad sensor" >> 16;
      logfmt_raw(v109, 0x1000u, 0, v78, v27, v103, v33, v31);
      V_UNLOCK();
      v65 = 80;
      v66 = 91;
      goto LABEL_65;
    }
    read_feedback_voltage(0);
    V_LOCK();
    logfmt_raw(v109, 0x1000u, 0, v107, v2);
    V_UNLOCK();
    LOWORD(v63) = 30260;
    HIWORD(v63) = (unsigned int)"" >> 16;
    zlog(g_zc, v63, 150, "check_feedback_voltage", 22, 100, 20, v109);
    if ( v2 >= 0.0 )
    {
      if ( v2 * 100.0 <= v29 * 1.1 && v2 * 100.0 >= v29 * 0.9 )
        goto LABEL_44;
      V_LOCK();
      LOWORD(v64) = 31464;
      HIWORD(v64) = (unsigned int)"w temp type %d" >> 16;
      logfmt_raw(v109, 0x1000u, 0, v64, v27, v104, v2 * 100.0);
      V_UNLOCK();
      v65 = 100;
      v66 = 107;
LABEL_65:
      LOWORD(v67) = 30260;
      HIWORD(v67) = (unsigned int)"" >> 16;
      zlog(g_zc, v67, 150, "check_feedback_voltage", 22, v66, v65, v109);
      if ( !--v30 )
      {
        V_LOCK();
        LOWORD(v68) = 31516;
        HIWORD(v68) = (unsigned int)" target: %f, min %f, max %f" >> 16;
        is_pic_mcu_en = -1;
        logfmt_raw(v109, 0x1000u, 0, v68);
        V_UNLOCK();
        v69 = 413;
        goto LABEL_67;
      }
      continue;
    }
    break;
  }
  V_LOCK();
  LOWORD(v76) = 31424;
  HIWORD(v76) = (unsigned int)"_out_chip" >> 16;
  logfmt_raw(v109, 0x1000u, 0, v76);
  V_UNLOCK();
  LOWORD(v77) = 30260;
  HIWORD(v77) = (unsigned int)"" >> 16;
  zlog(g_zc, v77, 150, "check_feedback_voltage", 22, 102, 80, v109);
LABEL_44:
  V_LOCK();
  LOWORD(v46) = 31548;
  HIWORD(v46) = (unsigned int)"k_temp" >> 16;
  logfmt_raw(v109, 0x1000u, 0, v46);
  V_UNLOCK();
  LOWORD(v47) = 30260;
  HIWORD(v47) = (unsigned int)"" >> 16;
  zlog(g_zc, v47, 150, "power_init", 10, 418, 40, v109);
  if ( (unsigned int)(opt_algo - 11) <= 1 )
  {
    v48 = usleep((__useconds_t)&stru_186A0);
    if ( v108 > 0 )
    {
      for ( k = 0; k < v108; ++k )
      {
        v50 = dev_ctrl(v48);
        v48 = (*(int (__fastcall **)(int))(v50 + 48))(k);
      }
    }
    v51 = usleep((__useconds_t)&stru_186A0);
    if ( v108 > 0 )
    {
      for ( m = 0; m < v108; ++m )
      {
        v53 = dev_ctrl(v51);
        v51 = (*(int (__fastcall **)(int))(v53 + 52))(m);
      }
    }
    v54 = usleep((__useconds_t)&stru_186A0);
    if ( v108 > 0 )
    {
      for ( n = 0; n < v108; ++n )
      {
        v56 = dev_ctrl(v54);
        v54 = (*(int (__fastcall **)(int))(v56 + 48))(n);
      }
    }
    v57 = usleep((__useconds_t)&stru_186A0);
    if ( v108 > 0 )
    {
      for ( ii = 0; ii < v108; ++ii )
      {
        v59 = dev_ctrl(v57);
        v57 = (*(int (__fastcall **)(int))(v59 + 52))(ii);
      }
    }
    v60 = usleep((__useconds_t)&stru_186A0);
    if ( v108 > 0 )
    {
      for ( jj = 0; jj < v108; ++jj )
      {
        v62 = dev_ctrl(v60);
        v60 = (*(int (__fastcall **)(int))(v62 + 48))(jj);
      }
    }
  }
  return is_pic_mcu_en;
}
