int __fastcall softreset_all_chip_hns(int *a1)
{
  sub_7FAA8((int)a1);
  usleep(0x3E8u);
  sub_7F768((int)a1, 8, 0);
  usleep(0x64u);
  sub_7F768((int)a1, 16, 0);
  usleep(0x64u);
  set_nonce_cycle_limit((int)a1);
  usleep(0x64u);
  sub_7FBD4(a1, 255);
  usleep(0x64u);
  usleep((__useconds_t)&stru_18698.st_size);
  return 0;
}
