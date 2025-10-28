void __noreturn watchpool_thread()
{
  pthread_t v0; // r0
  char *v1; // r0
  const char *v2; // r2
  char *v3; // r4
  int v4; // r0
  int v5; // r3
  int v6; // r1
  int v7; // lr
  _DWORD *v8; // r8
  int *v9; // r6
  int v10; // r4
  pthread_mutex_t *v11; // r5
  int count; // r11
  int v13; // r1
  int v14; // r2
  int v15; // r3
  char *v16; // r11
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  pthread_mutex_t *current_pool; // r0
  char v22; // [sp+20h] [bp-1084h] BYREF
  int v23; // [sp+40h] [bp-1064h]
  int v24; // [sp+44h] [bp-1060h]
  char *v25; // [sp+48h] [bp-105Ch]
  int v26; // [sp+4Ch] [bp-1058h]
  char *v27; // [sp+50h] [bp-1054h]
  char *s; // [sp+54h] [bp-1050h]
  struct timeval v29; // [sp+58h] [bp-104Ch] BYREF
  _DWORD v30[7]; // [sp+60h] [bp-1044h] BYREF
  int v31; // [sp+7Ch] [bp-1028h]
  _DWORD v32[8]; // [sp+80h] [bp-1024h] BYREF
  char v33[4100]; // [sp+A0h] [bp-1004h] BYREF

  v0 = pthread_self();
  pthread_detach(v0);
  pthread_setcanceltype(1, 0);
  sub_54ABC();
  v1 = (char *)calloc(1u, 0x40u);
  LOWORD(v2) = 4204;
  HIWORD(v2) = (unsigned int)&unk_132978 >> 16;
  v3 = v1;
  snprintf(v1, 0x40u, v2, "watchpool_thread", 0);
  V_LOCK();
  v4 = syscall(224);
  LOWORD(v5) = 4216;
  HIWORD(v5) = (unsigned int)&unk_132984 >> 16;
  LOWORD(v9) = 17040;
  logfmt_raw(v33, 0x1000u, 0, v5, v3, v4);
  V_UNLOCK();
  v27 = "poolno";
  LOWORD(v6) = 32144;
  LOWORD(v7) = 32296;
  HIWORD(v6) = (unsigned int)"k_asic_voltage_enable: %s" >> 16;
  HIWORD(v7) = (unsigned int)"led" >> 16;
  LOWORD(v8) = 17044;
  v26 = v7;
  HIWORD(v9) = (unsigned int)&unk_175780 >> 16;
  s = "current_pool" + 8;
  zlog(g_zc, v6, 151, "watchpool_thread", 16, 31, 40, v33);
  v25 = &v22;
  prctl(15, v3);
  while ( 1 )
  {
    cgtime(&v29);
    if ( *v9 > 0 )
    {
      v10 = 0;
      do
      {
        while ( 1 )
        {
          HIWORD(v8) = (unsigned int)&unk_175784 >> 16;
          v11 = *(pthread_mutex_t **)(*v8 + 4 * v10++);
          if ( !pool_tget(v11, (unsigned __int8 *)&v11[79].__size[8]) )
          {
            count = v11->__count;
            if ( count < *(_DWORD *)(get_current_pool() + 4) && v29.tv_sec - v11[79].__kind > 120 )
              break;
          }
          if ( *v9 <= v10 )
            goto LABEL_9;
        }
        V_LOCK();
        V_INT((int)v30, v27, v11->__lock);
        V_STR(v32, s, (const char *)v11->__kind);
        v13 = v32[1];
        v14 = v32[2];
        v15 = v32[3];
        v16 = v25;
        v23 = v26;
        v24 = 120;
        *(_DWORD *)v25 = v32[0];
        *((_DWORD *)v16 + 1) = v13;
        *((_DWORD *)v16 + 2) = v14;
        *((_DWORD *)v16 + 3) = v15;
        v16 += 16;
        v17 = v32[5];
        v18 = v32[6];
        v19 = v32[7];
        *(_DWORD *)v16 = v32[4];
        *((_DWORD *)v16 + 1) = v17;
        *((_DWORD *)v16 + 2) = v18;
        *((_DWORD *)v16 + 3) = v19;
        logfmt_raw(v33, 0x1000u, 0, v31, v30[0], v30[1], v30[2], v30[3], v30[4], v30[5], v30[6], v31);
        V_UNLOCK();
        LOWORD(v20) = 32144;
        HIWORD(v20) = (unsigned int)"k_asic_voltage_enable: %s" >> 16;
        zlog(g_zc, v20, 151, "watchpool_thread", 16, 50, 80, v33);
        switch_pools();
      }
      while ( *v9 > v10 );
    }
LABEL_9:
    current_pool = (pthread_mutex_t *)get_current_pool();
    if ( pool_tget(current_pool, (unsigned __int8 *)&current_pool[79].__size[8]) )
      switch_pools();
    sleep(0x1Eu);
  }
}
