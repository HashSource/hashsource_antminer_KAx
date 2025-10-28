int __fastcall get_response_1(int a1)
{
  char *v2; // r4
  int v3; // r0
  int v4; // r3
  int v5; // r1
  int v6; // r9
  unsigned int v7; // r10
  void *v8; // r0
  int (**v9)(); // r0
  int v10; // r4
  int v11; // r1
  __useconds_t v13; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r3
  int v18; // r1
  int v19; // r3
  int v20; // [sp+14h] [bp-2010h]
  unsigned int v21; // [sp+18h] [bp-200Ch]
  char s[4096]; // [sp+20h] [bp-2004h] BYREF
  char v23[4100]; // [sp+1020h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "get_response_1", *(_DWORD *)(a1 + 252));
  V_LOCK();
  v3 = syscall(224);
  LOWORD(v4) = -31096;
  HIWORD(v4) = (unsigned int)"tum_threads" >> 16;
  logfmt_raw(v23, 0x1000u, 0, v4, v2, v3);
  V_UNLOCK();
  LOWORD(v5) = 32276;
  HIWORD(v5) = (unsigned int)"esp_packet_queue is false" >> 16;
  LOWORD(v6) = -32628;
  zlog(g_zc, v5, 150, "get_response_1", 14, 390, 40, v23);
  v7 = 64;
  v21 = 1;
  prctl(15, v2);
  v20 = 0;
  v8 = memset(s, 0, sizeof(s));
  while ( 1 )
  {
    v9 = dev_ctrl((int)v8);
    v10 = ((int (__fastcall *)(int, char *, int))v9[20])(14, s, 256);
    getresponce_1_len += v10;
    V_LOCK();
    HIWORD(v6) = (unsigned int)"ner-origin_godminer-new/backend/chip_reg_io_base.c" >> 16;
    logfmt_raw(v23, 0x1000u, 0, v6, "get_response_1", v10, getresponce_1_len);
    V_UNLOCK();
    LOWORD(v11) = 32276;
    HIWORD(v11) = (unsigned int)"esp_packet_queue is false" >> 16;
    zlog(g_zc, v11, 150, "get_response_1", 14, 405, 20, v23);
    if ( *(_BYTE *)(a1 + 913) )
      break;
    if ( v10 <= 0 )
    {
      v13 = v7;
      v7 *= 2;
      v8 = (void *)usleep(v13);
      if ( v7 >= 0x3E8 )
        v7 = 1000;
    }
    else
    {
      if ( !queue_enqueue(*(_DWORD *)(a1 + 876), s, v10) && v21 <= ++v20 )
      {
        V_LOCK();
        logfmt_raw(v23, 0x1000u, 0, "chain[%d], queue_enqueue of __resp_packet_queue is false", *(_DWORD *)(a1 + 256));
        V_UNLOCK();
        LOWORD(v15) = 32276;
        HIWORD(v15) = (unsigned int)"esp_packet_queue is false" >> 16;
        zlog(g_zc, v15, 150, "get_response_1", 14, 417, 40, v23);
        V_LOCK();
        v16 = v20;
        LOWORD(v17) = 32488;
        HIWORD(v17) = (unsigned int)"ed,errcode %d" >> 16;
        v20 = 0;
        logfmt_raw(v23, 0x1000u, 0, v17, v16, v21);
        V_UNLOCK();
        LOWORD(v18) = 32276;
        HIWORD(v18) = (unsigned int)"esp_packet_queue is false" >> 16;
        zlog(g_zc, v18, 150, "get_response_1", 14, 418, 40, v23);
        v19 = 10 * v21;
        if ( 10 * v21 >= 0x989680 )
          v19 = 10000000;
        v21 = v19;
      }
      v7 = 64;
      v8 = memset(s, 0, v10);
    }
  }
  *(_BYTE *)(a1 + 913) = 0;
  return 0;
}
