_DWORD *dhash_content_eth_2280()
{
  _DWORD *v0; // r0
  int v1; // r1
  _DWORD *v2; // r4
  int v3; // r2

  v0 = calloc(1u, 0x18u);
  LOWORD(v1) = 29088;
  v2 = v0;
  LOWORD(v3) = 29456;
  LOWORD(v0) = 28988;
  HIWORD(v0) = (unsigned int)&loc_50248 >> 16;
  HIWORD(v1) = (unsigned int)&loc_502AC >> 16;
  HIWORD(v3) = (unsigned int)&loc_5041C >> 16;
  *v2 = v0;
  v2[1] = v1;
  v2[2] = v3;
  v2[3] = 0;
  v2[4] = 1368440;
  v2[5] = 60;
  return v2;
}
