int __fastcall chain_reset(char a1)
{
  chain_reset_low(a1);
  usleep((__useconds_t)"rl_kda_2110");
  return chain_reset_high(a1);
}
