int __fastcall softreset_all_chip_ckb(int *a1)
{
  void (__fastcall *v2)(int *, _DWORD *); // r3
  _DWORD v4[2]; // [sp+0h] [bp-14h] BYREF
  int v5; // [sp+8h] [bp-Ch]
  int v6; // [sp+Ch] [bp-8h]

  sub_616D0((int)a1);
  usleep((__useconds_t)&stru_18698.st_size);
  v5 = 0;
  v6 = 0;
  v2 = (void (__fastcall *)(int *, _DWORD *))a1[63];
  LOBYTE(v5) = 1;
  HIWORD(v5) = 8;
  LOBYTE(v6) = -1;
  v4[1] = 0;
  v4[0] = 0;
  v2(a1, v4);
  sub_617FC(a1, 255);
  return 0;
}
