int __fastcall sub_46544(_DWORD *a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r7
  _DWORD *v3; // r0
  int v4; // r9
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r9
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r9
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r10
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r10
  int v17; // r0
  _DWORD *v18; // r0
  int v19; // r10
  int v20; // r0
  _DWORD *v21; // r0
  int v22; // r10
  int v23; // r0
  _DWORD *v24; // r0
  int v25; // r10
  int v26; // r0
  _DWORD *v27; // r0
  int v28; // r10
  int v29; // r0
  _DWORD *v30; // r0
  int v31; // r10
  int v32; // r0
  __int64 v33; // r0
  double v34; // r0
  float v35; // s14
  _DWORD *v36; // r0
  int v37; // r10
  int v38; // r0
  __int64 v39; // r0
  double v40; // r0
  float v41; // s14
  _DWORD *v42; // r0
  int v43; // r10
  int v44; // r0
  __int64 v45; // r0
  double v46; // r0
  float v47; // s14
  _DWORD *v48; // r0
  int v49; // r10
  int v50; // r0
  __int64 v51; // r0
  double v52; // r0
  float v53; // s14
  _DWORD *v54; // r0
  _DWORD *v55; // r0
  int v56; // r11
  unsigned int v57; // r10
  _DWORD *v58; // r0
  _DWORD *v59; // r8
  _DWORD *v60; // r0
  int v61; // r9
  int v62; // r0
  _DWORD *v63; // r0
  int v64; // r9
  int v65; // r0
  _DWORD *v66; // r0
  int v67; // r8
  int v68; // r0
  int v69; // r0
  int v70; // r2
  int v71; // r3
  int v73; // r2
  int v74; // r0
  int v75; // r2
  _DWORD *v76; // [sp+14h] [bp-1010h]
  char v77[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = (_DWORD *)json_object_get(a1, "fan");
  v2 = v1;
  if ( !v1 || *v1 )
  {
    V_LOCK();
    logfmt_raw(v77, 0x1000u, 0, "get fan failed\n");
    V_UNLOCK();
    v73 = 286;
    goto LABEL_45;
  }
  v3 = (_DWORD *)json_object_get(v1, "fan_control_mode");
  v4 = (int)v3;
  if ( !v3 || *v3 != 3 )
  {
    V_LOCK();
    logfmt_raw(v77, 0x1000u, 0, "get fan_control_mode failed!\n");
    V_UNLOCK();
    v73 = 293;
LABEL_45:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_fan",
      10,
      v73,
      100,
      v77);
    return -1;
  }
  V_LOCK();
  v5 = json_integer_value(v4);
  logfmt_raw(v77, 0x1000u, 0, "fan_control_mode: %d\n", v5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_fan",
    10,
    296,
    20,
    v77);
  dword_11977C = json_integer_value(v4);
  v6 = (_DWORD *)json_object_get(v2, "pwm_percent_min");
  v7 = (int)v6;
  if ( v6 && *v6 == 3 )
  {
    V_LOCK();
    v8 = json_integer_value(v7);
    logfmt_raw(v77, 0x1000u, 0, "pwm_percent_min: %d\n", v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_fan",
      10,
      305,
      20,
      v77);
    dword_119780 = json_integer_value(v7);
    v9 = (_DWORD *)json_object_get(v2, "pwm_percent_max");
    v10 = (int)v9;
    if ( v9 && *v9 == 3 )
    {
      V_LOCK();
      v11 = json_integer_value(v10);
      logfmt_raw(v77, 0x1000u, 0, "pwm_percent_max: %d\n", v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_fan",
        10,
        314,
        20,
        v77);
      dword_119784 = json_integer_value(v10);
      v12 = (_DWORD *)json_object_get(v2, "full_speed_temp_type");
      v13 = (int)v12;
      if ( v12 && *v12 == 3 )
      {
        V_LOCK();
        v14 = json_integer_value(v13);
        logfmt_raw(v77, 0x1000u, 0, "full_speed_temp_type: %d\n", v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_fan",
          10,
          323,
          20,
          v77);
        dword_119788 = json_integer_value(v13);
        v15 = (_DWORD *)json_object_get(v2, "full_speed_temp");
        v16 = (int)v15;
        if ( v15 && *v15 == 3 )
        {
          V_LOCK();
          v17 = json_integer_value(v16);
          logfmt_raw(v77, 0x1000u, 0, "full_speed_temp: %d\n", v17);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_fan",
            10,
            332,
            20,
            v77);
          dword_11978C = json_integer_value(v16);
          v18 = (_DWORD *)json_object_get(v2, "target_temp_type");
          v19 = (int)v18;
          if ( v18 && *v18 == 3 )
          {
            V_LOCK();
            v20 = json_integer_value(v19);
            logfmt_raw(v77, 0x1000u, 0, "target_temp_type: %d\n", v20);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/topol/topol.c",
              149,
              "_parse_fan",
              10,
              341,
              20,
              v77);
            dword_119790 = json_integer_value(v19);
            v21 = (_DWORD *)json_object_get(v2, "target_temp");
            v22 = (int)v21;
            if ( v21 && *v21 == 3 )
            {
              V_LOCK();
              v23 = json_integer_value(v22);
              logfmt_raw(v77, 0x1000u, 0, "target_temp: %d\n", v23);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/topol/topol.c",
                149,
                "_parse_fan",
                10,
                350,
                20,
                v77);
              dword_119794 = json_integer_value(v22);
              v24 = (_DWORD *)json_object_get(v2, "initial_interval");
              v25 = (int)v24;
              if ( v24 && *v24 == 3 )
              {
                V_LOCK();
                v26 = json_integer_value(v25);
                logfmt_raw(v77, 0x1000u, 0, "initial_interval: %d\n", v26);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/topol/topol.c",
                  149,
                  "_parse_fan",
                  10,
                  359,
                  20,
                  v77);
                dword_119798 = json_integer_value(v25);
                v27 = (_DWORD *)json_object_get(v2, "interval");
                v28 = (int)v27;
                if ( v27 && *v27 == 3 )
                {
                  V_LOCK();
                  v29 = json_integer_value(v28);
                  logfmt_raw(v77, 0x1000u, 0, "interval: %d\n", v29);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/topol/topol.c",
                    149,
                    "_parse_fan",
                    10,
                    368,
                    20,
                    v77);
                  dword_11979C = json_integer_value(v28);
                  v30 = (_DWORD *)json_object_get(v2, "startup_Kp");
                  v31 = (int)v30;
                  if ( v30 && *v30 == 3 )
                  {
                    V_LOCK();
                    v32 = json_integer_value(v31);
                    logfmt_raw(v77, 0x1000u, 0, "startup_Kp: %d\n", v32);
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/topol/topol.c",
                      149,
                      "_parse_fan",
                      10,
                      377,
                      20,
                      v77);
                    v33 = json_integer_value(v31);
                    LODWORD(v34) = sub_DD47C(v33);
                    v35 = v34 / 100.0;
                    flt_1197A0 = v35;
                    v36 = (_DWORD *)json_object_get(v2, "Kp");
                    v37 = (int)v36;
                    if ( v36 && *v36 == 3 )
                    {
                      V_LOCK();
                      v38 = json_integer_value(v37);
                      logfmt_raw(v77, 0x1000u, 0, "Kp: %d\n", v38);
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
                        149,
                        "_parse_fan",
                        10,
                        386,
                        20,
                        v77);
                      v39 = json_integer_value(v37);
                      LODWORD(v40) = sub_DD47C(v39);
                      v41 = v40 / 100.0;
                      flt_1197A4 = v41;
                      v42 = (_DWORD *)json_object_get(v2, "Ki");
                      v43 = (int)v42;
                      if ( v42 && *v42 == 3 )
                      {
                        V_LOCK();
                        v44 = json_integer_value(v43);
                        logfmt_raw(v77, 0x1000u, 0, "Ki: %d\n", v44);
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/b"
                          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
                          149,
                          "_parse_fan",
                          10,
                          395,
                          20,
                          v77);
                        v45 = json_integer_value(v43);
                        LODWORD(v46) = sub_DD47C(v45);
                        v47 = v46 / 100.0;
                        flt_1197A8 = v47;
                        v48 = (_DWORD *)json_object_get(v2, "Kd");
                        v49 = (int)v48;
                        if ( v48 && *v48 == 3 )
                        {
                          V_LOCK();
                          v50 = json_integer_value(v49);
                          logfmt_raw(v77, 0x1000u, 0, "Kd: %d\n", v50);
                          V_UNLOCK();
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release"
                            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
                            149,
                            "_parse_fan",
                            10,
                            404,
                            20,
                            v77);
                          v51 = json_integer_value(v49);
                          LODWORD(v52) = sub_DD47C(v51);
                          v53 = v52 / 100.0;
                          flt_1197AC = v53;
                          v54 = (_DWORD *)json_object_get(v2, "speed_info");
                          v76 = v54;
                          if ( v54 && *v54 == 1 )
                          {
                            V_LOCK();
                            logfmt_raw(v77, 0x1000u, 0, "fan speed_info info:\n");
                            V_UNLOCK();
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/relea"
                              "se/build/godminer-origin_godminer-new/backend/topol/topol.c",
                              149,
                              "_parse_fan",
                              10,
                              413,
                              20,
                              v77);
                            v55 = json_array_size(v76);
                            dword_1197B0 = (int)calloc((size_t)v55, 0xCu);
                            if ( !dword_1197B0 )
                            {
                              V_LOCK();
                              logfmt_raw(v77, 0x1000u, 0, "calloc topol_machine.fan_info.speeds failed!\n");
                              V_UNLOCK();
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                149,
                                "_parse_fan",
                                10,
                                418,
                                100,
                                v77);
                              return -1;
                            }
                            v56 = 0;
                            v57 = 0;
                            while ( 1 )
                            {
                              if ( (unsigned int)json_array_size(v76) <= v57 )
                                return 0;
                              v58 = json_array_get(v76, v57);
                              v59 = v58;
                              if ( !v58 || *v58 )
                              {
                                V_LOCK();
                                logfmt_raw(v77, 0x1000u, 0, "get array %d failed\n", v57);
                                V_UNLOCK();
                                v74 = g_zc;
                                v75 = 427;
                                goto LABEL_49;
                              }
                              v60 = (_DWORD *)json_object_get(v58, "id");
                              v61 = (int)v60;
                              if ( !v60 || *v60 != 3 )
                              {
                                V_LOCK();
                                logfmt_raw(v77, 0x1000u, 0, "get array %d id failed\n", v57);
                                V_UNLOCK();
                                v74 = g_zc;
                                v75 = 434;
                                goto LABEL_49;
                              }
                              V_LOCK();
                              v62 = json_integer_value(v61);
                              logfmt_raw(v77, 0x1000u, 0, "id: %d\n", v62);
                              V_UNLOCK();
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                149,
                                "_parse_fan",
                                10,
                                437,
                                20,
                                v77);
                              *(_DWORD *)(dword_1197B0 + v56) = json_integer_value(v61);
                              v63 = (_DWORD *)json_object_get(v59, "max_speed");
                              v64 = (int)v63;
                              if ( !v63 || *v63 != 3 )
                              {
                                V_LOCK();
                                logfmt_raw(v77, 0x1000u, 0, "get array %d max_speed failed\n", v57);
                                V_UNLOCK();
                                v74 = g_zc;
                                v75 = 443;
                                goto LABEL_49;
                              }
                              V_LOCK();
                              v65 = json_integer_value(v64);
                              logfmt_raw(v77, 0x1000u, 0, "max_speed: %d\n", v65);
                              V_UNLOCK();
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                149,
                                "_parse_fan",
                                10,
                                446,
                                20,
                                v77);
                              *(_DWORD *)(dword_1197B0 + v56 + 8) = json_integer_value(v64);
                              v66 = (_DWORD *)json_object_get(v59, "min_speed");
                              v67 = (int)v66;
                              if ( !v66 || *v66 != 3 )
                                break;
                              V_LOCK();
                              ++v57;
                              v68 = json_integer_value(v67);
                              logfmt_raw(v77, 0x1000u, 0, "min_speed: %d\n", v68);
                              V_UNLOCK();
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                149,
                                "_parse_fan",
                                10,
                                455,
                                20,
                                v77);
                              v69 = json_integer_value(v67);
                              v70 = dword_1197B0 + v56;
                              v56 += 12;
                              v71 = dword_119774 + 1;
                              *(_DWORD *)(v70 + 4) = v69;
                              dword_119774 = v71;
                            }
                            V_LOCK();
                            logfmt_raw(v77, 0x1000u, 0, "get array %d min_speed failed\n", v57);
                            V_UNLOCK();
                            v74 = g_zc;
                            v75 = 452;
                          }
                          else
                          {
                            V_LOCK();
                            logfmt_raw(v77, 0x1000u, 0, "get fan speed_info failed\n");
                            V_UNLOCK();
                            v74 = g_zc;
                            v75 = 410;
                          }
                        }
                        else
                        {
                          V_LOCK();
                          logfmt_raw(v77, 0x1000u, 0, "get Kd failed!\n");
                          V_UNLOCK();
                          v74 = g_zc;
                          v75 = 401;
                        }
                      }
                      else
                      {
                        V_LOCK();
                        logfmt_raw(v77, 0x1000u, 0, "get Ki failed!\n");
                        V_UNLOCK();
                        v74 = g_zc;
                        v75 = 392;
                      }
                    }
                    else
                    {
                      V_LOCK();
                      logfmt_raw(v77, 0x1000u, 0, "get Kp failed!\n");
                      V_UNLOCK();
                      v74 = g_zc;
                      v75 = 383;
                    }
                  }
                  else
                  {
                    V_LOCK();
                    logfmt_raw(v77, 0x1000u, 0, "get startup_Kp failed!\n");
                    V_UNLOCK();
                    v74 = g_zc;
                    v75 = 374;
                  }
                }
                else
                {
                  V_LOCK();
                  logfmt_raw(v77, 0x1000u, 0, "get interval failed!\n");
                  V_UNLOCK();
                  v74 = g_zc;
                  v75 = 365;
                }
              }
              else
              {
                V_LOCK();
                logfmt_raw(v77, 0x1000u, 0, "get initial_interval failed!\n");
                V_UNLOCK();
                v74 = g_zc;
                v75 = 356;
              }
            }
            else
            {
              V_LOCK();
              logfmt_raw(v77, 0x1000u, 0, "get target_temp failed!\n");
              V_UNLOCK();
              v74 = g_zc;
              v75 = 347;
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v77, 0x1000u, 0, "get target_temp_type failed!\n");
            V_UNLOCK();
            v74 = g_zc;
            v75 = 338;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v77, 0x1000u, 0, "get full_speed_temp failed!\n");
          V_UNLOCK();
          v74 = g_zc;
          v75 = 329;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v77, 0x1000u, 0, "get full_speed_temp_type failed!\n");
        V_UNLOCK();
        v74 = g_zc;
        v75 = 320;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v77, 0x1000u, 0, "get pwm_percent_max failed!\n");
      V_UNLOCK();
      v74 = g_zc;
      v75 = 311;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v77, 0x1000u, 0, "get pwm_percent_min failed!\n");
    V_UNLOCK();
    v74 = g_zc;
    v75 = 302;
  }
LABEL_49:
  zlog(
    v74,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_fan",
    10,
    v75,
    100,
    v77);
  return -1;
}
