void *frontend_runtime_dash()
{
  int v0; // r12
  int v1; // r2
  int v2; // r3
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  LOWORD(v0) = 17212;
  LOWORD(v1) = 18328;
  LOWORD(v2) = 15956;
  HIWORD(v0) = (unsigned int)&loc_32218 >> 16;
  HIWORD(v1) = (unsigned int)&loc_32678 >> 16;
  HIWORD(v2) = (unsigned int)&loc_31D30 >> 16;
  LOWORD(v3) = 15708;
  LOWORD(v4) = -3896;
  dword_1964B0 = v0;
  dword_1964B4 = v1;
  HIWORD(v3) = (unsigned int)&loc_31C38 >> 16;
  dword_1964B8 = v2;
  HIWORD(v4) = (unsigned int)&loc_3D024 >> 16;
  LOWORD(v0) = -7376;
  LOWORD(v1) = -6688;
  LOWORD(v2) = -3848;
  dword_1964BC = v3;
  dword_1964C0 = v4;
  HIWORD(v0) = (unsigned int)&loc_3C290 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3D054 >> 16;
  dword_1964C4 = v0;
  dword_1964C8 = v1;
  dword_1964CC = v2;
  LOWORD(v0) = -6016;
  LOWORD(v1) = -4580;
  dword_1964D0 = 265512;
  HIWORD(v0) = (unsigned int)&loc_3C7DC >> 16;
  dword_1964D4 = 262240;
  HIWORD(v1) = (unsigned int)&loc_3CD78 >> 16;
  LOWORD(v3) = -660;
  LOWORD(v4) = -8248;
  dword_1964D8 = v0;
  dword_1964DC = v1;
  HIWORD(v3) = (unsigned int)&jpt_3DCBC[1] >> 16;
  dword_1964E0 = 262348;
  HIWORD(v4) = (unsigned int)&loc_3BF28 >> 16;
  dword_1964E4 = v3;
  dword_1964E8 = v4;
  *(_QWORD *)&dword_1964F0 = 0x56C2800056CC0LL;
  dword_1964EC = 355968;
  v5 = calloc(1u, 0x54u);
  return memcpy(v5, &dword_1964B0, 0x54u);
}
