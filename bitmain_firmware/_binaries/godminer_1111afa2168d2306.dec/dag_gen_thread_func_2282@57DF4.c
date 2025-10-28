void __noreturn dag_gen_thread_func_2282()
{
  int v0; // r6
  int v1; // r7
  int v2; // r8
  int v3; // r9
  int v4; // r11
  int epoch_number_eth_2282; // r6
  int v6; // r3
  void **v7; // r7
  signed int i; // r6
  void (**v9)(void); // t1
  __int64 v10; // r6
  int v11; // r3
  int v12; // r3
  signed int *v13; // r1
  int v14; // r3
  unsigned int v15; // r2
  signed int v16; // t1
  pthread_t *v17; // r0
  pthread_t *v18; // r9
  void **v19; // r8
  pthread_t *v20; // r7
  signed int v21; // r6
  _DWORD *v22; // t1
  pthread_t *v23; // r0
  char *v24; // r7
  signed int j; // r6
  pthread_t v26; // t1
  int v27; // r3
  pthread_t *v28; // r0
  pthread_t *v29; // r9
  void **v30; // r8
  pthread_t *v31; // r7
  signed int k; // r6
  void *(**v33)(void *); // t1
  pthread_t *v34; // r0
  char *v35; // r7
  signed int m; // r6
  pthread_t v37; // t1
  int v38; // [sp+4h] [bp-1098h]
  int v39; // [sp+1Ch] [bp-1080h]
  __int64 v40; // [sp+28h] [bp-1074h]
  void **v41; // [sp+30h] [bp-106Ch]
  int v42; // [sp+34h] [bp-1068h]
  int v43; // [sp+38h] [bp-1064h]
  int v44; // [sp+3Ch] [bp-1060h]
  signed int v45; // [sp+44h] [bp-1058h] BYREF
  _DWORD s[8]; // [sp+48h] [bp-1054h] BYREF
  _QWORD v47[6]; // [sp+68h] [bp-1034h] BYREF
  char v48[4100]; // [sp+98h] [bp-1004h] BYREF

  LOWORD(v4) = -7328;
  LOWORD(v0) = 25416;
  LOWORD(v1) = -23736;
  LOWORD(v2) = -7152;
  LOWORD(v3) = 25360;
  HIWORD(v4) = (unsigned int)"size %llx, dag size %llx" >> 16;
  v45 = 0;
  HIWORD(v1) = (unsigned int)&unk_15A510 >> 16;
  HIWORD(v2) = (unsigned int)"miner_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/dhash_content/hns/hns_2130/hns_2130_content.c" >> 16;
  HIWORD(v3) = (unsigned int)&unk_1564D8 >> 16;
  HIWORD(v0) = (unsigned int)&unk_156510 >> 16;
  v43 = v0;
  v41 = (void **)((char *)get_all_created_runtime(&v45) - 4);
  v44 = v1;
  v42 = v2;
  v39 = v3;
  while ( 1 )
  {
    while ( 1 )
    {
      memset(s, 0, sizeof(s));
      get_cur_seed_2282(s);
      epoch_number_eth_2282 = get_epoch_number_eth_2282(s);
      if ( dword_193708 == epoch_number_eth_2282 )
        break;
      V_LOCK();
      logfmt_raw(v48, 0x1000u, 0, "cur_epoch-epoch [%d-%d]", dword_193708, epoch_number_eth_2282);
      V_UNLOCK();
      zlog(g_zc, v4, 174, v39, 24, 194, 40, v48);
      if ( !epoch_number_eth_2282 )
        goto LABEL_8;
      if ( dword_193708 != epoch_number_eth_2282 )
      {
        if ( dword_193708 <= epoch_number_eth_2282 )
        {
          dword_193708 = epoch_number_eth_2282;
          V_LOCK();
          LOWORD(v6) = -7008;
          HIWORD(v6) = (unsigned int)"_work_kda_2110" >> 16;
          logfmt_raw(v48, 0x1000u, 0, v6);
          V_UNLOCK();
          zlog(g_zc, v4, 174, v39, 24, 211, 60, v48);
          if ( v45 > 0 )
          {
            v7 = v41;
            for ( i = 0; i < v45; ++i )
            {
              v9 = (void (**)(void))v7[1];
              ++v7;
              v9[6]();
            }
          }
          v40 = *(_QWORD *)(v43 + 8 * dword_193708);
          v10 = *(_QWORD *)(v44 + 8 * dword_193708);
          V_LOCK();
          LOWORD(v11) = -6960;
          HIWORD(v11) = (unsigned int)"once2_size: %d, private->xnonce2_len:%d" >> 16;
          logfmt_raw(v48, 0x1000u, 0, v11);
          V_UNLOCK();
          zlog(g_zc, v4, 174, v39, 24, 220, 60, v48);
          V_LOCK();
          LOWORD(v12) = -6892;
          HIWORD(v12) = (unsigned int)"orkspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/dhash_content/kda/kda_2110/kda_2110_content.c" >> 16;
          logfmt_raw(v48, 0x1000u, 0, v12, dword_193708, v38, v40, v10);
          V_UNLOCK();
          zlog(g_zc, v4, 174, v39, 24, 222, 60, v48);
          v13 = &v45;
          v14 = 0;
          v47[0] = v40;
          v47[1] = v10;
          do
          {
            v15 = v14 & 0xFFFFFFFC;
            v16 = v13[1];
            ++v13;
            v14 += 4;
            *(_DWORD *)((char *)&v47[2] + v15) = v16;
          }
          while ( v14 != 32 );
          v17 = (pthread_t *)calloc(v45, 4u);
          v18 = v17;
          if ( v45 > 0 )
          {
            v19 = v41;
            v20 = v17;
            v21 = 0;
            do
            {
              v22 = v19[1];
              ++v19;
              v23 = v20;
              ++v21;
              ++v20;
              v22[257] = v47;
              pthread_create(v23, 0, *((void *(**)(void *))*v19 + 59), *v19);
            }
            while ( v45 > v21 );
            if ( v45 > 0 )
            {
              v24 = (char *)(v18 - 1);
              for ( j = 0; j < v45; ++j )
              {
                v26 = *((_DWORD *)v24 + 1);
                v24 += 4;
                pthread_join(v26, 0);
              }
            }
          }
          free(v18);
          V_LOCK();
          LOWORD(v27) = -6844;
          HIWORD(v27) = (unsigned int)"root/tmp/release/build/godminer-origin_godminer-new/dhash_content/kda/kda_2110/kda_2110_content.c" >> 16;
          logfmt_raw(v48, 0x1000u, 0, v27);
          V_UNLOCK();
          zlog(g_zc, v4, 174, v39, 24, 248, 60, v48);
          v28 = (pthread_t *)calloc(v45, 4u);
          v29 = v28;
          if ( v45 > 0 )
          {
            v30 = v41;
            v31 = v28;
            for ( k = 0; k < v45; ++k )
            {
              v33 = (void *(**)(void *))v30[1];
              ++v30;
              v34 = v31++;
              pthread_create(v34, 0, v33[7], v33);
            }
            if ( v45 > 0 )
            {
              v35 = (char *)(v29 - 1);
              for ( m = 0; m < v45; ++m )
              {
                v37 = *((_DWORD *)v35 + 1);
                v35 += 4;
                pthread_join(v37, 0);
              }
            }
          }
          free(v29);
        }
        else
        {
          V_LOCK();
          logfmt_raw(
            v48,
            0x1000u,
            0,
            "cur_epoch-epoch [%d-%d], only etc mining support, sorry...",
            dword_193708,
            epoch_number_eth_2282);
          V_UNLOCK();
          zlog(g_zc, v4, 174, v39, 24, 206, 40, v48);
        }
      }
    }
    if ( !dword_193708 )
    {
LABEL_8:
      V_LOCK();
      logfmt_raw(v48, 0x1000u, 0, v42, dword_193708, 0);
      V_UNLOCK();
      zlog(g_zc, v4, 174, v39, 24, 197, 40, v48);
    }
  }
}
