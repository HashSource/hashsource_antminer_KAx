int __fastcall serdes_external_loop_ate_setup(int a1, int a2, int a3, int a4)
{
  char *v7; // r9
  int v8; // r7
  int v9; // r8
  int v10; // r11
  _DWORD v13[7]; // [sp+38h] [bp-1044h] BYREF
  int v14; // [sp+54h] [bp-1028h]
  _DWORD v15[7]; // [sp+58h] [bp-1024h] BYREF
  int v16; // [sp+74h] [bp-1008h]
  char v17[4100]; // [sp+78h] [bp-1004h] BYREF

  LOWORD(v7) = 588;
  V_LOCK();
  HIWORD(v7) = (unsigned int)": get test = %d" >> 16;
  LOWORD(v8) = -10368;
  LOWORD(v9) = -11808;
  HIWORD(v8) = (unsigned int)"temp_remote_on_pic_KAS_2380" >> 16;
  LOWORD(v10) = -9656;
  V_INT((int)v13, v7, *(int *)(a1 + 232));
  HIWORD(v10) = (unsigned int)"t_kas" >> 16;
  HIWORD(v9) = (unsigned int)"read_sensor_temp_remote_on_pic_HNS_2130" >> 16;
  logfmt_raw(v17, 0x1000u, 0, v14, v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v14, v9, v8 + 396);
  V_UNLOCK();
  zlog(g_zc, v10, 174, v8 + 428, 30, 710, 60, v17);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  V_LOCK();
  V_INT((int)v15, v7, *(int *)(a1 + 232));
  logfmt_raw(
    v17,
    0x1000u,
    0,
    v16,
    v15[0],
    v15[1],
    v15[2],
    v15[3],
    v15[4],
    v15[5],
    v15[6],
    v16,
    "%s Introducing error",
    "serdes_external_loop_ate_setup");
  V_UNLOCK();
  zlog(g_zc, v10, 174, v8 + 428, 30, 721, 60, v17);
  sub_7660C(a1, a3, 77, (int)&loc_110010 + 1);
  sub_7660C(a1, a3, 78, -2144251791);
  sub_7660C(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7660C(a1, a3, 78, -2144251791);
  usleep(0xAu);
  serdes_wait_status(a1, a2, a3, 4244, a4);
  serdes_wait_status(a1, a2, a3, 4244, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status(a1, a2, a3, 4756, a4);
  serdes_wait_status(a1, a2, a3, 4756, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status(a1, a2, a3, 5268, a4);
  serdes_wait_status(a1, a2, a3, 5268, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status(a1, a2, a3, 5780, a4);
  serdes_wait_status(a1, a2, a3, 5780, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  return 0;
}
