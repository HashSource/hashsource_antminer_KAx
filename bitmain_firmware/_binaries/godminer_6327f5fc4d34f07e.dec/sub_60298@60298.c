int __fastcall sub_60298(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int v7; // r11
  int v11; // r8
  int v12; // r3
  int v14; // lr
  _DWORD *v15; // r7
  char v16; // r3
  char v17; // r3
  signed int v18; // r0
  signed int v19; // r8
  unsigned int v20; // r1
  int v21; // r11
  int v22; // r4
  int v23; // r2
  int v25; // r0
  _DWORD v26[7]; // [sp+30h] [bp-1024h] BYREF
  int v27; // [sp+4Ch] [bp-1008h]
  char v28[4080]; // [sp+50h] [bp-1004h] BYREF

  v7 = *(_DWORD *)(a1 + 760);
  v11 = *(_BYTE *)(a2 + 9) & 0x7F;
  v12 = *(_DWORD *)(v7 + 8 * v11);
  v14 = *(_DWORD *)(v7 + 8 * v11 + 4);
  v15 = (_DWORD *)(a3 + 80);
  *(_DWORD *)a3 = v12;
  *(_DWORD *)(a3 + 4) = v14;
  *a7 = v12;
  strcpy((char *)(a3 + 16), (const char *)(v7 + ((v11 + 16) << 6)));
  *(_DWORD *)(a3 + 80) = *(_DWORD *)(a2 + 3);
  *(_BYTE *)(a3 + 84) = *(_BYTE *)(a2 + 7);
  v16 = *(_BYTE *)(v7 + 3 * v11 + 45826);
  *(_WORD *)(a3 + 85) = *(_WORD *)(v7 + 3 * v11 + 45824);
  *(_BYTE *)(a3 + 87) = v16;
  v17 = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a3 + 89) = v11;
  *(_BYTE *)(a3 + 88) = v17;
  v18 = (unsigned int)*(unsigned __int8 *)(a2 + 3) / *(_DWORD *)(a1 + 372);
  v19 = v18;
  if ( v18 >= *(_DWORD *)(a1 + 280) )
  {
    v25 = rand();
    sub_DD144(v25, *(_DWORD *)(a1 + 280));
    *a6 = v20;
  }
  else
  {
    v20 = (unsigned int)*(unsigned __int8 *)(a2 + 3) / *(_DWORD *)(a1 + 372);
    *a6 = v18;
  }
  *(_DWORD *)(a3 + 8) = v20;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 7) & 3)
                       + 4 * ((unsigned __int8)(*(_BYTE *)(a2 + 6) << 6) | (*(unsigned __int8 *)(a2 + 7) >> 2));
  v21 = BM_CRC5((_BYTE *)(a2 + 2), 67);
  v22 = *(_BYTE *)(a2 + 10) & 0x1F;
  if ( v21 != v22 && *(_BYTE *)(a1 + 206) )
  {
    V_LOCK();
    V_INT((int)v26, "chain", *(int *)(a1 + 200));
    logfmt_raw(
      v28,
      0x1000u,
      0,
      v27,
      v26[0],
      v26[1],
      v26[2],
      v26[3],
      v26[4],
      v26[5],
      v26[6],
      v27,
      "chip id %2d, get nonce crc error calc value %04x expected value %04x\n",
      v19,
      v21,
      v22);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "packet_2_nonce_kda",
      18,
      220,
      40,
      v28);
    return 11;
  }
  else
  {
    v23 = v15[1];
    *a5 = *v15;
    a5[1] = v23;
    *a4 = 1;
    return 0;
  }
}
