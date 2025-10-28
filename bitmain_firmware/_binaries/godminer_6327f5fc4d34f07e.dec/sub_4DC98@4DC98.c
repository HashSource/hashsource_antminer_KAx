int __fastcall sub_4DC98(int *a1)
{
  int v2; // r6
  int v3; // r4

  v2 = a1[70];
  v3 = 3;
  while ( 1 )
  {
    sub_4D778(a1, v2);
    if ( a1[92] == v2 )
      break;
    if ( !--v3 )
      return 12;
  }
  return 0;
}
