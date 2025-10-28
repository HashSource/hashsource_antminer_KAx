int __fastcall update_recorded_timeout_value(unsigned __int64 a1)
{
  int v1; // r3
  unsigned __int64 *v2; // lr
  unsigned __int64 *v3; // r2
  int v4; // r12
  unsigned __int64 v5; // r6
  unsigned __int64 v6; // r4
  unsigned __int64 v7; // t1
  bool v8; // cf

  LOWORD(v2) = 16584;
  v1 = 0;
  HIWORD(v2) = (unsigned int)&unk_173098 >> 16;
  v3 = v2;
  v4 = 0;
  v5 = -1;
  do
  {
    v7 = *v3++;
    v6 = v7;
    v8 = v7 >= v5;
    if ( v7 < v5 )
      v4 = v1;
    ++v1;
    if ( !v8 )
      v5 = v6;
  }
  while ( v1 != 10 );
  if ( v5 < a1 )
    v2[v4] = a1;
  return a1;
}
