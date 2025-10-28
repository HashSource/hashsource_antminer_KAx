int __fastcall read_system_status_from_monitor(int a1)
{
  int *all_created_runtime; // r0
  double v3; // d6
  float v4; // s15
  int *v5; // r7
  double v6; // d5
  float v7; // s14
  float v8; // s9
  __int64 v9; // kr00_8
  int v10; // t1
  char *v11; // r3
  int v13; // r1
  int v14; // r3
  int v15; // [sp+4h] [bp-4h] BYREF

  v15 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v15);
  v3 = 0.0;
  if ( v15 <= 0 )
  {
    v4 = 0.0;
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0;
  }
  else
  {
    v4 = 0.0;
    v5 = &all_created_runtime[v15];
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0;
    do
    {
      v10 = *all_created_runtime++;
      v11 = (char *)&unk_108E78 + 216 * *(_DWORD *)(v10 + 196);
      v9 += *((_QWORD *)v11 + 10);
      v8 = v8 + *((float *)v11 + 8);
      v7 = v7 + *((float *)v11 + 9);
      v4 = v4 + *((float *)v11 + 10);
      v6 = v6 + *((double *)v11 + 6);
      v3 = v3 + *((double *)v11 + 7);
    }
    while ( v5 != all_created_runtime );
  }
  *(_DWORD *)a1 = v15;
  v13 = dword_108ED4;
  v14 = dword_108ED8;
  *(float *)(a1 + 12) = v8;
  *(float *)(a1 + 16) = v7;
  *(float *)(a1 + 20) = v4;
  *(double *)(a1 + 24) = v6;
  *(double *)(a1 + 32) = v3;
  *(_QWORD *)(a1 + 40) = v9;
  *(_DWORD *)(a1 + 4) = v13;
  *(_DWORD *)(a1 + 8) = v14;
  return a1;
}
