int __fastcall judge_load_config(char *a1)
{
  int v2; // r3
  int v3; // r1
  unsigned int *file; // r0
  unsigned int *v5; // r6
  unsigned int v6; // r7
  int v7; // r3
  int v8; // r8
  int v9; // r0
  int v10; // r12
  int v11; // r2
  int v12; // r1
  int v14; // r3
  int v15; // r1
  char *v16; // r1
  _DWORD *v17; // r0
  _DWORD *v18; // r10
  char *v19; // r1
  char *v20; // r1
  _DWORD *v21; // r0
  char *v22; // r1
  _DWORD *v23; // r0
  unsigned int *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r2
  int v27; // r3
  int v28; // r3
  int v29; // r1
  const char *v30; // r0
  int v31; // r0
  char *v32; // r9
  _DWORD *v33; // r0
  char *v34; // r3
  char *v35; // r2
  char *v36; // r1
  _DWORD *v37; // r0
  _DWORD *v38; // r8
  unsigned int v39; // r6
  int v40; // r6
  _DWORD *v41; // r0
  _DWORD *v42; // r0
  _DWORD *v43; // r0
  _DWORD *v44; // r0
  char *v45; // r1
  _DWORD *v46; // r0
  _DWORD *v47; // r0
  int v48; // r3
  const char *v49; // r11
  int v50; // r9
  int v51; // r8
  int v52; // r10
  int v53; // r0
  const char *v54; // r1
  int v55; // r7
  int v56; // t1
  char *v57; // [sp+4h] [bp-1130h]
  char *format; // [sp+10h] [bp-1124h]
  char *v59; // [sp+18h] [bp-111Ch]
  char *v60; // [sp+20h] [bp-1114h]
  unsigned int *v61; // [sp+28h] [bp-110Ch]
  char v62[92]; // [sp+34h] [bp-1100h] BYREF
  char v63[160]; // [sp+90h] [bp-10A4h] BYREF
  char v64[4100]; // [sp+130h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = -29520;
  HIWORD(v2) = (unsigned int)"enkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/stratum_handler.c" >> 16;
  logfmt_raw(v64, 0x1000u, 0, v2, "judge_load_config");
  V_UNLOCK();
  LOWORD(v3) = -30544;
  HIWORD(v3) = (unsigned int)" pool %d" >> 16;
  zlog(g_zc, v3, 134, "judge_load_config", 17, 657, 20, v64);
  if ( a1 )
  {
    file = (unsigned int *)json_load_file(a1, 0, v62);
    v5 = file;
    if ( !file || (v6 = *file) != 0 )
    {
      V_LOCK();
      LOWORD(v7) = -29492;
      HIWORD(v7) = (unsigned int)"3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/stratum_handler.c" >> 16;
      v57 = a1;
      v8 = 0;
      logfmt_raw(v64, 0x1000u, 0, v7, "judge_load_config", v57, v63);
      V_UNLOCK();
      v9 = g_zc;
      v10 = 100;
      v11 = 672;
LABEL_5:
      LOWORD(v12) = -30544;
      HIWORD(v12) = (unsigned int)" pool %d" >> 16;
      zlog(v9, v12, 134, "judge_load_config", 17, v11, v10, v64);
      return v8;
    }
    V_LOCK();
    LOWORD(v14) = -29452;
    HIWORD(v14) = (unsigned int)"ease/build/godminer-origin_godminer-new/stratum_handler.c" >> 16;
    logfmt_raw(v64, 0x1000u, 0, v14, "judge_load_config");
    V_UNLOCK();
    LOWORD(v15) = -30544;
    HIWORD(v15) = (unsigned int)" pool %d" >> 16;
    zlog(g_zc, v15, 134, "judge_load_config", 17, 675, 20, v64);
    LOWORD(v16) = -29848;
    HIWORD(v16) = (unsigned int)"JSON decode of file '%s' failed %s" >> 16;
    v17 = (_DWORD *)json_object_get(v5, v16);
    v18 = v17;
    if ( !v17 || *v17 != 1 )
      goto LABEL_8;
    v32 = (char *)&unk_195BA0;
    v33 = json_array_size(v17);
    LOWORD(v34) = 26924;
    LOWORD(v35) = -27176;
    LOWORD(v36) = -28300;
    HIWORD(v34) = (unsigned int)"chain_acn%d" >> 16;
    HIWORD(v35) = (unsigned int)"d" >> 16;
    HIWORD(v36) = (unsigned int)"ng" >> 16;
    dword_195B9C = (int)v33;
    v59 = v34;
    format = v35;
    v60 = v36;
    v61 = v5;
    while ( (unsigned int)json_array_size(v18) > v6 )
    {
      v37 = json_array_get(v18, v6);
      v38 = v37;
      if ( !v37 )
        break;
      v39 = __clz(v6 - 3);
      ++v6;
      v40 = v39 >> 5;
      if ( *v37 )
        v40 = 1;
      if ( v40 )
        break;
      v41 = (_DWORD *)json_object_get(v37, v59);
      if ( !v41 )
        break;
      if ( *v41 != 2 )
        break;
      v42 = json_string_value(v41);
      snprintf(v32, 0x100u, format, v42);
      v43 = (_DWORD *)json_object_get(v38, v60);
      if ( !v43 )
        break;
      if ( *v43 != 2 )
        break;
      v44 = json_string_value(v43);
      snprintf(v32 + 256, 0x100u, format, v44);
      LOWORD(v45) = -32440;
      HIWORD(v45) = (unsigned int)"dded=%d;" >> 16;
      v46 = (_DWORD *)json_object_get(v38, v45);
      if ( !v46 || *v46 != 2 )
        break;
      v47 = json_string_value(v46);
      snprintf(v32 + 512, 0x100u, format, v47);
      V_LOCK();
      LOWORD(v48) = -29424;
      HIWORD(v48) = (unsigned int)"odminer-new/stratum_handler.c" >> 16;
      logfmt_raw(v64, 0x1000u, 0, v48, v32, v32 + 256, v32 + 512);
      V_UNLOCK();
      v32 += 768;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "judge_load_config",
        17,
        699,
        20,
        v64);
    }
    v5 = v61;
    v49 = (const char *)&unk_195BA0;
    v50 = total_pools;
    if ( total_pools == dword_195B9C )
    {
      if ( total_pools <= 0 )
      {
LABEL_8:
        v8 = 0;
        goto LABEL_9;
      }
      v51 = 0;
      v52 = pools - 4;
      while ( 1 )
      {
        v56 = *(_DWORD *)(v52 + 4);
        v52 += 4;
        v55 = v56;
        ++v51;
        if ( strcmp(*(const char **)(v56 + 12), v49) )
          break;
        v53 = strcmp(*(const char **)(v55 + 16), v49 + 256);
        v54 = v49 + 512;
        v49 += 768;
        if ( v53 || strcmp(*(const char **)(v55 + 20), v54) )
          break;
        if ( v50 == v51 )
          goto LABEL_8;
      }
    }
    v8 = 1;
LABEL_9:
    LOWORD(v19) = -32332;
    HIWORD(v19) = (unsigned int)"/rate" >> 16;
    json_object_get(v5, v19);
    LOWORD(v20) = -32388;
    HIWORD(v20) = (unsigned int)"%d;" >> 16;
    v21 = (_DWORD *)json_object_get(v5, v20);
    if ( v21 && (unsigned int)(*v21 - 5) <= 1 && fan_pwm_fixed != (*v21 == 5) )
    {
      v8 |= 4u;
      fan_pwm_fixed = *v21 == 5;
    }
    LOWORD(v22) = -32368;
    HIWORD(v22) = (unsigned int)"version=%s;" >> 16;
    v23 = (_DWORD *)json_object_get(v5, v22);
    if ( v23 )
    {
      if ( *v23 == 2 )
      {
        v30 = (const char *)json_string_value(v23);
        v31 = strtol(v30, 0, 10);
        if ( fan_pwm != v31 )
        {
          v8 |= 8u;
          fan_pwm = v31;
        }
      }
    }
    if ( v5[1] != -1 )
    {
      v24 = v5 + 1;
      __dmb(0xBu);
      do
      {
        v25 = __ldrex(v24);
        v26 = v25 - 1;
      }
      while ( __strex(v26, v24) );
      if ( !v26 )
        json_delete(v5);
    }
    V_LOCK();
    LOWORD(v27) = -29412;
    HIWORD(v27) = (unsigned int)"stratum_handler.c" >> 16;
    logfmt_raw(v64, 0x1000u, 0, v27, v8);
    V_UNLOCK();
    v9 = g_zc;
    v10 = 20;
    v11 = 758;
    goto LABEL_5;
  }
  V_LOCK();
  LOWORD(v28) = -29508;
  HIWORD(v28) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/stratum_handler.c" >> 16;
  logfmt_raw(v64, 0x1000u, 0, v28, "judge_load_config");
  V_UNLOCK();
  LOWORD(v29) = -30544;
  HIWORD(v29) = (unsigned int)" pool %d" >> 16;
  zlog(g_zc, v29, 134, "judge_load_config", 17, 666, 100, v64);
  return 0;
}
