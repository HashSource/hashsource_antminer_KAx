int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_175244, (unsigned __int8)byte_175238);
    if ( !(_WORD)result )
      return result;
    return sub_55A7C();
  }
  result = (unsigned __int16)set_voltage(dword_175244, (unsigned __int8)byte_175238);
  if ( (_WORD)result )
    return sub_55A7C();
  return result;
}
