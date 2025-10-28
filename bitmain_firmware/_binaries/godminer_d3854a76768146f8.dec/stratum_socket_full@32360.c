int __fastcall stratum_socket_full(int a1, __time_t a2)
{
  size_t v4; // r0
  int v5; // r3
  int v6; // r1
  char v8[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  v4 = strlen(*(const char **)(a1 + 44));
  LOWORD(v5) = 9192;
  HIWORD(v5) = (unsigned int)"\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\"]}" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v4);
  V_UNLOCK();
  LOWORD(v6) = 8820;
  HIWORD(v6) = (unsigned int)"once2_size" >> 16;
  zlog(g_zc, v6, 145, "stratum_socket_full", 19, 104, 20, v8);
  if ( **(_BYTE **)(a1 + 44) )
    return 1;
  else
    return socket_full(*(_DWORD *)(a1 + 36), a2);
}
