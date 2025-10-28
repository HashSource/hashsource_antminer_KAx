void __fastcall __noreturn dram_bist_rvn(int a1)
{
  int v1; // r8
  int v3; // r3
  int v4; // r1
  char *v5; // r11
  int v6; // r10
  _DWORD v7[4]; // [sp+30h] [bp-1124h] BYREF
  int v8; // [sp+40h] [bp-1114h] BYREF
  int v9; // [sp+44h] [bp-1110h]
  int v10; // [sp+48h] [bp-110Ch]
  int v11; // [sp+4Ch] [bp-1108h]
  int v12; // [sp+50h] [bp-1104h]
  int v13; // [sp+54h] [bp-1100h]
  int v14; // [sp+58h] [bp-10FCh]
  int v15; // [sp+5Ch] [bp-10F8h]
  _DWORD v16[7]; // [sp+60h] [bp-10F4h] BYREF
  int v17; // [sp+7Ch] [bp-10D8h]
  _BYTE s[208]; // [sp+80h] [bp-10D4h] BYREF
  char v19[4100]; // [sp+150h] [bp-1004h] BYREF

  LOWORD(v1) = 13288;
  HIWORD(v1) = (unsigned int)"ChipSetting_get_addr_ZEC_1746" >> 16;
  memset(s, 0, sizeof(s));
  V_LOCK();
  LOWORD(v3) = -13668;
  HIWORD(v3) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw(v19, 0x1000u, 0, v3, v1 - 3944);
  V_UNLOCK();
  LOWORD(v4) = 9580;
  HIWORD(v4) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v4, 171, v1 - 3928, 13, 3330, 40, v19);
  LOWORD(v5) = 27796;
  sub_A4A2C(a1, 9699344);
  v8 = -58331;
  HIWORD(v5) = (unsigned int)"%1.f" >> 16;
  v10 = 6356993;
  v11 = 0;
  LOWORD(v6) = -23376;
  v9 = 0;
  HIWORD(v6) = (unsigned int)"k: %s" >> 16;
  V_LOCK();
  V_INT((int)v16, v5, *(int *)(a1 + 256));
  logfmt_raw(
    v19,
    0x1000u,
    0,
    v17,
    v16[0],
    v16[1],
    v16[2],
    v16[3],
    v16[4],
    v16[5],
    v16[6],
    v17,
    "set bist err num threshold %08x",
    v8);
  V_UNLOCK();
  zlog(g_zc, v6, 150, v1 - 3912, 38, 302, 40, v19);
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v8);
  usleep(0x2710u);
  v7[1] = 0;
  v7[2] = 6553601;
  v7[3] = 0;
  v7[0] = 1100;
  V_LOCK();
  V_INT((int)&v8, v5, *(int *)(a1 + 256));
  logfmt_raw(v19, 0x1000u, 0, v15, v8, v9, v10, v11, v12, v13, v14, v15, "set retin on %08x", 1100);
  V_UNLOCK();
  zlog(g_zc, v6, 150, v1 - 3872, 28, 316, 40, v19);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v7);
  usleep(0x2710u);
  dram_pre_bist0_rvn(a1, 0);
  dram_pre_bist1_rvn(a1, 0);
  dram_bist_check_and_repair_rvn(a1, 0, 0);
}
