int __fastcall sub_210A8(_DWORD *a1, int a2)
{
  bool v4; // zf
  int v5; // r5
  __int64 v6; // kr00_8
  _DWORD *v7; // r2
  _DWORD *v8; // r0
  char *v9; // r0
  _DWORD *v10; // r0
  double *v11; // r0
  double v12; // d5
  double v13; // d7
  double *v14; // r0
  double v15; // d7
  double *v16; // r0
  int v17; // r5
  _DWORD *v18; // r4
  _DWORD *v19; // r0
  char *v20; // r0
  int v21; // r2
  int *v22; // r3
  int v23; // r1
  char *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  char *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  char *v35; // r0
  int v36; // r3
  bool v37; // cc
  unsigned int v38; // r0
  char *v39; // r0
  double *v40; // r8
  double *v41; // r9
  char *v42; // r0
  _DWORD *v43; // r0
  char *v44; // r0
  char *v45; // r0
  double *v46; // r0
  double *v47; // r0
  double *v48; // r0
  double *v49; // r0
  _DWORD *v50; // r0
  _DWORD *v52; // [sp+24h] [bp-1140h]
  int v54; // [sp+3Ch] [bp-1128h] BYREF
  int v55; // [sp+40h] [bp-1124h]
  int v56; // [sp+44h] [bp-1120h]
  char v57[4]; // [sp+48h] [bp-111Ch] BYREF
  int v58; // [sp+4Ch] [bp-1118h]
  int v59; // [sp+50h] [bp-1114h]
  int v60; // [sp+54h] [bp-1110h]
  int v61; // [sp+58h] [bp-110Ch]
  int v62; // [sp+5Ch] [bp-1108h]
  char s[128]; // [sp+60h] [bp-1104h] BYREF
  char v64[128]; // [sp+E0h] [bp-1084h] BYREF
  char v65[4100]; // [sp+160h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v64, 0, sizeof(v64));
  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  v55 = 0;
  v56 = 0;
  v54 = 0;
  *(_DWORD *)v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  if ( v4 )
  {
    v5 = -2147483646;
    V_LOCK();
    logfmt_raw(v65, 0x1000u, 0, "%s: input bad api param\n", "get_pools_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_pools_old",
      13,
      1015,
      100,
      v65);
  }
  else
  {
    v5 = total_pools;
    if ( total_pools )
    {
      sub_1F644(a1, 1, 7, *(const char **)(a2 + 8));
      v52 = json_array();
      if ( total_pools > 0 )
      {
        v6 = 0;
        do
        {
          v17 = *(_DWORD *)(pools + 4 * v6);
          v18 = json_object();
          v19 = json_integer(v6);
          json_object_set_new(v18, "POOL", v19);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(_DWORD *)(v17 + 8));
          v20 = BUFX_strdup(s);
          json_object_set_new(v18, "URL", v20);
          v21 = *(unsigned __int8 *)(v17 + 1896);
          v54 = 0;
          v55 = 0;
          v56 = 0;
          if ( v21 )
            LOWORD(v22) = -8312;
          else
            LOWORD(v22) = -8472;
          HIWORD(v22) = 13;
          v23 = v22[1];
          v54 = *v22;
          if ( v21 )
            LOBYTE(v55) = v23;
          else
            LOWORD(v55) = v23;
          v24 = BUFX_strdup((char *)&v54);
          json_object_set_new(v18, "Status", v24);
          v25 = json_integer(*(int *)(v17 + 4));
          json_object_set_new(v18, "Priority", v25);
          v26 = json_integer(*(int *)(v17 + 1628));
          json_object_set_new(v18, "Quota", v26);
          v27 = BUFX_strdup("N");
          json_object_set_new(v18, "Long Poll", v27);
          v28 = json_integer(*(unsigned int *)(v17 + 1624));
          json_object_set_new(v18, "Getworks", v28);
          v29 = json_integer(*(_QWORD *)(v17 + 1920));
          json_object_set_new(v18, "Accepted", v29);
          v30 = json_integer(*(_QWORD *)(v17 + 1928));
          json_object_set_new(v18, "Rejected", v30);
          v31 = json_integer(*(unsigned int *)(v17 + 1936));
          json_object_set_new(v18, "Discarded", v31);
          v32 = json_integer(*(unsigned int *)(v17 + 1632));
          json_object_set_new(v18, "Stale", v32);
          v33 = json_integer(*(unsigned int *)(v17 + 1940));
          json_object_set_new(v18, "Get Failures", v33);
          v34 = json_integer(*(unsigned int *)(v17 + 1944));
          json_object_set_new(v18, "Remote Failures", v34);
          memset(v64, 0, sizeof(v64));
          snprintf(v64, 0x80u, "%s", *(_DWORD *)(v17 + 12));
          v35 = BUFX_strdup(v64);
          json_object_set_new(v18, "User", v35);
          v36 = *(_DWORD *)(v17 + 1608);
          *(_DWORD *)v57 = 0;
          v58 = 0;
          v37 = v36 <= 0;
          v59 = 0;
          if ( v36 <= 0 )
            LOWORD(v36) = 48;
          v60 = 0;
          v61 = 0;
          v62 = 0;
          if ( v37 )
          {
            *(_WORD *)v57 = v36;
          }
          else
          {
            v38 = time(0) - *(_DWORD *)(v17 + 1608);
            snprintf(v57, 0x18u, "%d:%d:%d", v38 / 0xE10, v38 % 0xE10 / 0x3C, v38 % 0xE10 % 0x3C);
          }
          v39 = BUFX_strdup(v57);
          json_object_set_new(v18, "Last Share Time", v39);
          v40 = (double *)(v17 + 1808);
          v41 = (double *)(v17 + 1952);
          sprintf((char *)(v17 + 1968), "%8.4f", *(double *)(v17 + 1800));
          v42 = BUFX_strdup((char *)(v17 + 1968));
          json_object_set_new(v18, "Diff", v42);
          v43 = json_integer(*(_QWORD *)(v17 + 1984));
          json_object_set_new(v18, "Diff1 Shares", v43);
          v44 = BUFX_strdup("");
          json_object_set_new(v18, "Proxy Type", v44);
          v45 = BUFX_strdup("");
          json_object_set_new(v18, "Proxy", v45);
          sub_DD47C((__int64)(*(double *)(v17 + 1952) * 100.0));
          v46 = json_real();
          json_object_set_new(v18, "Difficulty Accepted", v46);
          sub_DD47C((__int64)(*(double *)(v17 + 1960) * 100.0));
          v47 = json_real();
          json_object_set_new(v18, "Difficulty Rejected", v47);
          sub_DD47C((__int64)(*(double *)(v17 + 1808) * 100.0));
          v48 = json_real();
          json_object_set_new(v18, "Difficulty Stale", v48);
          sub_DD47C((__int64)(*(double *)(v17 + 1616) * 100.0));
          v49 = json_real();
          json_object_set_new(v18, "Last Share Difficulty", v49);
          if ( *(_BYTE *)(v17 + 24) )
            v7 = json_true();
          else
            v7 = json_false();
          json_object_set_new(v18, "Has Stratum", v7);
          v8 = json_true();
          json_object_set_new(v18, "Stratum Active", v8);
          v9 = BUFX_strdup("");
          json_object_set_new(v18, "Stratum URL", v9);
          v10 = json_false();
          json_object_set_new(v18, "Has GBT", v10);
          v11 = json_real();
          json_object_set_new(v18, "Best Share", v11);
          v12 = *(double *)(v17 + 1960);
          v13 = v12 + *v41 + *v40;
          if ( v13 != 0.0 )
            sub_DD47C((__int64)(v12 / v13 * 100.0));
          v14 = json_real();
          json_object_set_new(v18, "Pool Rejected%", v14);
          v15 = *v41 + *(double *)(v17 + 1960) + *v40;
          if ( v15 != 0.0 )
            sub_DD47C((__int64)(*v40 / v15 * 100.0));
          v16 = json_real();
          json_object_set_new(v18, "Pool Stale%%", v16);
          json_array_append_new(v52, v18);
          ++v6;
        }
        while ( total_pools > (int)v6 );
      }
      v5 = 0;
      json_object_set_new(a1, "POOLS", v52);
      v50 = json_integer(1);
      json_object_set_new(a1, "id", v50);
    }
    else
    {
      sub_1F644(a1, 0, 8, "No pools");
    }
  }
  return v5;
}
