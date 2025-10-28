int __fastcall chip_speed_test(_DWORD *a1)
{
  float *v1; // r7
  void (__fastcall *v2)(_DWORD *, int *); // r3
  int v4; // r3
  int v5; // r3
  int v6; // r1
  int v7; // r3
  float v8; // s15
  int v9; // r2
  int v10; // r12
  int v11; // r7
  int v12; // r8
  unsigned int v13; // s15
  _DWORD *v14; // r1
  unsigned int v15; // r10
  unsigned int v16; // t1
  int v17; // lr
  bool v18; // zf
  char *v19; // r10
  int v20; // r3
  int v21; // r5
  int v22; // r2
  int *v23; // r1
  int v24; // t1
  int v26; // r3
  int v27; // r3
  int v28; // r1
  int *v29; // r3
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r3
  const char *v34; // r11
  int *v35; // r7
  int v36; // r8
  int v37; // r9
  int v38; // t1
  int v39; // r3
  int v40; // r3
  int v41; // r1
  int *v42; // r3
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // [sp+10h] [bp+0h] BYREF
  int v48; // [sp+14h] [bp+4h] BYREF
  unsigned __int8 v49; // [sp+1Ah] [bp+Ah]
  _BYTE v50[64]; // [sp+20h] [bp+10h] BYREF
  int v51; // [sp+60h] [bp+50h] BYREF
  int v52; // [sp+64h] [bp+54h]
  int v53; // [sp+68h] [bp+58h]
  char v54; // [sp+6Ch] [bp+5Ch]
  char v55[4100]; // [sp+460h] [bp+450h] BYREF

  v2 = (void (__fastcall *)(_DWORD *, int *))a1[37];
  *v1 = 0.0;
  v2(a1, &v47);
  *v1 = *v1 * 120.0;
  V_LOCK();
  LOWORD(v4) = -31348;
  HIWORD(v4) = (unsigned int)"il/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
  logfmt_raw(v55, 0x1000u, 0, v4, *v1);
  V_UNLOCK();
  LOWORD(v5) = -31364;
  LOWORD(v6) = -31324;
  HIWORD(v5) = (unsigned int)"ner-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
  HIWORD(v6) = (unsigned int)"miner_status/update_fanspeed.c" >> 16;
  zlog(g_zc, v6, 193, v5, 15, 35, 20, v55);
  get_miner_working_status((int)&v48);
  v7 = v49;
  if ( v49 )
  {
    V_LOCK();
    LOWORD(v26) = -31128;
    HIWORD(v26) = (unsigned int)"lease/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c" >> 16;
    logfmt_raw(v55, 0x1000u, 0, v26);
    V_UNLOCK();
    LOWORD(v27) = -31364;
    LOWORD(v28) = -31324;
    HIWORD(v27) = (unsigned int)"ner-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
    HIWORD(v28) = (unsigned int)"miner_status/update_fanspeed.c" >> 16;
    zlog(g_zc, v28, 193, v27, 15, 43, 20, v55);
    return 0;
  }
  else
  {
    if ( (int)a1[88] <= 0 )
    {
      if ( (int)a1[135] >= 0 )
        return 0;
      LOWORD(v42) = -31068;
      HIWORD(v42) = (unsigned int)"in_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c" >> 16;
      v43 = *v42;
      v44 = v42[1];
      v45 = v42[2];
      v46 = v42[3];
      v51 = v43;
      v52 = v44;
      v53 = v45;
      v54 = v46;
    }
    else
    {
      v8 = *v1;
      v9 = v49;
      v10 = v49;
      v11 = a1[136];
      v12 = v49;
      v13 = (unsigned int)v8;
      v14 = (_DWORD *)(a1[124] - 4);
      do
      {
        v16 = v14[1];
        ++v14;
        v15 = v16;
        v17 = v11 + v7;
        if ( v16 < v13 )
        {
          v18 = v15 == 0;
          v19 = &v55[4 * (v10++ & 0xF)];
          if ( v18 )
          {
            *((_DWORD *)v19 - 272) = v9;
            *(_DWORD *)(v17 + 16) = 2;
          }
          else
          {
            *(_DWORD *)(v17 + 16) = 3;
            *((_DWORD *)v19 - 272) = v9;
          }
        }
        else
        {
          *(_DWORD *)(v17 + 16) = v12;
        }
        *v14 = v12;
        ++v9;
        v7 += 44;
      }
      while ( a1[88] > v9 );
      v20 = a1[135];
      if ( v10 >= 16 )
        v21 = 16;
      else
        v21 = v10;
      if ( v20 >= v10 )
      {
        if ( v10 > 0 )
        {
          v22 = 0;
          v23 = (int *)v50;
          do
          {
            v24 = *v23++;
            ++v22;
            *(_DWORD *)(v11 + 44 * v24 + 16) = 0;
          }
          while ( v22 < v21 );
        }
        return 0;
      }
      LOWORD(v29) = -31068;
      HIWORD(v29) = (unsigned int)"in_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c" >> 16;
      v30 = *v29;
      v31 = v29[1];
      v32 = v29[2];
      v33 = v29[3];
      v51 = v30;
      v52 = v31;
      v53 = v32;
      v54 = v33;
      if ( v10 > 0 )
      {
        LOWORD(v34) = -31052;
        v35 = (int *)v50;
        v36 = 12;
        v37 = 0;
        do
        {
          ++v37;
          v38 = *v35++;
          HIWORD(v34) = (unsigned int)"miner_util/miner_monitor/update_miner_status/update_hashrate.c" >> 16;
          v36 += snprintf((char *)&v51 + v36, 1024 - v36, v34, v38);
        }
        while ( v37 < v21 );
      }
    }
    V_LOCK();
    LOWORD(v39) = -27176;
    HIWORD(v39) = (unsigned int)"d" >> 16;
    logfmt_raw(v55, 0x1000u, 0, v39, &v51);
    V_UNLOCK();
    LOWORD(v40) = -31364;
    LOWORD(v41) = -31324;
    HIWORD(v40) = (unsigned int)"ner-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
    HIWORD(v41) = (unsigned int)"miner_status/update_fanspeed.c" >> 16;
    zlog(g_zc, v41, 193, v40, 15, 109, 40, v55);
    return 0;
  }
}
