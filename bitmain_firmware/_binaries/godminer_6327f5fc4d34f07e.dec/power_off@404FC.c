unsigned int power_off()
{
  bitmain_power_off_0();
  byte_1088D0 = 0;
  return sleep(1u);
}
