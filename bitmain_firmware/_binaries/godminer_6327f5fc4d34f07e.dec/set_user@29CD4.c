int __fastcall set_user(char *s)
{
  int v2; // r3
  int v3; // r4
  void *v4; // r0

  v2 = ++dword_107BAC;
  if ( dword_107BAC > total_pools )
  {
    add_pool();
    v2 = dword_107BAC;
  }
  v3 = *(_DWORD *)(pools + 4 * (v2 + 0x3FFFFFFF));
  v4 = *(void **)(v3 + 12);
  if ( v4 )
    free(v4);
  *(_DWORD *)(v3 + 12) = _strdup(s);
  return 0;
}
