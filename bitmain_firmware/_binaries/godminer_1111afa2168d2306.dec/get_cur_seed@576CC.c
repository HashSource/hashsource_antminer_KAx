int __fastcall get_cur_seed(double *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3

  pthread_mutex_lock(&stru_196860);
  v2 = dword_196878[1];
  v3 = dword_196878[2];
  v4 = dword_196878[3];
  *(_DWORD *)a1 = dword_196878[0];
  *((_DWORD *)a1 + 1) = v2;
  *((_DWORD *)a1 + 2) = v3;
  *((_DWORD *)a1 + 3) = v4;
  v5 = unk_19688C;
  v6 = unk_196890;
  v7 = unk_196894;
  *((_DWORD *)a1 + 4) = unk_196888;
  *((_DWORD *)a1 + 5) = v5;
  *((_DWORD *)a1 + 6) = v6;
  *((_DWORD *)a1 + 7) = v7;
  return pthread_mutex_unlock(&stru_196860);
}
