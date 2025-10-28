int __fastcall set_core_bus_reset(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r4
  int v5; // r1
  unsigned __int8 v6; // r1
  int v8; // [sp+20h] [bp-28h]
  _DWORD v9[7]; // [sp+28h] [bp-20h] BYREF
  int v10; // [sp+44h] [bp-4h]
  char v11[4096]; // [sp+48h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = 588;
  HIWORD(v2) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v9, v2, *(int *)(a1 + 232));
  LOWORD(v3) = -11816;
  HIWORD(v3) = (unsigned int)"Setting_read_sensor_temp_remote_on_pic_HNS_2130" >> 16;
  v8 = v3;
  v4 = 0;
  logfmt_raw(v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, v8, "set_core_bus_reset");
  V_UNLOCK();
  LOWORD(v5) = -12308;
  HIWORD(v5) = (unsigned int)"0" >> 16;
  zlog(g_zc, v5, 171, "set_core_bus_reset", 18, 892, 60, v11);
  do
  {
    sub_70158(a1, v4, 201, 0);
    usleep((__useconds_t)&stru_18698.st_size);
    v6 = v4++;
    sub_70158(a1, v6, 201, 1);
    usleep((__useconds_t)&stru_18698.st_size);
  }
  while ( v4 != 16 );
  return 0;
}
