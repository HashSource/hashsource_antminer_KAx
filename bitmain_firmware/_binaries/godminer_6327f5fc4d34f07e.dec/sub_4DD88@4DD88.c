int __fastcall sub_4DD88(unsigned int *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  unsigned int v8; // r4
  int v12; // r9
  int v13; // r3
  int v14; // lr
  _DWORD *v15; // r6
  int v16; // r12
  int v17; // r0
  int v18; // r3
  signed int v19; // r0
  int v20; // r7
  int v21; // r4
  int v22; // r12
  int v24; // r1
  int v25; // r2
  int v26; // r0
  signed int v27; // r1
  char v28[4080]; // [sp+10h] [bp-1004h] BYREF

  v8 = a1[190];
  v12 = *(_BYTE *)(a2 + 10) & 0x7F;
  v13 = *(_DWORD *)(v8 + 8 * v12);
  v14 = *(_DWORD *)(v8 + 8 * v12 + 4);
  v15 = (_DWORD *)(a3 + 48);
  *(_DWORD *)a3 = v13;
  *(_DWORD *)(a3 + 4) = v14;
  *a7 = v13;
  strcpy((char *)(a3 + 16), (const char *)(v8 + 32 * (v12 + 32)));
  v16 = *(_DWORD *)(v8 + 48 * v12 + 5156);
  v17 = *(_DWORD *)(v8 + 48 * v12 + 5160);
  v18 = *(_DWORD *)(v8 + 48 * v12 + 5164);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(v8 + 48 * v12 + 5152);
  *(_DWORD *)(a3 + 52) = v16;
  *(_DWORD *)(a3 + 56) = v17;
  *(_DWORD *)(a3 + 60) = v18;
  *(_DWORD *)(a3 + 58) = *(_DWORD *)(a2 + 3);
  *(_WORD *)(a3 + 62) = *(_WORD *)(a2 + 7);
  LOBYTE(v18) = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(a3 + 65) = v12;
  *(_BYTE *)(a3 + 64) = v18;
  v19 = *(unsigned __int8 *)(a2 + 3) / a1[93];
  if ( v19 >= (int)a1[70] )
  {
    v26 = rand();
    sub_DD144(v26, a1[70]);
    v19 = v27;
  }
  *a6 = v19;
  *(_DWORD *)(a3 + 8) = v19;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 8) & 3)
                       + 4 * ((*(_BYTE *)(a2 + 7) << 6) & 0x40 | (*(unsigned __int8 *)(a2 + 8) >> 2));
  v20 = BM_CRC5((_BYTE *)(a2 + 2), 75);
  v21 = *(_BYTE *)(a2 + 11) & 0x1F;
  if ( v20 == v21 )
  {
    v22 = *(_DWORD *)(a3 + 52);
    v24 = *(_DWORD *)(a3 + 56);
    v25 = *(_DWORD *)(a3 + 60);
    *a5 = *v15;
    a5[1] = v22;
    a5[2] = v24;
    a5[3] = v25;
    *a4 = 1;
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, "get nonce crc error calc value %04x expected value %04x", v20, v21);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
      171,
      "packet_2_nonce_ckb",
      18,
      204,
      100,
      v28);
    return 11;
  }
}
