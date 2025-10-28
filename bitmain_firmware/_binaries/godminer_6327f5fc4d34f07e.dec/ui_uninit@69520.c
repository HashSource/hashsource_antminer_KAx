int ui_uninit()
{
  int result; // r0

  if ( dword_119D04 )
  {
    dword_119CD0[0] = 0;
    pthread_join(dword_119D08, 0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_119CEC);
    pthread_mutex_destroy(&stru_119CD4);
    gpio_unreg_callback(921, 430000);
    gpio_unreg_callback(943, 430000);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    gpio_unexport(943);
    result = gpio_uninit();
    dword_119D04 = 0;
  }
  return result;
}
