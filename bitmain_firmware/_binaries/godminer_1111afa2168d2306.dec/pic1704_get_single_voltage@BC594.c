int __fastcall pic1704_get_single_voltage(char a1, _DWORD *a2)
{
  int v2; // r4
  int result; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r0
  const char *v8; // r2
  int v9; // r1
  unsigned __int8 *i; // r2
  __int16 v11; // t1
  const char *v12; // r2
  unsigned __int16 v13; // r8
  int v14; // r1
  const char *v15; // r2
  int v16; // r1
  int v17; // [sp+10h] [bp-181Ch] BYREF
  __int16 v18; // [sp+14h] [bp-1818h]
  unsigned __int8 v19[8]; // [sp+18h] [bp-1814h] BYREF
  int v20; // [sp+20h] [bp-180Ch]
  int v21; // [sp+24h] [bp-1808h]
  char v22[2040]; // [sp+28h] [bp-1804h] BYREF
  char v23[4100]; // [sp+828h] [bp-1004h] BYREF

  LOWORD(v2) = 0;
  BYTE2(v20) = 7;
  LOWORD(v20) = 58;
  *(_DWORD *)v19 = 255;
  HIBYTE(v20) = a1;
  v21 = 0;
  v17 = 0;
  *(_DWORD *)&v19[3] = 0;
  v18 = 0;
  result = sub_BBA84(v20, 0, (int)&v17, v19);
  if ( result )
  {
    v5 = v19[2];
    v6 = v19[0];
    v7 = v19[1];
    if ( v19[2] == 1 && v19[0] > 3u )
    {
      for ( i = &v19[3]; ; ++i )
      {
        v2 = (unsigned __int16)(v2 + v6);
        LOWORD(v6) = v7;
        if ( i == &v19[v19[0]] )
          break;
        LOWORD(v7) = v5;
        v11 = *i;
        LOWORD(v5) = v11;
      }
      LOWORD(v12) = 21220;
      HIWORD(v12) = (unsigned int)"de_enable" >> 16;
      v13 = __rev16(*(unsigned __int16 *)&v19[v19[0] - 2]);
      snprintf(v22, 0x800u, v12, v2, v13);
      V_LOCK();
      logfmt_raw(v23, 0x1000u, 0, v22);
      V_UNLOCK();
      LOWORD(v14) = 20644;
      HIWORD(v14) = (unsigned int)" J%d:5." >> 16;
      zlog(g_zc, v14, 165, "check_pic_crc", 13, 428, 20, v23);
      if ( v2 == v13 )
      {
        LOWORD(v15) = 21292;
        HIWORD(v15) = (unsigned int)"eset_all" >> 16;
        *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v19[3]);
        snprintf(v22, 0x800u, v15);
        V_LOCK();
        logfmt_raw(v23, 0x1000u, 0, v22);
        V_UNLOCK();
        LOWORD(v16) = 20644;
        HIWORD(v16) = (unsigned int)" J%d:5." >> 16;
        zlog(g_zc, v16, 165, "pic1704_get_single_voltage", 26, 515, 20, v23);
        return 1;
      }
      v6 = v19[0];
      v5 = v19[2];
      v7 = v19[1];
    }
    LOWORD(v8) = 21240;
    HIWORD(v8) = (unsigned int)"ware_version" >> 16;
    snprintf(v22, 0x800u, v8, v6, v7, v5);
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, v22);
    V_UNLOCK();
    LOWORD(v9) = 20644;
    HIWORD(v9) = (unsigned int)" J%d:5." >> 16;
    zlog(g_zc, v9, 165, "pic1704_get_single_voltage", 26, 511, 20, v23);
    return 1;
  }
  return result;
}
