int gpio_uninit()
{
  int result; // r0

  if ( dword_1B4194 )
  {
    dword_1B41CC = 0;
    pthread_join(dword_1B41D0, 0);
    pthread_mutex_destroy(&stru_1B4198);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_1B41B0);
    dword_1B4194 = 0;
    return pthread_mutex_destroy(&stru_1B41B4);
  }
  return result;
}
