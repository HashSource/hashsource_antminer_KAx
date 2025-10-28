int __fastcall get_sale_hashrate_kda(int a1, double *a2, _DWORD *a3)
{
  int result; // r0
  double v7; // [sp+0h] [bp-8h] BYREF

  v7 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 120))(a1, &v7);
  if ( *(_BYTE *)(a1 + 248) != 75 )
    return 24;
  if ( *(_BYTE *)(a1 + 249) != 65 )
    return 24;
  if ( *(_BYTE *)(a1 + 250) != 51 )
    return 24;
  result = *(unsigned __int8 *)(a1 + 251);
  if ( *(_BYTE *)(a1 + 251) )
    return 24;
  *a2 = v7 * 0.9875;
  *a3 = 100;
  return result;
}
