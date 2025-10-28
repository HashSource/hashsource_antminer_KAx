int __fastcall serdes_wait_status_rvn(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r0
  char *v8; // r4
  int v9; // r8
  char *v10; // r6
  int v11; // r2
  int v12; // r1
  int v14; // r11
  char *ptr; // [sp+3Ch] [bp-1060h]
  int v16; // [sp+44h] [bp-1058h]
  int v18; // [sp+4Ch] [bp-1050h]
  int v19; // [sp+50h] [bp-104Ch]
  _DWORD v20[7]; // [sp+58h] [bp-1044h] BYREF
  int v21; // [sp+74h] [bp-1028h]
  _DWORD v22[7]; // [sp+78h] [bp-1024h] BYREF
  int v23; // [sp+94h] [bp-1008h]
  char v24[4100]; // [sp+98h] [bp-1004h] BYREF

  v19 = (unsigned __int16)a3;
  v18 = a4 | 0x310000;
  ptr = (char *)malloc(0x300u);
  LOBYTE(v16) = 5;
  while ( 1 )
  {
    sub_99D08(a1, a3, 78, v18);
    v7 = sub_99D5C(a1, v19, 79, ptr);
    if ( !v7 )
      break;
    if ( v7 <= 0 )
      goto LABEL_13;
    v8 = ptr;
    v9 = 0;
    v10 = &ptr[12 * v7];
    do
    {
      while ( a3 == 255 )
      {
        if ( *(_DWORD *)v8 != a5 )
        {
          V_LOCK();
          ++v9;
          V_INT((int)v20, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v24,
            0x1000u,
            0,
            v21,
            v20[0],
            v20[1],
            v20[2],
            v20[3],
            v20[4],
            v20[5],
            v20[6],
            v21,
            "[PHY READ] core %02x apb_addr %04x rata %08x not equal to %08x",
            (unsigned __int8)v8[8],
            a4,
            *(_DWORD *)v8,
            a5);
          V_UNLOCK();
          v11 = 119;
          goto LABEL_10;
        }
LABEL_6:
        v8 += 12;
        if ( v10 == v8 )
          goto LABEL_11;
      }
      if ( (unsigned __int8)v8[8] != a3 || *(_DWORD *)v8 == a5 )
        goto LABEL_6;
      V_LOCK();
      ++v9;
      V_INT((int)v22, "chain", *(int *)(a1 + 232));
      LOWORD(v14) = -9480;
      HIWORD(v14) = (unsigned int)"_nonce_kas" >> 16;
      logfmt_raw(
        v24,
        0x1000u,
        0,
        v23,
        v22[0],
        v22[1],
        v22[2],
        v22[3],
        v22[4],
        v22[5],
        v22[6],
        v23,
        v14,
        (unsigned __int8)v8[8],
        a4,
        *(_DWORD *)v8,
        a5);
      V_UNLOCK();
      v11 = 125;
LABEL_10:
      LOWORD(v12) = 7660;
      HIWORD(v12) = (unsigned int)"%d] remote temp failed after retry %d times" >> 16;
      v8 += 12;
      zlog(g_zc, v12, 174, "serdes_wait_status_rvn", 22, v11, 60, v24);
    }
    while ( v10 != v8 );
LABEL_11:
    if ( v9 )
    {
      usleep(0xF4240u);
      v16 = (unsigned __int8)(v16 - 1);
      if ( v16 )
        continue;
    }
LABEL_13:
    free(ptr);
    return 0;
  }
  free(ptr);
  return 22;
}
