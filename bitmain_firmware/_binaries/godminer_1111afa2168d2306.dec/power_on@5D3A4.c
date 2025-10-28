int power_on()
{
  int result; // r0

  result = bitmain_power_on();
  byte_196B18 = 1;
  return result;
}
