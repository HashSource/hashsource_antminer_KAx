int sub_3D820()
{
  int result; // r0
  int v1; // r2

  result = 0;
  v1 = dword_108770 + 1;
  if ( (unsigned int)(dword_108770 + 1) >= 0x4000 )
    v1 = 0;
  dword_108770 = v1;
  return result;
}
