int __fastcall sub_3D9B4(_DWORD *a1, int a2, int a3)
{
  size_t *v3; // r3
  int v4; // r1

  v3 = (size_t *)a1[283];
  v4 = *(_DWORD *)(a3 + 48);
  a1[269] = 0;
  a1[268] = v4;
  if ( v3 )
  {
    memcpy(v3 + 1, (const void *)(a3 + 52), *v3);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
