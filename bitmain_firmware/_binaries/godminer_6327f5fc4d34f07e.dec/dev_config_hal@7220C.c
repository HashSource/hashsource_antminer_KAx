int __fastcall dev_config_hal(int a1)
{
  int v1; // r4
  int v2; // r2
  int v4; // [sp+4h] [bp-4h] BYREF

  if ( a1 == 3000000 )
    goto LABEL_22;
  if ( a1 <= 3000000 )
  {
    if ( a1 == 921600 )
    {
      v1 = 33686018;
      v2 = 2;
      goto LABEL_13;
    }
    if ( a1 > 921600 )
    {
      if ( a1 == 1500000 || a1 == 1562500 )
      {
        v1 = 16843009;
        v2 = 1;
        goto LABEL_13;
      }
    }
    else if ( a1 == 460800 )
    {
      v1 = 101058054;
      v2 = 6;
      goto LABEL_13;
    }
LABEL_20:
    v1 = 437918234;
    v2 = 26;
    goto LABEL_13;
  }
  if ( a1 == 6250000 )
  {
    v1 = 50529027;
    v2 = 3;
    goto LABEL_13;
  }
  if ( a1 <= 6250000 )
  {
    if ( a1 != 3125000 )
      goto LABEL_20;
LABEL_22:
    v1 = 0;
    v2 = 0;
    goto LABEL_13;
  }
  if ( a1 == 12500000 )
  {
    v1 = 67372036;
    v2 = 4;
    goto LABEL_13;
  }
  if ( a1 != 25000000 )
    goto LABEL_20;
  v1 = 84215045;
  v2 = 5;
LABEL_13:
  printf("%s: set zynq bt8d %d\n", 964052, v2);
  v4 = v1;
  uart_set_config(0, 0, &v4);
  usleep((__useconds_t)"rl_kda_2110");
  return 0;
}
