void __noreturn heartbeat_on_device()
{
  int v0; // r3
  int v1; // r11
  char *v2; // r12
  int v3; // r3
  int v4; // r1
  const char *v5; // r10
  char *all_created_runtime; // r0
  char *v7; // r5
  int i; // r4
  int v9; // r0
  int v10; // t1
  int v11; // r1
  char *s; // [sp+28h] [bp-1034h]
  int v13; // [sp+34h] [bp-1028h] BYREF
  _DWORD v14[7]; // [sp+38h] [bp-1024h] BYREF
  int v15; // [sp+54h] [bp-1008h]
  char v16[4100]; // [sp+58h] [bp-1004h] BYREF

  v13 = 0;
  V_LOCK();
  LOWORD(v0) = 28092;
  HIWORD(v0) = (unsigned int)"r, ret %d, err_times %d <<" >> 16;
  LOWORD(v1) = 28284;
  logfmt_raw(v16, 0x1000u, 0, v0);
  V_UNLOCK();
  LOWORD(v2) = 31628;
  LOWORD(v3) = 28016;
  LOWORD(v4) = 28112;
  HIWORD(v2) = (unsigned int)"pwm value error!" >> 16;
  HIWORD(v3) = (unsigned int)" pls check <<" >> 16;
  LOWORD(v5) = 28272;
  HIWORD(v4) = (unsigned int)" %d <<" >> 16;
  s = v2;
  zlog(g_zc, v4, 156, v3, 19, 54, 60, v16);
  while ( 1 )
  {
    do
      all_created_runtime = (char *)get_all_created_runtime(&v13);
    while ( v13 <= 0 );
    v7 = all_created_runtime - 4;
    for ( i = 0; i < v13; ++i )
    {
      v9 = dev_ctrl(all_created_runtime);
      v10 = *((_DWORD *)v7 + 1);
      v7 += 4;
      if ( !(*(int (__fastcall **)(_DWORD))(v9 + 100))(*(_DWORD *)(v10 + 248)) )
      {
        V_LOCK();
        HIWORD(v5) = (unsigned int)"tchpool_thread" >> 16;
        V_STR(v14, s, v5);
        HIWORD(v1) = (unsigned int)"ad" >> 16;
        logfmt_raw(v16, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, v1);
        V_UNLOCK();
        LOWORD(v11) = 28112;
        HIWORD(v11) = (unsigned int)" %d <<" >> 16;
        zlog(g_zc, v11, 156, "heartbeat_on_device", 19, 62, 100, v16);
      }
      all_created_runtime = (char *)sleep(5u);
    }
  }
}
