int __fastcall sub_DCEB0(int a1, unsigned int a2)
{
  if ( !a2 )
    JUMPOUT(0xDD7C4);
  return divsi3_skip_div0_test(a1, a2);
}
