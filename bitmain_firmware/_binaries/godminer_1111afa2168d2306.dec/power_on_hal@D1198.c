int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  int is_pic_mcu_en; // r4
  int v8; // r4
  int v9; // r7
  int v10; // r3
  int v11; // r1
  char v12[4096]; // [sp+10h] [bp-1000h] BYREF

  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( is_pic_mcu_en )
  {
    v8 = pic1704_reset(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    is_pic_mcu_en = v8 + pic1704_jump_to_app(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    if ( a3 )
      goto LABEL_3;
  }
  else if ( a3 )
  {
    goto LABEL_3;
  }
  if ( !platform_is_pic_mcu_en() )
  {
LABEL_3:
    if ( !platform_is_pic_mcu_en() )
      goto LABEL_4;
    goto LABEL_10;
  }
  set_chain_isl_voltage(g_chain_info[2 * a1], a2);
  if ( !platform_is_pic_mcu_en() )
    goto LABEL_4;
LABEL_10:
  v9 = is_pic_mcu_en + pic1704_enable_disable_dc_dc(g_chain_info[2 * a1], 1);
  if ( v9 != 3 )
  {
    V_LOCK();
    LOWORD(v10) = -30756;
    HIWORD(v10) = (unsigned int)"ltage" >> 16;
    logfmt_raw(v12, 0x1000u, 0, v10, g_chain_info[2 * a1], v9);
    V_UNLOCK();
    LOWORD(v11) = -31228;
    HIWORD(v11) = (unsigned int)"zynq bt8d %08x\n" >> 16;
    zlog(g_zc, v11, 164, "power_on_hal", 12, 481, 100, v12);
    return -1;
  }
LABEL_4:
  if ( (unsigned int)(opt_algo - 11) > 1 )
    sleep(1u);
  return 0;
}
