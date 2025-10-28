int __fastcall chip_setting_ticket_mask_ltc(_DWORD *a1, unsigned int a2)
{
  int v4; // r3
  int v5; // r1
  int v6; // r3
  void (__fastcall *v7)(_DWORD *, unsigned int *); // r3
  int v8; // r3
  int v9; // r9
  int i; // r2
  int v11; // r3
  int v12; // r1
  int v14; // r4
  int v15; // [sp+Ch] [bp-1014h]
  unsigned int v16; // [sp+10h] [bp-1010h] BYREF
  int v17; // [sp+18h] [bp-1008h]
  char v18; // [sp+1Ch] [bp-1004h]
  char v19; // [sp+1Dh] [bp-1003h]
  char v20; // [sp+1Eh] [bp-1002h]
  char v21[4096]; // [sp+20h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v4) = 2324;
  HIWORD(v4) = (unsigned int)"ing_read_sensor_temp_local_on_ctrlboard_ZEC_1746" >> 16;
  logfmt_raw(v21, 0x1000u, 0, v4, "chip_setting_ticket_mask_ltc", 2, a2, v15, 0, 0, 0, 0);
  V_UNLOCK();
  LOWORD(v5) = 2120;
  HIWORD(v5) = (unsigned int)"6" >> 16;
  zlog(g_zc, v5, 176, "chip_setting_ticket_mask_ltc", 28, 146, 60, v21);
  v6 = a1[79];
  v17 = 131073;
  v16 = (unsigned __int16)a2;
  v19 = v6;
  v20 = 1;
  v7 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[63];
  v18 = 0;
  v7(a1, &v16);
  usleep(0x3E8u);
  v8 = a1[79];
  v17 = 262145;
  v20 = 1;
  v16 = HIWORD(a2);
  v19 = v8;
  v18 = 0;
  v9 = ((int (__fastcall *)(_DWORD *, unsigned int *))a1[63])(a1, &v16);
  if ( (a2 & 1) != 0 )
  {
    for ( i = 0; ; ++i )
    {
      a2 >>= 1;
      if ( (a2 & 1) == 0 )
        break;
    }
    v14 = i + 17;
  }
  else
  {
    v14 = 16;
  }
  a1[102] = v14;
  V_LOCK();
  LOWORD(v11) = 2356;
  HIWORD(v11) = (unsigned int)"rlboard_ZEC_1746" >> 16;
  logfmt_raw(v21, 0x1000u, 0, v11, v14);
  V_UNLOCK();
  LOWORD(v12) = 2120;
  HIWORD(v12) = (unsigned int)"6" >> 16;
  zlog(g_zc, v12, 176, "chip_setting_ticket_mask_ltc", 28, 177, 60, v21);
  return v9;
}
