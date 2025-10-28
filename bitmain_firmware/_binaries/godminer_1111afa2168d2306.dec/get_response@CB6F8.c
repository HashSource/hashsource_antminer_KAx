int __fastcall get_response(int a1)
{
  char *v2; // r0
  int v3; // r3
  const char *v4; // r2
  char *v5; // r4
  int v6; // r0
  int v7; // r3
  int v8; // r6
  int v9; // r3
  int v10; // r1
  int v11; // r7
  unsigned int v12; // r10
  unsigned int v13; // r6
  int v14; // r7
  void *v15; // r0
  int (**v16)(); // r0
  int v17; // r0
  size_t v18; // r4
  __useconds_t v19; // r0
  int v21; // r1
  int v22; // r3
  int v23; // r1
  int v24; // [sp+0h] [bp-1124h]
  unsigned int v25; // [sp+4h] [bp-1120h]
  int v26; // [sp+18h] [bp-110Ch]
  int v27; // [sp+1Ch] [bp-1108h]
  char s[256]; // [sp+20h] [bp-1104h] BYREF
  char v29[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  LOWORD(v3) = 32096;
  LOWORD(v4) = -31108;
  HIWORD(v3) = (unsigned int)"once %s %s %s" >> 16;
  HIWORD(v4) = (unsigned int)"te_pool_stratum_threads" >> 16;
  v5 = v2;
  snprintf(v2, 0x40u, v4, v3, *(_DWORD *)(a1 + 248));
  V_LOCK();
  v6 = syscall(224);
  LOWORD(v7) = -31096;
  HIWORD(v7) = (unsigned int)"tum_threads" >> 16;
  logfmt_raw(v29, 0x1000u, 0, v7, v5, v6);
  LOWORD(v8) = 32428;
  V_UNLOCK();
  LOWORD(v9) = 32096;
  LOWORD(v10) = 32276;
  HIWORD(v9) = (unsigned int)"once %s %s %s" >> 16;
  HIWORD(v10) = (unsigned int)"esp_packet_queue is false" >> 16;
  LOWORD(v11) = 32096;
  zlog(g_zc, v10, 150, v9, 12, 346, 40, v29);
  HIWORD(v11) = (unsigned int)"once %s %s %s" >> 16;
  HIWORD(v8) = (unsigned int)"acket_queue is false" >> 16;
  v27 = v8;
  v12 = 1;
  v13 = 64;
  v26 = v11;
  prctl(15, v5);
  v14 = 0;
  v15 = memset(s, 0, sizeof(s));
  while ( 1 )
  {
    v16 = dev_ctrl((int)v15);
    v17 = ((int (__fastcall *)(_DWORD, char *, int))v16[19])(*(_DWORD *)(a1 + 248), s, 256);
    v18 = v17;
    if ( *(_BYTE *)(a1 + 913) )
      break;
    if ( v17 <= 0 )
    {
      v19 = v13;
      v13 *= 2;
      v15 = (void *)usleep(v19);
      if ( v13 >= 0x3E8 )
        v13 = 1000;
    }
    else
    {
      v13 = 64;
      if ( !queue_enqueue(*(_DWORD *)(a1 + 872), s, v17) && v12 <= ++v14 )
      {
        V_LOCK();
        logfmt_raw(v29, 0x1000u, 0, v27, *(_DWORD *)(a1 + 256));
        V_UNLOCK();
        LOWORD(v21) = 32276;
        HIWORD(v21) = (unsigned int)"esp_packet_queue is false" >> 16;
        zlog(g_zc, v21, 150, v26, 12, 366, 40, v29);
        V_LOCK();
        LOWORD(v22) = 32488;
        v24 = v14;
        v25 = v12;
        HIWORD(v22) = (unsigned int)"ed,errcode %d" >> 16;
        v14 = 0;
        v12 *= 10;
        logfmt_raw(v29, 0x1000u, 0, v22, v24, v25);
        V_UNLOCK();
        LOWORD(v23) = 32276;
        HIWORD(v23) = (unsigned int)"esp_packet_queue is false" >> 16;
        zlog(g_zc, v23, 150, v26, 12, 367, 40, v29);
        if ( v12 >= 0x989680 )
          v12 = 10000000;
      }
      v15 = memset(s, 0, v18);
    }
  }
  *(_BYTE *)(a1 + 913) = 0;
  return 0;
}
