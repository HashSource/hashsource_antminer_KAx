int __fastcall open_miner_by_work_num(int a1)
{
  int v2; // r3
  int v3; // r1
  const void *v4; // r1
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  char *v7; // r9
  void *v8; // r11
  char *v9; // r6
  char v10; // r4
  int v11; // r1
  void *v13; // [sp+14h] [bp-1448h]
  _BYTE v14[140]; // [sp+1Ch] [bp-1440h] BYREF
  char dest[5040]; // [sp+A8h] [bp-13B4h] BYREF
  int v16; // [sp+1458h] [bp-4h] BYREF

  V_LOCK();
  LOWORD(v2) = -13668;
  HIWORD(v2) = (unsigned int)"ist0 final pattern %08x" >> 16;
  logfmt_raw(dest, 0x1000u, 0, v2, "open_miner_by_work_num");
  V_UNLOCK();
  LOWORD(v3) = 19016;
  HIWORD(v3) = (unsigned int)", type %d, diff %d, ticket mask %d" >> 16;
  zlog(g_zc, v3, 171, "open_miner_by_work_num", 22, 663, 20, dest);
  LOWORD(v4) = 13884;
  HIWORD(v4) = (unsigned int)&unk_173804 >> 16;
  memcpy(dest, v4, sizeof(dest));
  v5 = calloc(1u, 0xD8u);
  v13 = v5 + 10;
  v6 = v5;
  v7 = dest;
  v8 = v5 + 46;
  v9 = (char *)v5 + 7;
  v10 = 0;
  do
  {
    v11 = (int)v7;
    v7 += 280;
    str2hex((int)v14, v11, 280);
    memset(v6, 0, 0xB4u);
    memcpy(v13, v14, 0x8Cu);
    *++v9 = v10;
    v6[45] = 22;
    *(_DWORD *)(a1 + 508) = 1;
    memset(v8, 255, 0x20u);
    push_work_base(a1, (int)v6);
    usleep((__useconds_t)&loc_30D40);
    v10 += 2;
  }
  while ( v7 != (char *)&v16 );
  free(v6);
  return 0;
}
