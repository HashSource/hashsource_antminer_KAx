int __fastcall iic_read_reg(void *a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5)
{
  pthread_mutex_t *v6; // r0
  int reg; // r4
  int *v12; // lr
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // lr
  int v18; // r1
  _DWORD v19[4]; // [sp+10h] [bp-1804h] BYREF
  __int16 v20; // [sp+20h] [bp-17F4h]
  char v21; // [sp+22h] [bp-17F2h]
  char v22[4080]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v6) = -23508;
  HIWORD(v6) = (unsigned int)&unk_18B8EC >> 16;
  if ( pthread_mutex_lock(v6) )
  {
    LOWORD(v12) = 20660;
    HIWORD(v12) = (unsigned int)"origin_godminer-new/backend/backend_base.c" >> 16;
    v13 = *v12;
    v14 = v12[1];
    v15 = v12[2];
    v16 = v12[3];
    reg = -4;
    v17 = v12[4];
    v19[0] = v13;
    v19[1] = v14;
    v19[2] = v15;
    v19[3] = v16;
    v20 = v17;
    v21 = BYTE2(v17);
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, v19);
    V_UNLOCK();
    LOWORD(v18) = 20356;
    HIWORD(v18) = (unsigned int)"fail to read tsensor by iic, chain: %d, slave: %d, addr: %d" >> 16;
    zlog(g_zc, v18, 171, "iic_read_reg", 12, 124, 100, v22);
  }
  else
  {
    reg = i2c_read_reg(a1, a2, a3, a4, a5);
    pthread_mutex_unlock(&stru_18A42C);
  }
  return reg;
}
