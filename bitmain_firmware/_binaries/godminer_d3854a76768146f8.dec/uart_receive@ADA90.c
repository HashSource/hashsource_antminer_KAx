unsigned int __fastcall uart_receive(int a1, int a2, unsigned int a3)
{
  pthread_mutex_t *v6; // r5
  unsigned int v7; // r0
  unsigned int v9; // r4

  v6 = (pthread_mutex_t *)((char *)&unk_18A5D4 + 24 * a1);
  pthread_mutex_lock(v6);
  v7 = sub_AD0B4((unsigned __int8)a1);
  if ( v7 < a3 )
    a3 = v7;
  if ( a3 )
  {
    v9 = sub_AD4B4(a1, a2, a3);
    pthread_mutex_unlock(v6);
    return v9;
  }
  else
  {
    pthread_mutex_unlock(v6);
    return 0;
  }
}
