int __fastcall chain_reset_high_hal(int a1)
{
  chain_reset_high(g_chain_info[2 * a1]);
  sleep(1u);
  return 0;
}
