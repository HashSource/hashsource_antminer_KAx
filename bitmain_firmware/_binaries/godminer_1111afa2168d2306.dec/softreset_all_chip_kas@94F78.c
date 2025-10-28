int __fastcall softreset_all_chip_kas(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r4
  int v5; // r1
  int v6; // r3
  int v7; // r1
  int v9; // [sp+20h] [bp-28h]
  _DWORD v10[7]; // [sp+28h] [bp-20h] BYREF
  int v11; // [sp+44h] [bp-4h]
  _DWORD v12[1024]; // [sp+48h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = 27796;
  HIWORD(v2) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v10, v2, *(int *)(a1 + 256));
  LOWORD(v3) = -1616;
  HIWORD(v3) = (unsigned int)"hash_clock_count_KDA_2110" >> 16;
  v9 = v3;
  v4 = 10;
  logfmt_raw((char *)v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v9);
  V_UNLOCK();
  LOWORD(v5) = -2140;
  HIWORD(v5) = (unsigned int)"ng work id ,err" >> 16;
  zlog(g_zc, v5, 171, &unk_16F648, 22, 629, 40, v12);
  V_LOCK();
  LOWORD(v6) = -23224;
  HIWORD(v6) = (unsigned int)"k delay chip_no %d, value %08x" >> 16;
  logfmt_raw((char *)v12, 0x1000u, 0, v6, "ChipSetting_software_reset_KAS_2380", 68);
  V_UNLOCK();
  LOWORD(v7) = -23376;
  HIWORD(v7) = (unsigned int)"k: %s" >> 16;
  zlog(g_zc, v7, 150, "ChipSetting_software_reset_KAS_2380", 35, 180, 20, v12);
  v12[3] = 0;
  v12[0] = 3;
  v12[2] = 4456449;
  v12[1] = 0;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v12);
  do
  {
    usleep((__useconds_t)&stru_186A0);
    send_fake_work_kas(a1);
    --v4;
  }
  while ( v4 );
  sub_913B0(a1, 10, 0);
  sub_914C4((int *)a1, 127);
  return 0;
}
