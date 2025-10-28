int __fastcall get_qualify_hashrate_hns(int a1, double *a2)
{
  int result; // r0
  double v5; // [sp+0h] [bp-Ch] BYREF

  v5 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 120))(a1, &v5);
  if ( *(_BYTE *)(a1 + 248) != 72 )
    return 24;
  if ( *(_BYTE *)(a1 + 249) != 83 )
    return 24;
  if ( *(_BYTE *)(a1 + 250) != 51 )
    return 24;
  result = *(unsigned __int8 *)(a1 + 251);
  if ( *(_BYTE *)(a1 + 251) )
    return 24;
  *a2 = v5 * 0.99;
  return result;
}
