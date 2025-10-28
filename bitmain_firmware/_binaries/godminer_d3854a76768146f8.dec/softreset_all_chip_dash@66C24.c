int __fastcall softreset_all_chip_dash(int *a1)
{
  sub_6650C((int)a1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_661F8((int)a1, 8, 0);
  sub_661F8((int)a1, 1, 4);
  sub_6664C(a1, 255);
  return 0;
}
