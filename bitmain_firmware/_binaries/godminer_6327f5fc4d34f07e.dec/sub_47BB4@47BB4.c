int __fastcall sub_47BB4(_DWORD *a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r7
  _DWORD *v3; // r0
  _DWORD *v4; // r10
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  int v7; // r10
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r10
  int v11; // r0
  int v12; // r0
  int v13; // r3
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r7
  _DWORD *v18; // r0
  int v19; // r6
  int v20; // r0
  int v21; // r0
  int v22; // r6
  _DWORD *v23; // r6
  _DWORD *v24; // r0
  _DWORD *v25; // r9
  _DWORD *v26; // r0
  const char *v27; // r8
  int v28; // r0
  _DWORD *v29; // r0
  int v30; // r8
  int v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r8
  int v34; // r11
  _DWORD *v35; // r0
  char **v36; // r9
  const char *v37; // r0
  const char *v38; // r1
  const char *v39; // r10
  const char *v40; // t1
  int v41; // r8
  _DWORD *v42; // r0
  _DWORD *v43; // r9
  _DWORD *v44; // r0
  const char **v45; // r7
  const char *v46; // r0
  const char *v47; // r1
  const char *v48; // r9
  const char *v49; // t1
  int v50; // r0
  int v51; // r2
  int v52; // r0
  int v53; // r2
  unsigned int i; // [sp+14h] [bp-1018h]
  _DWORD *v55; // [sp+18h] [bp-1014h]
  char v56[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = (_DWORD *)json_object_get(a1, "pic");
  v2 = v1;
  if ( !v1 || *v1 )
  {
    V_LOCK();
    logfmt_raw(v56, 0x1000u, 0, "get pic failed\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_pic",
      16,
      713,
      100,
      v56);
    return -1;
  }
  V_LOCK();
  logfmt_raw(v56, 0x1000u, 0, "pic:\n");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_pic",
    16,
    716,
    20,
    v56);
  v3 = (_DWORD *)json_object_get(v2, "type");
  v4 = v3;
  if ( !v3 || *v3 != 2 )
  {
    V_LOCK();
    logfmt_raw(v56, 0x1000u, 0, "get type failed\n");
    V_UNLOCK();
    v50 = g_zc;
    v51 = 721;
LABEL_39:
    zlog(
      v50,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_pic",
      16,
      v51,
      100,
      v56);
    return -1;
  }
  V_LOCK();
  v5 = json_string_value(v4);
  logfmt_raw(v56, 0x1000u, 0, "type: %s\n", v5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_pic",
    16,
    724,
    20,
    v56);
  v6 = (_DWORD *)json_object_get(v2, "i2c_addr");
  v7 = (int)v6;
  if ( !v6 || *v6 != 3 )
  {
    V_LOCK();
    logfmt_raw(v56, 0x1000u, 0, "get i2c_addr failed\n");
    V_UNLOCK();
    v50 = g_zc;
    v51 = 729;
    goto LABEL_39;
  }
  V_LOCK();
  v8 = json_integer_value(v7);
  logfmt_raw(v56, 0x1000u, 0, "i2c_addr: %d\n", v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_pic",
    16,
    732,
    20,
    v56);
  v9 = (_DWORD *)json_object_get(v2, "device_high");
  v10 = (int)v9;
  if ( !v9 || *v9 != 3 )
  {
    V_LOCK();
    logfmt_raw(v56, 0x1000u, 0, "get device_high failed\n");
    V_UNLOCK();
    v50 = g_zc;
    v51 = 737;
    goto LABEL_39;
  }
  V_LOCK();
  v11 = json_integer_value(v10);
  logfmt_raw(v56, 0x1000u, 0, "device_high: %d\n", v11);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_pic",
    16,
    740,
    20,
    v56);
  v12 = json_integer_value(v10);
  v13 = *(_DWORD *)(dword_119778 + 88);
  *(_DWORD *)(dword_119778 + 64) = v12;
  if ( (unsigned int)(v13 - 1) > 1 )
    return 0;
  v15 = (_DWORD *)json_object_get(v2, "pic_sensor");
  v55 = v15;
  if ( v15 && *v15 == 1 )
  {
    V_LOCK();
    logfmt_raw(v56, 0x1000u, 0, "pic sensor:\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_pic_sensor",
      23,
      568,
      20,
      v56);
    for ( i = 0; i < (unsigned int)json_array_size(v55); ++i )
    {
      v16 = json_array_get(v55, i);
      v17 = v16;
      if ( !v16 || *v16 )
      {
        V_LOCK();
        logfmt_raw(v56, 0x1000u, 0, "get array %d failed\n", i);
        V_UNLOCK();
        v52 = g_zc;
        v53 = 575;
        goto LABEL_45;
      }
      v18 = (_DWORD *)json_object_get(v16, "index");
      v19 = (int)v18;
      if ( !v18 || *v18 != 3 )
      {
        V_LOCK();
        logfmt_raw(v56, 0x1000u, 0, "get array %d index failed\n", i);
        V_UNLOCK();
        v52 = g_zc;
        v53 = 582;
        goto LABEL_45;
      }
      V_LOCK();
      v20 = json_integer_value(v19);
      logfmt_raw(v56, 0x1000u, 0, "index: %d\n", v20);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        585,
        20,
        v56);
      v21 = json_integer_value(v19);
      v22 = *(_DWORD *)(dword_119778 + 84);
      *(_DWORD *)(v22 + 24 * v21) = v21;
      v23 = (_DWORD *)(v22 + 24 * v21);
      v23[2] = 0;
      v24 = (_DWORD *)json_object_get(v17, "type");
      v25 = v24;
      if ( !v24 || *v24 != 2 )
      {
        V_LOCK();
        logfmt_raw(v56, 0x1000u, 0, "get array %d type failed\n", i);
        V_UNLOCK();
        v52 = g_zc;
        v53 = 594;
        goto LABEL_45;
      }
      V_LOCK();
      v26 = json_string_value(v25);
      logfmt_raw(v56, 0x1000u, 0, "type: %s\n", v26);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        597,
        20,
        v56);
      v27 = (const char *)json_string_value(v25);
      v28 = strcmp(v27, "TMP451");
      if ( v28 )
      {
        if ( !strcmp(v27, "LM75A") )
          v28 = 1;
        else
          v28 = 2;
      }
      v23[1] = v28;
      v29 = (_DWORD *)json_object_get(v17, "iic");
      v30 = (int)v29;
      if ( !v29 || *v29 != 3 )
      {
        V_LOCK();
        logfmt_raw(v56, 0x1000u, 0, "get array %d bind_asic failed\n", i);
        V_UNLOCK();
        v52 = g_zc;
        v53 = 603;
        goto LABEL_45;
      }
      V_LOCK();
      v31 = json_integer_value(v30);
      logfmt_raw(v56, 0x1000u, 0, "iic: %d\n", v31);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        606,
        20,
        v56);
      v23[5] = json_integer_value(v30);
      v32 = (_DWORD *)json_object_get(v17, "x");
      v33 = v32;
      if ( !v32 || *v32 != 2 )
      {
        V_LOCK();
        logfmt_raw(v56, 0x1000u, 0, "get array %d x failed\n", i);
        V_UNLOCK();
        v52 = g_zc;
        v53 = 612;
        goto LABEL_45;
      }
      V_LOCK();
      v34 = 0;
      v35 = json_string_value(v33);
      logfmt_raw(v56, 0x1000u, 0, "x: %s\n", v35);
      V_UNLOCK();
      v36 = off_E4E38;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        615,
        20,
        v56);
      v37 = (const char *)json_string_value(v33);
      v38 = "air_in";
      v39 = v37;
      while ( strcmp(v39, v38) )
      {
        v40 = *v36++;
        v38 = v40;
        ++v34;
      }
      v41 = 0;
      v23[3] = v34;
      v42 = (_DWORD *)json_object_get(v17, "y");
      v43 = v42;
      if ( !v42 || *v42 != 2 )
      {
        V_LOCK();
        logfmt_raw(v56, 0x1000u, 0, "get array %d y failed\n", i);
        V_UNLOCK();
        v52 = g_zc;
        v53 = 621;
        goto LABEL_45;
      }
      V_LOCK();
      v44 = json_string_value(v43);
      logfmt_raw(v56, 0x1000u, 0, "y: %s\n", v44);
      V_UNLOCK();
      v45 = (const char **)&unk_E4E58;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        624,
        20,
        v56);
      v46 = (const char *)json_string_value(v43);
      v47 = "top";
      v48 = v46;
      while ( strcmp(v48, v47) )
      {
        v49 = *v45++;
        v47 = v49;
        ++v41;
      }
      v23[4] = v41;
    }
    return 0;
  }
  V_LOCK();
  logfmt_raw(v56, 0x1000u, 0, "get pic sensor failed\n");
  V_UNLOCK();
  v52 = g_zc;
  v53 = 565;
LABEL_45:
  zlog(
    v52,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_pic_sensor",
    23,
    v53,
    100,
    v56);
  return -1;
}
