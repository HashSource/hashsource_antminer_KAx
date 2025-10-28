void *__fastcall abin2hex(int a1, int a2)
{
  void *v4; // r0
  void *v5; // r8
  int v6; // r4
  int v7; // r6
  char *v8; // r5
  int v9; // t1
  char *v10; // r0

  v4 = malloc(2 * a2 + 1);
  v5 = v4;
  if ( v4 && a2 )
  {
    v6 = a1 - 1;
    v7 = v6 + a2;
    v8 = (char *)v4;
    do
    {
      v9 = *(unsigned __int8 *)++v6;
      v10 = v8;
      v8 += 2;
      sprintf(v10, "%02x", v9);
    }
    while ( v6 != v7 );
  }
  return v5;
}
