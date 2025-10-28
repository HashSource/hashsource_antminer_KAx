void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_1A3C98);
  *a1 = dword_1A3CB0;
  pthread_mutex_unlock(&stru_1A3C98);
  return &unk_1A3CB4;
}
