int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_1088C4, (unsigned __int8)byte_1088B8);
    if ( !(_WORD)result )
      return result;
    return sub_40348();
  }
  result = (unsigned __int16)set_voltage(dword_1088C4, (unsigned __int8)byte_1088B8);
  if ( (_WORD)result )
    return sub_40348();
  return result;
}
