int __fastcall sub_50F90(_QWORD *a1, int *a2)
{
  int result; // r0
  int v4; // r2

  result = 0;
  v4 = dword_175020 + 1;
  if ( (unsigned int)(dword_175020 + 1) >= 0x4000 )
    v4 = 0;
  dword_175020 = v4;
  *a1 = *a2;
  return result;
}
