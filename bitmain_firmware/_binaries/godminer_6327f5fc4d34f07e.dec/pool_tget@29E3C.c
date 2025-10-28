int __fastcall pool_tget(int a1, unsigned __int8 *a2)
{
  pthread_mutex_t *v2; // r4
  pthread_mutex_t *v4; // r0
  int v5; // r4

  v2 = (pthread_mutex_t *)(a1 + 1816);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1816));
  v4 = v2;
  v5 = *a2;
  pthread_mutex_unlock(v4);
  return v5;
}
