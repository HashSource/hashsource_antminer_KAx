int sub_3202C()
{
  int v0; // r3

  v0 = ++dword_195A70;
  if ( dword_195A70 > total_pools )
  {
    add_pool();
    v0 = dword_195A70;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
