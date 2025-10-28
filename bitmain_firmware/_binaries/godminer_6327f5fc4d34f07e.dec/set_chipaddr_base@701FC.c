int __fastcall set_chipaddr_base(int a1, int a2, int a3)
{
  bool v6; // cc
  char v7; // t1
  char v8; // r0
  __int16 v10; // [sp+0h] [bp-18h] BYREF
  int v11; // [sp+2h] [bp-16h] BYREF
  char v12; // [sp+6h] [bp-12h]

  if ( !*(_BYTE *)(a1 + 204) )
    return 4;
  (*(void (**)(void))(a1 + 212))();
  usleep(0x2710u);
  v11 = 0;
  v6 = a3 <= 0;
  v10 = -21931;
  if ( a3 > 0 )
    --a2;
  v12 = 0;
  BYTE1(v11) = 5;
  if ( a3 > 0 )
    a3 += a2;
  LOBYTE(v11) = 64;
  if ( !v6 )
  {
    do
    {
      usleep(0x2710u);
      v7 = *(_BYTE *)++a2;
      BYTE2(v11) = v7;
      v8 = BM_CRC5(&v11, 8 * (BYTE1(v11) - 1));
      v12 = v12 & 0xE0 | v8 & 0x1F;
      send_command_packet(a1, (int)&v10, 7u);
    }
    while ( a2 != a3 );
  }
  return 0;
}
