int __fastcall set_dag_node_num(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = -17152;
  HIWORD(v2) = (unsigned int)"" >> 16;
  V_LOCK();
  LOWORD(v5) = -13288;
  HIWORD(v5) = (unsigned int)"chip %02x membist0: lost/err/etherr: %08x/%08x/%08x, total:lost/err/etherr: %llx/%llx/%llx" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 1048, a2);
  V_UNLOCK();
  LOWORD(v6) = -13944;
  HIWORD(v6) = (unsigned int)"rom error for getting theory_hashrate_eth!" >> 16;
  zlog(g_zc, v6, 171, v2 + 1068, 16, 254, 20, v8);
  sub_78F84(a1, 11, a2);
  usleep(0x2710u);
  return 0;
}
