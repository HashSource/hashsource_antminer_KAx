int __fastcall set_cur_seed(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3

  pthread_mutex_lock(&stru_174FE0);
  memset(dword_174FF8, 0, 0x20u);
  v2 = a1[1];
  v3 = a1[2];
  v4 = a1[3];
  dword_174FF8[0] = *a1;
  dword_174FF8[1] = v2;
  dword_174FF8[2] = v3;
  dword_174FF8[3] = v4;
  v5 = a1[5];
  v6 = a1[6];
  v7 = a1[7];
  unk_175008 = a1[4];
  unk_17500C = v5;
  unk_175010 = v6;
  unk_175014 = v7;
  return pthread_mutex_unlock(&stru_174FE0);
}
