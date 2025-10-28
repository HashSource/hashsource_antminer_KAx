int __fastcall set_core_reg_base_9(pthread_mutex_t *a1, int *a2)
{
  char v3; // r12
  __int16 v4; // lr
  int v5; // r2
  char v6; // r6
  char v7; // r1
  char v8; // r0
  _BYTE v10[2]; // [sp+4h] [bp-1Ch] BYREF
  int v11; // [sp+6h] [bp-1Ah] BYREF
  char v12; // [sp+Ah] [bp-16h]
  char v13; // [sp+Bh] [bp-15h]
  char v14; // [sp+Ch] [bp-14h]
  char v15; // [sp+Dh] [bp-13h]
  char v16; // [sp+Eh] [bp-12h]

  if ( !a1[9].__size[20] )
    return 4;
  v11 = 0;
  v3 = *((_BYTE *)a2 + 8);
  v4 = *((_WORD *)a2 + 5);
  v5 = *a2;
  v6 = *((_BYTE *)a2 + 9);
  v7 = *((_BYTE *)a2 + 12);
  v15 = v5;
  LOBYTE(v11) = (16 * (v3 & 1)) & 0x1B | 0x44;
  v13 = BYTE2(v5);
  v14 = BYTE1(v5);
  v12 = v7;
  HIBYTE(v11) = v4;
  v10[0] = 85;
  v10[1] = -86;
  BYTE1(v11) = 9;
  v16 = 0;
  BYTE2(v11) = v6;
  v8 = BM_CRC5(&v11, 64);
  v16 = v16 & 0xE0 | v8 & 0x1F;
  send_command_packet(a1, (int)v10, 0xBu);
  return 0;
}
