void *frontend_runtime_dash()
{
  int v0; // r12
  _DWORD *v1; // r4
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r0
  void *v6; // r0

  LOWORD(v0) = 9232;
  LOWORD(v1) = 19672;
  LOWORD(v2) = 10348;
  LOWORD(v3) = 7976;
  HIWORD(v1) = (unsigned int)&unk_173CA8 >> 16;
  HIWORD(v0) = (unsigned int)&loc_32218 >> 16;
  HIWORD(v2) = (unsigned int)&loc_32678 >> 16;
  HIWORD(v3) = (unsigned int)&loc_31D30 >> 16;
  LOWORD(v4) = 7728;
  LOWORD(v5) = -11752;
  *v1 = v0;
  v1[1] = v2;
  HIWORD(v4) = (unsigned int)&loc_31C38 >> 16;
  v1[2] = v3;
  HIWORD(v5) = (unsigned int)&loc_3D024 >> 16;
  LOWORD(v0) = -15232;
  LOWORD(v2) = -14544;
  LOWORD(v3) = -11704;
  v1[3] = v4;
  v1[4] = v5;
  HIWORD(v0) = (unsigned int)&loc_3C290 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3D054 >> 16;
  LOWORD(v4) = -4272;
  LOWORD(v5) = -7760;
  v1[5] = v0;
  HIWORD(v4) = (unsigned int)&loc_3ED60 >> 16;
  v1[6] = v2;
  HIWORD(v5) = (unsigned int)&loc_3DFBC >> 16;
  v1[7] = v3;
  LOWORD(v0) = -13872;
  LOWORD(v2) = -12436;
  LOWORD(v3) = -7652;
  v1[8] = v4;
  HIWORD(v0) = (unsigned int)&loc_3C7DC >> 16;
  v1[9] = v5;
  HIWORD(v2) = (unsigned int)&loc_3CD78 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3E028 >> 16;
  LOWORD(v4) = -8516;
  LOWORD(v5) = -16104;
  v1[10] = v0;
  v1[11] = v2;
  HIWORD(v4) = (unsigned int)&loc_3DCC8 >> 16;
  v1[12] = v3;
  HIWORD(v5) = (unsigned int)&loc_3BF28 >> 16;
  v1[13] = v4;
  v1[14] = v5;
  *((_QWORD *)v1 + 8) = 1407821560480000LL;
  v1[15] = 328384;
  v6 = calloc(1u, 0x54u);
  return memcpy(v6, v1, 0x54u);
}
