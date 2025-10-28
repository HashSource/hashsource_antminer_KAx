int set_phy_external_bist_result()
{
  const char *v0; // r1
  const char *v1; // r1
  const char *v2; // r1
  const char *v3; // r1
  char v5[132]; // [sp+0h] [bp-84h] BYREF

  memset(v5, 0, 0x80u);
  LOWORD(v0) = -7176;
  HIWORD(v0) = (unsigned int)" %u" >> 16;
  sprintf(v5, v0, dword_1A3DF8, dword_1A3DFC);
  memset(v5, 0, 0x80u);
  LOWORD(v1) = -7156;
  HIWORD(v1) = (unsigned int)"d" >> 16;
  sprintf(v5, v1, dword_1A3E00, dword_1A3E04);
  memset(v5, 0, 0x80u);
  LOWORD(v2) = -7136;
  HIWORD(v2) = (unsigned int)"ld" >> 16;
  sprintf(v5, v2, dword_1A3DF0);
  memset(v5, 0, 0x80u);
  LOWORD(v3) = -7112;
  HIWORD(v3) = (unsigned int)"%d" >> 16;
  return sprintf(v5, v3, dword_1A3DF4);
}
