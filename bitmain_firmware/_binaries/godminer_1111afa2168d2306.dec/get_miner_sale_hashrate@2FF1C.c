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
  _BYTE *v8; // r5
  int *v9; // r8
  _BYTE *v10; // r6
  int i; // r4
  int v12; // r3
  int v13; // r0
  const char *v14; // r2
  int v15; // r3
  int *v16; // r6
  int j; // r4
  int v18; // r3
  const char *v19; // r2
  int v20; // r3
  int v21; // r0
  unsigned int v22; // r4
  int result; // r0
  int *v24; // r1
  int v25; // r0
  int *v26; // r1
  int v27; // r0
  int v28; // [sp+0h] [bp-218h] BYREF
  unsigned int v29; // [sp+4h] [bp-214h]
  double v30[2]; // [sp+8h] [bp-210h] BYREF
  char v31[12]; // [sp+1Ch] [bp-1FCh] BYREF
  _BYTE v32[496]; // [sp+28h] [bp-1F0h] BYREF

  v1 = 0;
  v28 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v28);
  v29 = 1;
  get_miner_elapsed_time();
  v3 = v0;
  get_miner_6060info_status(v32);
  v4 = 0.0;
  v30[0] = 0.0;
  if ( v28 > 0 )
  {
    v6 = all_created_runtime - 4;
    v5 = 0;
    do
    {
      v7 = *((_DWORD *)v6 + 1);
      v6 += 4;
      ++v1;
      v5 |= (*(int (**)(void))(v7 + 140))();
      v4 = v4 + v30[1];
    }
    while ( v28 > v1 );
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
  if ( v5 )
  {
    LOWORD(v26) = -31996;
    HIWORD(v26) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
    v27 = *v26;
    freq_scan_status = 2;
    search_failed_info[0] = v27;
    if ( !v32[0] )
      goto LABEL_10;
    goto LABEL_42;
  }
  if ( v32[0] )
  {
LABEL_42:
    LOWORD(v24) = -31992;
    HIWORD(v24) = (unsigned int)"enkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
    v25 = *v24;
    freq_scan_status = 2;
    search_failed_info[0] = v25;
  }
LABEL_10:
  v8 = v32;
  LOWORD(v9) = -31996;
  v10 = v32;
  for ( i = 0; i != 8; ++i )
  {
    while ( 1 )
    {
      v12 = (unsigned __int8)v10[24];
      v10 += 8;
      if ( v12 )
        break;
      if ( ++i == 8 )
        goto LABEL_14;
    }
    HIWORD(v9) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
    v13 = *v9;
    LOWORD(v14) = -31988;
    v15 = i;
    freq_scan_status = 2;
    HIWORD(v14) = (unsigned int)"ns/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
    search_failed_info[0] = v13;
    snprintf((char *)search_failed_info, 0x100u, v14, v15);
  }
LABEL_14:
  LOWORD(v16) = -31996;
  for ( j = 0; j != 16; ++j )
  {
    while ( 1 )
    {
      v18 = (unsigned __int8)v8[216];
      v8 += 8;
      if ( v18 )
        break;
      if ( ++j == 16 )
        goto LABEL_18;
    }
    LOWORD(v19) = -31980;
    v20 = j;
    HIWORD(v19) = (unsigned int)"ns/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
    HIWORD(v16) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
    search_failed_info[0] = *v16;
    freq_scan_status = 2;
    snprintf((char *)search_failed_info, 0x100u, v19, v20);
  }
LABEL_18:
  v21 = frontend_runtime_instance();
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v21 + 72) + 16), v30, v31);
  v22 = v29;
  result = sub_145388((int)v30[0], v29) * v22;
  switch ( opt_algo )
  {
    case 6:
      result -= 50;
      if ( result > 3729 )
        return 3780;
LABEL_29:
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
      return sub_145388(result, v22) * v22;
    case 7:
      result = sub_145388(result, v22) * v22 - 50;
      if ( result > 3729 )
        return 3780;
      goto LABEL_29;
    case 9:
      if ( result < 860 )
      {
        if ( (unsigned int)(result - 840) > 0x13 )
        {
          if ( (unsigned int)(result - 820) > 0x13 )
          {
            if ( (unsigned int)(result - 800) > 0x13 )
            {
              if ( (unsigned int)(result - 780) > 0x13 )
              {
                if ( (unsigned int)(result - 350) > 0x1AD )
                  return 0;
                else
                  return 350;
              }
              else
              {
                return 780;
              }
            }
            else
            {
              return 800;
            }
          }
          else
          {
            return 820;
          }
        }
        else
        {
          return 840;
        }
      }
      else
      {
        return 860;
      }
    case 1:
      if ( result > 65999 )
        return (int)&elf_hash_bucket[5];
      if ( (unsigned int)(result - 63500) <= 0x9C3 )
        return 63500;
      if ( (unsigned int)(result - 60500) <= 0xBB7 )
        return 60500;
      if ( (unsigned int)(result - 58000) <= 0x9C3 )
        return 58000;
      return sub_145388(result, v22) * v22;
    case 2:
      if ( result > 172999 )
        return (int)sub_2A3C8;
      if ( (unsigned int)(result - 166000) <= 0x1B57 )
        return (int)&loc_28870;
      return sub_145388(result, v22) * v22;
    case 5:
      if ( result <= 1859 )
      {
        if ( (unsigned int)(result - 1770) <= 0x59 )
          return 1770;
        return sub_145388(result, v22) * v22;
      }
      return 1860;
  }
  return result;
}
