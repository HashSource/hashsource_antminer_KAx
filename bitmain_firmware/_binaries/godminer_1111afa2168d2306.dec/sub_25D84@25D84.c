int sub_25D84()
{
  int result; // r0

  if ( !byte_19585C )
  {
    result = deregister_tm_clones();
    byte_19585C = 1;
  }
  return result;
}
