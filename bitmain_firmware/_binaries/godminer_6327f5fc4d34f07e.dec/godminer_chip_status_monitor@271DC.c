char *__fastcall godminer_chip_status_monitor(int a1)
{
  char *result; // r0
  int v3; // r1
  char *v4; // r5
  _DWORD v5[7]; // [sp+28h] [bp-1040h] BYREF
  int v6; // [sp+44h] [bp-1024h]
  _DWORD v7[7]; // [sp+48h] [bp-1020h] BYREF
  int v8; // [sp+64h] [bp-1004h]
  char v9[4096]; // [sp+68h] [bp-1000h] BYREF

  ++*((_DWORD *)&max_timeout_value[10] + *(_DWORD *)(a1 + 196));
  result = get_flag_from_monitor(a1);
  v3 = *((_DWORD *)result + 12);
  v4 = result;
  if ( (v3 & 2) != 0 )
  {
    V_LOCK();
    V_INT((int)v5, "chain", *(int *)(a1 + 200));
    logfmt_raw(v9, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "some chip working slow");
    V_UNLOCK();
    result = (char *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/buil"
                       "d/godminer-origin_godminer-new/god-miner.c",
                       139,
                       "godminer_chip_status_monitor",
                       28,
                       680,
                       20,
                       v9);
    v3 = *((_DWORD *)v4 + 12);
    *((_DWORD *)v4 + 14) |= 2u;
  }
  if ( (v3 & 4) != 0 )
  {
    V_LOCK();
    V_INT((int)v7, "chain", *(int *)(a1 + 200));
    logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "some chip working slow");
    V_UNLOCK();
    result = (char *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/buil"
                       "d/godminer-origin_godminer-new/god-miner.c",
                       139,
                       "godminer_chip_status_monitor",
                       28,
                       685,
                       20,
                       v9);
    *((_DWORD *)v4 + 14) |= 4u;
  }
  return result;
}
