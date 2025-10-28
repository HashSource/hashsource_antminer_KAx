void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_1B462C > 1 )
  {
    v0 = algn_1B4631;
    v1 = &dbl_1B4680;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_1B4630[dword_1B462C] != v0 );
  }
}
