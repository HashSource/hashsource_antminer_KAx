int __fastcall pwm_uninit(int a1)
{
  int v1; // r3
  int result; // r0
  int *v3; // r2
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r1
  _DWORD v8[2]; // [sp+10h] [bp-1808h] BYREF
  __int16 v9; // [sp+18h] [bp-1800h]
  char v10[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( a1 > 2 )
  {
    LOWORD(v3) = 8496;
    HIWORD(v3) = (unsigned int)"%s json id is null!" >> 16;
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v8[0] = v4;
    v8[1] = v5;
    v9 = v6;
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v8);
    V_UNLOCK();
    LOWORD(v7) = 20720;
    HIWORD(v7) = (unsigned int)"_enqueue of __resp_packet_queue is false" >> 16;
    return zlog(g_zc, v7, 171, "pwm_uninit", 10, 41, 100, v10);
  }
  else
  {
    LOWORD(v1) = -23484;
    result = a1 - 1;
    HIWORD(v1) = (unsigned int)&unk_18B904 >> 16;
    *(_DWORD *)(v1 + 8 * result) = 0;
    *(_BYTE *)(v1 + 8 * result + 4) = 0;
  }
  return result;
}
