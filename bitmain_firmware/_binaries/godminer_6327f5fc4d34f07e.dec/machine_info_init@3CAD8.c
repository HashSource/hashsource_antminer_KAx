int machine_info_init()
{
  int result; // r0

  result = platform_topol_init();
  if ( result )
    exit(result);
  return result;
}
