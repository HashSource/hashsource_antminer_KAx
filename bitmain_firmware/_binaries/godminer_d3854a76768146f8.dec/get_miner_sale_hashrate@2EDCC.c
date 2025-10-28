int get_miner_sale_hashrate()
{
  double v0; // d0
  int v1; // r4
  char *all_created_runtime; // r5
  double v3; // d9
  double v4; // d8
  int v5; // r6
  char *v6; // r5
  int v7; // t1
  int *v8; // r6
  char *v9; // r4
  char *v10; // r3
  int v12; // r0
  const char *v13; // r2
  int v14; // r0
  unsigned int v15; // r4
  int result; // r0
  int *v17; // r1
  int v18; // r0
  int *v19; // r1
  int v20; // r0
  int *v21; // r1
  int v22; // r0
  int v23; // [sp+0h] [bp-58h] BYREF
  unsigned int v24; // [sp+4h] [bp-54h]
  double v25[2]; // [sp+8h] [bp-50h] BYREF
  char v26[12]; // [sp+18h] [bp-40h] BYREF
  _WORD v27[8]; // [sp+24h] [bp-34h] BYREF
  char v28; // [sp+35h] [bp-23h]
  char v29; // [sp+46h] [bp-12h] BYREF
  _BYTE v30[2]; // [sp+56h] [bp-2h] BYREF

  v1 = 0;
  v23 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v23);
  v24 = 1;
  get_miner_elapsed_time();
  v3 = v0;
  get_miner_6060info_status(v27);
  v4 = 0.0;
  v25[0] = 0.0;
  if ( v23 > 0 )
  {
    v6 = all_created_runtime - 4;
    v5 = 0;
    do
    {
      v7 = *((_DWORD *)v6 + 1);
      v6 += 4;
      ++v1;
      v5 |= (*(int (**)(void))(v7 + 136))();
      v4 = v4 + v25[1];
    }
    while ( v23 > v1 );
  }
  else
  {
    v5 = 0;
  }
  if ( (unsigned int)(opt_algo - 6) <= 1 )
    v3 = v0 - 2700.0;
  if ( v3 < 1.0 )
  {
    result = 0;
    freq_scan_status = 0;
    return result;
  }
  if ( !v5 )
  {
    if ( !LOBYTE(v27[0]) )
      goto LABEL_10;
LABEL_40:
    LOWORD(v19) = 6676;
    HIWORD(v19) = (unsigned int)"te" >> 16;
    v20 = *v19;
    freq_scan_status = 2;
    search_failed_info[0] = v20;
    if ( !v28 )
      goto LABEL_11;
    goto LABEL_39;
  }
  LOWORD(v21) = 6672;
  HIWORD(v21) = (unsigned int)"x rate" >> 16;
  v22 = *v21;
  freq_scan_status = 2;
  search_failed_info[0] = v22;
  if ( LOBYTE(v27[0]) )
    goto LABEL_40;
LABEL_10:
  if ( v28 )
  {
LABEL_39:
    LOWORD(v17) = 4780;
    HIWORD(v17) = (unsigned int)"submit_upstream_work stratum_send_line failed %d count %d" >> 16;
    v18 = *v17;
    freq_scan_status = 2;
    search_failed_info[0] = v18;
  }
LABEL_11:
  LOWORD(v8) = 6672;
  v9 = &v29;
  do
  {
    while ( 1 )
    {
      v10 = &v9[-34 - (_DWORD)v27];
      if ( *v9++ )
        break;
      if ( v30 == v9 )
        goto LABEL_15;
    }
    HIWORD(v8) = (unsigned int)"x rate" >> 16;
    v12 = *v8;
    LOWORD(v13) = 6680;
    HIWORD(v13) = (unsigned int)"/miner_status" >> 16;
    freq_scan_status = 2;
    search_failed_info[0] = v12;
    snprintf((char *)search_failed_info, 0x100u, v13, v10);
  }
  while ( v30 != v9 );
LABEL_15:
  v14 = frontend_runtime_instance();
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v14 + 72) + 16), v25, v26);
  v15 = v24;
  result = sub_12EA10((int)v25[0], v24) * v15;
  switch ( opt_algo )
  {
    case 6:
      result -= 50;
      if ( result > 3729 )
        return 3780;
LABEL_26:
      if ( (unsigned int)(result - 3630) <= 0x63 )
        return 3680;
      if ( (unsigned int)(result - 3530) <= 0x63 )
        return 3580;
      if ( (unsigned int)(result - 3430) <= 0x63 )
        return 3480;
      if ( (unsigned int)(result - 3330) <= 0x63 )
        return 3380;
      if ( (unsigned int)(result - 3230) <= 0x63 )
        return 3280;
      if ( (unsigned int)(result - 3130) <= 0x63 )
        return 3180;
      return sub_12EA10(result, v15) * v15;
    case 7:
      result = sub_12EA10(result, v15) * v15 - 50;
      if ( result > 3729 )
        return 3780;
      goto LABEL_26;
    case 9:
      if ( result >= 860 )
        return 860;
      if ( (unsigned int)(result - 840) <= 0x13 )
        return 840;
      if ( (unsigned int)(result - 820) <= 0x13 )
        return 820;
      if ( (unsigned int)(result - 800) <= 0x13 )
        return 800;
      if ( (unsigned int)(result - 780) <= 0x13 )
        return 780;
      return sub_12EA10(result, v15) * v15;
    case 1:
      if ( result > 65999 )
        return (int)&elf_hash_bucket[5];
      if ( (unsigned int)(result - 63500) <= 0x9C3 )
        return 63500;
      if ( (unsigned int)(result - 60500) <= 0xBB7 )
        return 60500;
      if ( (unsigned int)(result - 58000) <= 0x9C3 )
        return 58000;
      return sub_12EA10(result, v15) * v15;
    case 2:
      if ( result > 172999 )
        return (int)&loc_2A3C8;
      if ( (unsigned int)(result - 166000) <= 0x1B57 )
        return (int)&loc_28870;
      return sub_12EA10(result, v15) * v15;
    case 5:
      if ( result <= 1859 )
      {
        if ( (unsigned int)(result - 1770) <= 0x59 )
          return 1770;
        return sub_12EA10(result, v15) * v15;
      }
      return 1860;
  }
  return result;
}
