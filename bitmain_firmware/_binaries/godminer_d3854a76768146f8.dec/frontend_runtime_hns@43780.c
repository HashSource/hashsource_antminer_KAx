void *frontend_runtime_hns()
{
  int v0; // r12
  int v1; // r4
  __int64 v2; // r2
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  LOWORD(v0) = 9232;
  LOWORD(v1) = 19924;
  LOWORD(v2) = 10348;
  WORD2(v2) = 7976;
  HIWORD(v1) = (unsigned int)&unk_173DA4 >> 16;
  HIWORD(v0) = (unsigned int)&loc_32218 >> 16;
  WORD1(v2) = (unsigned int)&loc_32678 >> 16;
  HIWORD(v2) = (unsigned int)&loc_31D30 >> 16;
  LOWORD(v3) = 7728;
  LOWORD(v4) = -11752;
  *(_DWORD *)(v1 + 0x40) = v0;
  *(_DWORD *)(v1 + 0x44) = v2;
  HIWORD(v3) = (unsigned int)&loc_31C38 >> 16;
  *(_DWORD *)(v1 + 0x48) = HIDWORD(v2);
  HIWORD(v4) = (unsigned int)&loc_3D024 >> 16;
  LOWORD(v0) = -15232;
  LOWORD(v2) = -14544;
  WORD2(v2) = 8776;
  *(_DWORD *)(v1 + 0x4C) = v3;
  *(_DWORD *)(v1 + 0x50) = v4;
  HIWORD(v0) = (unsigned int)&loc_3C290 >> 16;
  WORD1(v2) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v2) = (unsigned int)&loc_42058 >> 16;
  LOWORD(v3) = 10244;
  LOWORD(v4) = 8720;
  *(_DWORD *)(v1 + 0x54) = v0;
  HIWORD(v3) = (unsigned int)&loc_42614 >> 16;
  *(_DWORD *)(v1 + 0x58) = v2;
  HIWORD(v4) = (unsigned int)&loc_42020 >> 16;
  *(_DWORD *)(v1 + 0x5C) = HIDWORD(v2);
  LOWORD(v0) = -13872;
  LOWORD(v2) = -12436;
  WORD2(v2) = 10504;
  *(_DWORD *)(v1 + 0x60) = v3;
  HIWORD(v0) = (unsigned int)&loc_3C7DC >> 16;
  *(_DWORD *)(v1 + 0x64) = v4;
  WORD1(v2) = (unsigned int)&loc_3CD78 >> 16;
  HIWORD(v2) = (unsigned int)&loc_42718 >> 16;
  LOWORD(v3) = 9488;
  LOWORD(v4) = -16104;
  *(_DWORD *)(v1 + 0x68) = v0;
  *(_DWORD *)(v1 + 0x6C) = v2;
  HIWORD(v3) = (unsigned int)&loc_42320 >> 16;
  *(_DWORD *)(v1 + 0x70) = HIDWORD(v2);
  HIWORD(v4) = (unsigned int)&loc_3BF28 >> 16;
  LOWORD(v0) = 4680;
  LOWORD(v2) = 4568;
  WORD2(v2) = 4588;
  HIWORD(v0) = (unsigned int)&loc_50F20 >> 16;
  WORD1(v2) = (unsigned int)get_cur_block_num >> 16;
  HIWORD(v2) = (unsigned int)&loc_50EC4 >> 16;
  *(_DWORD *)(v1 + 0x74) = v3;
  *(_DWORD *)(v1 + 0x78) = v4;
  *(_QWORD *)(v1 + 0x80) = v2;
  *(_DWORD *)(v1 + 0x7C) = v0;
  v5 = calloc(1u, 0x54u);
  return memcpy(v5, (const void *)(v1 + 64), 0x54u);
}
