int __fastcall get_qualify_hashrate_kda(int a1, double *a2)
{
  int result; // r0
  double v5; // [sp+0h] [bp-Ch] BYREF

  v5 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v5);
  if ( *(_BYTE *)(a1 + 280) != 75 )
    return 25;
  if ( *(_BYTE *)(a1 + 281) != 65 )
    return 25;
  if ( *(_BYTE *)(a1 + 282) != 51 )
    return 25;
  result = *(unsigned __int8 *)(a1 + 283);
  if ( *(_BYTE *)(a1 + 283) )
    return 25;
  *a2 = v5 * 0.99;
  return result;
}
