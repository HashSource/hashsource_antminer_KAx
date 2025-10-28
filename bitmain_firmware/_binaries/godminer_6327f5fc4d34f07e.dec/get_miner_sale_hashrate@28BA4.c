unsigned int get_miner_sale_hashrate()
{
  int v0; // r4
  char *all_created_runtime; // r0
  double v2; // d8
  char *v3; // r5
  int v4; // r6
  int v5; // t1
  int v6; // r0
  unsigned int v7; // r4
  int v9; // [sp+0h] [bp-28h] BYREF
  unsigned int v10; // [sp+4h] [bp-24h]
  double v11[2]; // [sp+8h] [bp-20h] BYREF
  char v12[12]; // [sp+1Ch] [bp-Ch] BYREF

  v0 = 0;
  v9 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v9);
  v2 = 0.0;
  v10 = 1;
  v11[0] = 0.0;
  if ( v9 > 0 )
  {
    v3 = all_created_runtime - 4;
    v4 = 0;
    do
    {
      v5 = *((_DWORD *)v3 + 1);
      v3 += 4;
      ++v0;
      v4 |= (*(int (**)(void))(v5 + 124))();
      v2 = v2 + v11[1];
    }
    while ( v9 > v0 );
    if ( v4 )
    {
      freq_scan_status = 2;
      strcpy((char *)search_failed_info, "R:1");
    }
  }
  v6 = frontend_runtime_instance();
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v6 + 68) + 12), v11, v12);
  v7 = v10;
  return sub_DCEB0((int)v11[0], v10) * v7;
}
