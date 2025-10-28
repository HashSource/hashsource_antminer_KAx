void __fastcall __noreturn dhash_dag_gen_mining_start_rvn(int a1)
{
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = 13288;
  HIWORD(v1) = (unsigned int)"ChipSetting_get_addr_ZEC_1746" >> 16;
  V_LOCK();
  LOWORD(v3) = -13668;
  HIWORD(v3) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw(v5, 0x1000u, 0, v3, v1 - 3840);
  V_UNLOCK();
  LOWORD(v4) = 9580;
  HIWORD(v4) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v4, 171, v1 - 3808, 30, 3679, 40, v5);
  dram_bist_rvn(a1);
}
