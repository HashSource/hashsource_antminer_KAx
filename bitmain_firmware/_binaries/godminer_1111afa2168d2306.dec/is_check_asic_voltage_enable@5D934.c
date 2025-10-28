int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_196B04;
  if ( byte_196B04 )
    return (unsigned __int8)byte_196B10;
  return result;
}
