int __fastcall sub_3EA34(int a1, pthread_mutex_t *a2)
{
  int *v2; // r10
  pthread_mutex_t *v3; // r6
  char *v6; // r7
  size_t owner; // r2
  void *v8; // r0
  unsigned int nusers; // r3
  int spins; // r0
  int v11; // r12
  size_t lock; // r1
  signed int count; // r7
  signed int v14; // r7
  _DWORD *v15; // lr
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  signed int v22; // r8
  char *v23; // r2
  unsigned int *v24; // r1
  unsigned int v25; // t1
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r3
  void *v32; // r0
  unsigned int v33; // r3
  unsigned int v35; // [sp+4h] [bp-84h] BYREF
  int v36; // [sp+8h] [bp-80h] BYREF
  int v37; // [sp+Ch] [bp-7Ch]
  int v38; // [sp+10h] [bp-78h]
  int v39; // [sp+14h] [bp-74h]
  int v40; // [sp+18h] [bp-70h]
  int v41; // [sp+1Ch] [bp-6Ch]
  int v42; // [sp+20h] [bp-68h]
  int v43; // [sp+24h] [bp-64h]
  char v44[28]; // [sp+28h] [bp-60h] BYREF
  char v45; // [sp+44h] [bp-44h] BYREF
  int v46; // [sp+48h] [bp-40h] BYREF
  int v47; // [sp+4Ch] [bp-3Ch]
  int v48; // [sp+50h] [bp-38h]
  int v49; // [sp+54h] [bp-34h]
  int v50; // [sp+58h] [bp-30h]
  int v51; // [sp+5Ch] [bp-2Ch]
  int v52; // [sp+60h] [bp-28h]
  _DWORD v53[9]; // [sp+64h] [bp-24h] BYREF

  v2 = *(int **)(a1 + 1132);
  if ( v2 )
  {
    v3 = a2 + 66;
    v6 = &a2[12].__size[16];
    pthread_mutex_lock(a2 + 66);
    owner = a2[3].__owner;
    v8 = (void *)(a2[12].__count + a2[13].__lock);
    v35 = bswap32(a2[12].__nusers);
    memcpy(v8, v6, owner);
    nusers = a2[12].__nusers;
    spins = a2[12].__spins;
    v11 = a2[3].__owner;
    a2[12].__nusers = nusers + 1;
    a2[12].__spins = __CFADD__(nusers, 1) + spins;
    lock = a2[12].__lock;
    v2[2] = nusers;
    *v2 = v11;
    v2[3] = spins;
    sha256((char *)a2[12].__count, lock, &v46);
    sha256((char *)&v46, 0x20u, &v36);
    count = a2[13].__count;
    v46 = v36;
    v47 = v37;
    v48 = v38;
    v49 = v39;
    v50 = v40;
    v51 = v41;
    v52 = v42;
    v53[0] = v43;
    if ( count > 0 )
    {
      v14 = 0;
      do
      {
        v15 = *(_DWORD **)(a2[13].__owner + 4 * v14++);
        v16 = v15[1];
        v17 = v15[2];
        v18 = v15[3];
        v53[1] = *v15;
        v53[2] = v16;
        v53[3] = v17;
        v53[4] = v18;
        v19 = v15[5];
        v20 = v15[6];
        v21 = v15[7];
        v53[5] = v15[4];
        v53[6] = v19;
        v53[7] = v20;
        v53[8] = v21;
        sha256((char *)&v46, 0x40u, v44);
        sha256(v44, 0x20u, &v36);
        v22 = a2[13].__count;
        v46 = v36;
        v47 = v37;
        v48 = v38;
        v49 = v39;
        v50 = v40;
        v51 = v41;
        v52 = v42;
        v53[0] = v43;
      }
      while ( v22 > v14 );
    }
    v23 = &v45;
    v24 = &v35;
    do
    {
      v25 = *((_DWORD *)v23 + 1);
      v23 += 4;
      v24[1] = bswap32(v25);
      ++v24;
    }
    while ( v23 != (char *)v53 );
    memcpy((void *)(a1 + 8), &a2[6].__align + 4, 0x80u);
    v26 = v37;
    v27 = v38;
    v28 = v39;
    *(_DWORD *)(a1 + 44) = v36;
    *(_DWORD *)(a1 + 48) = v26;
    *(_DWORD *)(a1 + 52) = v27;
    *(_DWORD *)(a1 + 56) = v28;
    v29 = v41;
    v30 = v42;
    v31 = v43;
    *(_DWORD *)(a1 + 60) = v40;
    v32 = *(void **)(a1 + 1124);
    *(_DWORD *)(a1 + 64) = v29;
    *(_DWORD *)(a1 + 68) = v30;
    *(_DWORD *)(a1 + 72) = v31;
    *(_QWORD *)(a1 + 1088) = *((_QWORD *)&a2[18].__align + 1);
    if ( v32 )
    {
      free(v32);
      *(_DWORD *)(a1 + 1124) = 0;
    }
    *(_DWORD *)(a1 + 1124) = _strdup((const char *)a2[65].__kind);
    v33 = a2[14].__nusers;
    *(_DWORD *)(a1 + 1100) = a2[14].__kind;
    *(_DWORD *)(a1 + 1104) = v33;
    *(_QWORD *)a1 = a2->__lock;
    pthread_mutex_unlock(v3);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
