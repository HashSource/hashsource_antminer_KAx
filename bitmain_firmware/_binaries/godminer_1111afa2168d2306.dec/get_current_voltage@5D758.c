int get_current_voltage()
{
  if ( byte_196B00 )
    return dword_196B1C;
  else
    return sub_5D0B8();
}
