int __fastcall set_logic_core_id_rvn(int a1)
{
  int v2; // r6
  char *v3; // r1
  int v4; // r5
  int v5; // r1
  _DWORD *i; // r6
  int v7; // t1
  int *v8; // r7
  int j; // r5
  int v10; // t1
  int v12; // [sp+2Ch] [bp-1028h] BYREF
  _DWORD v13[7]; // [sp+30h] [bp-1024h] BYREF
  int v14; // [sp+4Ch] [bp-1008h]
  int v15; // [sp+50h] [bp-1004h] BYREF
  int v16; // [sp+54h] [bp-1000h] BYREF

  LOWORD(v2) = -13668;
  V_LOCK();
  LOWORD(v3) = 27796;
  HIWORD(v3) = (unsigned int)"%1.f" >> 16;
  v4 = 0;
  V_INT((int)v13, v3, *(int *)(a1 + 256));
  HIWORD(v2) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw(
    (char *)&v15,
    0x1000u,
    0,
    v14,
    v13[0],
    v13[1],
    v13[2],
    v13[3],
    v13[4],
    v13[5],
    v13[6],
    v14,
    v2,
    "set_logic_core_id_rvn");
  V_UNLOCK();
  LOWORD(v5) = 9580;
  HIWORD(v5) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v5, 171, "set_logic_core_id_rvn", 21, 400, 60, &v15);
  v12 = 100925952;
  v15 = 117768961;
  for ( i = (int *)((char *)&v12 + 1); ; i = (_DWORD *)((char *)i + 1) )
  {
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0, 0);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 1u, 1);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 2u, 2);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 3u, 3);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 4u, 4);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 5u, 5);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 6u, 6);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 7u, 7);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 8u, 8);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 9u, 9);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xAu, 10);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xBu, 11);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xCu, 12);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xDu, 13);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xEu, 14);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xFu, 15);
    if ( i == v13 )
      break;
    v7 = *(unsigned __int8 *)i;
    v4 = v7;
  }
  v8 = (int *)((char *)&v15 + 1);
  for ( j = 1; ; j = v10 )
  {
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0, 8);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 1u, 9);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 2u, 10);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 3u, 11);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 4u, 12);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 5u, 13);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 6u, 14);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 7u, 15);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 8u, 0);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 9u, 1);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0xAu, 2);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0xBu, 3);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0xCu, 4);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0xDu, 5);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0xEu, 6);
    sub_A5A04(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0xFu, 7);
    if ( &v16 == v8 )
      break;
    v10 = *(unsigned __int8 *)v8;
    v8 = (int *)((char *)v8 + 1);
  }
  return 0;
}
