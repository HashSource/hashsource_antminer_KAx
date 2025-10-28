int ui_uninit()
{
  int result; // r0

  if ( dword_1B4530 )
  {
    dword_1B44FC[0] = 0;
    pthread_join(dword_1B4534, 0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_1B4518);
    pthread_mutex_destroy(&stru_1B4500);
    gpio_unreg_callback(921, 799520);
    gpio_unreg_callback(943, 799520);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    gpio_unexport(943);
    result = gpio_uninit();
    dword_1B4530 = 0;
  }
  return result;
}
