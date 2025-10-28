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
  int v26; // r2
  __int64 v27; // r0
  int v28; // r4
  int v29; // r3
  int v30; // r1
  int v32; // r3
  const char *v33; // r7
  int v34; // r1
  int v35; // r5
  int v36; // r6
  int v37; // t1
  int v38; // r3
  int v39; // r1
  int v40; // r1
  int v43; // [sp+1Ch] [bp-2010h]
  int v44; // [sp+20h] [bp-200Ch]
  char v45[4056]; // [sp+28h] [bp-2004h] BYREF
  _DWORD v46[2]; // [sp+1028h] [bp-1004h] BYREF
  char v47; // [sp+1030h] [bp-FFCh]
  char v48; // [sp+1031h] [bp-FFBh]
  __int16 v49; // [sp+1032h] [bp-FFAh]
  int v50; // [sp+1034h] [bp-FF8h]

  v5 = *(_DWORD *)(a1 + 840);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  if ( *(_DWORD *)(a1 + 508) == 1 )
    a3[2] = 48;
  v7 = *(unsigned __int8 *)(v5 + 21504);
  v8 = *(_DWORD *)(a2 + 120);
  *(_QWORD *)(v5 + 8 * v7) = *(_QWORD *)a2;
  v9 = 12 * (__int16)v7 + 19968;
  *(_DWORD *)(v5 + 4 * (v7 + 3840)) = v8;
  v43 = a2 + 8;
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
    LOWORD(v32) = -23160;
    HIWORD(v32) = (unsigned int)"p %02x, core %02x, reg %02x, clk_delay %08x" >> 16;
    LOWORD(v33) = -29500;
    logfmt_raw((char *)v46, 0x1000u, 0, v32);
    V_UNLOCK();
    LOWORD(v34) = -19376;
    HIWORD(v34) = (unsigned int)": %02x%02x%02x%02x chipid:%d coreid:%d" >> 16;
    v35 = a2 + 39;
    v36 = a2 + 119;
    zlog(g_zc, v34, 173, "work_2_packet_dash", 18, 126, 80, v46);
    v44 = (unsigned __int8)a3[3];
    do
    {
      v37 = *(unsigned __int8 *)++v35;
      HIWORD(v33) = (unsigned int)"hain" >> 16;
      snprintf(&v45[v23], 4096 - v23, v33, v37);
      v23 += 3;
    }
    while ( v35 != v36 );
    V_LOCK();
    LOWORD(v38) = -19200;
    HIWORD(v38) = (unsigned int)"ddr %02x data %d" >> 16;
    logfmt_raw((char *)v46, 0x1000u, 0, v38, v43, v44);
    V_UNLOCK();
    LOWORD(v39) = -19376;
    HIWORD(v39) = (unsigned int)": %02x%02x%02x%02x chipid:%d coreid:%d" >> 16;
    zlog(g_zc, v39, 173, "dump_work_dash", 14, 76, 20, v46);
    V_LOCK();
    logfmt_raw((char *)v46, 0x1000u, 0, "dump work: %s", v45);
    V_UNLOCK();
    LOWORD(v40) = -19376;
    HIWORD(v40) = (unsigned int)": %02x%02x%02x%02x chipid:%d coreid:%d" >> 16;
    zlog(g_zc, v40, 173, "dump_work_dash", 14, 77, 20, v46);
  }
  memcpy(&last_header_dash, v18, 0x50u);
  v24 = BM_CRC16(a3 + 2, 82);
  a3[85] = v24;
  a3[84] = HIBYTE(v24);
  v25 = *(unsigned __int8 *)(a1 + 264);
  *a4 = 86;
  if ( v25 && *(_BYTE *)(a1 + 265) )
  {
    sub_6F3AC((int *)a1, 35);
    *(_BYTE *)(a1 + 264) = 0;
  }
  v26 = dword_1A3DB8;
  v27 = 3435973837LL * (unsigned int)dword_1A3DB8++;
  v28 = v26 - 20 * (HIDWORD(v27) >> 4);
  if ( v26 == 20 * (HIDWORD(v27) >> 4) )
  {
    sub_6EF58(a1, 20, 65280);
    V_LOCK();
    LOWORD(v29) = -22912;
    HIWORD(v29) = (unsigned int)"Pass" >> 16;
    logfmt_raw((char *)v46, 0x1000u, v28, v29, "ChipSetting_bridge_reset_DASH_1766", 68);
    V_UNLOCK();
    LOWORD(v30) = -23376;
    HIWORD(v30) = (unsigned int)"k: %s" >> 16;
    zlog(g_zc, v30, 150, "ChipSetting_bridge_reset_DASH_1766", 34, 167, 20, v46);
    v46[1] = v28;
    v48 = BYTE1(v28);
    v50 = v28;
    v49 = 68;
    v47 = 1;
    v46[0] = 2;
    (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v46);
    usleep(0x64u);
  }
  return 0;
}
