int __fastcall set_baud_base(int a1, int a2)
{
  char *all_created_runtime; // r0
  char *v4; // r8
  char *v5; // r8
  int i; // r4
  int v7; // t1
  int v8; // r0
  int chain_domain_num; // r0
  int v11; // r3
  int v12; // r1
  int domain_asic_num; // r0
  int v14; // r3
  int v15; // r1
  int v16; // r0
  int v17; // r7
  int v18; // r10
  char *v19; // r6
  int v20; // r4
  int v21; // r0
  int v22; // t1
  int v23; // [sp+14h] [bp-1008h] BYREF
  char v24[4100]; // [sp+18h] [bp-1004h] BYREF

  v23 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v23);
  v4 = all_created_runtime;
  if ( a2 > 3000000 )
  {
    V_LOCK();
    chain_domain_num = platform_get_chain_domain_num();
    LOWORD(v11) = 25752;
    HIWORD(v11) = (unsigned int)&unk_137FB0 >> 16;
    logfmt_raw(v24, 0x1000u, 0, v11, chain_domain_num);
    V_UNLOCK();
    LOWORD(v12) = 25584;
    HIWORD(v12) = (unsigned int)&unk_137E7C >> 16;
    zlog(g_zc, v12, 166, "set_baud_base", 13, 149, 20, v24);
    V_LOCK();
    domain_asic_num = platform_get_domain_asic_num();
    LOWORD(v14) = 25772;
    HIWORD(v14) = (unsigned int)&unk_137FC4 >> 16;
    logfmt_raw(v24, 0x1000u, 0, v14, domain_asic_num);
    V_UNLOCK();
    LOWORD(v15) = 25584;
    HIWORD(v15) = (unsigned int)&unk_137E7C >> 16;
    zlog(g_zc, v15, 166, "set_baud_base", 13, 150, 20, v24);
    v16 = platform_get_chain_domain_num();
    if ( v16 > 2 )
    {
      v17 = 18;
      v18 = v16 + 15;
      do
      {
        platform_get_domain_asic_num();
        if ( v23 > 0 )
        {
          v19 = v4 - 4;
          v20 = 0;
          do
          {
            v21 = v20++;
            platform_get_asic_addr_interval(v21);
            v22 = *((_DWORD *)v19 + 1);
            v19 += 4;
            (*(void (**)(void))(v22 + 100))();
          }
          while ( v23 > v20 );
        }
        v17 += 3;
      }
      while ( v18 - v17 >= 0 );
    }
    all_created_runtime = (char *)usleep((__useconds_t)&stru_18698.st_size);
  }
  if ( v23 > 0 )
  {
    v5 = v4 - 4;
    for ( i = 0; i < v23; ++i )
    {
      v7 = *((_DWORD *)v5 + 1);
      v5 += 4;
      (*(void (**)(void))(v7 + 84))();
      all_created_runtime = (char *)usleep(0x2710u);
    }
  }
  v8 = dev_ctrl(all_created_runtime);
  (*(void (__fastcall **)(int))(v8 + 16))(a2);
  usleep(0x2710u);
  return 0;
}
