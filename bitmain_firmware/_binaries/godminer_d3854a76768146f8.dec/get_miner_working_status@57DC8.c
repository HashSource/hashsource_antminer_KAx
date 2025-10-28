int __fastcall get_miner_working_status(int result)
{
  _BYTE *v1; // r3
  unsigned __int8 *v2; // r1
  int v3; // r1
  int v4; // r1
  char v5; // r3

  LOWORD(v1) = 21164;
  HIWORD(v1) = ((unsigned int)&cond.__align + 28) >> 16;
  if ( !*v1 )
  {
    LOWORD(v2) = 17345;
    HIWORD(v2) = (unsigned int)&unk_173391 >> 16;
    v1[10] = 0;
    v3 = *v2;
    v1[4] = 0;
    v1[5] = 0;
    v1[6] = 0;
    v1[7] = 0;
    v1[8] = 0;
    v1[9] = 0;
    v1[11] = 0;
    v1[12] = 0;
    *v1 = 1;
    if ( !v3 )
      v1[10] = 1;
  }
  v4 = *(_DWORD *)&byte_1752B4;
  v5 = byte_1752B8;
  *(_DWORD *)result = *(_DWORD *)&byte_1752B0;
  *(_DWORD *)(result + 4) = v4;
  *(_BYTE *)(result + 8) = v5;
  return result;
}
