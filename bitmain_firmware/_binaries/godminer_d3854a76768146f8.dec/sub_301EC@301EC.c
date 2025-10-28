int sub_301EC()
{
  int v0; // r3

  v0 = ++dword_174298;
  if ( dword_174298 > total_pools )
  {
    add_pool();
    v0 = dword_174298;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
