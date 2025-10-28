int __fastcall set_work_timeout(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = -15372;
  HIWORD(v2) = (unsigned int)"Perform refb_clk_div2_en override" >> 16;
  V_LOCK();
  LOWORD(v5) = -11816;
  HIWORD(v5) = (unsigned int)"Setting_read_sensor_temp_remote_on_pic_HNS_2130" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 2640);
  V_UNLOCK();
  LOWORD(v6) = -12308;
  HIWORD(v6) = (unsigned int)"0" >> 16;
  zlog(g_zc, v6, 171, v2 + 2660, 16, 868, 20, v8);
  sub_7002C(a1, 197, a2);
  usleep(0x2710u);
  return 0;
}
