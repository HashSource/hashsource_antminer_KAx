int __fastcall sub_20B88(_DWORD *a1, const char **a2)
{
  bool v4; // zf
  __int64 v5; // kr00_8
  int v6; // r5
  _DWORD *v7; // r4
  _DWORD *v8; // r0
  char *v9; // r0
  char *v10; // r0
  int v11; // r2
  int *v12; // r3
  int v13; // r1
  char *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  char *v21; // r0
  _DWORD *v22; // r0
  double *v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  int v27; // r3
  bool v28; // cc
  unsigned int v29; // lr
  char *v30; // r0
  _DWORD *v32; // [sp+14h] [bp-1150h]
  int v34; // [sp+2Ch] [bp-1138h] BYREF
  int v35; // [sp+30h] [bp-1134h]
  int v36; // [sp+34h] [bp-1130h]
  char v37[4]; // [sp+38h] [bp-112Ch] BYREF
  int v38; // [sp+3Ch] [bp-1128h]
  int v39; // [sp+40h] [bp-1124h]
  int v40; // [sp+44h] [bp-1120h]
  char v41[4]; // [sp+48h] [bp-111Ch] BYREF
  int v42; // [sp+4Ch] [bp-1118h]
  int v43; // [sp+50h] [bp-1114h]
  int v44; // [sp+54h] [bp-1110h]
  int v45; // [sp+58h] [bp-110Ch]
  int v46; // [sp+5Ch] [bp-1108h]
  char s[128]; // [sp+60h] [bp-1104h] BYREF
  char v48[128]; // [sp+E0h] [bp-1084h] BYREF
  char v49[4100]; // [sp+160h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v48, 0, sizeof(v48));
  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  v35 = 0;
  v36 = 0;
  v34 = 0;
  *(_DWORD *)v37 = 0;
  *(_DWORD *)v41 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  if ( v4 )
  {
    V_LOCK();
    logfmt_raw(v49, 0x1000u, 0, "%s: input bad api param\n", "get_pools");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_pools",
      9,
      477,
      100,
      v49);
    return -2147483646;
  }
  else
  {
    sub_1F418(a1, a2);
    sub_1F534(a1);
    v32 = json_array();
    if ( total_pools > 0 )
    {
      v5 = 0;
      do
      {
        v6 = *(_DWORD *)(pools + 4 * v5);
        if ( v6 )
        {
          v7 = json_object();
          v8 = json_integer(v5);
          json_object_set_new(v7, "index", v8);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v6 + 8));
          v9 = BUFX_strdup(s);
          json_object_set_new(v7, "url", v9);
          memset(v48, 0, sizeof(v48));
          snprintf(v48, 0x80u, "%s", *(const char **)(v6 + 12));
          v10 = BUFX_strdup(v48);
          json_object_set_new(v7, "user", v10);
          v11 = *(unsigned __int8 *)(v6 + 1896);
          v35 = 0;
          v34 = 0;
          v36 = 0;
          if ( v11 )
            LOWORD(v12) = -8480;
          else
            LOWORD(v12) = -8472;
          HIWORD(v12) = 13;
          v13 = v12[1];
          v34 = *v12;
          if ( v11 )
            LOBYTE(v35) = v13;
          else
            LOWORD(v35) = v13;
          v14 = BUFX_strdup((char *)&v34);
          json_object_set_new(v7, "status", v14);
          v15 = json_integer(*(int *)(v6 + 4));
          json_object_set_new(v7, "priority", v15);
          v16 = json_integer(*(unsigned int *)(v6 + 1624));
          json_object_set_new(v7, "getworks", v16);
          v17 = json_integer(*(_QWORD *)(v6 + 1920));
          json_object_set_new(v7, "accepted", v17);
          v18 = json_integer(*(_QWORD *)(v6 + 1928));
          json_object_set_new(v7, "rejected", v18);
          v19 = json_integer(*(unsigned int *)(v6 + 1936));
          json_object_set_new(v7, "discarded", v19);
          v20 = json_integer(*(unsigned int *)(v6 + 1632));
          json_object_set_new(v7, "stale", v20);
          *(_DWORD *)v37 = 0;
          v38 = 0;
          v39 = 0;
          v40 = 0;
          snprintf(v37, 0x10u, "%s", (const char *)(v6 + 1968));
          v21 = BUFX_strdup(v37);
          json_object_set_new(v7, "diff", v21);
          v22 = json_integer(*(_QWORD *)(v6 + 1984));
          json_object_set_new(v7, "diff1", v22);
          v23 = json_real();
          json_object_set_new(v7, "diffa", v23);
          v24 = json_integer((__int64)*(double *)(v6 + 1960));
          json_object_set_new(v7, "diffr", v24);
          v25 = json_integer((__int64)*(double *)(v6 + 1808));
          json_object_set_new(v7, "diffs", v25);
          v26 = json_integer((__int64)*(double *)(v6 + 1616));
          json_object_set_new(v7, "lsdiff", v26);
          v27 = *(_DWORD *)(v6 + 1608);
          *(_DWORD *)v41 = 0;
          v42 = 0;
          v28 = v27 <= 0;
          v43 = 0;
          if ( v27 <= 0 )
            LOWORD(v27) = 48;
          v44 = 0;
          v45 = 0;
          v46 = 0;
          if ( v28 )
          {
            *(_WORD *)v41 = v27;
          }
          else
          {
            v29 = time(0) - *(_DWORD *)(v6 + 1608);
            snprintf(v41, 0x18u, "%d:%d:%d", v29 / 0xE10, v29 % 0xE10 / 0x3C, v29 % 0xE10 % 0x3C);
          }
          v30 = BUFX_strdup(v41);
          json_object_set_new(v7, "lstime", v30);
          json_array_append_new(v32, v7);
        }
        ++v5;
      }
      while ( (int)v5 < total_pools );
    }
    json_object_set_new(a1, "POOLS", v32);
    return 0;
  }
}
