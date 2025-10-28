int __fastcall softreset_all_chip_dash(int *a1)
{
  sub_4F670((int)a1);
  usleep((__useconds_t)"rl_kda_2110");
  sub_4F598((int)a1, 8, 0);
  sub_4F598((int)a1, 1, 4);
  sub_4F7B0(a1, 255);
  return 0;
}
