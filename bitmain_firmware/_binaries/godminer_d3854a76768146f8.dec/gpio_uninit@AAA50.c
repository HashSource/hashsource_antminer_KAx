int gpio_uninit()
{
  int result; // r0

  if ( dword_18A3EC )
  {
    dword_18A424 = 0;
    pthread_join(dword_18A428, 0);
    pthread_mutex_destroy(&stru_18A3F0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_18A408);
    dword_18A3EC = 0;
    return pthread_mutex_destroy(&stru_18A40C);
  }
  return result;
}
