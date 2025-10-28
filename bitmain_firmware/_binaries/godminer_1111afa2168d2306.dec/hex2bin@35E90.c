bool __fastcall hex2bin(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  int v4; // r5
  unsigned __int8 v5; // r12
  unsigned __int8 *v6; // r4
  int v7; // r6
  char v8; // r0
  char *v9; // r3
  int v10; // r2
  int v11; // r1
  int v13; // r3
  char v14[4]; // [sp+10h] [bp-1008h] BYREF
  char *endptr; // [sp+14h] [bp-1004h] BYREF
  char v16[4096]; // [sp+18h] [bp-1000h] BYREF

  v3 = *a2;
  v4 = a3;
  v14[2] = 0;
  if ( !v3 )
    return v4 == 0;
  if ( !a3 )
    return 1;
  v5 = a2[1];
  if ( v5 )
  {
    v6 = a2;
    v7 = a1 - 1;
    while ( 1 )
    {
      v14[0] = v3;
      v14[1] = v5;
      --v4;
      v8 = strtol(v14, &endptr, 16);
      v9 = endptr;
      *(_BYTE *)++v7 = v8;
      if ( *v9 )
        break;
      v3 = v6[2];
      v6 += 2;
      if ( !v3 )
        return v4 == 0;
      if ( !v4 )
        return 1;
      v5 = v6[1];
      if ( !v5 )
        goto LABEL_14;
    }
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, "hex2bin failed on '%s'", v14);
    V_UNLOCK();
    v10 = 151;
  }
  else
  {
LABEL_14:
    V_LOCK();
    LOWORD(v13) = -26196;
    HIWORD(v13) = (unsigned int)"\\f" >> 16;
    logfmt_raw(v16, 0x1000u, 0, v13);
    V_UNLOCK();
    v10 = 144;
  }
  LOWORD(v11) = -26580;
  HIWORD(v11) = (unsigned int)"f %s" >> 16;
  zlog(g_zc, v11, 134, "hex2bin", 7, v10, 100, v16);
  return 0;
}
