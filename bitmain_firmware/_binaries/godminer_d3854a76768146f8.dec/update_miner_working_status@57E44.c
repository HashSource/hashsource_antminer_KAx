void update_miner_working_status()
{
  int v0; // r3

  LOWORD(v0) = 21164;
  HIWORD(v0) = ((unsigned int)&cond.__align + 28) >> 16;
  *(_BYTE *)(v0 + 0xA) = pools_active == 0;
}
