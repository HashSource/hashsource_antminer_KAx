void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_181FF0);
  *a1 = dword_182008;
  pthread_mutex_unlock(&stru_181FF0);
  return &unk_18200C;
}
