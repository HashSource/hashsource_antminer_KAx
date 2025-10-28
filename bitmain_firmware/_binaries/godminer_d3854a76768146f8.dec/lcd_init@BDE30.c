int __fastcall lcd_init(int a1)
{
  int result; // r0
  int *v2; // r2
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int *v8; // lr
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // lr
  int v14; // r3
  int v15; // r1
  int v16; // [sp+10h] [bp-1800h] BYREF
  int v17; // [sp+14h] [bp-17FCh]
  int v18; // [sp+18h] [bp-17F8h]
  int v19; // [sp+1Ch] [bp-17F4h]
  __int16 v20; // [sp+20h] [bp-17F0h]
  char v21; // [sp+22h] [bp-17EEh]
  char v22[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_18B1B0 )
    return 0;
  if ( a1 )
  {
    result = open64(a1);
    dword_18B1B4 = result;
    if ( result < 0 )
    {
      LOWORD(v8) = 31920;
      HIWORD(v8) = (unsigned int)&unk_1599B0 >> 16;
      v9 = *v8;
      v10 = v8[1];
      v11 = v8[2];
      v12 = v8[3];
      v13 = v8[4];
      v16 = v9;
      v17 = v10;
      v18 = v11;
      v19 = v12;
      v20 = v13;
      v21 = BYTE2(v13);
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, &v16);
      V_UNLOCK();
      LOWORD(v14) = 31700;
      LOWORD(v15) = 31748;
      HIWORD(v14) = (unsigned int)&unk_1598D4 >> 16;
      HIWORD(v15) = (unsigned int)&unk_159904 >> 16;
      zlog(g_zc, v15, 171, v14, 8, 41, 100, v22);
      return -1;
    }
    else
    {
      dword_18B1B0 = 1;
    }
  }
  else
  {
    LOWORD(v2) = 8496;
    HIWORD(v2) = (unsigned int)"%s json id is null!" >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v16 = v3;
    v17 = v4;
    LOWORD(v18) = v5;
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, &v16);
    V_UNLOCK();
    LOWORD(v6) = 31700;
    LOWORD(v7) = 31748;
    HIWORD(v6) = (unsigned int)&unk_1598D4 >> 16;
    HIWORD(v7) = (unsigned int)&unk_159904 >> 16;
    zlog(g_zc, v7, 171, v6, 8, 35, 100, v22);
    return -3;
  }
  return result;
}
