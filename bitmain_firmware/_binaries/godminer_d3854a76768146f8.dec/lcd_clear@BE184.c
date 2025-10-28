int __fastcall lcd_clear(int a1)
{
  int v1; // r6
  int v2; // r1
  int *v4; // r2
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r1
  int *v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // lr
  int v15; // r1
  int v16; // [sp+10h] [bp-1800h] BYREF
  int v17; // [sp+14h] [bp-17FCh]
  int v18; // [sp+18h] [bp-17F8h]
  int v19; // [sp+1Ch] [bp-17F4h]
  __int16 v20; // [sp+20h] [bp-17F0h]
  char v21; // [sp+22h] [bp-17EEh]
  char v22[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !dword_18B1B0 )
    return -2;
  if ( dword_18B1B4 == a1 )
  {
    if ( pthread_mutex_lock(&stru_18B1B8) )
    {
      LOWORD(v9) = 31940;
      HIWORD(v9) = (unsigned int)&unk_1599C4 >> 16;
      v10 = *v9;
      v11 = v9[1];
      v12 = v9[2];
      v13 = v9[3];
      v14 = v9[4];
      v16 = v10;
      v17 = v11;
      v18 = v12;
      v19 = v13;
      v20 = v14;
      v21 = BYTE2(v14);
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, &v16);
      V_UNLOCK();
      LOWORD(v15) = 31748;
      HIWORD(v15) = (unsigned int)&unk_159904 >> 16;
      zlog(g_zc, v15, 171, "lcd_clear", 9, 123, 100, v22);
      return -4;
    }
    else
    {
      memset(&unk_18B1D0, 0x20, 0x40u);
      v1 = dword_18B1B4;
      lseek64(dword_18B1B4, v2, 0, 0, 0);
      write(v1, &unk_18B1D0, 0x40u);
      pthread_mutex_unlock(&stru_18B1B8);
      return 0;
    }
  }
  else
  {
    LOWORD(v4) = 8496;
    HIWORD(v4) = (unsigned int)"%s json id is null!" >> 16;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v16 = v5;
    v17 = v6;
    LOWORD(v18) = v7;
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, &v16);
    V_UNLOCK();
    LOWORD(v8) = 31748;
    HIWORD(v8) = (unsigned int)&unk_159904 >> 16;
    zlog(g_zc, v8, 171, "lcd_clear", 9, 117, 80, v22);
    return -3;
  }
}
