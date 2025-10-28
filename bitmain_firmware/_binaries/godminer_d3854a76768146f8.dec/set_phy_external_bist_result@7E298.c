int set_phy_external_bist_result()
{
  const char *v0; // r1
  const char *v1; // r1
  const char *v2; // r1
  const char *v3; // r1
  char v5[128]; // [sp+0h] [bp-80h] BYREF

  memset(v5, 0, sizeof(v5));
  LOWORD(v0) = -6208;
  HIWORD(v0) = (unsigned int)"phy_rx_adapt" >> 16;
  sprintf(v5, v0, 0, 0);
  memset(v5, 0, sizeof(v5));
  LOWORD(v1) = -6188;
  HIWORD(v1) = (unsigned int)"rx_adapt" >> 16;
  sprintf(v5, v1, 0, 0);
  memset(v5, 0, sizeof(v5));
  LOWORD(v2) = -6168;
  HIWORD(v2) = (unsigned int)"rnal_bist_init" >> 16;
  sprintf(v5, v2, 0);
  memset(v5, 0, sizeof(v5));
  LOWORD(v3) = -6144;
  HIWORD(v3) = (unsigned int)"rnal_bist_init" >> 16;
  return sprintf(v5, v3, 0);
}
