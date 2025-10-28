int *__fastcall sub_DBF5C(int *result, int *a2, unsigned int a3)
{
  unsigned int v4; // r1
  unsigned int v5; // r3
  int *v6; // t0
  int *v7; // r6
  int v8; // r5
  void *v9; // r8
  int v10; // r11
  const void *v11; // r10
  unsigned int v12; // r7
  size_t v13; // r5
  char *v14; // r0
  int v15; // r9
  size_t v16; // r2
  int v17; // r7
  int v18; // r1
  int v19; // r3
  size_t v20; // r2
  const void *v21; // r1
  size_t v22; // r10
  char *v23; // r7
  char *v24; // r0

  v6 = a2 + 1;
  v4 = a2[1];
  v5 = v6[1];
  v7 = result;
  v8 = *a2;
  v9 = (void *)a2[3];
  if ( a3 >= v5 )
    a3 = v5;
  v10 = a2[4];
  v11 = (const void *)a2[5];
  v12 = a2[6];
  if ( a3 > v4 )
  {
    v13 = a3 + v8;
    v14 = (char *)malloc(v13);
    v15 = (int)v14;
    if ( (unsigned int)v11 >= v12 )
    {
      v20 = v10 - (_DWORD)v11;
      v21 = v11;
      v22 = v12 - (_DWORD)v9;
      v23 = &v14[v20];
      memcpy(v14, v21, v20);
      v24 = v23;
      v17 = (int)&v23[v22];
      memcpy(v24, v9, v22);
    }
    else
    {
      v16 = v12 - (_DWORD)v11;
      v17 = (int)&v14[v12 - (_DWORD)v11];
      memcpy(v14, v11, v16);
    }
    a2[6] = v17;
    free(v9);
    v18 = a2[6];
    v19 = *a2;
    a2[4] = v15 + v13;
    v7[1] = v15 + v13;
    a2[3] = v15;
    a2[5] = v15;
    *v7 = v15;
    v7[2] = v15;
    v7[3] = v18;
    v7[4] = v19;
    return v7;
  }
  else
  {
    *result = (int)v9;
    result[1] = v10;
    result[2] = (int)v11;
    result[3] = v12;
    result[4] = v8;
  }
  return result;
}
