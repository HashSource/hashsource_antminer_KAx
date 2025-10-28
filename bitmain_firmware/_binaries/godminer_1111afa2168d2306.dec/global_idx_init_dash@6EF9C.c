int __fastcall global_idx_init_dash(int a1)
{
  void *v2; // r0
  void *v3; // r5
  int v4; // r3
  int v5; // r1
  int v6; // r3
  char v8[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = calloc(0x5808u, 1u);
  *(_DWORD *)(a1 + 840) = v2;
  v3 = v2;
  V_LOCK();
  LOWORD(v4) = -19400;
  HIWORD(v4) = (unsigned int)"d voltage %d" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v4, v3);
  V_UNLOCK();
  LOWORD(v5) = -19376;
  LOWORD(v6) = -20956;
  HIWORD(v6) = (unsigned int)"r_DASH_1766" >> 16;
  HIWORD(v5) = (unsigned int)": %02x%02x%02x%02x chipid:%d coreid:%d" >> 16;
  zlog(g_zc, v5, 173, v6, 20, 57, 20, v8);
  return 0;
}
