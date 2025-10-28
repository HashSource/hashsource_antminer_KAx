int __fastcall pwm_init(unsigned int a1, int a2)
{
  _DWORD *v2; // r2
  int v4; // r2
  int result; // r0
  int *v6; // r2
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int *v12; // lr
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r3
  int v21; // r1
  int v22; // [sp+10h] [bp-1804h] BYREF
  int v23; // [sp+14h] [bp-1800h]
  int v24; // [sp+18h] [bp-17FCh]
  int v25; // [sp+1Ch] [bp-17F8h]
  int v26; // [sp+20h] [bp-17F4h]
  int v27; // [sp+24h] [bp-17F0h]
  int v28; // [sp+28h] [bp-17ECh]
  char v29; // [sp+2Ch] [bp-17E8h]
  char v30[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v2) = -23932;
  HIWORD(v2) = (unsigned int)&unk_18B744 >> 16;
  if ( *v2 )
  {
    if ( a1 > 1 )
    {
      LOWORD(v6) = 8496;
      HIWORD(v6) = (unsigned int)"%s json id is null!" >> 16;
      v7 = *v6;
      v8 = v6[1];
      v9 = v6[2];
      v22 = v7;
      v23 = v8;
      LOWORD(v24) = v9;
      V_LOCK();
      logfmt_raw(v30, 0x1000u, 0, &v22);
      V_UNLOCK();
      LOWORD(v10) = 20680;
      LOWORD(v11) = 20720;
      HIWORD(v10) = (unsigned int)"backend/backend_base.c" >> 16;
      HIWORD(v11) = (unsigned int)"_enqueue of __resp_packet_queue is false" >> 16;
      zlog(g_zc, v11, 171, v10, 8, 30, 100, v30);
      return -3;
    }
    else
    {
      LOWORD(v4) = -23484;
      result = a1 + 1;
      HIWORD(v4) = (unsigned int)&unk_18B904 >> 16;
      *(_DWORD *)(v4 + 8 * a1) = a2;
      *(_BYTE *)(v4 + 8 * a1 + 4) = 1;
    }
  }
  else
  {
    LOWORD(v12) = 18152;
    HIWORD(v12) = (unsigned int)"ot match" >> 16;
    v13 = *v12;
    v14 = v12[1];
    v15 = v12[2];
    v16 = v12[3];
    v12 += 4;
    v22 = v13;
    v23 = v14;
    v24 = v15;
    v25 = v16;
    v17 = v12[1];
    v18 = v12[2];
    v19 = v12[3];
    v26 = *v12;
    v27 = v17;
    v28 = v18;
    v29 = v19;
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, &v22);
    V_UNLOCK();
    LOWORD(v20) = 20680;
    LOWORD(v21) = 20720;
    HIWORD(v20) = (unsigned int)"backend/backend_base.c" >> 16;
    HIWORD(v21) = (unsigned int)"_enqueue of __resp_packet_queue is false" >> 16;
    zlog(g_zc, v21, 171, v20, 8, 25, 100, v30);
    return -2;
  }
  return result;
}
