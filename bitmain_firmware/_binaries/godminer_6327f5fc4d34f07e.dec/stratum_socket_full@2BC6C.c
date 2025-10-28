int __fastcall stratum_socket_full(int a1, __time_t a2)
{
  size_t v4; // r0
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  v4 = strlen(*(const char **)(a1 + 40));
  logfmt_raw(v6, 0x1000u, 0, "stratum_socket_full sockbuf len %zu", v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/stratum_handler.c",
    145,
    "stratum_socket_full",
    19,
    97,
    20,
    v6);
  if ( **(_BYTE **)(a1 + 40) )
    return 1;
  else
    return socket_full(*(_DWORD *)(a1 + 32), a2);
}
