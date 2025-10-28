int __fastcall set_voltage_by_steps(int a1, int a2)
{
  int v3; // r5
  int v4; // r4
  int v5; // r6
  char v7[4120]; // [sp+10h] [bp-1018h] BYREF

  if ( a2 )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "set_voltage_by_steps to %d", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage_by_steps",
      20,
      392,
      40,
      v7);
    if ( byte_1088B8 )
      v3 = dword_1088D4;
    else
      v3 = -1;
    v4 = a1 - v3;
    if ( a1 == v3 )
      return 0;
    if ( a1 - v3 < 0 )
    {
      v5 = -10;
      if ( (int)abs32(v4) <= 10 )
      {
LABEL_11:
        if ( a1 != v3 )
          sub_403C8(a1);
        return 0;
      }
    }
    else
    {
      v5 = 10;
      if ( (int)abs32(v4) <= 10 )
        goto LABEL_11;
    }
    do
    {
      v3 += v5;
      v4 -= v5;
      sub_403C8(v3);
    }
    while ( (int)abs32(v4) > 10 );
    goto LABEL_11;
  }
  return -1;
}
