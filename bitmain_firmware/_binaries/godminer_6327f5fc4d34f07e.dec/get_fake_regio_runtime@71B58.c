int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int (**v4)(); // r0
  int v5; // r7
  char *v6; // r0
  int v7; // r4
  __int64 v8; // r0

  if ( dword_11A2A8[a1] )
    return dword_11A2A8[a1];
  v3 = calloc(1u, 0x3A8u);
  v3[49] = a1;
  dword_11A2A8[a1] = v3;
  v4 = dev_ctrl((int)v3);
  ((void (__fastcall *)(int))v4[1])(a1);
  v5 = dword_11A2A8[a1];
  pthread_mutex_init((pthread_mutex_t *)(v5 + 824), 0);
  pthread_mutex_init((pthread_mutex_t *)(v5 + 848), 0);
  v6 = queue_new(1, 0);
  v7 = dword_11A2A8[a1];
  *(_DWORD *)(v5 + 800) = v6;
  LODWORD(v8) = set_chip_reg_base;
  HIDWORD(v8) = set_core_reg_base;
  *(_DWORD *)(v7 + 792) = *(_DWORD *)(v7 + 800);
  *(_DWORD *)(v7 + 208) = set_chipaddr_base;
  *(_QWORD *)(v7 + 216) = v8;
  *(_DWORD *)(v7 + 212) = set_inactive_base;
  *(_DWORD *)(v7 + 236) = sync_get_chip_reg_base;
  *(_DWORD *)(v7 + 244) = sync_get_core_reg_base;
  *(_BYTE *)(v7 + 204) = 1;
  return v7;
}
