int set_phy_external_bist_result_rvn_0()
{
  _DWORD *v0; // r4
  const char *v1; // r1
  const char *v2; // r1
  const char *v3; // r1
  const char *v4; // r1
  char v6[132]; // [sp+0h] [bp-84h] BYREF

  LOWORD(v0) = -23984;
  memset(v6, 0, 0x80u);
  HIWORD(v0) = (unsigned int)&unk_185158 >> 16;
  LOWORD(v1) = 7904;
  HIWORD(v1) = (unsigned int)"ist0_rvn" >> 16;
  sprintf(v6, v1, v0[2], v0[3]);
  memset(v6, 0, 0x80u);
  LOWORD(v2) = 7928;
  HIWORD(v2) = (unsigned int)"" >> 16;
  sprintf(v6, v2, v0[4], v0[5]);
  memset(v6, 0, 0x80u);
  LOWORD(v3) = -6168;
  HIWORD(v3) = (unsigned int)"rnal_bist_init" >> 16;
  sprintf(v6, v3, *v0);
  memset(v6, 0, 0x80u);
  LOWORD(v4) = -6144;
  HIWORD(v4) = (unsigned int)"rnal_bist_init" >> 16;
  return sprintf(v6, v4, v0[1]);
}
