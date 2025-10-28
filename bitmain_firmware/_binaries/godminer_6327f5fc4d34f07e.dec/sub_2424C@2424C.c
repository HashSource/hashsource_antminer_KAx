int __fastcall sub_2424C(_DWORD *a1, const char **a2)
{
  char *v4; // r6
  int v5; // r8
  char *all_created_runtime; // r0
  char *v7; // r4
  _DWORD *v8; // r10
  _DWORD *v9; // r5
  double v10; // d0
  double v11; // d11
  double v12; // d10
  double v13; // d9
  _DWORD *v14; // r0
  double *v15; // r0
  double *v16; // r0
  double *v17; // r0
  double *v18; // r0
  char *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r8
  char **v23; // r11
  _DWORD *v24; // r4
  char *v25; // r0
  char *v26; // t1
  char *v28; // r8
  int v29; // r4
  char *v30; // r11
  int v31; // t1
  int v32; // r1
  __int64 v33; // [sp+10h] [bp-102Ch]
  char *ptr; // [sp+1Ch] [bp-1020h]
  int v35; // [sp+24h] [bp-1018h] BYREF
  double v36; // [sp+28h] [bp-1014h] BYREF
  _DWORD v37[2]; // [sp+30h] [bp-100Ch] BYREF
  char v38[12]; // [sp+38h] [bp-1004h] BYREF
  float v39; // [sp+44h] [bp-FF8h]
  float v40; // [sp+48h] [bp-FF4h]
  float v41; // [sp+4Ch] [bp-FF0h]
  double v42; // [sp+50h] [bp-FECh]
  __int64 v43; // [sp+60h] [bp-FDCh]

  v4 = (char *)v37;
  v37[0] = 0;
  v35 = 0;
  v37[1] = 0;
  v5 = frontend_runtime_instance();
  all_created_runtime = (char *)get_all_created_runtime(&v35);
  if ( a2 )
  {
    v7 = all_created_runtime;
    sub_1F418(a1, a2);
    sub_1F534(a1);
    v8 = json_array();
    v9 = json_object();
    read_system_status_from_monitor((int)v38);
    v10 = v42;
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v5 + 68) + 12), &v36, (char *)v37);
    if ( v35 <= 0 )
      v4 = 0;
    v11 = v39 * v10;
    if ( v35 <= 0 )
      ptr = v4;
    v33 = v43;
    v12 = v40 * v10;
    v13 = v41 * v10;
    if ( v35 > 0 )
    {
      ptr = (char *)malloc(216 * v35);
      v4 = (char *)malloc(4 * v35);
      if ( v35 > 0 )
      {
        v28 = v7 - 4;
        v29 = 0;
        v30 = ptr;
        do
        {
          v31 = *((_DWORD *)v28 + 1);
          v28 += 4;
          read_status_from_monitor(v30, v31);
          v32 = v35;
          v30 += 216;
          *(_DWORD *)&v4[4 * v29++] = *(_DWORD *)(*(_DWORD *)v28 + 200);
        }
        while ( v32 > v29 );
      }
    }
    get_miner_elapsed_time();
    v14 = json_integer((__int64)v10);
    json_object_set_new(v9, "elapsed", v14);
    sub_DD47C((__int64)(v11 * 100.0));
    v15 = json_real();
    json_object_set_new(v9, "rate_5s", v15);
    sub_DD47C((__int64)(v12 * 100.0));
    v16 = json_real();
    json_object_set_new(v9, "rate_30m", v16);
    sub_DD47C((__int64)(v13 * 100.0));
    v17 = json_real();
    json_object_set_new(v9, "rate_avg", v17);
    sub_DD47C((__int64)(v36 * 100.0));
    v18 = json_real();
    json_object_set_new(v9, "rate_ideal", v18);
    v19 = BUFX_strdup((char *)v37);
    json_object_set_new(v9, "rate_unit", v19);
    v20 = json_integer(v33);
    json_object_set_new(v9, "hw_all", v20);
    v21 = json_integer(*(__int64 *)&dword_107978);
    json_object_set_new(v9, "bestshare", v21);
    v22 = json_array();
    if ( v22 && off_106338 )
    {
      v23 = (char **)&off_106338;
      do
      {
        v24 = json_object();
        v25 = BUFX_strdup(*v23);
        json_object_set_new(v24, "type", v25);
        ((void (__fastcall *)(_DWORD *, char **))v23[1])(v24, v23);
        json_array_append_new(v22, v24);
        v26 = v23[6];
        v23 += 6;
      }
      while ( v26 );
    }
    json_object_set_new(v9, "status", v22);
    json_array_append_new(v8, v9);
    json_object_set_new(a1, "SUMMARY", v8);
    if ( v35 > 0 )
    {
      free(v4);
      free(ptr);
    }
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "%s: input bad api param\n", "get_summary");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_summary",
      11,
      410,
      100,
      v38);
    return -2147483646;
  }
}
