unsigned int __fastcall sub_494F8(int a1, int a2, int a3, int a4)
{
  bool v4; // zf
  bool v5; // cc
  int v6; // r1
  unsigned int result; // r0

  if ( a3 >= a4 )
  {
    dword_172438 = 0;
    return 0;
  }
  if ( dword_172438 > 120 )
  {
    dword_172438 = 0;
    return 0;
  }
  else
  {
    if ( !dword_172438 )
      return 0;
    v4 = a2 == 0;
    v5 = a2 <= 0;
    v6 = dword_172438 + 1;
    if ( v4 )
    {
LABEL_10:
      dword_172438 = v6;
      return 20;
    }
    ++dword_172438;
    result = 10 * ((a4 - a3) / 5u);
    if ( v5 && v6 )
    {
      ++v6;
      goto LABEL_10;
    }
  }
  return result;
}
