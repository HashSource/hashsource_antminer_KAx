int __fastcall softreset_all_chip_dash(int *a1)
{
  sub_6F26C((int)a1);
  usleep((__useconds_t)&stru_186A0);
  sub_6EF58((int)a1, 8, 0);
  sub_6EF58((int)a1, 1, 4);
  sub_6F3AC(a1, 255);
  return 0;
}
