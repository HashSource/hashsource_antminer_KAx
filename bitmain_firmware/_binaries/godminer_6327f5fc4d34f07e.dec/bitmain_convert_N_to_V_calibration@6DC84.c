void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  char *v1; // r2

  if ( dword_119E60 > 1 )
  {
    v0 = (char *)&unk_119E01;
    v1 = (char *)&unk_119E10;
    do
    {
      ++v0;
      v1 += 8;
    }
    while ( &byte_119E00[dword_119E60] != v0 );
  }
}
