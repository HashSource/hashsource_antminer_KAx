char *__fastcall queue_new(int a1, int a2)
{
  char *v4; // r4

  v4 = (char *)calloc(1u, 0x60u);
  _init_pipe_of_queue((int *)v4, a1, a2);
  pthread_mutex_init((pthread_mutex_t *)(v4 + 16), 0);
  pthread_condattr_init((pthread_condattr_t *)v4 + 22);
  pthread_condattr_setclock((pthread_condattr_t *)v4 + 22, 1);
  pthread_cond_init((pthread_cond_t *)(v4 + 40), (const pthread_condattr_t *)v4 + 22);
  *((_DWORD *)v4 + 3) = 0;
  v4[92] = 0;
  return v4;
}
