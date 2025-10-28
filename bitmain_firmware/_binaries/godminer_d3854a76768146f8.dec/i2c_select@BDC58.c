int __fastcall i2c_select(int a1, int a2)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r7
  void (__fastcall *v6)(_DWORD *, _DWORD *, int); // r3
  int v7; // r2
  const char *v8; // r2
  int v9; // r1
  int *v11; // lr
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // lr
  int v17; // r1
  _DWORD v18[2]; // [sp+10h] [bp-180Ch] BYREF
  _DWORD s[4]; // [sp+18h] [bp-1804h] BYREF
  __int16 v20; // [sp+28h] [bp-17F4h]
  char v21; // [sp+2Ah] [bp-17F2h]
  char v22[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_18B198) )
  {
    LOWORD(v11) = 20660;
    HIWORD(v11) = (unsigned int)"origin_godminer-new/backend/backend_base.c" >> 16;
    v12 = *v11;
    v13 = v11[1];
    v14 = v11[2];
    v15 = v11[3];
    v16 = v11[4];
    s[0] = v12;
    s[1] = v13;
    s[2] = v14;
    s[3] = v15;
    v20 = v16;
    v21 = BYTE2(v16);
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v17) = 31140;
    HIWORD(v17) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
    zlog(g_zc, v17, 171, "i2c_select", 10, 465, 100, v22);
    return -4;
  }
  else
  {
    v4 = new_iterator_c_map(dword_18B194);
    if ( ((int (*)(void))*v4)() )
    {
      while ( ***(_DWORD ***)(v4[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v4)(v4) )
          goto LABEL_7;
      }
      v5 = (_DWORD *)((int (*)(void))v4[2])();
      v6 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v4[1];
      v7 = v5[1];
      v18[0] = a2;
      v18[1] = v7;
      v6(v4, v18, 8);
      LOWORD(v8) = 31668;
      HIWORD(v8) = (unsigned int)&unk_1598B4 >> 16;
      snprintf((char *)s, 0x800u, v8, a2);
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v9) = 31140;
      HIWORD(v9) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
      zlog(g_zc, v9, 171, "i2c_select", 10, 476, 20, v22);
      free(v5);
    }
LABEL_7:
    delete_iterator_c_map(v4);
    pthread_mutex_unlock(&stru_18B198);
    return 0;
  }
}
