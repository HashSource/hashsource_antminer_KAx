int __fastcall sub_473E4(_DWORD *a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r7
  _DWORD *v3; // r0
  _DWORD *v4; // r8
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r11
  _DWORD *v8; // r0
  const char *v9; // r0
  int v10; // r11
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r11
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
  int v28; // r7
  int v29; // r0
  int v30; // r0
  int v31; // r3
  int v33; // r0
  int v34; // r2
  char v35[4100]; // [sp+18h] [bp-1004h] BYREF

  v1 = (_DWORD *)json_object_get(a1, "asic");
  v2 = v1;
  if ( !v1 || *v1 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "get asic failed\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_asic",
      11,
      471,
      100,
      v35);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "asic:\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_asic",
      11,
      474,
      20,
      v35);
    v3 = (_DWORD *)json_object_get(v2, "asic_id");
    v4 = v3;
    if ( v3 && *v3 == 2 )
    {
      V_LOCK();
      v5 = json_string_value(v4);
      logfmt_raw(v35, 0x1000u, 0, "asic_id: %s\n", v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_asic",
        11,
        482,
        20,
        v35);
      v6 = (_DWORD *)json_object_get(v2, "chip_type");
      v7 = v6;
      if ( v6 && *v6 == 2 )
      {
        V_LOCK();
        v8 = json_string_value(v7);
        logfmt_raw(v35, 0x1000u, 0, "chip_type : %s\n", v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_asic",
          11,
          490,
          20,
          v35);
        v9 = (const char *)json_string_value(v7);
        v10 = dword_119778;
        v11 = strtol(v9, 0, 0);
        *(_DWORD *)(v10 + 24) = v11;
        if ( !v11 )
        {
          V_LOCK();
          logfmt_raw(v35, 0x1000u, 0, "convert chip_type failed\n");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_asic",
            11,
            495,
            100,
            v35);
          return -1;
        }
        V_LOCK();
        logfmt_raw(v35, 0x1000u, 0, "chip_type 0x%x\n", *(_DWORD *)(dword_119778 + 24));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_asic",
          11,
          498,
          20,
          v35);
        v12 = (_DWORD *)json_object_get(v2, "cycle_cnt");
        v13 = (int)v12;
        if ( v12 && *v12 == 3 )
        {
          V_LOCK();
          v14 = json_integer_value(v13);
          logfmt_raw(v35, 0x1000u, 0, "cycle_cnt : %d\n", v14);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_asic",
            11,
            506,
            20,
            v35);
          *(_DWORD *)(dword_119778 + 28) = json_integer_value(v13);
          v15 = (_DWORD *)json_object_get(v2, "asic_big_core_num");
          v16 = (int)v15;
          if ( v15 && *v15 == 3 )
          {
            V_LOCK();
            v17 = json_integer_value(v16);
            logfmt_raw(v35, 0x1000u, 0, "asic_big_core_num: %d\n", v17);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/topol/topol.c",
              149,
              "_parse_asic",
              11,
              515,
              20,
              v35);
            *(_DWORD *)(dword_119778 + 36) = json_integer_value(v16);
            v18 = (_DWORD *)json_object_get(v2, "asic_little_core_num");
            v19 = (int)v18;
            if ( v18 && *v18 == 3 )
            {
              V_LOCK();
              v20 = json_integer_value(v19);
              logfmt_raw(v35, 0x1000u, 0, "asic_little_core_num %d\n", v20);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/topol/topol.c",
                149,
                "_parse_asic",
                11,
                524,
                20,
                v35);
              *(_DWORD *)(dword_119778 + 40) = json_integer_value(v19);
              v21 = (_DWORD *)json_object_get(v2, "core_little_core_num");
              v22 = (int)v21;
              if ( v21 && *v21 == 3 )
              {
                V_LOCK();
                v23 = json_integer_value(v22);
                logfmt_raw(v35, 0x1000u, 0, "core_little_core_num: %d\n", v23);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/topol/topol.c",
                  149,
                  "_parse_asic",
                  11,
                  533,
                  20,
                  v35);
                *(_DWORD *)(dword_119778 + 44) = json_integer_value(v22);
                v24 = (_DWORD *)json_object_get(v2, "asic_domain_num");
                v25 = (int)v24;
                if ( v24 && *v24 == 3 )
                {
                  V_LOCK();
                  v26 = json_integer_value(v25);
                  logfmt_raw(v35, 0x1000u, 0, "asic_domain_num : %d\n", v26);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/topol/topol.c",
                    149,
                    "_parse_asic",
                    11,
                    542,
                    20,
                    v35);
                  *(_DWORD *)(dword_119778 + 48) = json_integer_value(v25);
                  v27 = (_DWORD *)json_object_get(v2, "asic_addr_interval");
                  v28 = (int)v27;
                  if ( v27 && *v27 == 3 )
                  {
                    V_LOCK();
                    v29 = json_integer_value(v28);
                    logfmt_raw(v35, 0x1000u, 0, "asic_addr_interval : %d\n", v29);
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/topol/topol.c",
                      149,
                      "_parse_asic",
                      11,
                      551,
                      20,
                      v35);
                    v30 = json_integer_value(v28);
                    v31 = 0;
                    *(_DWORD *)(dword_119778 + 52) = v30;
                    return v31;
                  }
                  V_LOCK();
                  logfmt_raw(v35, 0x1000u, 0, "get asic_addr_interval failed\n");
                  V_UNLOCK();
                  v33 = g_zc;
                  v34 = 548;
                }
                else
                {
                  V_LOCK();
                  logfmt_raw(v35, 0x1000u, 0, "get asic_domain_num failed\n");
                  V_UNLOCK();
                  v33 = g_zc;
                  v34 = 539;
                }
              }
              else
              {
                V_LOCK();
                logfmt_raw(v35, 0x1000u, 0, "get core_little_core_num failed\n");
                V_UNLOCK();
                v33 = g_zc;
                v34 = 530;
              }
            }
            else
            {
              V_LOCK();
              logfmt_raw(v35, 0x1000u, 0, "get asic_little_core_num failed\n");
              V_UNLOCK();
              v33 = g_zc;
              v34 = 521;
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v35, 0x1000u, 0, "get asic_big_core_num failed\n");
            V_UNLOCK();
            v33 = g_zc;
            v34 = 512;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v35, 0x1000u, 0, "get cycle_cnt failed\n");
          V_UNLOCK();
          v33 = g_zc;
          v34 = 503;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v35, 0x1000u, 0, "get chip_type failed\n");
        V_UNLOCK();
        v33 = g_zc;
        v34 = 487;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, "get asic_id failed\n");
      V_UNLOCK();
      v33 = g_zc;
      v34 = 479;
    }
    zlog(
      v33,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_asic",
      11,
      v34,
      100,
      v35);
  }
  return -1;
}
