int __fastcall sub_3DC08(int a1, pthread_mutex_t *a2, int a3)
{
  size_t *v3; // r6
  pthread_mutex_t *v6; // r8
  int owner; // r3
  char *v8; // r0
  int spins; // lr
  int lock; // r12
  unsigned int count; // r1
  int kind; // lr
  unsigned int nusers; // r12
  int v14; // r1
  char v16[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = *(size_t **)(a1 + 1132);
  if ( v3 )
  {
    v6 = a2 + 19;
    if ( a3 && memcmp(&unk_108778, &a2[19], 0x116u) )
    {
      qword_108898 = 0;
      memcpy(&unk_108778, v6, 0x11Eu);
    }
    pthread_mutex_lock(a2 + 66);
    owner = a2[3].__owner;
    if ( owner && owner == *v3 )
    {
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, "pool->xnonce2_size: %d, private->xnonce2_len:%d", a2[3].__owner, *v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/kda/kda_2110/kda_2110_content.c",
        173,
        "pre_push_work_kda_2110",
        22,
        40,
        20,
        v16);
      memcpy(v3 + 1, &qword_108898, *v3);
      if ( (unsigned __int64)qword_108898 > 0xFF )
        qword_108898 = 0;
      else
        ++qword_108898;
    }
    v8 = (char *)memcpy((void *)(a1 + 8), v6, 0x11Eu);
    memcpy(&v8[286 - a2[3].__lock], (const void *)a2[3].__count, a2[3].__lock);
    spins = a2[61].__spins;
    lock = a2[62].__lock;
    count = a2[62].__count;
    *(_DWORD *)(a1 + 1032) = a2[61].__nusers;
    *(_DWORD *)(a1 + 1036) = spins;
    *(_DWORD *)(a1 + 1040) = lock;
    *(_DWORD *)(a1 + 1044) = count;
    kind = a2[62].__kind;
    nusers = a2[62].__nusers;
    v14 = a2[62].__spins;
    *(_DWORD *)(a1 + 1048) = a2[62].__owner;
    *(_DWORD *)(a1 + 1052) = kind;
    *(_DWORD *)(a1 + 1056) = nusers;
    *(_DWORD *)(a1 + 1060) = v14;
    *(_QWORD *)a1 = a2->__lock;
    pthread_mutex_unlock(a2 + 66);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
