int check_fan_valiad()
{
  int v0; // r3
  char *v1; // r7
  int v2; // r3
  int v3; // r1
  unsigned int v4; // r6
  int fan_num; // r4
  unsigned int v6; // r8
  int v7; // r7
  int i; // r5
  int realtime_speed; // r9
  int v10; // r0
  int fan_max_speed; // r0
  unsigned int v12; // r5
  char *v13; // r9
  __int64 v14; // kr00_8
  int v15; // r11
  int v16; // r0
  int v17; // r10
  int v18; // r3
  int v19; // r1
  int j; // r5
  int v21; // r0
  int v22; // r3
  int v23; // r1
  int v24; // r3
  char *s; // [sp+5Ch] [bp-1058h]
  _DWORD v27[7]; // [sp+70h] [bp-1044h] BYREF
  int v28; // [sp+8Ch] [bp-1028h]
  _DWORD v29[8]; // [sp+90h] [bp-1024h] BYREF
  char v30[4100]; // [sp+B0h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    fan_init();
    fan_inited = 1;
  }
  green_led_off();
  red_led_off();
  fan_pwm_set_max();
  V_LOCK();
  LOWORD(v0) = 27732;
  HIWORD(v0) = (unsigned int)"root/tmp/release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
  LOWORD(v1) = 27908;
  logfmt_raw(v30, 0x1000u, 0, v0);
  V_UNLOCK();
  LOWORD(v2) = 27712;
  LOWORD(v3) = 27756;
  HIWORD(v2) = (unsigned int)"e/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
  HIWORD(v3) = (unsigned int)"odminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
  zlog(g_zc, v3, 150, v2, 16, 31, 60, v30);
  HIWORD(v1) = (unsigned int)"wer watchdog failed!" >> 16;
  v4 = 0;
  s = v1;
  fan_num = platform_get_fan_num();
  while ( 1 )
  {
    v6 = ++v4 % 0x14;
    if ( fan_num <= 0 )
    {
      usleep((__useconds_t)&loc_7A120);
      if ( v6 )
      {
        v7 = 0;
        goto LABEL_22;
      }
      v7 = 0;
LABEL_24:
      fan_pwm_set_max();
      goto LABEL_11;
    }
    v7 = 0;
    for ( i = 0; i != fan_num; ++i )
    {
      realtime_speed = fan_get_realtime_speed(i);
      v10 = i;
      if ( realtime_speed != -1 )
      {
        fan_max_speed = platform_get_fan_max_speed(v10);
        if ( fan_get_check_fan_speed(fan_max_speed) <= realtime_speed )
          ++v7;
      }
    }
    usleep((__useconds_t)&loc_7A120);
    if ( !v6 )
      goto LABEL_24;
LABEL_11:
    if ( fan_num <= v7 )
      break;
    v12 = v4 % 0x78;
    if ( v4 == 120 * (v4 / 0x78) )
    {
      LOWORD(v13) = 27916;
      red_led_on();
      v14 = 0;
      do
      {
        v15 = fan_get_realtime_speed(v12);
        if ( v15 == -1 || (v16 = platform_get_fan_max_speed(v12), fan_get_check_fan_speed(v16) > v15) )
        {
          V_LOCK();
          V_INT((int)v27, s, v14);
          HIWORD(v13) = (unsigned int)"hdog failed!" >> 16;
          V_INT((int)v29, v13, v15 & ~(v15 >> 31));
          LOWORD(v17) = 27928;
          HIWORD(v17) = (unsigned int)"" >> 16;
          logfmt_raw(
            v30,
            0x1000u,
            0,
            v28,
            v27[0],
            v27[1],
            v27[2],
            v27[3],
            v27[4],
            v27[5],
            v27[6],
            v28,
            v29[0],
            v29[1],
            v29[2],
            v29[3],
            v29[4],
            v29[5],
            v29[6],
            v29[7],
            v17,
            v12,
            (&fan_name)[v12]);
          V_UNLOCK();
          LOWORD(v18) = 27712;
          LOWORD(v19) = 27756;
          HIWORD(v19) = (unsigned int)"odminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
          HIWORD(v18) = (unsigned int)"e/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
          zlog(g_zc, v19, 150, v18, 16, 52, 100, v30);
          set_miner_6060info_status_fan_err(v12, 1);
        }
        ++v12;
        ++v14;
      }
      while ( fan_num != v12 );
    }
  }
  if ( fan_num > 0 )
  {
    for ( j = 0; j != fan_num; ++j )
    {
      v21 = j;
      set_miner_6060info_status_fan_err(v21, 0);
    }
  }
LABEL_22:
  V_LOCK();
  LOWORD(v22) = 27980;
  HIWORD(v22) = (unsigned int)">> chain avg vol %s from %d to %.2f, pls check <<" >> 16;
  logfmt_raw(v30, 0x1000u, 0, v22, v7);
  V_UNLOCK();
  LOWORD(v23) = 27756;
  LOWORD(v24) = 27712;
  HIWORD(v24) = (unsigned int)"e/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
  HIWORD(v23) = (unsigned int)"odminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
  return zlog(g_zc, v23, 150, v24, 16, 61, 60, v30);
}
