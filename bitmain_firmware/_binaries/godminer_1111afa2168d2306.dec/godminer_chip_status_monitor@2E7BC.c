int __fastcall godminer_chip_status_monitor(int a1)
{
  char *flag_from_monitor; // r4
  pthread_mutex_t *current_pool; // r0
  pthread_mutex_t *v4; // r5
  int result; // r0
  char *v6; // r1
  int v7; // r5
  int v8; // r3
  int v9; // r1
  _DWORD v10[7]; // [sp+28h] [bp-1020h] BYREF
  int v11; // [sp+44h] [bp-1004h]
  char v12[4096]; // [sp+48h] [bp-1000h] BYREF

  flag_from_monitor = get_flag_from_monitor(a1);
  current_pool = (pthread_mutex_t *)get_current_pool();
  v4 = current_pool;
  if ( (*((_DWORD *)flag_from_monitor + 12) & 2) != 0 )
  {
    if ( !pool_tget(current_pool, (unsigned __int8 *)&current_pool[79].__size[8]) )
      set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 256), 1);
    *((_DWORD *)flag_from_monitor + 14) |= 2u;
  }
  else
  {
    set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 256), 0);
  }
  if ( (*((_DWORD *)flag_from_monitor + 12) & 4) == 0 )
    return set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 256), 0);
  result = pool_tget(v4, (unsigned __int8 *)&v4[79].__size[8]);
  if ( !result )
  {
    V_LOCK();
    LOWORD(v6) = 27796;
    HIWORD(v6) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v10, v6, *(int *)(a1 + 256));
    LOWORD(v7) = 31452;
    HIWORD(v7) = (unsigned int)"received, exiting" >> 16;
    logfmt_raw(v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v7);
    V_UNLOCK();
    LOWORD(v8) = 29668;
    LOWORD(v9) = 31476;
    HIWORD(v8) = (unsigned int)"                 ckb_2042         eaglesong\n                          kda_2110         blake2s\n                          dcr_1727         blaker14\n                          hns_2130         blake2s\n                          dash_1766        x11\n  -o, --url=URL         URL of mining server\n  -u, --user=USERNAME   username for mining server\n  -p, --pass=PASSWORD   password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
    HIWORD(v9) = (unsigned int)"SR1 received, reload log" >> 16;
    zlog(g_zc, v9, 139, v8, 28, 515, 20, v12);
    result = set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 256), 1);
  }
  *((_DWORD *)flag_from_monitor + 14) |= 4u;
  return result;
}
