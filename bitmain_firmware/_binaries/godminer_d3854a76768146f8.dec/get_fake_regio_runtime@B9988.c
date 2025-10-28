int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int (**v4)(); // r0
  pthread_mutex_t *v5; // r7
  __int64 v6; // r0
  int v7; // r4
  int v8; // lr
  int v9; // r12
  int v10; // r2
  int v11; // r3

  if ( dword_18AD8C[a1] )
    return dword_18AD8C[a1];
  v3 = calloc(1u, 0x3D8u);
  v3[57] = a1;
  dword_18AD8C[a1] = v3;
  v4 = dev_ctrl((int)v3);
  ((void (__fastcall *)(int))v4[1])(a1);
  v5 = (pthread_mutex_t *)dword_18AD8C[a1];
  pthread_mutex_init(v5 + 36, 0);
  pthread_mutex_init(v5 + 37, 0);
  LODWORD(v6) = queue_new(1, 0);
  v7 = dword_18AD8C[a1];
  LOWORD(v8) = 31568;
  v5[35].__lock = v6;
  HIWORD(v8) = (unsigned int)&loc_B7C88 >> 16;
  LOWORD(v9) = 31776;
  LOWORD(v6) = 32104;
  WORD2(v6) = 32296;
  LOWORD(v10) = 31888;
  HIWORD(v9) = (unsigned int)&loc_B7D58 >> 16;
  WORD1(v6) = (unsigned int)&loc_B7EA0 >> 16;
  HIWORD(v6) = (unsigned int)&loc_B7F60 >> 16;
  *(_DWORD *)(v7 + 832) = *(_DWORD *)(v7 + 840);
  LOWORD(v11) = 32496;
  HIWORD(v10) = (unsigned int)&loc_B7DC8 >> 16;
  *(_DWORD *)(v7 + 240) = v8;
  HIWORD(v11) = (unsigned int)&loc_B8028 >> 16;
  *(_QWORD *)(v7 + 248) = v6;
  *(_DWORD *)(v7 + 244) = v9;
  *(_DWORD *)(v7 + 268) = v10;
  *(_DWORD *)(v7 + 276) = v11;
  *(_BYTE *)(v7 + 236) = 1;
  return v7;
}
