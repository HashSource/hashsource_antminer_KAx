int __fastcall work_2_packet_hns(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v7; // r5
  const char *v9; // r1
  _DWORD *v10; // r8
  int v11; // r12
  int v12; // r2
  _DWORD *v13; // r1
  _DWORD *v14; // r0
  _DWORD *v15; // r3
  int v16; // r11
  int v17; // r10
  int v18; // lr
  int v19; // r12
  int v20; // r12
  int v21; // r11
  int v22; // r10
  char v23; // r12
  __int16 v24; // r0
  int v25; // r3
  char v27[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = *(_DWORD *)(a1 + 760);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v9 = (const char *)(a2 + 2);
  v10 = a2 + 10;
  if ( *(_DWORD *)(a1 + 436) == 1 )
    a3[2] = 48;
  v11 = *(unsigned __int8 *)(v7 + 42496);
  *(_QWORD *)(v7 + 8 * v11) = *((_QWORD *)v9 - 1);
  strcpy((char *)(v7 + 32 * (v11 + 32)), v9);
  v12 = *(unsigned __int8 *)(v7 + 42496);
  v13 = a2 + 10;
  *(_DWORD *)(v7 + 4 * (v12 + 9472)) = a2[74];
  v14 = (_DWORD *)(v7 + 32 * (v12 + 1200));
  v15 = a2 + 75;
  v16 = a2[75];
  v17 = a2[76];
  v18 = v15[2];
  v19 = v15[3];
  *v14 = v16;
  v14[1] = v17;
  v14[2] = v18;
  v14[3] = v19;
  v20 = v15[7];
  v21 = v15[4];
  v22 = v15[5];
  v14[6] = v15[6];
  v14[7] = v20;
  v14[4] = v21;
  v14[5] = v22;
  memcpy((void *)(v7 + ((*(unsigned __int8 *)(v7 + 42496) + 20) << 8)), v13, 0x100u);
  v23 = *(_BYTE *)(v7 + 42496);
  a3[3] = v23;
  *(_BYTE *)(v7 + 42496) = (v23 + 1) & 0x7F;
  memcpy(a3 + 4, v10, 0x100u);
  if ( !memcmp(&last_header_hns, v10, 0x100u) )
  {
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
      171,
      "work_2_packet_hns",
      17,
      118,
      80,
      v27);
  }
  memcpy(&last_header_hns, v10, 0x100u);
  v24 = BM_CRC16(a3 + 2, 258);
  a3[261] = v24;
  a3[260] = HIBYTE(v24);
  v25 = *(unsigned __int8 *)(a1 + 205);
  *a4 = 262;
  if ( !v25 || !*(_BYTE *)(a1 + 206) )
    return 0;
  memset(*(void **)(a1 + 400), 0, 48 * *(_DWORD *)(a1 + 280));
  sub_58D70((int *)a1, 36);
  *(_BYTE *)(a1 + 205) = 0;
  return 0;
}
