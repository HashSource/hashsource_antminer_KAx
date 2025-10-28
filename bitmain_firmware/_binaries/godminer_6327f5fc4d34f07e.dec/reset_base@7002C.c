int __fastcall reset_base(int a1)
{
  int v2; // r0
  int (**v3)(); // r0
  int v4; // r3
  int v5; // r2

  v2 = (*(int (**)(void))(a1 + 48))();
  v3 = dev_ctrl(v2);
  ((void (__fastcall *)(_DWORD))v3[11])(*(_DWORD *)(a1 + 196));
  queue_clear(*(_DWORD *)(a1 + 792));
  v4 = *(_DWORD *)(a1 + 280);
  v5 = *(_DWORD *)(a1 + 784);
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_DWORD *)(a1 + 464) = 0;
  memset(*(void **)(a1 + 460), 0, v5 * v4);
  return 0;
}
