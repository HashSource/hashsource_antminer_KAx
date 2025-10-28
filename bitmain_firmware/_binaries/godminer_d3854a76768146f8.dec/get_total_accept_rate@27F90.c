int *get_total_accept_rate()
{
  int *result; // r0
  int **v1; // r3
  int v2; // s12
  int *v3; // r3
  int v4; // s14
  int v5; // t1
  double *v6; // r1

  result = (int *)total_pools;
  if ( total_pools > 0 )
  {
    LOWORD(v1) = 17044;
    v2 = 0;
    HIWORD(v1) = (unsigned int)&unk_173264 >> 16;
    v3 = *v1;
    v4 = 0;
    result = &v3[total_pools];
    do
    {
      v5 = *v3++;
      v6 = (double *)(v5 + 1968);
      if ( v5 )
      {
        v4 = (int)((double)v4 + *(v6 - 1));
        v2 = (int)((double)v2 + *v6);
      }
    }
    while ( v3 != result );
  }
  return result;
}
