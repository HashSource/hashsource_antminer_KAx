int gpio_uninit()
{
  int result; // r0

  if ( dword_119968 )
  {
    dword_1199A0 = 0;
    pthread_join(dword_1199A4, 0);
    pthread_mutex_destroy(&stru_11996C);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_119984);
    dword_119968 = 0;
    return pthread_mutex_destroy(&stru_119988);
  }
  return result;
}
