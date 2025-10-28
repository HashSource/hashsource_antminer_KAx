int __fastcall sub_50F34(int result)
{
  if ( result != -64 )
  {
    if ( result < -10 )
    {
      return 20;
    }
    else if ( result <= 34 )
    {
      return 60;
    }
  }
  return result;
}
