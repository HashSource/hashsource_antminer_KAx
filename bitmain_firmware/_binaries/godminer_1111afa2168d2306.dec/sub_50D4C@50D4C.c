int __fastcall sub_50D4C(int a1, int a2)
{
  int v3; // r10
  int v4; // r9
  _DWORD *v6; // r2
  int v7; // lr
  int v8; // r0
  int v9; // t1
  int v10; // r1
  int v11; // r3
  bool v12; // zf
  bool v13; // cc
  int v14; // r12
  _DWORD _0[22]; // [sp+0h] [bp-38h] BYREF

  _0[0] = 17;
  _0[1] = 12;
  _0[2] = 7;
  _0[3] = -3;
  _0[4] = -8;
  _0[5] = -13;
  _0[6] = -18;
  _0[7] = 20;
  _0[8] = 40;
  _0[9] = 50;
  _0[10] = 60;
  _0[11] = 80;
  _0[12] = 100;
  _0[13] = 120;
  if ( dword_19348C > a2 )
  {
    v3 = 17;
    v4 = 0;
  }
  else
  {
    if ( dword_19348C == a2 )
      return dword_196844;
    v3 = 20;
    v4 = 3;
  }
  v6 = _0;
  v7 = 0;
  v8 = a2 - *(_DWORD *)(a1 + 88);
  while ( 1 )
  {
    v9 = v6[1];
    ++v6;
    v10 = v7 + 1;
    if ( v4 + v9 < v8 && v4 + *(v6 - 1) >= v8 )
      break;
    ++v7;
    if ( v10 == 6 )
    {
      v11 = 0;
      goto LABEL_11;
    }
  }
  v11 = _0[v7 + 7];
LABEL_11:
  if ( v3 < v8 )
  {
    v11 = 0;
    v12 = dword_196844 == 0;
    v13 = dword_196844 >= 0;
    if ( dword_196844 <= 0 )
      goto LABEL_15;
LABEL_23:
    if ( dword_19348C < a2 )
      goto LABEL_17;
LABEL_24:
    dword_19348C = a2;
    v11 = dword_196844;
    goto LABEL_19;
  }
  if ( v4 - 18 >= v8 )
    v11 = 120;
  v12 = v11 == dword_196844;
  v13 = v11 <= dword_196844;
  if ( v11 < dword_196844 )
    goto LABEL_23;
LABEL_15:
  if ( v13 )
  {
    dword_19348C = a2;
    if ( v12 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( dword_19348C <= a2 )
    goto LABEL_24;
LABEL_17:
  dword_19348C = a2;
LABEL_18:
  dword_196844 = v11;
LABEL_19:
  if ( v11 >= 120 )
    v14 = 120;
  else
    v14 = v11;
  return v14 & ~(v14 >> 31);
}
