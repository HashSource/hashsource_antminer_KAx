_DWORD *frontend_runtime_ckb()
{
  _DWORD *result; // r0
  int v1; // r1
  int v2; // r2
  int v3; // lr
  int v4; // r12

  result = calloc(1u, 0x54u);
  LOWORD(v1) = 17212;
  LOWORD(v2) = 18328;
  HIWORD(v1) = (unsigned int)&loc_32218 >> 16;
  HIWORD(v2) = (unsigned int)&loc_32678 >> 16;
  *result = v1;
  LOWORD(v3) = 15956;
  result[1] = v2;
  LOWORD(v4) = 15708;
  LOWORD(v1) = -3896;
  LOWORD(v2) = -7376;
  HIWORD(v3) = (unsigned int)&loc_31D30 >> 16;
  HIWORD(v4) = (unsigned int)&loc_31C38 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3D024 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3C290 >> 16;
  result[2] = v3;
  LOWORD(v3) = -6688;
  result[3] = v4;
  LOWORD(v4) = -3848;
  result[4] = v1;
  LOWORD(v1) = -1040;
  result[5] = v2;
  LOWORD(v2) = -1992;
  HIWORD(v3) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v4) = (unsigned int)&loc_3D054 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3DB4C >> 16;
  HIWORD(v2) = (unsigned int)&loc_3D794 >> 16;
  result[6] = v3;
  LOWORD(v3) = -6016;
  result[7] = v4;
  LOWORD(v4) = -4580;
  result[8] = v1;
  LOWORD(v1) = -1936;
  result[9] = v2;
  LOWORD(v2) = -2848;
  HIWORD(v3) = (unsigned int)&loc_3C7DC >> 16;
  HIWORD(v4) = (unsigned int)&loc_3CD78 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3D7CC >> 16;
  HIWORD(v2) = (unsigned int)&loc_3D43C >> 16;
  result[10] = v3;
  LOWORD(v3) = -8248;
  result[11] = v4;
  result[12] = v1;
  result[13] = v2;
  HIWORD(v3) = (unsigned int)&loc_3BF28 >> 16;
  result[14] = v3;
  result[15] = 355344;
  result[16] = 355328;
  result[17] = 355348;
  return result;
}
