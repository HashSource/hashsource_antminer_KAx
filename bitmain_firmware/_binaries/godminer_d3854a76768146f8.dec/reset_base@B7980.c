int __fastcall reset_base(int a1)
{
  int v2; // r0
  int (**v3)(); // r0
  int v4; // r3
  int v5; // r2

  v2 = (*(int (**)(void))(a1 + 56))();
  v3 = dev_ctrl(v2);
  ((void (__fastcall *)(_DWORD))v3[11])(*(_DWORD *)(a1 + 228));
  queue_clear(*(_DWORD *)(a1 + 832));
  v4 = *(_DWORD *)(a1 + 312);
  v5 = *(_DWORD *)(a1 + 824);
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 496) = 0;
  memset(*(void **)(a1 + 492), 0, v5 * v4);
  return 0;
}
