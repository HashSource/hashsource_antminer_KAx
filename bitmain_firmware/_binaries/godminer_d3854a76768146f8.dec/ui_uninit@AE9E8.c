int ui_uninit()
{
  int result; // r0

  if ( dword_18A788 )
  {
    dword_18A754[0] = 0;
    pthread_join(dword_18A78C, 0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_18A770);
    pthread_mutex_destroy(&stru_18A758);
    gpio_unreg_callback(921, 713840);
    gpio_unreg_callback(943, 713840);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    gpio_unexport(943);
    result = gpio_uninit();
    dword_18A788 = 0;
  }
  return result;
}
