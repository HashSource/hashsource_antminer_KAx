int __fastcall sync_get_status_ltc(pthread_mutex_t *a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  if ( a1[9].__size[20] )
    return sub_91514(a1, a2, a3, a4, a5);
  else
    return 4;
}
