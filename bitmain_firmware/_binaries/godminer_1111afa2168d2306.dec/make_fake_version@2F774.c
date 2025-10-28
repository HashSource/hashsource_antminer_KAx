int make_fake_version()
{
  int v0; // r3
  int v1; // r2
  const char *v2; // r1
  int *v3; // r3
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  char v8[64]; // [sp+0h] [bp-40h] BYREF

  LOWORD(v0) = -32736;
  LOWORD(v1) = 32164;
  LOWORD(v2) = 32560;
  HIWORD(v0) = (unsigned int)"_gen!" >> 16;
  HIWORD(v1) = (unsigned int)"%s error" >> 16;
  HIWORD(v2) = (unsigned int)"t = %d" >> 16;
  sprintf(v8, v2, v1, v0);
  strcpy(g_miner_compiletime, v8);
  LOWORD(v3) = 32176;
  HIWORD(v3) = (unsigned int)"Read miner version file %s error %d" >> 16;
  result = *v3;
  v5 = v3[1];
  v6 = v3[2];
  v7 = v3[3];
  *(_DWORD *)g_miner_type = result;
  *(_DWORD *)&g_miner_type[4] = v5;
  *(_DWORD *)&g_miner_type[8] = v6;
  *(_DWORD *)&g_miner_type[12] = v7;
  return result;
}
