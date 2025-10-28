int __fastcall hardreset_hal(int a1)
{
  chain_reset_low(g_chain_info[2 * a1]);
  sleep(3u);
  chain_reset_high(g_chain_info[2 * a1]);
  sleep(1u);
  return 0;
}
