int __fastcall show_sn(int a1)
{
  bool v1; // zf
  FILE *v2; // r0
  FILE *v3; // r4
  int v4; // lr
  int v5; // r12
  _DWORD ptr[4]; // [sp+14h] [bp-1018h] BYREF
  __int16 v8; // [sp+24h] [bp-1008h]
  char v9[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = a1 == 0;
  if ( !a1 )
    a1 = 10268;
  memset(&ptr[1], 0, 12);
  if ( v1 )
    HIWORD(a1) = 14;
  v8 = 0;
  ptr[0] = 0;
  g_miner_sn_file_path = a1;
  v2 = (FILE *)fopen64(a1, "r");
  v3 = v2;
  if ( v2 )
  {
    if ( fread(ptr, 0x11u, 1u, v2) )
    {
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, "miner sn: %s", ptr);
      V_UNLOCK();
      v4 = 60;
      v5 = 28;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, "miner sn: is NULL");
      V_UNLOCK();
      v4 = 100;
      v5 = 30;
    }
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/show_sn.c",
      148,
      "show_sn",
      7,
      v5,
      v4,
      v9);
    return fclose(v3);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "miner has no sn!");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/miner_util/show_sn.c",
             148,
             "show_sn",
             7,
             22,
             100,
             v9);
  }
}
