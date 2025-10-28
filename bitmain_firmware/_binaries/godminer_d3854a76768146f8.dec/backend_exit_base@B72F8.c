int __fastcall backend_exit_base(int a1)
{
  void (__fastcall *v2)(int); // r3
  int v3; // r0
  int v4; // r5
  int v5; // r6
  int v6; // r0
  int (**v7)(); // r0
  void *thread_return; // [sp+4h] [bp-4h] BYREF

  *(_BYTE *)(a1 + 237) = 0;
  *(_BYTE *)(a1 + 238) = 0;
  *(_BYTE *)(a1 + 236) = 0;
  (*(void (**)(void))(a1 + 56))();
  v2 = *(void (__fastcall **)(int))(a1 + 80);
  if ( v2 )
    v2(a1);
  v3 = *(_DWORD *)(a1 + 832);
  *(_BYTE *)(a1 + 860) = 1;
  *(_BYTE *)(a1 + 861) = 1;
  *(_BYTE *)(a1 + 862) = 1;
  queue_force_wakeup(v3);
  queue_force_wakeup(*(_DWORD *)(a1 + 836));
  queue_force_wakeup(*(_DWORD *)(a1 + 840));
  queue_force_wakeup(*(_DWORD *)(a1 + 828));
  pthread_join(*(_DWORD *)(a1 + 852), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 848), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 856), &thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 864));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 888));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 912));
  queue_free(*(_DWORD *)(a1 + 832));
  queue_free(*(_DWORD *)(a1 + 836));
  queue_free(*(_DWORD *)(a1 + 840));
  queue_free(*(_DWORD *)(a1 + 828));
  free(*(void **)(a1 + 464));
  free(*(void **)(a1 + 456));
  free(*(void **)(a1 + 460));
  free(*(void **)(a1 + 432));
  if ( *(int *)(a1 + 312) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      ++v5;
      v6 = *(_DWORD *)(a1 + 504) + v4;
      v4 += 44;
      pthread_mutex_destroy((pthread_mutex_t *)(v6 + 20));
    }
    while ( *(_DWORD *)(a1 + 312) > v5 );
  }
  free(*(void **)(a1 + 504));
  if ( *(_DWORD *)(a1 + 824) )
    free(*(void **)(a1 + 492));
  *(_DWORD *)(a1 + 404) = -1;
  *(_DWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 844) = 0;
  v7 = dev_ctrl(a1 + 416);
  ((void (__fastcall *)(_DWORD))v7[7])(*(_DWORD *)(a1 + 228));
  return 0;
}
