int __fastcall iic_read(int a1, _BYTE *a2, int a3)
{
  pthread_mutex_t *v4; // r0
  int v7; // r4
  int *v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // lr
  int v15; // r1
  _DWORD v16[4]; // [sp+10h] [bp-1800h] BYREF
  __int16 v17; // [sp+20h] [bp-17F0h]
  char v18; // [sp+22h] [bp-17EEh]
  char v19[4096]; // [sp+810h] [bp-1000h] BYREF

  LOWORD(v4) = -23508;
  HIWORD(v4) = (unsigned int)&unk_18B8EC >> 16;
  if ( pthread_mutex_lock(v4) )
  {
    LOWORD(v9) = 20660;
    HIWORD(v9) = (unsigned int)"origin_godminer-new/backend/backend_base.c" >> 16;
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    v13 = v9[3];
    v7 = -4;
    v14 = v9[4];
    v16[0] = v10;
    v16[1] = v11;
    v16[2] = v12;
    v16[3] = v13;
    v17 = v14;
    v18 = BYTE2(v14);
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, v16);
    V_UNLOCK();
    LOWORD(v15) = 20356;
    HIWORD(v15) = (unsigned int)"fail to read tsensor by iic, chain: %d, slave: %d, addr: %d" >> 16;
    zlog(g_zc, v15, 171, "iic_read", 8, 83, 100, v19);
  }
  else
  {
    v7 = i2c_read(a1, a2, a3);
    pthread_mutex_unlock(&stru_18A42C);
  }
  return v7;
}
