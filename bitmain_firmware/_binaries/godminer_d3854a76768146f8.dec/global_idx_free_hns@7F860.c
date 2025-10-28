int __fastcall global_idx_free_hns(int a1)
{
  free(*(void **)(a1 + 800));
  return 0;
}
