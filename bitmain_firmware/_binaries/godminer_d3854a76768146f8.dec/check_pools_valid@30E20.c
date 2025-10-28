int check_pools_valid()
{
  int v0; // r6
  int v1; // r5
  int v2; // r4
  int v3; // r0

  LOWORD(v1) = 16960;
  v0 = 0;
  HIWORD(v1) = (unsigned int)&unk_173210 >> 16;
  *(_BYTE *)(v1 + 0x181) = 0;
  update_miner_working_status();
  if ( *(int *)(v1 + 0x50) > 0 )
  {
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)(*(_DWORD *)(v1 + 0x54) + 4 * v2++);
        if ( *(_BYTE *)(v3 + 28) )
          break;
        if ( *(_DWORD *)(v1 + 0x50) <= v2 )
          return v0;
      }
      if ( stratum_check((int *)v3) )
        ++v0;
    }
    while ( *(_DWORD *)(v1 + 0x50) > v2 );
  }
  return v0;
}
