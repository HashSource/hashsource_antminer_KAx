int bitmain_power_off_0()
{
  if ( !is_gpio_exist(dword_1065BC) )
  {
    gpio_export(dword_1065BC);
    gpio_direction(dword_1065BC, 1);
  }
  return gpio_write(dword_1065BC, 1);
}
