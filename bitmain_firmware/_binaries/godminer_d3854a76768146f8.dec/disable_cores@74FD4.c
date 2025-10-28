int __fastcall disable_cores(int a1)
{
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -15372;
  HIWORD(v1) = (unsigned int)"Perform refb_clk_div2_en override" >> 16;
  V_LOCK();
  LOWORD(v3) = -11816;
  HIWORD(v3) = (unsigned int)"Setting_read_sensor_temp_remote_on_pic_HNS_2130" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 + 2488);
  V_UNLOCK();
  LOWORD(v4) = -12308;
  HIWORD(v4) = (unsigned int)"0" >> 16;
  zlog(g_zc, v4, 171, v1 + 2504, 13, 808, 20, v6);
  sub_7002C(a1, 13, 0);
  usleep((__useconds_t)&stru_18698.st_size);
  return 0;
}
