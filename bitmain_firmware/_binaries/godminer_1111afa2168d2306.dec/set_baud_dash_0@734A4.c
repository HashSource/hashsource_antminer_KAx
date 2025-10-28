int __fastcall set_baud_dash_0(int a1, int a2)
{
  int v4; // r4
  char *v5; // r1
  int v6; // r4
  int v7; // r1
  int v8; // r4
  _DWORD v10[4]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v11[7]; // [sp+40h] [bp-1024h] BYREF
  int v12; // [sp+5Ch] [bp-1008h]
  char v13[4100]; // [sp+60h] [bp-1004h] BYREF

  v10[2] = 6291457;
  v10[1] = 0;
  v10[3] = 0;
  v10[0] = 0;
  if ( (char *)a2 == "_err: 0x%llx, lane_err: %u" )
    goto LABEL_24;
  if ( a2 <= (int)"_err: 0x%llx, lane_err: %u" )
  {
    if ( a2 == 460800 )
    {
      v4 = 1568;
      goto LABEL_10;
    }
    if ( a2 > 460800 )
    {
      if ( a2 == 921600 || a2 == 1041666 )
      {
        v4 = 544;
        goto LABEL_10;
      }
    }
    else if ( a2 == 38400 )
    {
      v4 = 20512;
      goto LABEL_10;
    }
    goto LABEL_16;
  }
  if ( a2 == 3125000 )
  {
LABEL_23:
    v4 = 32;
    goto LABEL_10;
  }
  if ( a2 <= 3125000 )
  {
    if ( (char *)a2 != byte_17D784 )
    {
      if ( a2 != 3000000 )
        goto LABEL_16;
      goto LABEL_23;
    }
LABEL_24:
    v4 = 288;
    goto LABEL_10;
  }
  if ( a2 == 6250000 )
  {
    v4 = 289;
    goto LABEL_9;
  }
  if ( a2 != 12500000 )
  {
LABEL_16:
    v4 = 6688;
    goto LABEL_10;
  }
  v4 = 33;
LABEL_9:
  (*(void (__fastcall **)(int, int))(a1 + 192))(a1, 1);
LABEL_10:
  v10[0] = v4;
  V_LOCK();
  LOWORD(v5) = 27796;
  HIWORD(v5) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v11, v5, *(int *)(a1 + 256));
  LOWORD(v6) = -21036;
  HIWORD(v6) = (unsigned int)"k_delay_DASH_1766" >> 16;
  logfmt_raw(v13, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, v6, v10[0], a2);
  V_UNLOCK();
  LOWORD(v7) = -23376;
  HIWORD(v7) = (unsigned int)"k: %s" >> 16;
  zlog(g_zc, v7, 150, "ChipSetting_fuart_cfg_DASH_1766", 31, 584, 40, v13);
  v8 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v10);
  usleep(0x2710u);
  return v8;
}
