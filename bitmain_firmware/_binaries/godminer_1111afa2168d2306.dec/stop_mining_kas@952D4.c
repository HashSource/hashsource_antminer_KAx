int __fastcall stop_mining_kas(int a1)
{
  int v1; // r5
  int v3; // r3
  int v4; // r1
  int v5; // r0
  int (**v6)(); // r0
  char v8[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -3852;
  HIWORD(v1) = (unsigned int)"_KAS_2380" >> 16;
  V_LOCK();
  LOWORD(v3) = -13336;
  HIWORD(v3) = (unsigned int)"\n" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v3, v1 + 1592);
  V_UNLOCK();
  LOWORD(v4) = -2140;
  HIWORD(v4) = (unsigned int)"ng work id ,err" >> 16;
  zlog(g_zc, v4, 171, v1 + 1608, 15, 1054, 60, v8);
  v5 = (*(int (__fastcall **)(int))(a1 + 60))(a1);
  v6 = dev_ctrl(v5);
  ((void (__fastcall *)(_DWORD))v6[14])(*(_DWORD *)(a1 + 248));
  *(_BYTE *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 265) = 0;
  sub_914C4((int *)a1, 127);
  set_reset_kas(a1);
  set_core_reset_kas(a1);
  set_inactive_kas(a1);
  return 0;
}
