int __fastcall work_2_packet_dash(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r4
  int v7; // r9
  int v8; // lr
  int v9; // r2
  int v10; // r0
  int v11; // r8
  int v12; // lr
  int v13; // r12
  _DWORD *v14; // r2
  int v15; // r8
  int v16; // lr
  int v17; // r12
  const void *v18; // r11
  int v19; // r12
  _BYTE *v20; // r2
  _BYTE *v21; // r3
  char v22; // r1
  int v23; // r4
  __int16 v24; // r0
  int v25; // r3
  int *v26; // r3
  int v27; // r2
  __int64 v28; // r0
  int v29; // r4
  int v30; // r3
  int v31; // r1
  int v33; // r3
  const char *v34; // r7
  int v35; // r1
  int v36; // r5
  int v37; // r6
  int v38; // t1
  int v39; // r3
  int v40; // r1
  int v41; // r1
  int v44; // [sp+1Ch] [bp-2010h]
  int v45; // [sp+20h] [bp-200Ch]
  char v46[4056]; // [sp+28h] [bp-2004h] BYREF
  _DWORD v47[2]; // [sp+1028h] [bp-1004h] BYREF
  char v48; // [sp+1030h] [bp-FFCh]
  char v49; // [sp+1031h] [bp-FFBh]
  __int16 v50; // [sp+1032h] [bp-FFAh]
  int v51; // [sp+1034h] [bp-FF8h]

  v5 = *(_DWORD *)(a1 + 800);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  if ( *(_DWORD *)(a1 + 468) == 1 )
    a3[2] = 48;
  v7 = *(unsigned __int8 *)(v5 + 21504);
  v8 = *(_DWORD *)(a2 + 120);
  *(_QWORD *)(v5 + 8 * v7) = *(_QWORD *)a2;
  v9 = 12 * (__int16)v7 + 19968;
  *(_DWORD *)(v5 + 4 * (v7 + 3840)) = v8;
  v44 = a2 + 8;
  v10 = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(v5 + v9) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(v5 + v9 + 4) = v10;
  v11 = *(_DWORD *)(a2 + 128);
  v12 = *(_DWORD *)(a2 + 132);
  v13 = *(_DWORD *)(a2 + 136);
  v14 = (_DWORD *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 21504) + 496));
  *v14 = *(_DWORD *)(a2 + 124);
  v14[1] = v11;
  v14[2] = v12;
  v14[3] = v13;
  v15 = *(_DWORD *)(a2 + 144);
  v16 = *(_DWORD *)(a2 + 148);
  v17 = *(_DWORD *)(a2 + 152);
  v14[4] = *(_DWORD *)(a2 + 140);
  v18 = (const void *)(a2 + 40);
  v14[6] = v16;
  v14[7] = v17;
  v14[5] = v15;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 21504) + 32)), (const char *)(a2 + 8));
  memcpy((void *)(v5 + 80 * *(unsigned __int8 *)(v5 + 21504) + 5120), (const void *)(a2 + 40), 0x50u);
  v19 = *(unsigned __int8 *)(v5 + 21504);
  *(_QWORD *)(v5 + 8 * (v19 + 2689)) = *(_QWORD *)(a2 + 168);
  a3[3] = v19;
  *(_BYTE *)(v5 + 21504) = (v19 + 1) & 0x7F;
  memcpy(a3 + 4, (const void *)(a2 + 40), 0x50u);
  v20 = a3;
  v21 = (_BYTE *)a2;
  do
  {
    v22 = v21[40];
    v21 += 4;
    v20[7] = v22;
    v20[6] = v21[37];
    v20[5] = v21[38];
    v20[4] = v21[39];
    v20 += 4;
  }
  while ( v21 != (_BYTE *)(a2 + 80) );
  v23 = memcmp(&last_header_dash, (const void *)(a2 + 40), 0x50u);
  if ( !v23 )
  {
    V_LOCK();
    LOWORD(v33) = -21168;
    HIWORD(v33) = (unsigned int)"ase_all_phy" >> 16;
    LOWORD(v34) = -20976;
    logfmt_raw((char *)v47, 0x1000u, 0, v33);
    V_UNLOCK();
    LOWORD(v35) = -17504;
    HIWORD(v35) = (unsigned int)"resp_num: %d, retry_time: %d" >> 16;
    v36 = a2 + 39;
    v37 = a2 + 119;
    zlog(g_zc, v35, 173, "work_2_packet_dash", 18, 126, 80, v47);
    v45 = (unsigned __int8)a3[3];
    do
    {
      v38 = *(unsigned __int8 *)++v36;
      HIWORD(v34) = (unsigned int)"hip_id:%d" >> 16;
      snprintf(&v46[v23], 4096 - v23, v34, v38);
      v23 += 3;
    }
    while ( v36 != v37 );
    V_LOCK();
    LOWORD(v39) = -17328;
    HIWORD(v39) = (unsigned int)"e parameter\n" >> 16;
    logfmt_raw((char *)v47, 0x1000u, 0, v39, v44, v45);
    V_UNLOCK();
    LOWORD(v40) = -17504;
    HIWORD(v40) = (unsigned int)"resp_num: %d, retry_time: %d" >> 16;
    zlog(g_zc, v40, 173, "dump_work_dash", 14, 76, 20, v47);
    V_LOCK();
    logfmt_raw((char *)v47, 0x1000u, 0, "dump work: %s", v46);
    V_UNLOCK();
    LOWORD(v41) = -17504;
    HIWORD(v41) = (unsigned int)"resp_num: %d, retry_time: %d" >> 16;
    zlog(g_zc, v41, 173, "dump_work_dash", 14, 77, 20, v47);
  }
  memcpy(&last_header_dash, v18, 0x50u);
  v24 = BM_CRC16(a3 + 2, 82);
  a3[85] = v24;
  a3[84] = HIBYTE(v24);
  v25 = *(unsigned __int8 *)(a1 + 237);
  *a4 = 86;
  if ( v25 && *(_BYTE *)(a1 + 238) )
  {
    sub_6664C((int *)a1, 35);
    *(_BYTE *)(a1 + 237) = 0;
  }
  LOWORD(v26) = 8464;
  HIWORD(v26) = (unsigned int)&unk_1835D0 >> 16;
  v27 = *v26;
  v28 = 3435973837LL * (unsigned int)(*v26)++;
  v29 = v27 - 20 * (HIDWORD(v28) >> 4);
  if ( v27 == 20 * (HIDWORD(v28) >> 4) )
  {
    sub_661F8(a1, 20, 65280);
    V_LOCK();
    LOWORD(v30) = -20912;
    HIWORD(v30) = (unsigned int)&unk_14C92C >> 16;
    logfmt_raw((char *)v47, 0x1000u, v29, v30, "ChipSetting_bridge_reset_DASH_1766", 68);
    V_UNLOCK();
    LOWORD(v31) = -21384;
    HIWORD(v31) = (unsigned int)"" >> 16;
    zlog(g_zc, v31, 150, "ChipSetting_bridge_reset_DASH_1766", 34, 112, 20, v47);
    v47[1] = v29;
    v49 = BYTE1(v29);
    v51 = v29;
    v50 = 68;
    v48 = 1;
    v47[0] = 2;
    (*(void (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v47);
    usleep(0x64u);
  }
  return 0;
}
