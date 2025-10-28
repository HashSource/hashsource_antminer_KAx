int __fastcall json_dump_file(_DWORD *a1, int a2, int a3)
{
  FILE *v5; // r4
  int v6; // r5

  v5 = (FILE *)fopen64(a2, 940972);
  if ( !v5 )
    return -1;
  v6 = json_dump_callback(a1, (int (__fastcall *)(char *, int, int))sub_2E358, (int)v5, a3);
  if ( fclose(v5) )
    return -1;
  return v6;
}
