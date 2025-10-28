int __fastcall sub_52C90(_DWORD *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v9; // r2
  int v11; // r7
  int *v12; // r6
  int v13; // r3
  int v15; // lr
  char v16; // r2
  unsigned int v17; // r1
  signed int v18; // r0
  int v19; // r1
  int v20; // r2
  char v22[4096]; // [sp+20h] [bp-1000h] BYREF

  v9 = a1[190];
  v11 = *(_BYTE *)(a2 + 8) & 0x7F;
  v12 = (int *)(v9 + 8 * v11);
  v13 = *v12;
  v15 = v12[1];
  *(_DWORD *)a3 = *v12;
  *(_DWORD *)(a3 + 4) = v15;
  *a7 = v13;
  strcpy((char *)(a3 + 16), (const char *)(v9 + 32 * (v11 + 32)));
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 3);
  v16 = *(_BYTE *)(a2 + 7);
  *(_BYTE *)(a3 + 53) = v11;
  *(_BYTE *)(a3 + 52) = v16 & 0x7F;
  v17 = a1[93];
  *(_QWORD *)(a3 + 72) = *((_QWORD *)v12 + 2689);
  v18 = *(unsigned __int8 *)(a2 + 3) / v17;
  if ( v18 >= a1[70] )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Nonce error, wrong source chip number");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
      173,
      "packet_2_nonce_dash",
      19,
      202,
      100,
      v22);
    v18 = 0;
    *a6 = 0;
  }
  else
  {
    *a6 = v18;
  }
  *(_DWORD *)(a3 + 8) = v18;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 6) & 0xFu) % 0xC;
  V_LOCK();
  logfmt_raw(
    v22,
    0x1000u,
    0,
    "%s Nonce: %02x%02x%02x%02x chipid:%d coreid:%d",
    "packet_2_nonce_dash",
    *(unsigned __int8 *)(a2 + 3),
    *(unsigned __int8 *)(a2 + 4),
    *(unsigned __int8 *)(a2 + 5),
    *(unsigned __int8 *)(a2 + 6),
    *(_DWORD *)(a3 + 8),
    *(_DWORD *)(a3 + 12));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    173,
    "packet_2_nonce_dash",
    19,
    214,
    20,
    v22);
  v19 = BM_CRC5((_BYTE *)(a2 + 2), 59);
  v20 = *(_BYTE *)(a2 + 9) & 0x1F;
  if ( v19 == v20 )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v19, v20);
    return 11;
  }
}
