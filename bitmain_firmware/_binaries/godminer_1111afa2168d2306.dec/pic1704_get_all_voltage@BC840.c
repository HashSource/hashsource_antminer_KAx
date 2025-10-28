int __fastcall pic1704_get_all_voltage(char a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // r0
  const char *v8; // r2
  unsigned __int16 v9; // r3
  unsigned __int16 v10; // r12
  int v11; // r1
  int v12; // [sp+10h] [bp-1818h] BYREF
  int v13; // [sp+14h] [bp-1814h]
  int v14; // [sp+18h] [bp-1810h]
  _DWORD v15[3]; // [sp+1Ch] [bp-180Ch] BYREF
  char s[2040]; // [sp+28h] [bp-1800h] BYREF
  char v17[4096]; // [sp+828h] [bp-1000h] BYREF

  HIBYTE(v13) = a1;
  BYTE2(v13) = 11;
  v14 = 0;
  LOWORD(v13) = 55;
  v15[0] = 255;
  v15[1] = 0;
  v12 = 0;
  *(_DWORD *)((char *)&v15[1] + 3) = 0;
  result = sub_BBA84(v13, 0, (int)&v12, (unsigned __int8 *)v15);
  if ( result )
  {
    LOWORD(v8) = 21336;
    HIWORD(v8) = (unsigned int)"0_3" >> 16;
    v9 = __rev16(*(unsigned __int16 *)((char *)&v15[1] + 1));
    v10 = __rev16(*(unsigned __int16 *)((char *)&v15[1] + 3));
    *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)((char *)v15 + 3));
    *a3 = v9;
    *a4 = v10;
    snprintf(s, 0x800u, v8, *a2, *a3, v10);
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v11) = 20644;
    HIWORD(v11) = (unsigned int)" J%d:5." >> 16;
    zlog(g_zc, v11, 165, "pic1704_get_all_voltage", 23, 542, 20, v17);
    return 1;
  }
  return result;
}
