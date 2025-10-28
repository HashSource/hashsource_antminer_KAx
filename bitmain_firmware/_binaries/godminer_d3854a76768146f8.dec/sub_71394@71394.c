int __fastcall sub_71394(int *a1)
{
  int v2; // r6
  int v3; // r4

  v2 = a1[78];
  v3 = 3;
  while ( 1 )
  {
    sub_70E28(a1, v2);
    if ( a1[100] == v2 )
      break;
    if ( !--v3 )
      return 12;
  }
  return 0;
}
