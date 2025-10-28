int get_working_voltage()
{
  if ( byte_1088B8 )
    return dword_1088C4;
  else
    return -1;
}
