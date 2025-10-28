int sub_29C74()
{
  int v0; // r3

  v0 = ++dword_107BA8;
  if ( dword_107BA8 > total_pools )
  {
    add_pool();
    v0 = dword_107BA8;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
