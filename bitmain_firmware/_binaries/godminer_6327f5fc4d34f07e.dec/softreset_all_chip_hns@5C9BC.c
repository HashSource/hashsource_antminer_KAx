int __fastcall softreset_all_chip_hns(int *a1)
{
  sub_58C48((int)a1);
  usleep((__useconds_t)"rl_kda_2110");
  sub_58BC0((int)a1, 8, 0);
  sub_58BC0((int)a1, 16, 0);
  sub_59610((int)a1, 37);
  set_nonce_cycle_limit((int)a1);
  sub_58D70(a1, 255);
  return 0;
}
