void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_18A884 > 1 )
  {
    v0 = (char *)&unk_18A889;
    v1 = &dbl_18A8D8;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_18A888[dword_18A884] != v0 );
  }
}
