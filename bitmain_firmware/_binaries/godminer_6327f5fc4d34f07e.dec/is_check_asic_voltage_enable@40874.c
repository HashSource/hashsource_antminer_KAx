int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_1088BC;
  if ( byte_1088BC )
    return (unsigned __int8)byte_1088C8;
  return result;
}
