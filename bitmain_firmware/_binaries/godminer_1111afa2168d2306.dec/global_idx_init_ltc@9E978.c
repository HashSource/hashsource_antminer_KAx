int __fastcall global_idx_init_ltc(int a1)
{
  void *v2; // r1
  const char *v3; // r0

  v2 = calloc(0x6A08u, 1u);
  LOWORD(v3) = -23488;
  *(_DWORD *)(a1 + 840) = v2;
  HIWORD(v3) = (unsigned int)&unk_16A43C >> 16;
  printf(v3);
  return 0;
}
