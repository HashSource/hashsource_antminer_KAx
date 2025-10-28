int power_init()
{
  double v0; // d0
  unsigned __int16 v1; // r4
  unsigned __int16 v2; // r0
  int v3; // r4
  unsigned int v4; // r4
  double v5; // d11
  double v6; // d10
  int v7; // r8
  double v8; // d8
  char *all_created_runtime; // r0
  char *v10; // r11
  int j; // r9
  int v12; // t1
  int power_status; // r7
  double v15; // d8
  int v16; // r9
  int v17; // r11
  int chain_num; // r8
  int v19; // r10
  int i; // r4
  int v21; // r0
  double v22; // d8
  int v23; // r0
  int v24; // r12
  int v25; // r2
  int v26; // r0
  int v27; // r2
  unsigned __int16 v28; // r4
  int v29; // r2
  int v30; // r0
  int v31; // r1
  int v32; // [sp+4h] [bp-1028h]
  int v33; // [sp+4h] [bp-1028h]
  int v34; // [sp+1Ch] [bp-1010h]
  int v35; // [sp+24h] [bp-1008h] BYREF
  char v36[4100]; // [sp+28h] [bp-1004h] BYREF

  if ( !platform_is_adjustable_power() )
  {
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "%s, current algo donot use adjustable power!", "power_init");
    V_UNLOCK();
    power_status = -1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "power_init",
      10,
      289,
      100,
      v36);
    return power_status;
  }
  v1 = bitmain_power_version();
  if ( !platform_is_psu_supported(v1) )
  {
    power_status = -1;
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "Not support power version, %04x", v1);
    V_UNLOCK();
    v29 = 295;
    v30 = g_zc;
    LOWORD(v31) = 15284;
    goto LABEL_65;
  }
  if ( !platform_is_pic_mcu_en() )
  {
    v2 = bitmain_set_watchdog(0);
    if ( !v2 )
    {
      sleep(1u);
      goto LABEL_6;
    }
    v28 = v2;
    power_status = 0;
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "disable power watchdog: %04x", v28);
    V_UNLOCK();
    v29 = 302;
    v30 = g_zc;
    LOWORD(v31) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp"
                                    "/release/build/godminer-origin_godminer-new/miner_util/power_api.c";
LABEL_65:
    HIWORD(v31) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/miner_util/power_api.c" >> 16;
    zlog(v30, v31, 150, "power_init", 10, v29, 100, v36);
    return power_status;
  }
LABEL_6:
  V_LOCK();
  logfmt_raw(v36, 0x1000u, 0, "Enter sleep to make sure power release finish.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    308,
    60,
    v36);
  bitmain_power_off_0();
  byte_1088D0 = 0;
  sleep(1u);
  sleep(0x1Eu);
  if ( platform_is_pic_mcu_en() )
    goto LABEL_7;
  v15 = 0.0;
  v16 = 21;
  v17 = 1;
  chain_num = platform_get_chain_num();
  v19 = 100;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( chain_num > 0 )
      {
        for ( i = 0; i != chain_num; ++i )
        {
          v21 = i;
          read_feedback_voltage(v21);
          if ( v15 < v0 )
            v15 = v0;
        }
      }
      if ( v15 <= 10.0 )
        break;
      if ( v19 > 20 )
      {
        v19 = 20;
        goto LABEL_47;
      }
      sleep(1u);
      if ( !--v16 )
        goto LABEL_63;
      if ( ++v17 > 19 )
        goto LABEL_7;
      v19 = 20;
    }
    if ( v15 <= 4.0 )
      goto LABEL_7;
    if ( v19 == 2 )
      break;
    v19 = 2;
LABEL_47:
    sleep(1u);
    if ( !--v16 )
      goto LABEL_63;
    v17 = 1;
  }
  sleep(1u);
  if ( v16 != 1 )
    goto LABEL_7;
LABEL_63:
  V_LOCK();
  logfmt_raw(v36, 0x1000u, 0, "APW discharge too slow OR pic adc wrong");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "wait_for_psu_discharge",
    22,
    185,
    100,
    v36);
LABEL_7:
  v3 = (unsigned __int16)bitmain_power_fw_version();
  V_LOCK();
  logfmt_raw(v36, 0x1000u, 0, "bitmain power fw version: %04x", v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    318,
    60,
    v36);
  byte_1088D1 = 0;
  dword_1088D4 = 0;
  dword_1088D8 = 0;
  byte_1088B8 = 1;
  if ( opt_custom_voltage_swith || is_eeprom_loaded() )
    dword_1088C4 = opt_custom_voltage;
  byte_1088BC = platform_is_adjustable_power();
  byte_1088C8 = platform_is_check_asic_voltage_enable();
  dword_1088CC = platfrom_get_check_asic_voltage();
  V_LOCK();
  logfmt_raw(v36, 0x1000u, 0, "Power init:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    337,
    40,
    v36);
  V_LOCK();
  logfmt_raw(v36, 0x1000u, 0, "current_voltage_raw\t\t= %d", dword_1088D4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    338,
    40,
    v36);
  V_LOCK();
  logfmt_raw(v36, 0x1000u, 0, "working_voltage_raw\t\t= %d", dword_1088C4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    339,
    40,
    v36);
  V_LOCK();
  logfmt_raw(v36, 0x1000u, 0, "check_asic_voltage_enable\t= %d", (unsigned __int8)byte_1088C8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    340,
    40,
    v36);
  V_LOCK();
  logfmt_raw(v36, 0x1000u, 0, "check_asic_voltage_raw\t= %d", dword_1088CC);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    341,
    40,
    v36);
  if ( byte_1088BC && byte_1088C8 )
    v4 = set_check_asic_voltage(0);
  else
    v4 = set_working_voltage(0);
  if ( !v4 )
  {
    bitmain_power_on();
    byte_1088D0 = 1;
    sleep(1u);
    if ( byte_1088B8 )
    {
      v34 = dword_1088D4;
      v6 = (double)dword_1088D4;
      v5 = (double)dword_1088D4 * 0.75 / 100.0;
    }
    else
    {
      v5 = -0.0075;
      v6 = -1.0;
      v34 = -1;
    }
    v7 = 3;
    while ( 1 )
    {
      sleep(1u);
      if ( platform_is_pic_mcu_en() )
      {
        v8 = 0.0;
        all_created_runtime = (char *)get_all_created_runtime(&v35);
        if ( v35 > 0 )
        {
          v10 = all_created_runtime - 4;
          for ( j = 0; j < v35; ++j )
          {
            v12 = *((_DWORD *)v10 + 1);
            v10 += 4;
            read_feedback_voltage(*(_DWORD *)(v12 + 200));
            if ( v0 > 0.1 )
            {
              if ( v0 >= v8 )
              {
                if ( v8 < 0.1 )
                  v8 = v0;
              }
              else
              {
                v8 = v0;
              }
            }
          }
        }
        V_LOCK();
        logfmt_raw(v36, 0x1000u, 0, "the minimal voltage = %.2f", v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/power_api.c",
          150,
          "get_minimal_feedback_voltage",
          28,
          72,
          20,
          v36);
        if ( v8 >= v5 )
        {
          V_LOCK();
          logfmt_raw(
            v36,
            0x1000u,
            0,
            "power voltage qualified! centi_voltage %d feedback_voltage %f qualified_vol %f",
            v34,
            v32,
            v8,
            v5);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/power_api.c",
            150,
            "check_feedback_voltage",
            22,
            93,
            80,
            v36);
          goto LABEL_28;
        }
        V_LOCK();
        logfmt_raw(
          v36,
          0x1000u,
          0,
          "power voltage can not meet the target! centi_voltage %d feedback_voltage %f qualified_vol %f",
          v34,
          v32,
          v8,
          v5);
        V_UNLOCK();
        v23 = g_zc;
        v24 = 80;
        v25 = 89;
      }
      else
      {
        read_feedback_voltage(0);
        V_LOCK();
        logfmt_raw(v36, 0x1000u, 0, "read fb voltage %.2f", v0);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/power_api.c",
          150,
          "check_feedback_voltage",
          22,
          98,
          20,
          v36);
        if ( v0 < 0.0 )
        {
          V_LOCK();
          logfmt_raw(v36, 0x1000u, 0, "read_feedback_voltage_from_psu failed!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/power_api.c",
            150,
            "check_feedback_voltage",
            22,
            100,
            80,
            v36);
          goto LABEL_28;
        }
        v22 = v0 * 100.0;
        if ( v0 * 100.0 <= v6 * 1.1 && v22 >= v6 * 0.9 )
        {
LABEL_28:
          while ( 1 )
          {
            power_status = bitmain_get_power_status();
            ++v4;
            if ( !power_status )
              break;
            if ( v4 == 5 * (v4 / 5) )
            {
              V_LOCK();
              logfmt_raw(v36, 0x1000u, v4 % 5, ">> bitmain_get_power_status failed(%d) <<", power_status);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/miner_util/power_api.c",
                150,
                "power_init",
                10,
                365,
                100,
                v36);
              sleep(3u);
              if ( v4 == 20 )
                return power_status;
            }
            else
            {
              sleep(3u);
              if ( v4 == 20 )
                return power_status;
            }
          }
          return power_status;
        }
        V_LOCK();
        logfmt_raw(v36, 0x1000u, 0, "power voltage qualified! centi_voltage %d fb_vol %f", v34, v33, v22);
        V_UNLOCK();
        v23 = g_zc;
        v24 = 100;
        v25 = 105;
      }
      zlog(
        v23,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "check_feedback_voltage",
        22,
        v25,
        v24,
        v36);
      if ( !--v7 )
      {
        V_LOCK();
        power_status = -1;
        logfmt_raw(v36, 0x1000u, 0, "check_feedback_voltage error!");
        V_UNLOCK();
        v26 = g_zc;
        v27 = 356;
        goto LABEL_61;
      }
    }
  }
  V_LOCK();
  power_status = -1;
  logfmt_raw(v36, 0x1000u, 0, "set_voltage_by_steps error!");
  V_UNLOCK();
  v26 = g_zc;
  v27 = 349;
LABEL_61:
  zlog(
    v26,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    v27,
    100,
    v36);
  return power_status;
}
