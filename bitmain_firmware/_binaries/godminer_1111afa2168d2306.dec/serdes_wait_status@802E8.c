int __fastcall serdes_wait_status(int a1, int a2, int a3, int a4, int a5)
{
  char *v8; // r8
  int v9; // r0
  int v10; // r11
  char *v11; // r4
  int v12; // r6
  int v13; // r0
  int v14; // r2
  int v15; // r1
  char *v17; // [sp+38h] [bp-105Ch]
  _DWORD v19[7]; // [sp+50h] [bp-1044h] BYREF
  int v20; // [sp+6Ch] [bp-1028h]
  _DWORD v21[7]; // [sp+70h] [bp-1024h] BYREF
  int v22; // [sp+8Ch] [bp-1008h]
  char v23[4080]; // [sp+90h] [bp-1004h] BYREF

  v8 = (char *)malloc(0x600u);
  sub_7FA14(a1, a3, 78, a4 | 0x310000);
  v9 = sub_7FA64(a1, a3, 79, v8);
  if ( !v9 )
  {
    free(v8);
    return 22;
  }
  if ( v9 <= 0 )
    goto LABEL_12;
  LOWORD(v10) = -10752;
  HIWORD(v10) = (unsigned int)"ssert rx_data_en" >> 16;
  v17 = &v8[12 * v9];
  v11 = v8;
  v12 = 0;
  do
  {
    while ( a3 == 255 )
    {
      if ( a5 != bswap32(*(_DWORD *)v11) )
      {
        V_LOCK();
        ++v12;
        V_INT((int)v19, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v23,
          0x1000u,
          0,
          v20,
          v19[0],
          v19[1],
          v19[2],
          v19[3],
          v19[4],
          v19[5],
          v19[6],
          v20,
          v10,
          (unsigned __int8)v11[4],
          (unsigned __int8)v11[8],
          a4,
          bswap32(*(_DWORD *)v11),
          a5);
        V_UNLOCK();
        v13 = g_zc;
        v14 = 120;
        goto LABEL_9;
      }
LABEL_5:
      v11 += 12;
      if ( v11 == v17 )
        goto LABEL_10;
    }
    if ( (unsigned __int8)v11[8] != a3 || a5 == bswap32(*(_DWORD *)v11) )
      goto LABEL_5;
    V_LOCK();
    ++v12;
    V_INT((int)v21, "chain", *(int *)(a1 + 256));
    logfmt_raw(
      v23,
      0x1000u,
      0,
      v22,
      v21[0],
      v21[1],
      v21[2],
      v21[3],
      v21[4],
      v21[5],
      v21[6],
      v22,
      v10,
      (unsigned __int8)v11[4],
      (unsigned __int8)v11[8],
      a4,
      bswap32(*(_DWORD *)v11),
      a5);
    V_UNLOCK();
    v13 = g_zc;
    v14 = 126;
LABEL_9:
    LOWORD(v15) = -10928;
    HIWORD(v15) = (unsigned int)"HY core %02x sram ext load done" >> 16;
    v11 += 12;
    zlog(v13, v15, 174, "serdes_wait_status", 18, v14, 60, v23);
  }
  while ( v11 != v17 );
LABEL_10:
  if ( v12 )
    usleep(0xF4240u);
LABEL_12:
  free(v8);
  return 0;
}
