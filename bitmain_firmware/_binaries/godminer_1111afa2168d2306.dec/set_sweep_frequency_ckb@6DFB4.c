int __fastcall set_sweep_frequency_ckb(int a1, float *a2)
{
  float v2; // s0
  float v5; // s22
  int domain_asic_num; // r0
  int v7; // r1
  float v8; // s15
  float *v9; // r1
  float *v10; // r3
  float *v11; // r2
  float v12; // s14
  int v13; // r3
  char *v14; // r1
  int v15; // r0
  float v16; // s23
  float *v17; // r9
  int v18; // r7
  float *v19; // r6
  float v20; // s15
  bool v21; // fzf
  bool v22; // fnf
  float v23; // s16
  int v24; // r3
  char v25; // r3
  int v26; // r3
  int v27; // r3
  const char *v28; // r7
  float *v29; // r6
  int v30; // r5
  float v31; // s14
  int v32; // r2
  int v34; // [sp+4h] [bp-12D8h]
  int v35; // [sp+20h] [bp-12BCh]
  int v36; // [sp+24h] [bp-12B8h]
  char v37; // [sp+3Ch] [bp-12A0h]
  int v38; // [sp+40h] [bp-129Ch]
  int chain_domain_num; // [sp+44h] [bp-1298h]
  float *v40; // [sp+50h] [bp-128Ch]
  int i; // [sp+54h] [bp-1288h]
  char *v42; // [sp+58h] [bp-1284h]
  int v43; // [sp+5Ch] [bp-1280h]
  int v44; // [sp+60h] [bp-127Ch]
  int v45; // [sp+64h] [bp-1278h]
  int v46; // [sp+68h] [bp-1274h]
  unsigned int v48; // [sp+74h] [bp-1268h] BYREF
  _DWORD v49[7]; // [sp+78h] [bp-1264h] BYREF
  int v50; // [sp+94h] [bp-1248h]
  _DWORD v51[16]; // [sp+98h] [bp-1244h] BYREF
  _DWORD v52[128]; // [sp+D8h] [bp-1204h] BYREF
  char s[4100]; // [sp+2D8h] [bp-1004h] BYREF

  v5 = *(float *)(a1 + 996);
  chain_domain_num = platform_get_chain_domain_num();
  domain_asic_num = platform_get_domain_asic_num();
  v7 = *(_DWORD *)(a1 + 352);
  v44 = domain_asic_num;
  v8 = 0.0;
  if ( v7 )
  {
    v9 = &a2[v7];
    v10 = a2;
    v11 = (float *)v52;
    do
    {
      v12 = *v10++;
      *v11++ = v5;
      if ( v12 > v8 )
        v8 = v12;
    }
    while ( v10 != v9 );
  }
  v13 = (int)(((float)((float)(v8 - v5) + v2) - 0.001) / v2);
  if ( v13 > 0 )
  {
    v46 = v13 + 1;
    LOWORD(v14) = 27796;
    LOWORD(v15) = -21144;
    HIWORD(v14) = (unsigned int)"%1.f" >> 16;
    HIWORD(v15) = (unsigned int)"66" >> 16;
    v42 = v14;
    v38 = 4 * v44;
    v45 = 1;
    v43 = v15;
    do
    {
      if ( v44 <= 0 )
      {
        v16 = (float)v45;
      }
      else
      {
        v16 = (float)v45;
        v40 = a2;
        for ( i = 0; i != v44; ++i )
        {
          if ( chain_domain_num > 0 )
          {
            v17 = v40;
            v18 = 0;
            v19 = (float *)&v52[i];
            v37 = i;
            do
            {
              v20 = *v17;
              ++v18;
              v21 = *v17 == *v19;
              v22 = *v17 < *v19;
              v17 = (float *)((char *)v17 + v38);
              if ( !v22 && !v21 )
              {
                v23 = v5 + (float)(v16 * v2);
                v24 = *(_DWORD *)(a1 + 444);
                v51[2] = 0x80000;
                v51[0] = 0;
                v25 = v24 * v37;
                v51[1] = 0;
                v51[3] = 0;
                if ( v20 < v23 )
                  v23 = v20;
                BYTE1(v51[2]) = v25;
                v48 = 0;
                sub_6A174(&v48);
                v51[0] = v48;
                V_LOCK();
                V_INT((int)v49, v42, *(int *)(a1 + 256));
                logfmt_raw(
                  s,
                  0x1000u,
                  0,
                  v50,
                  v49[0],
                  v49[1],
                  v49[2],
                  v49[3],
                  v49[4],
                  v49[5],
                  v49[6],
                  v50,
                  v43,
                  v36,
                  v23,
                  v23);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/chip_setting.c",
                  150,
                  "ChipSetting_one_asic_freq_CKB_2042",
                  34,
                  835,
                  20,
                  s);
                (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v51);
                usleep(0x2710u);
                *v19 = v23;
              }
              v37 += v44;
              v19 = (float *)((char *)v19 + v38);
            }
            while ( chain_domain_num != v18 );
          }
          ++v40;
        }
      }
      V_LOCK();
      LOWORD(v26) = -21108;
      HIWORD(v26) = (unsigned int)"Setting_analog_mux_DASH_1766" >> 16;
      v35 = v45++;
      logfmt_raw(s, 0x1000u, 0, v26, *(_DWORD *)(a1 + 248), v34, (float)(v5 + (float)(v16 * v2)), v5, v2, v35);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
        171,
        "set_sweep_frequency_ckb",
        23,
        437,
        20,
        s);
    }
    while ( v45 != v46 );
  }
  memset(s, 0, 0x1000u);
  memset(v51, 0, sizeof(v51));
  if ( v44 * chain_domain_num > 0 )
  {
    LOWORD(v28) = -10580;
    v29 = (float *)v52;
    v30 = 0;
    do
    {
      v31 = *v29++;
      v32 = v30;
      HIWORD(v28) = (unsigned int)"error!, pls check it" >> 16;
      ++v30;
      sprintf((char *)v51, v28, v32, v27, v31);
      strcat(s, (const char *)v51);
    }
    while ( v30 != v44 * chain_domain_num );
  }
  puts(s);
  usleep(0x7A120u);
  return 0;
}
