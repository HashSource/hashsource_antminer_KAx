int __fastcall bitmain_power_read(__int16 a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r7
  int v7; // r0
  const char *v8; // r9
  int v9; // r8
  const char *v10; // r10
  int v11; // r9
  int v12; // r6
  unsigned __int8 *v13; // r8
  int v14; // r4
  int v15; // t1
  const char *v17; // r2
  int v18; // r2
  int v19; // r1
  int *v20; // lr
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r2
  int v28; // [sp+14h] [bp-1848h]
  int v29; // [sp+1Ch] [bp-1840h] BYREF
  char v30; // [sp+20h] [bp-183Ch]
  char v31; // [sp+21h] [bp-183Bh]
  __int16 v32; // [sp+22h] [bp-183Ah]
  unsigned __int8 v33[52]; // [sp+24h] [bp-1838h] BYREF
  _DWORD s[6]; // [sp+58h] [bp-1804h] BYREF
  __int16 v35; // [sp+70h] [bp-17ECh]
  char v36; // [sp+72h] [bp-17EAh]
  char v37[4100]; // [sp+858h] [bp-1004h] BYREF

  LOWORD(v5) = -22440;
  HIWORD(v5) = (unsigned int)&unk_18BD18 >> 16;
  memset(v33, 0, 0x32u);
  v6 = *(_DWORD *)(v5 + 4);
  v30 = a1;
  v32 = a1 + 12 + a3;
  v31 = a3;
  v29 = 101100117;
  if ( v6 )
  {
    v28 = 0;
  }
  else
  {
    v28 = sub_B44D4();
    if ( v28 < 0 )
    {
      LOWORD(v17) = 26796;
      HIWORD(v17) = (unsigned int)"=%u\n" >> 16;
      snprintf((char *)s, 0x800u, v17, "bitmain_power_read");
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, s);
      V_UNLOCK();
      v18 = 887;
LABEL_12:
      LOWORD(v19) = 26444;
      HIWORD(v19) = (unsigned int)"ZcashPoW" >> 16;
      zlog(g_zc, v19, 173, "bitmain_power_read", 18, v18, 100, v37);
      return v28;
    }
  }
  v7 = sub_B3B48(*(void **)v5, (unsigned __int8 *)&v29, 8u, v33, a3 + 7);
  LOBYTE(v5) = v7;
  if ( v7 )
  {
    LOWORD(v20) = 26736;
    HIWORD(v20) = (unsigned int)&unk_158570 >> 16;
    v21 = *v20;
    v22 = v20[1];
    v23 = v20[2];
    v24 = v20[3];
    v20 += 4;
    v28 = -2147482880;
    s[0] = v21;
    s[1] = v22;
    s[2] = v23;
    s[3] = v24;
    v25 = v20[1];
    v26 = v20[2];
    s[4] = *v20;
    s[5] = v25;
    v35 = v26;
    v36 = BYTE2(v26);
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, s);
    V_UNLOCK();
    v18 = 897;
    goto LABEL_12;
  }
  LOWORD(v8) = 27140;
  LOWORD(v9) = 26444;
  do
  {
    HIWORD(v8) = (unsigned int)&unk_158704 >> 16;
    v5 = (unsigned __int8)(v5 + 1);
    snprintf((char *)s, 0x800u, v8);
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, s);
    V_UNLOCK();
    HIWORD(v9) = (unsigned int)"ZcashPoW" >> 16;
    zlog(g_zc, v9, 173, "bitmain_power_read", 18, 905, 100, v37);
  }
  while ( v5 <= a3 + 6 );
  if ( a3 )
  {
    LOWORD(v10) = 27168;
    LOWORD(v11) = 26444;
    v12 = a2 + (unsigned __int8)(a3 - 1);
    v13 = &v33[4];
    v14 = a2 - 1;
    do
    {
      v15 = *++v13;
      HIWORD(v10) = (unsigned int)&unk_158720 >> 16;
      *(_BYTE *)++v14 = v15;
      snprintf((char *)s, 0x800u, v10, v14 - a2, v15);
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, s);
      V_UNLOCK();
      HIWORD(v11) = (unsigned int)"ZcashPoW" >> 16;
      zlog(g_zc, v11, 173, "bitmain_power_read", 18, 910, 100, v37);
    }
    while ( v14 != v12 );
  }
  return v28;
}
