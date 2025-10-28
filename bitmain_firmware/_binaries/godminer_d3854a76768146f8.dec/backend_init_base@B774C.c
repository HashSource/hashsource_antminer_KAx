int __fastcall backend_init_base(int a1)
{
  int (**v2)(); // r0
  int v3; // r0
  int (**v4)(); // r0
  int v5; // r0
  int (**v6)(); // r0
  signed int v7; // r6
  void *v8; // r0
  int v9; // r1
  char *v10; // r0
  int v11; // r5
  signed int v12; // r7
  size_t v13; // r2
  int v14; // r3
  bool v15; // zf
  void (__fastcall *v16)(int); // r3
  void *(*v17)(void *); // r2
  void *(*v18)(void *); // r2
  void *(*v19)(void *); // r2

  v2 = dev_ctrl(a1);
  v3 = ((int (__fastcall *)(_DWORD))v2[12])(*(_DWORD *)(a1 + 228));
  *(_DWORD *)(a1 + 232) = v3;
  v4 = dev_ctrl(v3);
  v5 = ((int (__fastcall *)(_DWORD))v4[11])(*(_DWORD *)(a1 + 228));
  v6 = dev_ctrl(v5);
  ((void (__fastcall *)(_DWORD))v6[1])(*(_DWORD *)(a1 + 228));
  *(_DWORD *)(a1 + 832) = queue_new(1, 0);
  *(_DWORD *)(a1 + 836) = queue_new(*(_DWORD *)(a1 + 808), 0);
  *(_DWORD *)(a1 + 840) = queue_new(1, 0);
  *(_DWORD *)(a1 + 828) = queue_new(*(_DWORD *)(a1 + 804), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 864), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 888), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 912), 0);
  v7 = *(_DWORD *)(a1 + 312);
  *(_DWORD *)(a1 + 464) = calloc(v7, 1u);
  v8 = calloc(v7, 4u);
  v9 = *(_DWORD *)(a1 + 812);
  *(_DWORD *)(a1 + 456) = v8;
  *(_DWORD *)(a1 + 460) = calloc(v7, 2 * v9);
  *(_DWORD *)(a1 + 432) = calloc(v7, 0x30u);
  v10 = (char *)calloc(v7, 0x2Cu);
  *(_DWORD *)(a1 + 504) = v10;
  if ( v7 > 0 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      ++v12;
      pthread_mutex_init((pthread_mutex_t *)&v10[v11 + 20], 0);
      v7 = *(_DWORD *)(a1 + 312);
      v11 += 44;
      if ( v7 <= v12 )
        break;
      v10 = *(char **)(a1 + 504);
    }
  }
  v13 = *(_DWORD *)(a1 + 824);
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 448) = 0;
  *(_DWORD *)(a1 + 452) = 0;
  *(_DWORD *)(a1 + 404) = -1;
  *(_BYTE *)(a1 + 436) = 0;
  *(_DWORD *)(a1 + 440) = 0;
  *(_DWORD *)(a1 + 468) = 0;
  *(_DWORD *)(a1 + 488) = 0;
  if ( v13 )
    *(_DWORD *)(a1 + 492) = calloc(v7, v13);
  *(_DWORD *)(a1 + 496) = 0;
  memset((void *)(a1 + 544), 0, 0x100u);
  v14 = *(_DWORD *)(a1 + 844);
  *(_BYTE *)(a1 + 860) = 0;
  *(_BYTE *)(a1 + 861) = 0;
  v15 = v14 == 0;
  v16 = *(void (__fastcall **)(int))(a1 + 76);
  if ( v15 )
    *(_DWORD *)(a1 + 844) = a1;
  *(_BYTE *)(a1 + 862) = 0;
  if ( v16 )
    v16(a1);
  LOWORD(v17) = 26696;
  HIWORD(v17) = (unsigned int)&loc_B6980 >> 16;
  pthread_create((pthread_t *)(a1 + 852), 0, v17, (void *)a1);
  LOWORD(v18) = 27964;
  HIWORD(v18) = (unsigned int)&loc_B6E74 >> 16;
  pthread_create((pthread_t *)(a1 + 848), 0, v18, (void *)a1);
  LOWORD(v19) = 30188;
  HIWORD(v19) = (unsigned int)&loc_B7724 >> 16;
  pthread_create((pthread_t *)(a1 + 856), 0, v19, (void *)a1);
  *(_BYTE *)(a1 + 236) = 1;
  return 0;
}
