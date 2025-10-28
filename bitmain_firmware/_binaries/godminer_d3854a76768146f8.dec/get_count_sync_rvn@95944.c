int __fastcall get_count_sync_rvn(int a1, int a2)
{
  int v4; // r3
  int v5; // r1
  char *v6; // r11
  int v7; // r0
  int v8; // r10
  int v9; // r9
  char *v10; // r6
  char *v11; // r4
  int v12; // lr
  int v13; // r12
  int v14; // r1
  char v16[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v4) = -11816;
  HIWORD(v4) = (unsigned int)"Setting_read_sensor_temp_remote_on_pic_HNS_2130" >> 16;
  logfmt_raw(v16, 0x1000u, 0, v4, "get_count_sync_rvn");
  V_UNLOCK();
  LOWORD(v5) = 6288;
  HIWORD(v5) = (unsigned int)&unk_1534C8 >> 16;
  zlog(g_zc, v5, 171, "get_count_sync_rvn", 18, 267, 0x14u, v16);
  v6 = (char *)malloc(0x300u);
  v7 = sub_934FC(a1, a2, 202, v6);
  if ( v7 > 0 )
  {
    LOWORD(v8) = -11800;
    LOWORD(v9) = 6288;
    v10 = &v6[12 * v7];
    v11 = v6;
    do
    {
      V_LOCK();
      v12 = *(_DWORD *)v11;
      HIWORD(v8) = (unsigned int)"sor_temp_remote_on_pic_HNS_2130" >> 16;
      v13 = (unsigned __int8)v11[4];
      v14 = *((unsigned __int16 *)v11 + 3);
      v11 += 12;
      logfmt_raw(v16, 0x1000u, 0, v8, v13, (unsigned __int8)*(v11 - 4), v14, v12);
      V_UNLOCK();
      HIWORD(v9) = (unsigned int)&unk_1534C8 >> 16;
      zlog(g_zc, v9, 171, "get_count_sync_rvn", 18, 273, 20, v16);
    }
    while ( v11 != v10 );
  }
  free(v6);
  return 0;
}
