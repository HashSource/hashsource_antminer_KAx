int __fastcall phy_pll_switch(int a1, int a2, int a3, int a4)
{
  int v8; // r2
  char *v9; // r6
  __int16 v10; // r2
  __int16 v11; // t1
  int v12; // r2
  int v13; // r2
  int v15; // [sp+Ch] [bp-4h] BYREF
  char vars0; // [sp+10h] [bp+0h] BYREF

  sub_7660C(a1, a3, 82, -1431655766);
  usleep(0x12Cu);
  sub_7660C(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 83, 0) )
  {
    LOWORD(v8) = -6600;
    HIWORD(v8) = (unsigned int)"us" >> 16;
    sub_76AB4(a1, a3, v8);
  }
  if ( a4 == 1 )
  {
    sub_7660C(a1, a3, 86, 137955337);
    usleep(0x64u);
  }
  v9 = (char *)&v15 + 1;
  v10 = 91;
  v15 = 1583176795;
  while ( 1 )
  {
    sub_7660C(a1, a3, v10, (a4 << 16) | (a4 << 24) | a4 | (a4 << 8));
    usleep(0x64u);
    if ( v9 == &vars0 )
      break;
    v11 = (unsigned __int8)*v9++;
    v10 = v11;
  }
  sub_7660C(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 83, 0) )
  {
    LOWORD(v12) = -6580;
    HIWORD(v12) = (unsigned int)"loop_ate_init" >> 16;
    sub_76AB4(a1, a3, v12);
  }
  sub_7660C(a1, a3, 82, 0);
  sub_7660C(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 83, 0) )
  {
    LOWORD(v13) = -6560;
    HIWORD(v13) = (unsigned int)"es_internal_loop_ate_init" >> 16;
    sub_76AB4(a1, a3, v13);
  }
  sub_7660C(a1, a3, 84, -1);
  usleep(0x64u);
  return 0;
}
