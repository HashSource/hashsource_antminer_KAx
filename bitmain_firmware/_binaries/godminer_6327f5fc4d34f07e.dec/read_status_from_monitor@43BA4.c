void *__fastcall read_status_from_monitor(void *a1, int a2)
{
  memcpy(a1, &dword_108978[54 * *(_DWORD *)(a2 + 196) + 320], 0xD8u);
  return a1;
}
