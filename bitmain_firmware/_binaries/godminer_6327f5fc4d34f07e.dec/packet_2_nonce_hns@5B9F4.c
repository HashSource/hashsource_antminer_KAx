int __fastcall packet_2_nonce_hns(unsigned int *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  unsigned int v9; // r7
  char *v11; // r0
  int v14; // r6
  int v15; // r3
  int v16; // r2
  const char *v17; // r1
  unsigned int v18; // r7
  char v19; // r3
  signed int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r0
  signed int v24; // r1

  if ( *(char *)(a2 + 11) >= 0 )
    return 10;
  v9 = a1[190];
  v11 = (char *)(a3 + 16);
  v14 = *(_BYTE *)(a2 + 10) & 0x7F;
  v15 = *(_DWORD *)(v9 + 8 * v14);
  v16 = *(_DWORD *)(v9 + 8 * v14 + 4);
  v17 = (const char *)(v9 + 32 * (v14 + 32));
  *(_DWORD *)a3 = v15;
  v18 = v9 + (v14 << 8);
  *(_DWORD *)(a3 + 4) = v16;
  *a7 = v15;
  strcpy(v11, v17);
  *(_BYTE *)(a3 + 52) = *(_BYTE *)(v18 + 5241);
  *(_BYTE *)(a3 + 53) = *(_BYTE *)(v18 + 5240);
  *(_BYTE *)(a3 + 54) = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a3 + 55) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 5);
  v19 = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(a3 + 57) = v14;
  *(_BYTE *)(a3 + 56) = v19;
  v20 = *(unsigned __int8 *)(a2 + 3) / a1[93];
  if ( v20 >= (int)a1[70] )
  {
    v23 = rand();
    sub_DD144(v23, a1[70]);
    v20 = v24;
  }
  *a6 = v20;
  *(_DWORD *)(a3 + 8) = v20;
  *(_DWORD *)(a3 + 12) = *(_BYTE *)(a2 + 8) & 0x3F;
  v21 = BM_CRC5((_BYTE *)(a2 + 2), 75);
  v22 = *(_BYTE *)(a2 + 11) & 0x1F;
  if ( v21 == v22 )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v21, v22);
    return 11;
  }
}
