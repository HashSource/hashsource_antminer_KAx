int __fastcall check_core_reg_with_expect_data_eth(int a1, int a2, unsigned __int16 a3, __int16 a4, unsigned int a5)
{
  int v6; // r7
  char *v7; // r4
  unsigned int v8; // r6
  int v9; // r1
  int v11; // [sp+3Ch] [bp-14h]
  char *ptr; // [sp+40h] [bp-10h]
  int v13; // [sp+44h] [bp-Ch]
  int v14; // [sp+48h] [bp-8h]
  _DWORD v16[7]; // [sp+50h] [bp+0h] BYREF
  int v17; // [sp+6Ch] [bp+1Ch]
  char var1004[4112]; // [sp+70h] [bp+20h] BYREF

  v14 = a3;
  ptr = (char *)malloc(0x600u);
  v13 = 5;
  while ( 1 )
  {
    v11 = sub_76660(a1, v14, a4, ptr);
    if ( !v11 )
    {
LABEL_10:
      free(ptr);
      return 22;
    }
    v6 = 0;
    v7 = ptr;
    v8 = bswap32(a5);
    do
    {
      if ( (v8 & ~*(_DWORD *)v7) != 0 )
      {
        V_LOCK();
        V_INT((int)v16, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          var1004,
          0x1000u,
          0,
          v17,
          v16[0],
          v16[1],
          v16[2],
          v16[3],
          v16[4],
          v16[5],
          v16[6],
          v17,
          "[REG READ ERR] chip %02x core %02x reg %04x rdata %08x",
          (unsigned __int8)v7[4],
          (unsigned __int8)v7[8],
          (unsigned __int16)__rev16(*((unsigned __int16 *)v7 + 3)),
          bswap32(*(_DWORD *)v7));
        V_UNLOCK();
        LOWORD(v9) = -9656;
        HIWORD(v9) = (unsigned int)"t_kas" >> 16;
        zlog(g_zc, v9, 174, "check_core_reg_with_expect_data_eth", 35, 760, 100, var1004);
      }
      else
      {
        ++v6;
      }
      v7 += 12;
    }
    while ( &ptr[12 * v11] != v7 );
    if ( v6 == v11 )
      break;
    usleep(0x7A120u);
    if ( !--v13 )
      goto LABEL_10;
  }
  free(ptr);
  return 0;
}
