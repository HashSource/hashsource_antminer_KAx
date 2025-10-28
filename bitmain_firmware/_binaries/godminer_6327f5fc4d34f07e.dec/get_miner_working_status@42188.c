int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_108930 )
  {
    byte_108934 = 0;
    byte_108935 = 0;
    byte_108936 = 0;
    byte_108937 = 0;
    byte_108938 = 0;
    byte_108939 = 0;
    byte_10893B = 0;
    byte_10893C = 0;
    byte_108930 = 1;
    byte_10893A = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_108938;
  v2 = byte_10893C;
  *(_DWORD *)result = *(_DWORD *)&byte_108934;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
