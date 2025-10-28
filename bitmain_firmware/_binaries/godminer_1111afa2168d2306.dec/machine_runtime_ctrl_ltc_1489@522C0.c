void *machine_runtime_ctrl_ltc_1489()
{
  void *v0; // r0
  void *v1; // r8
  _DWORD v3[30]; // [sp+10h] [bp-1078h] BYREF
  char v4[4096]; // [sp+88h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, 1364240);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
    179,
    "machine_runtime_ctrl_ltc_1489",
    29,
    39,
    40,
    v4);
  memset(&v3[4], 0, 0x64u);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    v3[0] = 336204;
    v3[1] = 336208;
    v3[3] = 340660;
    v3[2] = 340292;
    v3[7] = 341556;
    v3[8] = 340948;
    v3[10] = 338104;
    v3[9] = 347116;
    v3[11] = 341588;
    v3[12] = 345412;
    v3[14] = 347108;
    v3[13] = 346896;
    v3[15] = 342972;
    v3[16] = 338596;
    v3[21] = 3000000;
    v3[20] = "tu_t_table";
    v3[24] = 1680;
    v3[29] = 1362160;
    memcpy(v0, v3, 0x78u);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, 1364276);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
      179,
      "machine_runtime_ctrl_ltc_1489",
      29,
      71,
      40,
      v4);
  }
  else
  {
    printf(aInvalidPointer, 1361520);
  }
  return v1;
}
