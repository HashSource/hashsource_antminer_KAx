int __fastcall stop_mining_ks5(int a1)
{
  int v1; // r5
  int v3; // r3
  int v4; // r1
  int v5; // r0
  int (**v6)(); // r0
  char v8[4100]; // [sp+10h] [bp+0h] BYREF

  LOWORD(v1) = 156;
  HIWORD(v1) = (unsigned int)"sor_temp_local_on_ctrlboard_KS5_2382" >> 16;
  V_LOCK();
  LOWORD(v3) = -13336;
  HIWORD(v3) = (unsigned int)"\n" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v3, v1 + 1584);
  V_UNLOCK();
  LOWORD(v4) = 1808;
  HIWORD(v4) = (unsigned int)"Setting_freq_LTC_1489" >> 16;
  zlog(g_zc, v4, 171, v1 + 1600, 15, 938, 60, v8);
  v5 = (*(int (__fastcall **)(int))(a1 + 60))(a1);
  v6 = dev_ctrl(v5);
  ((void (__fastcall *)(_DWORD))v6[14])(*(_DWORD *)(a1 + 248));
  *(_BYTE *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 265) = 0;
  sub_9A900((int *)a1, 127);
  set_reset_ks5(a1);
  set_core_reset_ks5(a1);
  set_inactive_ks5(a1);
  return 0;
}
