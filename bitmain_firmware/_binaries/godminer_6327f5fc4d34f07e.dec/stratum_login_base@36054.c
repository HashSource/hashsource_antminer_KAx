int __fastcall stratum_login_base(int a1, int a2)
{
  int result; // r0

  result = (*(int (**)(void))(a1 + 36))();
  if ( result )
    return (*(int (__fastcall **)(int, int))(a1 + 40))(a1, a2);
  return result;
}
