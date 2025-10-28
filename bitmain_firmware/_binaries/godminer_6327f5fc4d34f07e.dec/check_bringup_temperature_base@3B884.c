int __fastcall check_bringup_temperature_base(int a1)
{
  int *all_created_runtime; // r11
  int v2; // r8
  int *v3; // r3
  int v4; // t1
  int v5; // r2
  int v6; // r5
  char *v7; // r7
  char *v8; // r10
  int v9; // r4
  int v10; // t1
  int *v11; // r10
  int v12; // r12
  int v13; // r9
  int v14; // r7
  char *v15; // r3
  int *v16; // r2
  int v17; // r0
  int v18; // r1
  int v19; // r4
  char *v20; // r10
  int v21; // r7
  int v22; // r5
  int *v23; // r4
  int v24; // r3
  __int64 v25; // r0
  int v26; // r3
  bool v27; // cc
  int result; // r0
  __int64 v29; // r0
  int v30; // r2
  int v31; // r0
  int *v32; // r3
  int v33; // r2
  int *v34; // r7
  int v35; // r1
  int v36; // t1
  int v37; // [sp+0h] [bp-12A4h] BYREF
  int v38; // [sp+24h] [bp-1280h]
  int v39; // [sp+28h] [bp-127Ch]
  void *ptr; // [sp+2Ch] [bp-1278h]
  int v41; // [sp+30h] [bp-1274h]
  int v42; // [sp+34h] [bp-1270h]
  int v43; // [sp+38h] [bp-126Ch]
  char *s; // [sp+3Ch] [bp-1268h]
  const char *v45; // [sp+40h] [bp-1264h]
  int *v46; // [sp+44h] [bp-1260h]
  int v47; // [sp+48h] [bp-125Ch]
  int v48; // [sp+4Ch] [bp-1258h]
  int v49; // [sp+50h] [bp-1254h]
  int v50; // [sp+54h] [bp-1250h]
  int v51; // [sp+5Ch] [bp-1248h] BYREF
  _DWORD v52[7]; // [sp+60h] [bp-1244h] BYREF
  int v53; // [sp+7Ch] [bp-1228h]
  _DWORD v54[7]; // [sp+80h] [bp-1224h] BYREF
  int v55; // [sp+9Ch] [bp-1208h]
  _DWORD v56[64]; // [sp+A0h] [bp-1204h] BYREF
  _DWORD v57[64]; // [sp+1A0h] [bp-1104h] BYREF
  char v58[4100]; // [sp+2A0h] [bp-1004h] BYREF

  v49 = a1;
  v51 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v51);
  if ( v51 > 0 )
  {
    v3 = all_created_runtime;
    v2 = 256;
    do
    {
      v4 = *v3++;
      v5 = *(_DWORD *)(v4 + 340);
      if ( v2 >= v5 )
        v2 = v5;
    }
    while ( v3 != &all_created_runtime[v51] );
    if ( v2 == 256 )
      v2 = 2;
  }
  else
  {
    v2 = 2;
  }
  ptr = calloc(v51 * v2, 8u);
  if ( !ptr )
  {
    printf("invalid pointer(%s)!\n", "sensor_status");
    return 3;
  }
  v6 = v51;
  if ( v51 > 0 )
  {
    v7 = (char *)ptr;
    v8 = (char *)(all_created_runtime - 1);
    v9 = 0;
    do
    {
      v10 = *((_DWORD *)v8 + 1);
      v8 += 4;
      ++v9;
      v7 += 8 * v2;
      (*(void (**)(void))(v10 + 184))();
      v6 = v51;
    }
    while ( v51 > v9 );
  }
  if ( v2 <= 0 )
  {
    if ( v6 != 1 )
    {
      v14 = 0;
      v13 = 8 * v2;
      v41 = 0;
LABEL_26:
      if ( v51 > 0 )
      {
        v20 = (char *)ptr;
        v47 = v14;
        v21 = 0;
        s = "chain";
        v43 = 0;
        v42 = 0;
        v45 = "sensor_addr %02x, J0:6";
        v46 = &g_zc;
        v39 = 255;
        v50 = v13;
        while ( v2 <= 0 )
        {
LABEL_37:
          ++v21;
          v20 += v50;
          if ( v51 <= v21 )
            goto LABEL_38;
        }
        v22 = 0;
        v23 = (int *)(*(_DWORD *)(all_created_runtime[v21] + 332) + 20);
        while ( 1 )
        {
          while ( 1 )
          {
            v24 = *(v23 - 2);
            if ( v24 )
              break;
            LODWORD(v25) = v56;
            HIDWORD(v25) = v47;
            if ( !check_value_valid_with_stdd(v25, *(_DWORD *)&v20[8 * v22]) )
            {
              V_LOCK();
              V_INT((int)v52, s, *(int *)(all_created_runtime[v21] + 200));
              v38 = *v23;
              v48 = (int)&v37;
              logfmt_raw(v58, 0x1000u, 0, v53, v52[0], v52[1], v52[2], v52[3], v52[4], v52[5], v52[6], v53, v45, v38);
              V_UNLOCK();
              v30 = 189;
              v31 = *v46;
LABEL_49:
              zlog(
                v31,
                "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                166,
                "check_bringup_temperature_base",
                30,
                v30,
                100,
                v58);
              goto LABEL_31;
            }
            v23 += 6;
            v26 = *(_DWORD *)&v20[8 * v22++];
            ++v42;
            if ( v39 < v26 )
              v26 = v39;
            v39 = v26;
            if ( v2 == v22 )
              goto LABEL_37;
          }
          if ( v24 == 1 )
          {
            LODWORD(v29) = v57;
            HIDWORD(v29) = v41;
            v48 = check_value_valid_with_stdd(v29, *(_DWORD *)&v20[8 * v22]);
            if ( !v48 )
            {
              V_LOCK();
              V_INT((int)v54, s, *(int *)(all_created_runtime[v21] + 200));
              logfmt_raw(v58, 0x1000u, v48, v55, v54[0], v54[1], v54[2], v54[3], v54[4], v54[5], v54[6], v55, v45, *v23);
              V_UNLOCK();
              v30 = 197;
              v31 = *v46;
              goto LABEL_49;
            }
            ++v43;
          }
LABEL_31:
          ++v22;
          v23 += 6;
          if ( v2 == v22 )
            goto LABEL_37;
        }
      }
      free(ptr);
LABEL_58:
      V_LOCK();
      logfmt_raw(v58, 0x1000u, 0, "J0:6, temp sensor error, pls check it, and reboot system");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "check_bringup_temperature_base",
        30,
        209,
        100,
        v58);
      while ( 1 )
        ;
    }
  }
  else
  {
    v11 = (int *)ptr;
    v12 = 0;
    v13 = 8 * v2;
    v41 = 0;
    v14 = 0;
    v39 = (int)ptr + 8 * v2;
    do
    {
      if ( v6 > 0 )
      {
        v15 = (char *)all_created_runtime;
        v16 = v11;
        do
        {
          v17 = *v16;
          if ( *v16 != -64 )
          {
            v18 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v15 + 332) + v12 + 12);
            if ( v18 )
            {
              if ( v18 == 1 )
              {
                v19 = v41;
                v57[v41] = v17;
                v41 = v19 + 1;
              }
            }
            else
            {
              v56[v14++] = v17;
            }
          }
          v15 += 4;
          v16 = (int *)((char *)v16 + v13);
        }
        while ( &all_created_runtime[v6] != (int *)v15 );
      }
      v11 += 2;
      v12 += 24;
    }
    while ( (int *)v39 != v11 );
    if ( v6 != 1 )
      goto LABEL_26;
    if ( v14 )
    {
      v32 = v56;
      v33 = 255;
      v34 = &v56[v14];
      do
      {
        v36 = *v32++;
        v35 = v36;
        if ( v33 >= v36 )
          v33 = v35;
      }
      while ( v34 != v32 );
      v39 = v33;
      goto LABEL_38;
    }
  }
  v39 = 255;
LABEL_38:
  free(ptr);
  v27 = v43 <= 0;
  if ( v43 > 0 )
    v27 = v42 <= 0;
  result = v27;
  if ( v27 )
    goto LABEL_58;
  *(_DWORD *)(v49 + 68) = v39;
  return result;
}
