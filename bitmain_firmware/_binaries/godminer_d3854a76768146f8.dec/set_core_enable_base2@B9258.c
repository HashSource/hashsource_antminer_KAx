int __fastcall set_core_enable_base2(int a1, int a2, __useconds_t a3)
{
  int v6; // r2
  unsigned int v7; // r3
  int v8; // r4
  int v9; // r3
  int v10; // r1
  int v12; // [sp+4h] [bp-1014h]
  int v13; // [sp+14h] [bp-1004h] BYREF
  char v14[4096]; // [sp+18h] [bp-1000h] BYREF

  puts("set_core_enable_base2");
  v7 = *(unsigned __int8 *)(a2 + 13);
  if ( !*(_BYTE *)(a2 + 13) )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( (v8 & 0x1F) == 0 )
    {
      v6 = *(unsigned __int16 *)(a2 + 10) + (v8 >> 5);
      *(_WORD *)(a2 + 10) = v6;
    }
    if ( v7 > 1 )
      *(_BYTE *)(a2 + 12) = v8;
    if ( (*(int (__fastcall **)(int, int, int))(a1 + 256))(a1, a2, v6) < 0 )
      break;
    usleep(a3);
    v13 = 0;
    (*(void (__fastcall **)(int, int, int, char *, int *, int, int, _DWORD))(a1 + 276))(
      a1,
      a2,
      1,
      v14,
      &v13,
      v12,
      2000,
      0);
    v7 = *(unsigned __int8 *)(a2 + 13);
    if ( (int)v7 <= ++v8 )
      return 0;
  }
  V_LOCK();
  LOWORD(v9) = 1764;
  HIWORD(v9) = (unsigned int)&unk_152254 >> 16;
  logfmt_raw(v14, 0x1000u, 0, v9, "set_core_enable_base2", *(unsigned __int16 *)(a2 + 10), v8);
  V_UNLOCK();
  LOWORD(v10) = 28780;
  HIWORD(v10) = (unsigned int)"t_http_thread" >> 16;
  zlog(g_zc, v10, 154, "set_core_enable_base2", 21, 1061, 100, v14);
  return 3;
}
