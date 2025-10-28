void __noreturn heartbeat_on_device()
{
  char *all_created_runtime; // r0
  char *v1; // r5
  int i; // r6
  int v3; // r3
  int v4; // t1
  int v5; // r0
  int v6; // r0
  int v7; // [sp+3Ch] [bp-1028h] BYREF
  _DWORD v8[7]; // [sp+40h] [bp-1024h] BYREF
  int v9; // [sp+5Ch] [bp-1008h]
  char v10[4100]; // [sp+60h] [bp-1004h] BYREF

  v7 = 0;
  while ( 1 )
  {
    do
      all_created_runtime = (char *)get_all_created_runtime(&v7);
    while ( v7 <= 0 );
    v1 = all_created_runtime - 4;
    for ( i = 0; i < v7; ++i )
    {
      v4 = *((_DWORD *)v1 + 1);
      v1 += 4;
      v3 = v4;
      if ( *(_BYTE *)(v4 + 206) || *(_BYTE *)(v3 + 205) )
      {
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "heartbeat_on_device");
        V_UNLOCK();
        v5 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/miner_util/check_heartbeat.c",
               156,
               "heartbeat_on_device",
               19,
               59,
               60,
               v10);
        v6 = dev_ctrl(v5);
        if ( !(*(int (__fastcall **)(_DWORD))(v6 + 80))(*(_DWORD *)(*(_DWORD *)v1 + 196)) )
        {
          V_LOCK();
          V_STR(v8, "error", "pic lost");
          logfmt_raw(v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, "heartbeat failed!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/check_heartbeat.c",
            156,
            "heartbeat_on_device",
            19,
            61,
            100,
            v10);
        }
        sleep(5u);
      }
    }
  }
}
