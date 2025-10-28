_DWORD *dhash_content_eth_2280()
{
  _DWORD *v0; // r0
  int v1; // r1
  _DWORD *v2; // r4
  int v3; // r2
  int v4; // r3

  v0 = calloc(1u, 0x18u);
  LOWORD(v1) = 1492;
  v2 = v0;
  LOWORD(v3) = 1860;
  LOWORD(v0) = 1392;
  LOWORD(v4) = 28852;
  HIWORD(v0) = (unsigned int)&loc_50248 >> 16;
  HIWORD(v1) = ((unsigned int)&dbl_502A8 + 4) >> 16;
  HIWORD(v3) = (unsigned int)&loc_5041C >> 16;
  HIWORD(v4) = (unsigned int)"onitor_base" >> 16;
  *v2 = v0;
  v2[1] = v1;
  v2[2] = v3;
  v2[3] = 0;
  v2[4] = v4;
  v2[5] = 60;
  return v2;
}
