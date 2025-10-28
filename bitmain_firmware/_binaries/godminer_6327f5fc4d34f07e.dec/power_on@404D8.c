unsigned int power_on()
{
  bitmain_power_on();
  byte_1088D0 = 1;
  return sleep(1u);
}
