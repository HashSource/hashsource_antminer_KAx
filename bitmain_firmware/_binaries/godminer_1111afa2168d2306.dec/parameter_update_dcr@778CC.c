int __fastcall parameter_update_dcr(int a1, char a2, int a3, char a4, int a5)
{
  int v8; // r1
  int v9; // r3
  int result; // r0
  int v11; // r7
  double v12; // r0

  if ( *(_BYTE *)(a1 + 260) )
    return 0;
  if ( (unsigned int)(a3 - 50) <= 0x2EE )
    v8 = a2 & 1;
  else
    v8 = 0;
  if ( v8 )
  {
    v11 = a1 + 1024;
    LODWORD(v12) = sub_145944(*(_QWORD *)(a1 + 1016));
    *(_QWORD *)(v11 - 8) = (unsigned __int64)(v12 / (double)a3 * *(float *)(a1 + 996));
    *(float *)(a1 + 996) = (float)a3;
  }
  result = 0;
  if ( (unsigned int)(a5 - 1400) <= 0x12C )
    v9 = a4 & 1;
  else
    v9 = 0;
  if ( v9 )
    *(_DWORD *)(a1 + 1000) = a5;
  return result;
}
