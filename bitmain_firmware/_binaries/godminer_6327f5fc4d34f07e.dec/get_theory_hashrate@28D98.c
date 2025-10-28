int get_theory_hashrate()
{
  int v0; // r4
  char *all_created_runtime; // r0
  double v2; // d8
  char *v3; // r5
  int v4; // r6
  int v5; // t1
  int v6; // r0
  int v8; // r0
  int v9; // [sp+4h] [bp-2Ch]
  int v10; // [sp+Ch] [bp-24h] BYREF
  double v11[2]; // [sp+10h] [bp-20h] BYREF
  char v12[12]; // [sp+24h] [bp-Ch] BYREF

  v0 = 0;
  v10 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v10);
  v2 = 0.0;
  v11[0] = 0.0;
  if ( v10 <= 0 )
  {
    v8 = frontend_runtime_instance();
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v8 + 68) + 12), v11, v12);
LABEL_5:
    freq_scan_status = 1;
    return (int)v11[0];
  }
  v3 = all_created_runtime - 4;
  v4 = 0;
  do
  {
    v5 = *((_DWORD *)v3 + 1);
    v3 += 4;
    ++v0;
    v4 |= (*(int (**)(void))(v5 + 120))();
    v2 = v2 + v11[1];
  }
  while ( v10 > v0 );
  v6 = frontend_runtime_instance();
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v6 + 68) + 12), v11, v12);
  if ( !v4 )
    goto LABEL_5;
  freq_scan_status = 2;
  strcpy((char *)search_failed_info, "R:1");
  return v9;
}
