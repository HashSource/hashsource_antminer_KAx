int get_current_voltage()
{
  if ( byte_175238 )
    return dword_175254;
  else
    return sub_559F8();
}
