int __fastcall workio_submit_work(int a1, unsigned __int8 *a2)
{
  int v4; // r6
  int v5; // r7
  int v6; // r5
  int v8; // r3
  int v9; // [sp+28h] [bp-1428h]
  _DWORD v10[7]; // [sp+30h] [bp-1420h] BYREF
  int v11; // [sp+4Ch] [bp-1404h]
  _DWORD v12[7]; // [sp+50h] [bp-1400h] BYREF
  int v13; // [sp+6Ch] [bp-13E4h]
  char v14[4096]; // [sp+450h] [bp-1000h] BYREF

  v4 = frontend_runtime_instance();
  v5 = pool_tget((int)a2, a2 + 1896);
  if ( v5 )
  {
    V_LOCK();
    V_INT((int)v12, "poolno", *(int *)a2);
    logfmt_raw(
      v14,
      0x1000u,
      0,
      v13,
      v12[0],
      v12[1],
      v12[2],
      v12[3],
      v12[4],
      v12[5],
      v12[6],
      v13,
      "submit idle pool's nonce.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "workio_submit_work",
      18,
      138,
      20,
      v14);
    return 0;
  }
  else
  {
    update_pool_diff1_of_all_runtimes((int *)a2);
    (*(void (__fastcall **)(int, unsigned __int8 *, _DWORD *))(v4 + 28))(a1, a2, v12);
    do
    {
      v6 = (*(int (__fastcall **)(unsigned __int8 *, _DWORD *))(v4 + 12))(a2, v12);
      if ( v6 )
        break;
      v8 = total_ro + 1;
      ++*((_DWORD *)a2 + 486);
      total_ro = v8;
      V_LOCK();
      V_INT((int)v10, "poolno", *(int *)a2);
      v9 = v5++;
      logfmt_raw(
        v14,
        0x1000u,
        0,
        v11,
        v10[0],
        v10[1],
        v10[2],
        v10[3],
        v10[4],
        v10[5],
        v10[6],
        v11,
        "submit_upstream_work stratum_send_line failed %d count %d",
        0,
        v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "workio_submit_work",
        18,
        151,
        100,
        v14);
    }
    while ( v5 != 4 );
    return v6;
  }
}
