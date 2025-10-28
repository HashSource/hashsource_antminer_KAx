int __fastcall backend_init_base(int a1)
{
  int (**v2)(); // r0
  int v3; // r0
  int (**v4)(); // r0
  int v5; // r0
  int (**v6)(); // r0
  size_t v7; // r5
  void *v8; // r0
  int v9; // r1
  void *v10; // r0
  size_t v11; // r1
  int v12; // r3
  bool v13; // zf
  void (__fastcall *v14)(int); // r3

  v2 = dev_ctrl(a1);
  v3 = ((int (__fastcall *)(_DWORD))v2[12])(*(_DWORD *)(a1 + 196));
  *(_DWORD *)(a1 + 200) = v3;
  v4 = dev_ctrl(v3);
  v5 = ((int (__fastcall *)(_DWORD))v4[11])(*(_DWORD *)(a1 + 196));
  v6 = dev_ctrl(v5);
  ((void (__fastcall *)(_DWORD))v6[1])(*(_DWORD *)(a1 + 196));
  *(_DWORD *)(a1 + 792) = queue_new(1, 0);
  *(_DWORD *)(a1 + 796) = queue_new(*(_DWORD *)(a1 + 768), 0);
  *(_DWORD *)(a1 + 800) = queue_new(1, 0);
  *(_DWORD *)(a1 + 788) = queue_new(*(_DWORD *)(a1 + 764), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 824), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 848), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 872), 0);
  v7 = *(_DWORD *)(a1 + 280);
  *(_DWORD *)(a1 + 432) = calloc(v7, 1u);
  v8 = calloc(v7, 4u);
  v9 = *(_DWORD *)(a1 + 772);
  *(_DWORD *)(a1 + 424) = v8;
  *(_DWORD *)(a1 + 428) = calloc(v7, 2 * v9);
  v10 = calloc(v7, 0x30u);
  v11 = *(_DWORD *)(a1 + 784);
  *(_DWORD *)(a1 + 400) = v10;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_DWORD *)(a1 + 372) = -1;
  *(_DWORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 420) = 0;
  *(_BYTE *)(a1 + 404) = 0;
  *(_DWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 436) = 0;
  *(_DWORD *)(a1 + 456) = 0;
  if ( v11 )
    *(_DWORD *)(a1 + 460) = calloc(v7, v11);
  *(_DWORD *)(a1 + 464) = 0;
  memset((void *)(a1 + 504), 0, 0x100u);
  v12 = *(_DWORD *)(a1 + 804);
  *(_BYTE *)(a1 + 820) = 0;
  *(_BYTE *)(a1 + 821) = 0;
  v13 = v12 == 0;
  v14 = *(void (__fastcall **)(int))(a1 + 68);
  if ( v13 )
    *(_DWORD *)(a1 + 804) = a1;
  *(_BYTE *)(a1 + 822) = 0;
  if ( v14 )
    v14(a1);
  pthread_create((pthread_t *)(a1 + 812), 0, (void *(*)(void *))get_response, (void *)a1);
  pthread_create((pthread_t *)(a1 + 808), 0, (void *(*)(void *))scanhash, (void *)a1);
  pthread_create((pthread_t *)(a1 + 816), 0, (void *(*)(void *))send_work, (void *)a1);
  *(_BYTE *)(a1 + 204) = 1;
  return 0;
}
