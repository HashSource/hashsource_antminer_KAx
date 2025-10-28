int __fastcall backend_exit_base(int a1)
{
  void (__fastcall *v2)(int); // r3
  int v3; // r0
  int (**v4)(); // r0
  void *thread_return[2]; // [sp+4h] [bp-8h] BYREF

  *(_BYTE *)(a1 + 205) = 0;
  *(_BYTE *)(a1 + 206) = 0;
  *(_BYTE *)(a1 + 204) = 0;
  (*(void (**)(void))(a1 + 48))();
  v2 = *(void (__fastcall **)(int))(a1 + 72);
  if ( v2 )
    v2(a1);
  v3 = *(_DWORD *)(a1 + 792);
  *(_BYTE *)(a1 + 820) = 1;
  *(_BYTE *)(a1 + 821) = 1;
  *(_BYTE *)(a1 + 822) = 1;
  queue_force_wakeup(v3);
  queue_force_wakeup(*(_DWORD *)(a1 + 796));
  queue_force_wakeup(*(_DWORD *)(a1 + 800));
  queue_force_wakeup(*(_DWORD *)(a1 + 788));
  pthread_join(*(_DWORD *)(a1 + 812), thread_return);
  pthread_join(*(_DWORD *)(a1 + 808), thread_return);
  pthread_join(*(_DWORD *)(a1 + 816), thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 824));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 848));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 872));
  queue_free(*(_DWORD *)(a1 + 792));
  queue_free(*(_DWORD *)(a1 + 796));
  queue_free(*(_DWORD *)(a1 + 800));
  queue_free(*(_DWORD *)(a1 + 788));
  free(*(void **)(a1 + 432));
  free(*(void **)(a1 + 424));
  free(*(void **)(a1 + 428));
  free(*(void **)(a1 + 400));
  if ( *(_DWORD *)(a1 + 784) )
    free(*(void **)(a1 + 460));
  *(_DWORD *)(a1 + 372) = -1;
  *(_DWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_DWORD *)(a1 + 804) = 0;
  v4 = dev_ctrl(a1 + 384);
  ((void (__fastcall *)(_DWORD))v4[7])(*(_DWORD *)(a1 + 196));
  return 0;
}
