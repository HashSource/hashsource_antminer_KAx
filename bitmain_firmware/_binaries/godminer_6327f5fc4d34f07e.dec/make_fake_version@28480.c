int make_fake_version()
{
  char v1[64]; // [sp+0h] [bp-40h] BYREF

  sprintf(v1, "%s %s", 915164, 915152);
  strcpy(g_miner_compiletime, v1);
  strcpy(g_miner_type, "Antminer unknow");
  return *(_DWORD *)"Antminer unknow";
}
