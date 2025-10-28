unsigned int __fastcall pipe_pop_eager(int a1, char *a2, int a3)
{
  unsigned int v3; // r11
  unsigned int v4; // r6
  pthread_mutex_t *v5; // r10
  unsigned int v7; // r5
  unsigned int v8; // r7
  unsigned int v9; // r9
  unsigned int v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  size_t v13; // r8
  const void *v14; // r1
  char *v15; // r5
  unsigned int v16; // r1
  unsigned int v17; // r3
  bool v18; // cc
  pthread_mutex_t *v19; // r0
  unsigned int v20; // r5
  pthread_cond_t *v21; // r0
  unsigned int v23; // r1
  unsigned int v24; // r2
  int v25; // r2
  char *v26; // r5
  char *v27; // r1
  char *v28; // r5
  unsigned int v29; // r3
  unsigned int v30; // r12
  int v31; // r1
  int v32; // lr
  bool v33; // cf
  unsigned int v34; // r0
  int v35; // r2
  unsigned int v36; // r2
  unsigned int v37; // [sp+0h] [bp-2Ch]
  unsigned int v39; // [sp+8h] [bp-24h]
  size_t n; // [sp+Ch] [bp-20h]
  int v41[7]; // [sp+10h] [bp-1Ch] BYREF

  v3 = *(_DWORD *)a1;
  v4 = *(_DWORD *)a1 * a3;
  if ( !v4 )
    return v4;
  v5 = (pthread_mutex_t *)(a1 + 36);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 36));
  v7 = *(_DWORD *)(a1 + 20);
  v8 = *(_DWORD *)(a1 + 24);
  v9 = *(_DWORD *)a1;
  v37 = *(_DWORD *)(a1 + 12);
  v10 = *(_DWORD *)(a1 + 16);
  if ( v7 >= v8 )
  {
    v23 = v10 - v7;
    v24 = v8 - v37;
    if ( v9 != v8 - v37 + v10 - v7 )
      goto LABEL_33;
  }
  else
  {
    v11 = v8 - v7;
    if ( v9 != v8 - v7 )
      goto LABEL_4;
  }
  if ( *(_DWORD *)(a1 + 28) )
  {
    do
    {
      pthread_cond_wait((pthread_cond_t *)(a1 + 88), v5);
      v9 = *(_DWORD *)a1;
      v10 = *(_DWORD *)(a1 + 16);
      v7 = *(_DWORD *)(a1 + 20);
      v8 = *(_DWORD *)(a1 + 24);
      v25 = v8 - v7;
      if ( v7 >= v8 )
        v25 = v8 - *(_DWORD *)(a1 + 12) + v10 - v7;
    }
    while ( v9 == v25 && *(_DWORD *)(a1 + 28) );
    v37 = *(_DWORD *)(a1 + 12);
  }
  if ( v8 > v7 )
  {
    v11 = v8 - v7;
    goto LABEL_4;
  }
  v23 = v10 - v7;
  v24 = v8 - v37;
LABEL_33:
  v11 = v24 + v23;
LABEL_4:
  v12 = v11 - v9;
  if ( v12 )
  {
    v13 = v10 - v7 - v9;
    if ( v4 >= v12 )
      v4 = v12;
    v39 = v10;
    if ( v13 >= v4 )
      v13 = v4;
    v14 = (const void *)(v7 + v9);
    v15 = (char *)(v7 + v13);
    n = v4 - v13;
    memcpy(a2, v14, v13);
    v17 = v39;
    if ( (unsigned int)v15 >= v39 )
      v15 = &v15[v37 - v39];
    if ( v4 != v13 )
    {
      v26 = &v15[v9];
      if ( (unsigned int)v26 >= v39 )
        v26 = &v26[v37 - v39];
      v27 = v26;
      v28 = &v26[n];
      memcpy(&a2[v13], v27, n);
      v17 = v39;
      if ( (unsigned int)v28 >= v39 )
        v28 = &v28[v37 - v39];
      v15 = &v28[-v9];
      if ( v37 > (unsigned int)v15 )
        v15 = (char *)(v39 - (v37 - (_DWORD)v15));
    }
    v18 = v8 > (unsigned int)v15;
    if ( v8 <= (unsigned int)v15 )
      v16 = v37;
    v19 = v5;
    *(_DWORD *)(a1 + 20) = v15;
    if ( v8 > (unsigned int)v15 )
      v20 = v8 - (_DWORD)v15;
    else
      v20 = v17 - (_DWORD)v15;
    if ( !v18 )
      v20 += v8 - v16;
    if ( v20 - v9 <= (v17 - v37 - v9) >> 2 )
    {
      pthread_mutex_unlock(v5);
      pthread_mutex_lock((pthread_mutex_t *)(a1 + 60));
      pthread_mutex_lock(v5);
      v29 = *(_DWORD *)(a1 + 24);
      v30 = *(_DWORD *)(a1 + 20);
      v31 = *(_DWORD *)(a1 + 12);
      v32 = *(_DWORD *)(a1 + 16);
      v33 = v30 >= v29;
      v34 = *(_DWORD *)a1;
      if ( v30 < v29 )
        v29 -= v30;
      v35 = v32 - v31;
      if ( v33 )
      {
        v31 = v29 - v31;
        v29 = v32 - v30;
      }
      v36 = v35 - v34;
      if ( v33 )
        v29 += v31;
      if ( v29 - v34 <= v36 >> 2 )
        sub_DBF5C(v41, (int *)a1, v36 >> 1);
      pthread_mutex_unlock(v5);
      v19 = (pthread_mutex_t *)(a1 + 60);
    }
    pthread_mutex_unlock(v19);
    v21 = (pthread_cond_t *)(a1 + 136);
    if ( v4 == *(_DWORD *)a1 )
      pthread_cond_signal(v21);
    else
      pthread_cond_broadcast(v21);
    v4 /= v3;
  }
  else
  {
    v4 = 0;
    pthread_mutex_unlock(v5);
  }
  return v4;
}
