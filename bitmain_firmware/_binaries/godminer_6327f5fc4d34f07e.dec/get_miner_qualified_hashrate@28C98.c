unsigned int get_miner_qualified_hashrate()
{
  int v0; // r0
  double v1; // d0
  float v2; // s16
  double v3; // d9
  double v6; // [sp+0h] [bp-4Ch] BYREF
  char v7[12]; // [sp+Ch] [bp-40h] BYREF
  _BYTE v8[20]; // [sp+18h] [bp-34h] BYREF
  float v9; // [sp+2Ch] [bp-20h]
  double v10; // [sp+38h] [bp-14h]

  read_system_status_from_monitor((int)v8);
  v0 = frontend_runtime_instance();
  v1 = v10;
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v0 + 68) + 12), &v6, v7);
  v2 = v9;
  v3 = v6;
  get_miner_elapsed_time();
  if ( v1 < 1200.0 )
  {
    freq_scan_status = 0;
    return get_miner_sale_hashrate();
  }
  else
  {
    if ( (int)(v2 * v1) < (int)v3 && v1 > 1200.0 )
    {
      freq_scan_status = 2;
      strcpy((char *)search_failed_info, "R:1");
    }
    else
    {
      freq_scan_status = 1;
    }
    return get_miner_sale_hashrate();
  }
}
