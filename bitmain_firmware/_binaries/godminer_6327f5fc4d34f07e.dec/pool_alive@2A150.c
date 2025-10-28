int *__fastcall pool_alive(int a1)
{
  pthread_mutex_t *v1; // r4
  int v3; // r7
  int *result; // r0

  v1 = (pthread_mutex_t *)(a1 + 1816);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1816));
  v3 = *(unsigned __int8 *)(a1 + 1896);
  *(_BYTE *)(a1 + 1896) = 0;
  result = (int *)pthread_mutex_unlock(v1);
  if ( v3 )
    return sub_29870((int *)a1, 0);
  return result;
}
