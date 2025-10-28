void *__fastcall sph_cubehash256_addbits_and_close(_DWORD *a1, char a2, char a3, _WORD *a4)
{
  void *result; // r0

  sub_9D714(a1, a2, a3, a4, 8);
  result = memcpy(a1 + 9, &unk_ED7C4, 0x80u);
  a1[8] = 0;
  return result;
}
