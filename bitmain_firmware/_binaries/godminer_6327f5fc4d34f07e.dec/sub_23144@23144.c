int __fastcall sub_23144(_DWORD *a1, int a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r5
  _DWORD *v7; // r4
  float v8; // s18
  double v9; // d8
  double v10; // d11
  float v11; // s20
  double v12; // d11
  double v13; // d9
  double v14; // d10
  double v15; // r0
  double v16; // d12
  _DWORD *v17; // r0
  double *v18; // r0
  double *v19; // r0
  double *v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  double *v26; // r0
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  double *v33; // r0
  double *v34; // r0
  double *v35; // r0
  double *v36; // r0
  double *v37; // r0
  _DWORD *v38; // r0
  __int64 v39; // r0
  double *v40; // r0
  double v41; // r0
  double *v42; // r0
  double v43; // d7
  double *v44; // r0
  double v45; // d7
  double *v46; // r0
  _DWORD *v47; // r0
  char *v48; // r0
  char *v49; // r0
  char *v50; // r0
  _DWORD *v51; // r0
  int v53; // r1
  double v54; // d9
  double v55; // r0
  __int64 v56; // [sp+10h] [bp-10BCh]
  unsigned int v57; // [sp+1Ch] [bp-10B0h]
  _DWORD *v58; // [sp+20h] [bp-10ACh]
  unsigned int v59; // [sp+24h] [bp-10A8h]
  int v60; // [sp+2Ch] [bp-10A0h] BYREF
  double v61; // [sp+30h] [bp-109Ch] BYREF
  char v62[12]; // [sp+3Ch] [bp-1090h] BYREF
  char v63[32]; // [sp+48h] [bp-1084h] BYREF
  char v64[32]; // [sp+68h] [bp-1064h] BYREF
  char v65[32]; // [sp+88h] [bp-1044h] BYREF
  char v66[32]; // [sp+A8h] [bp-1024h] BYREF
  char v67[12]; // [sp+C8h] [bp-1004h] BYREF
  float v68; // [sp+D4h] [bp-FF8h]
  float v69; // [sp+D8h] [bp-FF4h]
  float v70; // [sp+DCh] [bp-FF0h]
  double v71; // [sp+E0h] [bp-FECh]
  unsigned int v72; // [sp+F0h] [bp-FDCh]
  unsigned int v73; // [sp+F4h] [bp-FD8h]

  v60 = 0;
  get_all_created_runtime(&v60);
  v4 = frontend_runtime_instance();
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v67, 0x1000u, 0, "%s: input bad api param\n", "get_summary_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_summary_old",
      15,
      928,
      100,
      v67);
    return -2147483646;
  }
  else
  {
    v6 = v4;
    sub_1F644(a1, 1, 11, *(const char **)(a2 + 8));
    v58 = json_array();
    v7 = json_object();
    read_system_status_from_monitor((int)v67);
    v8 = v69;
    v9 = v71;
    v10 = v68;
    v11 = v70;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v6 + 68) + 12), v63);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v6 + 68) + 12), v64);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v6 + 68) + 12), v65);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v6 + 68) + 12), v66);
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v6 + 68) + 12), &v61, v62);
    v12 = v10 * v9;
    v59 = v72;
    v13 = v8 * v9;
    v57 = v73;
    v14 = v11 * v9;
    get_miner_elapsed_time();
    LODWORD(v15) = sub_DD47C(total_accepted);
    v16 = v15;
    if ( v9 != 0.0 )
      v16 = v15 / v9;
    v17 = json_integer((__int64)v9);
    json_object_set_new(v7, "Elapsed", v17);
    sub_DD47C((__int64)(v12 * 100.0));
    v18 = json_real();
    json_object_set_new(v7, "GHS 5s", v18);
    sub_DD47C((__int64)(v14 * 100.0));
    v19 = json_real();
    json_object_set_new(v7, "GHS av", v19);
    sub_DD47C((__int64)(v13 * 100.0));
    v20 = json_real();
    json_object_set_new(v7, "GHS 30m", v20);
    v21 = json_integer((unsigned int)dword_107968);
    json_object_set_new(v7, "Found Blocks", v21);
    v22 = json_integer(*(__int64 *)&total_getworks);
    json_object_set_new(v7, "Getwork", v22);
    v23 = json_integer(total_accepted);
    json_object_set_new(v7, "Accepted", v23);
    v24 = json_integer(*(__int64 *)&total_rejected);
    json_object_set_new(v7, "Rejected", v24);
    v25 = json_integer(__SPAIR64__(v57, v59));
    json_object_set_new(v7, "Hardware Errors", v25);
    sub_DD47C((__int64)(v16 * 60.0 * 100.0));
    v26 = json_real();
    json_object_set_new(v7, "Utility", v26);
    v27 = json_integer(*(__int64 *)&total_discarded);
    json_object_set_new(v7, "Discarded", v27);
    v28 = json_integer(*(__int64 *)&total_stale);
    json_object_set_new(v7, "Stale", v28);
    v29 = json_integer((unsigned int)total_go);
    json_object_set_new(v7, "Get Failures", v29);
    v30 = json_integer((unsigned int)local_work);
    json_object_set_new(v7, "Local Work", v30);
    v31 = json_integer((unsigned int)total_ro);
    json_object_set_new(v7, "Remote Failures", v31);
    v32 = json_integer((unsigned int)new_blocks);
    json_object_set_new(v7, "Network Blocks", v32);
    sub_DD47C((__int64)(dbl_107970 * 100.0));
    v33 = json_real();
    json_object_set_new(v7, "Total MH", v33);
    v34 = json_real();
    json_object_set_new(v7, "Work Utility", v34);
    sub_DD47C((__int64)(total_diff_accepted * 100.0));
    v35 = json_real();
    json_object_set_new(v7, "Difficulty Accepted", v35);
    sub_DD47C((__int64)(total_diff_rejected * 100.0));
    v36 = json_real();
    json_object_set_new(v7, "Difficulty Rejected", v36);
    sub_DD47C((__int64)(total_diff_stale * 100.0));
    v37 = json_real();
    json_object_set_new(v7, "Difficulty Stale", v37);
    v38 = json_integer(*(__int64 *)&dword_107978);
    json_object_set_new(v7, "Best Share", v38);
    HIDWORD(v39) = v57;
    v56 = __PAIR64__(v57, v59) + total_diff1;
    if ( __PAIR64__(v57, v59) + total_diff1 )
    {
      LODWORD(v39) = v59;
      LODWORD(v54) = sub_DD46C(v39);
      HIDWORD(v54) = v53;
      LODWORD(v55) = sub_DD46C(v56);
      sub_DD47C((__int64)(v54 / v55 * 100.0));
    }
    v40 = json_real();
    json_object_set_new(v7, "Device Hardware%", v40);
    if ( total_diff1 )
    {
      LODWORD(v41) = sub_DD47C(total_diff1);
      sub_DD47C((__int64)(total_diff_rejected / v41 * 100.0));
    }
    v42 = json_real();
    json_object_set_new(v7, "Device Rejected%", v42);
    v43 = total_diff_rejected + total_diff_accepted + total_diff_stale;
    if ( v43 != 0.0 )
      sub_DD47C((__int64)(total_diff_rejected / v43 * 100.0));
    v44 = json_real();
    json_object_set_new(v7, "Pool Rejected%", v44);
    v45 = total_diff_accepted + total_diff_rejected + total_diff_stale;
    if ( v45 != 0.0 )
      sub_DD47C((__int64)(total_diff_stale / v45 * 100.0));
    v46 = json_real();
    json_object_set_new(v7, "Pool Stale%", v46);
    v47 = json_integer(last_getwork);
    json_object_set_new(v7, "Last getwork", v47);
    v48 = BUFX_strdup(v63);
    json_object_set_new(v7, "RT HASHRATE", v48);
    v49 = BUFX_strdup(v65);
    json_object_set_new(v7, "AV HASHRATE", v49);
    v50 = BUFX_strdup(v66);
    json_object_set_new(v7, "THEORY HASHRATE", v50);
    json_array_append_new(v58, v7);
    json_object_set_new(a1, "SUMMARY", v58);
    v51 = json_integer(1);
    json_object_set_new(a1, "id", v51);
    return 0;
  }
}
