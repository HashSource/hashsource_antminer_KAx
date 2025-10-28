int __fastcall set_frequency_kas(int a1, int a2)
{
  int v2; // s0
  int v4; // r4
  int v5; // r6
  int v6; // r3

  sub_84708(a1, a2, 1, 0);
  if ( *(int *)(a1 + 312) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      ++v5;
      pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 504) + v4 + 20));
      v6 = *(_DWORD *)(a1 + 504) + v4;
      v4 += 44;
      *(_DWORD *)(v6 + 4) = v2;
      *(_DWORD *)(v6 + 12) = v2;
      pthread_mutex_unlock((pthread_mutex_t *)(v6 + 20));
    }
    while ( *(_DWORD *)(a1 + 312) > v5 );
  }
  return 0;
}
