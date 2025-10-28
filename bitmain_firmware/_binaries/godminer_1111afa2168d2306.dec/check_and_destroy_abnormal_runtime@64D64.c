int check_and_destroy_abnormal_runtime()
{
  int v0; // r6
  int v1; // r5
  int v2; // r10
  void **v3; // r4
  _DWORD *v4; // r3
  _DWORD *v5; // t1
  int v6; // r1
  int *v7; // r3
  _DWORD *v8; // r2
  int v9; // t1
  _DWORD s[256]; // [sp+10h] [bp-1404h] BYREF
  char v12[4100]; // [sp+410h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  pthread_mutex_lock(&stru_1A3C98);
  if ( dword_1A3CB0 > 0 )
  {
    v1 = 0;
    LOWORD(v2) = -29588;
    v0 = 0;
    v3 = (void **)&dword_1A3CB0;
    do
    {
      v5 = v3[1];
      ++v3;
      v4 = v5;
      if ( v5[110] == v5[88] )
      {
        s[v0++] = v4;
      }
      else
      {
        V_LOCK();
        HIWORD(v2) = (unsigned int)&off_168E34 >> 16;
        logfmt_raw(v12, 0x1000u, 0, v2, *((_DWORD *)*v3 + 64));
        V_UNLOCK();
        LOWORD(v6) = -29744;
        HIWORD(v6) = (unsigned int)"se_asic" >> 16;
        zlog(g_zc, v6, 155, "check_and_destroy_abnormal_runtime", 34, 116, 80, v12);
        set_miner_6060info_asic_num_less_than_design_err(*((_DWORD *)*v3 + 64), 1);
        (*((void (**)(void))*v3 + 6))();
        (*((void (**)(void))*v3 + 8))();
        free(*v3);
        *v3 = 0;
      }
      ++v1;
    }
    while ( dword_1A3CB0 > v1 );
    if ( v0 )
    {
      v7 = s;
      v8 = &unk_1A3CB4;
      do
      {
        v9 = *v7++;
        *v8++ = v9;
      }
      while ( v7 != &s[v0] );
    }
  }
  else
  {
    v0 = 0;
  }
  dword_1A3CB0 = v0;
  return pthread_mutex_unlock(&stru_1A3C98);
}
