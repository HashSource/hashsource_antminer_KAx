int __fastcall set_core_reset(int a1)
{
  int v2; // r9
  char *v3; // r1
  int v4; // r4
  int v5; // r1
  void (__fastcall *v6)(int, int *); // r3
  void (__fastcall *v7)(int, int *); // r3
  _DWORD v9[7]; // [sp+28h] [bp-1024h] BYREF
  int v10; // [sp+44h] [bp-1008h]
  int v11; // [sp+48h] [bp-1004h] BYREF
  int v12; // [sp+4Ch] [bp-1000h]
  int v13; // [sp+50h] [bp-FFCh]
  int v14; // [sp+54h] [bp-FF8h]

  LOWORD(v2) = -15372;
  V_LOCK();
  LOWORD(v3) = 588;
  HIWORD(v3) = (unsigned int)": get test = %d" >> 16;
  HIWORD(v2) = (unsigned int)"Perform refb_clk_div2_en override" >> 16;
  V_INT((int)v9, v3, *(int *)(a1 + 232));
  LOWORD(v4) = -11816;
  HIWORD(v4) = (unsigned int)"Setting_read_sensor_temp_remote_on_pic_HNS_2130" >> 16;
  logfmt_raw((char *)&v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, v4, v2 + 520);
  V_UNLOCK();
  LOWORD(v5) = -12308;
  HIWORD(v5) = (unsigned int)"0" >> 16;
  zlog(g_zc, v5, 171, v2 + 536, 14, 148, 60, &v11);
  sub_7002C(a1, 240, 0x80000000);
  usleep((__useconds_t)&stru_18698.st_size);
  v13 = 0;
  v11 = 13;
  v14 = 0;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 248);
  v12 = 0;
  LOBYTE(v13) = 1;
  HIWORD(v13) = 32;
  v6(a1, &v11);
  usleep((__useconds_t)&stru_18698.st_size);
  v13 = 1;
  v14 = 0;
  v12 = 0;
  v11 = 15;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 248);
  HIWORD(v13) = 32;
  v7(a1, &v11);
  usleep((__useconds_t)&stru_18698.st_size);
  return 0;
}
