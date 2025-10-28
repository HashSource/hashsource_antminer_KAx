int __fastcall lcd_write(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r7
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r5
  int v9; // r11
  unsigned __int8 v10; // r5
  size_t v11; // r6
  const void *v12; // r1
  int *v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r1
  int *v20; // lr
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // lr
  int v26; // r1
  int v27; // [sp+10h] [bp-1804h] BYREF
  int v28; // [sp+14h] [bp-1800h]
  int v29; // [sp+18h] [bp-17FCh]
  int v30; // [sp+1Ch] [bp-17F8h]
  __int16 v31; // [sp+20h] [bp-17F4h]
  char v32; // [sp+22h] [bp-17F2h]
  char v33[4100]; // [sp+810h] [bp-1004h] BYREF

  v4 = a2;
  if ( !dword_18B1B0 )
    return -2;
  v5 = a4;
  if ( dword_18B1B4 != a1 )
    goto LABEL_18;
  v6 = a4 > 0x40;
  if ( a4 <= 0x40 )
    v6 = (unsigned __int8)a2 > 3u;
  v7 = v6;
  if ( v6 )
  {
LABEL_18:
    LOWORD(v15) = 8496;
    HIWORD(v15) = (unsigned int)"%s json id is null!" >> 16;
    v16 = *v15;
    v17 = v15[1];
    v18 = v15[2];
    v27 = v16;
    v28 = v17;
    LOWORD(v29) = v18;
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, &v27);
    V_UNLOCK();
    LOWORD(v19) = 31748;
    HIWORD(v19) = (unsigned int)&unk_159904 >> 16;
    zlog(g_zc, v19, 171, "lcd_write", 9, 69, 80, v33);
    return -3;
  }
  else
  {
    v9 = pthread_mutex_lock(&stru_18B1B8);
    if ( v9 )
    {
      LOWORD(v20) = 31940;
      HIWORD(v20) = (unsigned int)&unk_1599C4 >> 16;
      v21 = *v20;
      v22 = v20[1];
      v23 = v20[2];
      v24 = v20[3];
      v25 = v20[4];
      v27 = v21;
      v28 = v22;
      v29 = v23;
      v30 = v24;
      v31 = v25;
      v32 = BYTE2(v25);
      V_LOCK();
      logfmt_raw(v33, 0x1000u, v7, &v27);
      V_UNLOCK();
      LOWORD(v26) = 31748;
      HIWORD(v26) = (unsigned int)&unk_159904 >> 16;
      zlog(g_zc, v26, 171, "lcd_write", 9, 75, 100, v33);
      return -4;
    }
    else
    {
      do
      {
        v10 = v4 + 1;
        if ( v5 >= 0x10 )
          v11 = 16;
        else
          v11 = v5;
        v12 = (const void *)(a3 + v9);
        v9 += v11;
        memcpy((char *)&unk_18B1D0 + 16 * v4, v12, v11);
        v5 -= v11;
        v4 = (char)v10;
      }
      while ( v10 <= 3u && v5 != 0 );
      write(dword_18B1B4, &unk_18B1D0, 0x40u);
      pthread_mutex_unlock(&stru_18B1B8);
      return 0;
    }
  }
}
