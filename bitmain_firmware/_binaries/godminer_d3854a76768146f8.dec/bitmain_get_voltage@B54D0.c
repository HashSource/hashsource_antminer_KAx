void bitmain_get_voltage()
{
  const char *v0; // r2
  int v1; // r1
  int *v2; // lr
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r1
  int *v10; // r12
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r1
  int v17; // [sp+10h] [bp-1810h] BYREF
  __int16 v18; // [sp+14h] [bp-180Ch]
  _DWORD v19[2]; // [sp+18h] [bp-1808h] BYREF
  int s; // [sp+20h] [bp-1800h] BYREF
  int v21; // [sp+24h] [bp-17FCh]
  int v22; // [sp+28h] [bp-17F8h]
  int v23; // [sp+2Ch] [bp-17F4h]
  int v24; // [sp+30h] [bp-17F0h]
  int v25; // [sp+34h] [bp-17ECh]
  __int16 v26; // [sp+38h] [bp-17E8h]
  char v27; // [sp+3Ah] [bp-17E6h]
  char v28[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_18A85C || sub_B44D4() >= 0 )
  {
    v19[1] = 0;
    v19[0] = 0;
    v17 = 50637397;
    v18 = 7;
    if ( sub_B3B48((void *)dword_18A858, (unsigned __int8 *)&v17, 6u, (unsigned __int8 *)v19, 8u) )
    {
      LOWORD(v2) = 27088;
      HIWORD(v2) = (unsigned int)&unk_1586D0 >> 16;
      v3 = *v2;
      v4 = v2[1];
      v5 = v2[2];
      v6 = v2[3];
      v2 += 4;
      s = v3;
      v21 = v4;
      v22 = v5;
      v23 = v6;
      v7 = v2[1];
      v8 = v2[2];
      v24 = *v2;
      v25 = v7;
      v26 = v8;
      v27 = BYTE2(v8);
      V_LOCK();
      logfmt_raw(v28, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v9) = 26444;
      HIWORD(v9) = (unsigned int)"ZcashPoW" >> 16;
      zlog(g_zc, v9, 173, "_bitmain_get_AD_conversion_N", 28, 360, 100, v28);
      LOWORD(v10) = 27116;
      HIWORD(v10) = (unsigned int)&unk_1586EC >> 16;
      v11 = *v10;
      v12 = v10[1];
      v13 = v10[2];
      v14 = v10[3];
      v10 += 4;
      s = v11;
      v21 = v12;
      v22 = v13;
      v23 = v14;
      v15 = v10[1];
      v24 = *v10;
      LOBYTE(v25) = v15;
      V_LOCK();
      logfmt_raw(v28, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v16) = 26444;
      HIWORD(v16) = (unsigned int)"ZcashPoW" >> 16;
      zlog(g_zc, v16, 173, "bitmain_get_voltage", 19, 696, 100, v28);
    }
    else
    {
      bitmain_convert_N_to_V();
    }
  }
  else
  {
    LOWORD(v0) = 26796;
    HIWORD(v0) = (unsigned int)"=%u\n" >> 16;
    snprintf((char *)&s, 0x800u, v0, "bitmain_get_voltage");
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v1) = 26444;
    HIWORD(v1) = (unsigned int)"ZcashPoW" >> 16;
    zlog(g_zc, v1, 173, "bitmain_get_voltage", 19, 692, 100, v28);
  }
}
