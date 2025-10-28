int __fastcall dev_init_pic_for_one_chain(int a1)
{
  int result; // r0
  const char *v3; // r0

  result = platform_is_pic_mcu_en();
  if ( result )
  {
    if ( LOBYTE(g_chain_info[2 * a1 + 1]) )
    {
      return sub_BAA84(a1);
    }
    else
    {
      LOWORD(v3) = 30172;
      HIWORD(v3) = (unsigned int)"" >> 16;
      printf(v3, a1);
      return -1;
    }
  }
  return result;
}
