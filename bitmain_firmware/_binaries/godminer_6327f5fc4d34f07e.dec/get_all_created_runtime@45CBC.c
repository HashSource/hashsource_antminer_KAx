void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_119638);
  *a1 = dword_119650;
  pthread_mutex_unlock(&stru_119638);
  return &unk_119654;
}
