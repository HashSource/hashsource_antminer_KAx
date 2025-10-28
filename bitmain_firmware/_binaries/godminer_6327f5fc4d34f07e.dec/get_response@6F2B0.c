int __fastcall get_response(int a1)
{
  unsigned int v2; // r8
  char *v3; // r4
  int v4; // r0
  void *v5; // r0
  int (**v6)(); // r0
  int v7; // r0
  int v8; // r7
  size_t v9; // r4
  __useconds_t v10; // r0
  char v12[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = 64;
  v3 = (char *)calloc(1u, 0x40u);
  snprintf(v3, 0x40u, "%.10s_%d", "get_response", *(_DWORD *)(a1 + 196));
  V_LOCK();
  v4 = syscall(224);
  logfmt_raw(v12, 0x1000u, 0, "%s on pid %ld", v3, v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_base.c",
    150,
    "get_response",
    12,
    186,
    40,
    v12);
  prctl(15, v3);
  v5 = memset(v12, 0, 0x100u);
  while ( 1 )
  {
    v6 = dev_ctrl((int)v5);
    v7 = ((int (__fastcall *)(_DWORD, char *, int))v6[15])(*(_DWORD *)(a1 + 196), v12, 256);
    v8 = *(unsigned __int8 *)(a1 + 821);
    v9 = v7;
    if ( *(_BYTE *)(a1 + 821) )
      break;
    if ( v7 <= 0 )
    {
      v10 = v2;
      v2 *= 2;
      v5 = (void *)usleep(v10);
      if ( v2 >= 0x3E8 )
        v2 = 1000;
    }
    else
    {
      v2 = 64;
      queue_enqueue(*(_DWORD *)(a1 + 792), v12, v7);
      v5 = memset(v12, v8, v9);
    }
  }
  *(_BYTE *)(a1 + 821) = 0;
  return 0;
}
