int __fastcall update_fanspeed(int a1, _DWORD *a2, int a3)
{
  int v3; // r5
  __int64 v5; // kr00_8
  int realtime_speed; // r5
  char *v7; // r11
  int v8; // r1
  int v9; // r2
  int v10; // r3
  char *v11; // r9
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r3
  _DWORD *v18; // r11
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r0
  int v23; // r3
  int v24; // r2
  int v25; // r2
  int v26; // r5
  bool v27; // cc
  int v28; // r3
  int v29; // r7
  int v30; // r9
  int fan_max_speed; // r6
  int v32; // r3
  bool v33; // nf
  int result; // r0
  char v35; // [sp+20h] [bp-10ECh] BYREF
  char *v36; // [sp+40h] [bp-10CCh]
  const char *v37; // [sp+44h] [bp-10C8h]
  const char *v38; // [sp+48h] [bp-10C4h]
  char *v39; // [sp+4Ch] [bp-10C0h]
  char *s; // [sp+50h] [bp-10BCh]
  char *v41; // [sp+54h] [bp-10B8h]
  int fan_num; // [sp+58h] [bp-10B4h]
  int v43; // [sp+5Ch] [bp-10B0h]
  char *v44; // [sp+60h] [bp-10ACh]
  int *v45; // [sp+64h] [bp-10A8h]
  int v46; // [sp+68h] [bp-10A4h]
  int v47; // [sp+6Ch] [bp-10A0h]
  _DWORD *v48; // [sp+70h] [bp-109Ch]
  int v49; // [sp+74h] [bp-1098h]
  int v50; // [sp+78h] [bp-1094h]
  char *v51; // [sp+7Ch] [bp-1090h]
  int v52; // [sp+80h] [bp-108Ch]
  int v53; // [sp+84h] [bp-1088h]
  _DWORD v54[7]; // [sp+88h] [bp-1084h] BYREF
  int v55; // [sp+A4h] [bp-1068h]
  _DWORD v56[8]; // [sp+A8h] [bp-1064h] BYREF
  _DWORD v57[7]; // [sp+C8h] [bp-1044h] BYREF
  int v58; // [sp+E4h] [bp-1028h]
  _DWORD v59[8]; // [sp+E8h] [bp-1024h] BYREF
  char v60[4100]; // [sp+108h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 196);
  v49 = a3 + 32;
  if ( v3 )
    return v49;
  v50 = a3;
  v51 = &fan_inited;
  v53 = a1;
  if ( !fan_inited )
  {
    fan_init();
    *v51 = 1;
    fan_num = platform_get_fan_num();
    if ( fan_num > 0 )
      goto LABEL_4;
LABEL_26:
    v28 = *(_DWORD *)(v50 + 32);
    a2[23] = 0;
    goto LABEL_17;
  }
  fan_num = platform_get_fan_num();
  if ( fan_num <= 0 )
    goto LABEL_26;
LABEL_4:
  v38 = "update_fanspeed";
  v39 = "%s";
  v43 = 0;
  s = "fanid";
  v41 = "fanspeed";
  v44 = &v35;
  v52 = 0;
  v48 = a2;
  v45 = &g_fan_zc;
  v5 = 0;
  do
  {
    realtime_speed = fan_get_realtime_speed(v5);
    v46 = realtime_speed;
    v47 = realtime_speed >> 31;
    V_LOCK();
    V_INT((int)v54, s, v5);
    V_INT((int)v56, v41, realtime_speed);
    v7 = v44;
    v8 = v56[1];
    v9 = v56[2];
    v10 = v56[3];
    v11 = v44;
    v37 = v38;
    v36 = v39;
    *(_DWORD *)v44 = v56[0];
    *((_DWORD *)v11 + 1) = v8;
    *((_DWORD *)v11 + 2) = v9;
    *((_DWORD *)v11 + 3) = v10;
    v11 += 16;
    v12 = v56[5];
    v13 = v56[6];
    v14 = v56[7];
    *(_DWORD *)v11 = v56[4];
    *((_DWORD *)v11 + 1) = v12;
    *((_DWORD *)v11 + 2) = v13;
    *((_DWORD *)v11 + 3) = v14;
    logfmt_raw(v60, 0x1000u, 0, v55, v54[0], v54[1], v54[2], v54[3], v54[4], v54[5], v54[6], v55);
    V_UNLOCK();
    zlog(
      *v45,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
      190,
      "update_fanspeed",
      15,
      35,
      40,
      v60);
    if ( realtime_speed != -1 )
    {
      V_LOCK();
      V_INT((int)v57, s, v5);
      V_INT((int)v59, v41, realtime_speed);
      v15 = v59[1];
      v16 = v59[2];
      v17 = v59[3];
      v37 = v38;
      v36 = v39;
      *(_DWORD *)v7 = v59[0];
      *((_DWORD *)v7 + 1) = v15;
      *((_DWORD *)v7 + 2) = v16;
      *((_DWORD *)v7 + 3) = v17;
      v18 = v7 + 16;
      v19 = v59[5];
      v20 = v59[6];
      v21 = v59[7];
      *v18 = v59[4];
      v18[1] = v19;
      v18[2] = v20;
      v18[3] = v21;
      logfmt_raw(v60, 0x1000u, 0, v58, v57[0], v57[1], v57[2], v57[3], v57[4], v57[5], v57[6], v58);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
        190,
        "update_fanspeed",
        15,
        37,
        20,
        v60);
      v22 = v43;
      v23 = 4 * v43;
      v24 = v48[24];
      *(_DWORD *)(v48[25] + 4 * v43) = v5;
      *(_DWORD *)(v24 + v23) = realtime_speed;
      v43 = v22 + 1;
    }
    ++v5;
  }
  while ( fan_num > (int)v5 );
  v25 = v43;
  a2 = v48;
  v26 = v52;
  v27 = v43 < fan_num;
  v48[23] = v43;
  if ( !v27 || (v28 = *(_DWORD *)(v50 + 32) | 2, *(_DWORD *)(v50 + 32) = v28, v25) )
  {
    v29 = v50;
    do
    {
      while ( 1 )
      {
        v30 = *(_DWORD *)(a2[24] + 4 * v26);
        if ( v30 )
        {
          fan_max_speed = platform_get_fan_max_speed(v26);
          if ( v30 >= fan_pwm_get() * fan_max_speed / 150 )
            break;
        }
        ++v26;
        *(_DWORD *)(v29 + 32) |= 1u;
        if ( a2[23] <= v26 )
          goto LABEL_16;
      }
      ++v26;
    }
    while ( a2[23] > v26 );
LABEL_16:
    v28 = *(_DWORD *)(v50 + 32);
  }
LABEL_17:
  if ( (v28 & 3) == 0 )
  {
    result = v49;
    *((_DWORD *)v51 + 1) = 0;
    return result;
  }
  v32 = *((_DWORD *)v51 + 1) + 1;
  v33 = *((_DWORD *)v51 + 1) - 14 < 0;
  *((_DWORD *)v51 + 1) = v32;
  if ( v33 ^ __OFSUB__(v32, 15) | (v32 == 15) )
    return v49;
  V_LOCK();
  logfmt_raw(v60, 0x1000u, 0, "fan_error_num: %d fan_num %d", *((_DWORD *)v51 + 1), a2[23]);
  V_UNLOCK();
  if ( !*(_BYTE *)(v53 + 206) )
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
      190,
      "update_fanspeed",
      15,
      56,
      20,
      v60);
  result = v49;
  *(_DWORD *)(v50 + 32) |= 4u;
  return result;
}
