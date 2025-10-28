int __fastcall json_dumpfd(_DWORD *a1, int a2, int a3)
{
  int v4; // [sp+4h] [bp-8h] BYREF

  v4 = a2;
  return json_dump_callback(a1, (int (__fastcall *)(char *, int, int))sub_2E374, (int)&v4, a3);
}
