int __fastcall sub_5C34C(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  sub_5C0C4();
  api();
  *(_DWORD *)(a1 + 4) = 0;
  return 0;
}
