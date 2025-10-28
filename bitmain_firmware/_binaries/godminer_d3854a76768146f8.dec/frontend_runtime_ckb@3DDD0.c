_DWORD *frontend_runtime_ckb()
{
  _DWORD *result; // r0
  int v1; // r1
  int v2; // r2
  int v3; // lr
  int v4; // r12

  result = calloc(1u, 0x54u);
  LOWORD(v1) = 9232;
  LOWORD(v2) = 10348;
  HIWORD(v1) = (unsigned int)&loc_32218 >> 16;
  HIWORD(v2) = (unsigned int)&loc_32678 >> 16;
  *result = v1;
  LOWORD(v3) = 7976;
  result[1] = v2;
  LOWORD(v4) = 7728;
  LOWORD(v1) = -11752;
  LOWORD(v2) = -15232;
  HIWORD(v3) = (unsigned int)&loc_31D30 >> 16;
  HIWORD(v4) = (unsigned int)&loc_31C38 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3D024 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3C290 >> 16;
  result[2] = v3;
  LOWORD(v3) = -14544;
  result[3] = v4;
  LOWORD(v4) = -11704;
  result[4] = v1;
  LOWORD(v1) = -8896;
  result[5] = v2;
  LOWORD(v2) = -9848;
  HIWORD(v3) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v4) = (unsigned int)&loc_3D054 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3DB4C >> 16;
  HIWORD(v2) = (unsigned int)&loc_3D794 >> 16;
  result[6] = v3;
  LOWORD(v3) = -13872;
  result[7] = v4;
  LOWORD(v4) = -12436;
  result[8] = v1;
  LOWORD(v1) = -9792;
  result[9] = v2;
  LOWORD(v2) = -10704;
  HIWORD(v3) = (unsigned int)&loc_3C7DC >> 16;
  HIWORD(v4) = (unsigned int)&loc_3CD78 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3D7CC >> 16;
  HIWORD(v2) = (unsigned int)&loc_3D43C >> 16;
  result[10] = v3;
  LOWORD(v3) = -16104;
  result[11] = v4;
  result[12] = v1;
  result[13] = v2;
  HIWORD(v3) = (unsigned int)&loc_3BF28 >> 16;
  result[14] = v3;
  result[15] = 327760;
  result[16] = 327744;
  result[17] = 327764;
  return result;
}
