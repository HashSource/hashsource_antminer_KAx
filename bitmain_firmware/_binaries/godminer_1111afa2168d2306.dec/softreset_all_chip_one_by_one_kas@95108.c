int __fastcall softreset_all_chip_one_by_one_kas(int *a1)
{
  char *v2; // r1
  int v3; // r6
  int v4; // r1
  int v5; // r6
  int v6; // r10
  int v7; // r1
  int v8; // r2
  void (__fastcall *v9)(int *, _DWORD *); // r3
  int v10; // r4
  _DWORD v12[7]; // [sp+28h] [bp-1024h] BYREF
  int v13; // [sp+44h] [bp-1008h]
  _DWORD v14[2]; // [sp+48h] [bp-1004h] BYREF
  int v15; // [sp+50h] [bp-FFCh]
  int v16; // [sp+54h] [bp-FF8h]

  V_LOCK();
  LOWORD(v2) = 27796;
  HIWORD(v2) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v12, v2, a1[64]);
  LOWORD(v3) = -1616;
  HIWORD(v3) = (unsigned int)"hash_clock_count_KDA_2110" >> 16;
  logfmt_raw((char *)v14, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, v3);
  V_UNLOCK();
  LOWORD(v4) = -2140;
  HIWORD(v4) = (unsigned int)"ng work id ,err" >> 16;
  zlog(g_zc, v4, 171, "softreset_all_chip_one_by_one_kas", 33, 658, 40, v14);
  if ( a1[88] > 0 )
  {
    v5 = 0;
    LOWORD(v6) = -23224;
    do
    {
      V_LOCK();
      HIWORD(v6) = (unsigned int)"k delay chip_no %d, value %08x" >> 16;
      logfmt_raw((char *)v14, 0x1000u, 0, v6, "ChipSetting_software_reset_one_asic_KAS_2380", 68);
      V_UNLOCK();
      LOWORD(v7) = -23376;
      HIWORD(v7) = (unsigned int)"k: %s" >> 16;
      zlog(g_zc, v7, 150, "ChipSetting_software_reset_one_asic_KAS_2380", 44, 193, 20, v14);
      v8 = a1[111];
      v9 = (void (__fastcall *)(int *, _DWORD *))a1[69];
      v15 = 4456448;
      v14[0] = 3;
      LOBYTE(v8) = v8 * v5;
      v14[1] = 0;
      ++v5;
      v16 = 0;
      BYTE1(v15) = v8;
      v9(a1, v14);
      send_fake_work_kas((int)a1);
      usleep(0x3E8u);
    }
    while ( a1[88] > v5 );
  }
  v10 = 10;
  do
  {
    usleep((__useconds_t)&stru_186A0);
    send_fake_work_kas((int)a1);
    --v10;
  }
  while ( v10 );
  sub_913B0((int)a1, 10, 0);
  sub_914C4(a1, 127);
  return 0;
}
