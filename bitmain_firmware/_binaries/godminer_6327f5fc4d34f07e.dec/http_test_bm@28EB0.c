char *__fastcall http_test_bm(int a1, char *a2, size_t a3)
{
  const char *v4; // r5
  char *v6; // r4
  int theory_hashrate; // r0
  unsigned int miner_qualified_hashrate; // r0
  int v10; // r0
  size_t v11; // r0
  const char *v12; // lr
  char *v13; // r12
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  __int16 v18; // r2
  char v19; // r3
  FILE *v20; // r3
  int v21; // [sp+14h] [bp-1020h] BYREF
  int v22; // [sp+18h] [bp-101Ch] BYREF
  _DWORD v23[4]; // [sp+1Ch] [bp-1018h] BYREF
  __int16 v24; // [sp+2Ch] [bp-1008h]
  char v25[4100]; // [sp+30h] [bp-1004h] BYREF

  v4 = (const char *)(a1 + 4);
  v21 = -1;
  v22 = -1;
  v6 = strstr((const char *)(a1 + 4), "/rate");
  if ( v6 )
  {
    V_LOCK();
    v6 = 0;
    logfmt_raw(v25, 0x1000u, 0, "cmd : get rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      190,
      20,
      v25);
    miner_qualified_hashrate = get_miner_qualified_hashrate();
    sub_28A20(a2, a3, miner_qualified_hashrate);
    return v6;
  }
  if ( strstr(v4, "/test") )
  {
    _isoc99_sscanf(v4, "/test.%d.%d", &v21, &v22);
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, "cmd : get test = %d", v21);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      197,
      20,
      v25);
    if ( v21 != 523 )
    {
      sprintf(a2, "OK get test=%d", v21);
      return 0;
    }
    get_miner_info(a2);
    return v6;
  }
  v6 = strstr(v4, "/ideal_rate");
  if ( !v6 )
  {
    if ( strstr(v4, "/max_rate") )
    {
      V_LOCK();
      logfmt_raw(v25, 0x1000u, 0, "cmd : get max rate");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/http_test.c",
        139,
        "http_test_bm",
        12,
        217,
        20,
        v25);
      theory_hashrate = get_theory_hashrate();
      sub_28A20(a2, a3, 102 * theory_hashrate / 100);
    }
    else if ( strstr(v4, "/miner_status") )
    {
      V_LOCK();
      v6 = 0;
      logfmt_raw(v25, 0x1000u, 0, "cmd : get miner status");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/http_test.c",
        139,
        "http_test_bm",
        12,
        223,
        20,
        v25);
    }
    else if ( strstr(v4, "/productName") )
    {
      v6 = 0;
      V_LOCK();
      v11 = strlen(g_miner_type);
      logfmt_raw(v25, 0x1000u, 0, "cmd : get miner type[%d] %s", v11, g_miner_type);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/http_test.c",
        139,
        "http_test_bm",
        12,
        228,
        20,
        v25);
      strcpy(a2, g_miner_type);
    }
    else
    {
      v6 = (char *)strncmp(v4, "/get_sn", 7u);
      if ( v6 )
      {
        v6 = (char *)strncmp(v4, "/set_sn", 7u);
        if ( v6 )
        {
          return (char *)-1;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v25, 0x1000u, 0, "cmd : set miner sn, doesn't spport");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/http_test.c",
            139,
            "http_test_bm",
            12,
            309,
            80,
            v25);
          v12 = "doesn't support sn set in Release mode";
          v13 = a2;
          do
          {
            v13 += 16;
            v14 = *(_DWORD *)v12;
            v15 = *((_DWORD *)v12 + 1);
            v16 = *((_DWORD *)v12 + 2);
            v17 = *((_DWORD *)v12 + 3);
            v12 += 16;
            *((_DWORD *)v13 - 4) = v14;
            *((_DWORD *)v13 - 3) = v15;
            *((_DWORD *)v13 - 2) = v16;
            *((_DWORD *)v13 - 1) = v17;
          }
          while ( v12 != "e mode" );
          v18 = *((_WORD *)v12 + 2);
          v19 = v12[6];
          *(_DWORD *)v13 = *(_DWORD *)v12;
          *((_WORD *)v13 + 2) = v18;
          v13[6] = v19;
        }
      }
      else
      {
        memset(v23, 0, sizeof(v23));
        v24 = 0;
        V_LOCK();
        logfmt_raw(v25, 0x1000u, 0, "cmd : get miner sn");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/http_test.c",
          139,
          "http_test_bm",
          12,
          236,
          20,
          v25);
        v20 = (FILE *)fopen64(g_miner_sn_file_path, "r");
        if ( v20 && (fread(v23, 0x11u, 1u, v20), LOBYTE(v23[0])) )
          snprintf(a2, 0x12u, "%s", (const char *)v23);
        else
          strcpy(a2, "no miner sn stored on board");
      }
    }
    return v6;
  }
  V_LOCK();
  logfmt_raw(v25, 0x1000u, 0, "cmd : get ideal rate");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/http_test.c",
    139,
    "http_test_bm",
    12,
    211,
    20,
    v25);
  v10 = get_theory_hashrate();
  sub_28A20(a2, a3, v10);
  return 0;
}
