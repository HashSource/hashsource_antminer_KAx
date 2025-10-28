void *__fastcall sph_luffa256_addbits_and_close(unsigned int *a1, char a2, char a3, _BYTE *a4)
{
  void *result; // r0

  sub_10D7E8(a1, a2, a3, a4, 8);
  result = memcpy(a1 + 9, &unk_15F188, 0x60u);
  a1[8] = 0;
  return result;
}
