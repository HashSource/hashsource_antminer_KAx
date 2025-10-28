int sub_3ED38()
{
  int result; // r0
  int v1; // r2

  result = 0;
  v1 = dword_1088A8 + 1;
  if ( (unsigned int)(dword_1088A8 + 1) >= 0x400000 )
    v1 = 0;
  dword_1088A8 = v1;
  return result;
}
