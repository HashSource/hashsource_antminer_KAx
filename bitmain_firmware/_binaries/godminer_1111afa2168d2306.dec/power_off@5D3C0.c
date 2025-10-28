unsigned int power_off()
{
  bitmain_power_off_0();
  byte_196B18 = 0;
  return sleep(1u);
}
