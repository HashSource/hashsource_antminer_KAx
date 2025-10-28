int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_196B74 )
  {
    byte_196B78 = 0;
    byte_196B79 = 0;
    byte_196B7A = 0;
    byte_196B7B = 0;
    byte_196B7C = 0;
    byte_196B7D = 0;
    byte_196B7F = 0;
    byte_196B80 = 0;
    byte_196B74 = 1;
    byte_196B7E = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_196B7C;
  v2 = byte_196B80;
  *(_DWORD *)result = *(_DWORD *)&byte_196B78;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
