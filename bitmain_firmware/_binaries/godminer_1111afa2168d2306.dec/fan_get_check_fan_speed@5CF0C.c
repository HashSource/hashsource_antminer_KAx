int __fastcall fan_get_check_fan_speed(int a1)
{
  int v1; // r4
  int v2; // r3
  int v3; // r3
  int v4; // r1
  char v6[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = 90 * a1;
  V_LOCK();
  LOWORD(v2) = 29772;
  HIWORD(v2) = (unsigned int)"tage" >> 16;
  v1 /= 110;
  logfmt_raw(v6, 0x1000u, 0, v2, v1);
  V_UNLOCK();
  LOWORD(v3) = 29748;
  LOWORD(v4) = 29800;
  HIWORD(v3) = (unsigned int)"get_minimal_feedback_voltage" >> 16;
  HIWORD(v4) = (unsigned int)"ge" >> 16;
  zlog(g_zc, v4, 160, v3, 23, 33, 20, v6);
  return v1;
}
