int __fastcall init_eeprom_fmt_info(_BYTE *a1, int a2)
{
  int v2; // r4
  int *v3; // lr
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r1
  _DWORD v12[6]; // [sp+10h] [bp-1800h] BYREF
  __int16 v13; // [sp+28h] [bp-17E8h]
  char v14[4096]; // [sp+810h] [bp-1000h] BYREF

  v2 = 0;
  a1[3] = 3;
  a1[5] = 22;
  a1[6] = 35;
  a1[4] = 20;
  a1[7] = 36;
  a1[8] = 45;
  *a1 = 0;
  a1[1] = 1;
  a1[2] = 2;
  if ( (unsigned int)(a2 - 3) > 1 )
  {
    a1[34] = 1;
    a1[35] = 1;
    a1[36] = 1;
    a1[38] = 2;
    a1[40] = 1;
    a1[37] = 17;
    a1[39] = 13;
    a1[42] = 32;
  }
  else
  {
    v2 = 1;
    a1[34] = 1;
    a1[35] = 1;
    a1[36] = 1;
    a1[38] = 2;
    a1[40] = 1;
    a1[28] = 113;
    a1[29] = 114;
    a1[30] = 116;
    a1[31] = -12;
    a1[32] = -10;
    qmemcpy(a1 + 9, "MNRSTUVWXZ\\^`abcd", 17);
    a1[33] = -7;
    a1[37] = 17;
    a1[39] = 13;
    a1[42] = 32;
    a1[41] = 9;
  }
  a1[43] = 1;
  a1[45] = 1;
  a1[46] = 1;
  a1[47] = 1;
  a1[48] = 1;
  a1[49] = 1;
  a1[50] = 1;
  a1[55] = 1;
  a1[56] = 1;
  a1[57] = 1;
  a1[58] = 1;
  a1[60] = 1;
  a1[65] = 1;
  a1[44] = 4;
  a1[51] = 2;
  a1[52] = 2;
  a1[53] = 2;
  a1[54] = 2;
  a1[61] = 2;
  a1[63] = 2;
  a1[59] = 8;
  a1[62] = 0x80;
  a1[64] = 3;
  if ( !v2 )
  {
    LOWORD(v3) = 24460;
    HIWORD(v3) = (unsigned int)"device/hal/platform/7007/7007_lcd.c" >> 16;
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    v3 += 4;
    v12[0] = v4;
    v12[1] = v5;
    v12[2] = v6;
    v12[3] = v7;
    v8 = v3[1];
    v9 = v3[2];
    v12[4] = *v3;
    v12[5] = v8;
    v13 = v9;
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, v12);
    V_UNLOCK();
    LOWORD(v10) = 23676;
    HIWORD(v10) = (unsigned int)"l" >> 16;
    zlog(g_zc, v10, 170, "init_eeprom_fmt_info", 20, 462, 100, v14);
  }
  return v2;
}
