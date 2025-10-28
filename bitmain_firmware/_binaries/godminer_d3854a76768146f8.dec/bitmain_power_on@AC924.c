int bitmain_power_on()
{
  if ( !is_gpio_exist(dword_172CF0) )
  {
    gpio_export(dword_172CF0);
    gpio_direction(dword_172CF0, 1);
  }
  return gpio_write(dword_172CF0, 0);
}
