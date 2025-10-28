int __fastcall i2c_ioctl(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  int *v7; // r0
  int *v8; // r8
  int v9; // r2
  void (__fastcall *v10)(_DWORD *, _DWORD *, int); // r3
  const char *v11; // r2
  int v12; // r1
  int *v14; // lr
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // lr
  int v20; // r1
  _DWORD v21[2]; // [sp+10h] [bp-1808h] BYREF
  _DWORD s[4]; // [sp+18h] [bp-1800h] BYREF
  __int16 v23; // [sp+28h] [bp-17F0h]
  char v24; // [sp+2Ah] [bp-17EEh]
  char v25[4096]; // [sp+818h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18B198) )
  {
    LOWORD(v14) = 20660;
    HIWORD(v14) = (unsigned int)"origin_godminer-new/backend/backend_base.c" >> 16;
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    v18 = v14[3];
    v19 = v14[4];
    s[0] = v15;
    s[1] = v16;
    s[2] = v17;
    s[3] = v18;
    v23 = v19;
    v24 = BYTE2(v19);
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v20) = 31140;
    HIWORD(v20) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
    zlog(g_zc, v20, 171, "i2c_ioctl", 9, 432, 100, v25);
    return -4;
  }
  else
  {
    v6 = new_iterator_c_map(dword_18B194);
    if ( ((int (*)(void))*v6)() )
    {
      while ( ***(_DWORD ***)(v6[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v6)(v6) )
          goto LABEL_8;
      }
      v7 = (int *)((int (*)(void))v6[2])();
      v8 = v7;
      if ( a2 == 1795 )
      {
        v9 = *v7;
        v10 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v6[1];
        v21[1] = a3;
        v21[0] = v9;
        v10(v6, v21, 8);
        LOWORD(v11) = 31636;
        HIWORD(v11) = (unsigned int)&unk_159894 >> 16;
        snprintf((char *)s, 0x800u, v11, a3);
        V_LOCK();
        logfmt_raw(v25, 0x1000u, 0, s);
        V_UNLOCK();
        LOWORD(v12) = 31140;
        HIWORD(v12) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
        zlog(g_zc, v12, 171, "i2c_ioctl", 9, 446, 20, v25);
        free(v8);
      }
    }
LABEL_8:
    delete_iterator_c_map(v6);
    pthread_mutex_unlock(&stru_18B198);
    return 0;
  }
}
