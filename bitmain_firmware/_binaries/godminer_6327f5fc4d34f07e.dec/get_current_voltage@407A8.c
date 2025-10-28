int get_current_voltage()
{
  if ( byte_1088B8 )
    return dword_1088D4;
  else
    return -1;
}
