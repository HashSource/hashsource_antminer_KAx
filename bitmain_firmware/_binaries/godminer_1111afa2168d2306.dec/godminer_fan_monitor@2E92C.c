char *__fastcall godminer_fan_monitor(int a1)
{
  char *result; // r0
  int v2; // r1
  char *v3; // r5
  const char *v4; // r2
  char *v5; // r1
  int v6; // r4
  int v7; // r1
  const char *v8; // r2
  char *v9; // r1
  int v10; // r7
  int v11; // r1
  int v12; // r1
  int v13; // r3
  int v14; // r1
  _DWORD v15[7]; // [sp+28h] [bp-1040h] BYREF
  int v16; // [sp+44h] [bp-1024h]
  _DWORD v17[7]; // [sp+48h] [bp-1020h] BYREF
  int v18; // [sp+64h] [bp-1004h]
  char v19[4096]; // [sp+68h] [bp-1000h] BYREF

  ++dword_1958A0[*(_DWORD *)(a1 + 248)];
  result = get_flag_from_monitor(a1);
  v2 = *((_DWORD *)result + 8);
  v3 = result;
  if ( (v2 & 2) != 0 )
  {
    V_LOCK();
    LOWORD(v8) = 31616;
    LOWORD(v9) = 31628;
    HIWORD(v8) = (unsigned int)"d: %s" >> 16;
    HIWORD(v9) = (unsigned int)"pwm value error!" >> 16;
    LOWORD(v10) = 31636;
    V_STR(v15, v9, v8);
    HIWORD(v10) = (unsigned int)"e error!" >> 16;
    logfmt_raw(v19, 0x1000u, 0, v16, v15[0], v15[1], v15[2], v15[3], v15[4], v15[5], v15[6], v16, v10);
    V_UNLOCK();
    LOWORD(v11) = 31476;
    HIWORD(v11) = (unsigned int)"SR1 received, reload log" >> 16;
    zlog(g_zc, v11, 139, "godminer_fan_monitor", 20, 543, 20, v19);
    V_LOCK();
    LOWORD(v12) = 31684;
    LOWORD(v13) = 31656;
    HIWORD(v12) = (unsigned int)"or!" >> 16;
    HIWORD(v13) = (unsigned int)"e: %d!" >> 16;
    logfmt_raw(v19, 0x1000u, 0, v13, v12);
    V_UNLOCK();
    LOWORD(v14) = 31476;
    HIWORD(v14) = (unsigned int)"SR1 received, reload log" >> 16;
    result = (char *)zlog(g_zc, v14, 139, "godminer_fan_monitor", 20, 544, 100, v19);
    v2 = *((_DWORD *)v3 + 8);
    *((_DWORD *)v3 + 10) |= 2u;
  }
  if ( (v2 & 1) != 0 )
  {
    V_LOCK();
    LOWORD(v4) = 31688;
    LOWORD(v5) = 31628;
    HIWORD(v4) = (unsigned int)"unknow config parameter!" >> 16;
    HIWORD(v5) = (unsigned int)"pwm value error!" >> 16;
    V_STR(v17, v5, v4);
    LOWORD(v6) = 31700;
    HIWORD(v6) = (unsigned int)"g parameter!" >> 16;
    logfmt_raw(v19, 0x1000u, 0, v18, v17[0], v17[1], v17[2], v17[3], v17[4], v17[5], v17[6], v18, v6);
    V_UNLOCK();
    LOWORD(v7) = 31476;
    HIWORD(v7) = (unsigned int)"SR1 received, reload log" >> 16;
    result = (char *)zlog(g_zc, v7, 139, "godminer_fan_monitor", 20, 552, 20, v19);
    *((_DWORD *)v3 + 10) |= 1u;
  }
  return result;
}
