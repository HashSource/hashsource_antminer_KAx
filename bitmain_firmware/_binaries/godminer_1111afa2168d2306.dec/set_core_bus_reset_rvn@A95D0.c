int __fastcall set_core_bus_reset_rvn(int a1)
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
  LOWORD(v2) = 27796;
  HIWORD(v2) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v9, v2, *(int *)(a1 + 256));
  LOWORD(v3) = -13668;
  HIWORD(v3) = (unsigned int)"ist0 final pattern %08x" >> 16;
  v8 = v3;
  v4 = 0;
  logfmt_raw(v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, v8, "set_core_bus_reset_rvn");
  V_UNLOCK();
  LOWORD(v5) = 9580;
  HIWORD(v5) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v5, 171, "set_core_bus_reset_rvn", 22, 1117, 60, v11);
  do
  {
    sub_A47BC(a1, v4, 2, 0);
    usleep((__useconds_t)&stru_186A0);
    v6 = v4++;
    sub_A47BC(a1, v6, 2, 1);
    usleep((__useconds_t)&stru_186A0);
  }
  while ( v4 != 64 );
  return 0;
}
