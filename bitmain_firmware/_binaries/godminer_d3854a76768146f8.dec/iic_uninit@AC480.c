int __fastcall iic_uninit(int a1)
{
  pthread_mutex_t *v2; // r0
  int *v4; // lr
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // lr
  int v10; // r1
  _DWORD v11[4]; // [sp+10h] [bp-1800h] BYREF
  __int16 v12; // [sp+20h] [bp-17F0h]
  char v13; // [sp+22h] [bp-17EEh]
  char v14[4096]; // [sp+810h] [bp-1000h] BYREF

  LOWORD(v2) = -23508;
  HIWORD(v2) = (unsigned int)&unk_18B8EC >> 16;
  if ( pthread_mutex_lock(v2) )
  {
    LOWORD(v4) = 20660;
    HIWORD(v4) = (unsigned int)"origin_godminer-new/backend/backend_base.c" >> 16;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v8 = v4[3];
    v9 = v4[4];
    v11[0] = v5;
    v11[1] = v6;
    v11[2] = v7;
    v11[3] = v8;
    v12 = v9;
    v13 = BYTE2(v9);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, v11);
    V_UNLOCK();
    LOWORD(v10) = 20356;
    HIWORD(v10) = (unsigned int)"fail to read tsensor by iic, chain: %d, slave: %d, addr: %d" >> 16;
    return zlog(g_zc, v10, 171, "iic_uninit", 10, 64, 100, v14);
  }
  else
  {
    i2c_uninit(a1);
    return pthread_mutex_unlock(&stru_18A42C);
  }
}
