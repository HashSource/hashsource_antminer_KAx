int __fastcall set_baud_kas_0(int a1, char *a2)
{
  int v4; // r4
  int v5; // r4
  _DWORD v7[4]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v8[7]; // [sp+40h] [bp-1024h] BYREF
  int v9; // [sp+5Ch] [bp-1008h]
  char v10[4100]; // [sp+60h] [bp-1004h] BYREF

  v7[2] = 6291457;
  v7[1] = 0;
  v7[3] = 0;
  v7[0] = 0;
  if ( a2 == (char *)1500000 )
    goto LABEL_24;
  if ( (int)a2 <= 1500000 )
  {
    if ( a2 == (char *)&loc_70800 )
    {
      v4 = 1536;
      goto LABEL_10;
    }
    if ( (int)a2 > 460800 )
    {
      if ( a2 == (char *)&loc_E1000 || a2 == (_BYTE *)&loc_FE500 + 2 )
      {
        v4 = 512;
        goto LABEL_10;
      }
    }
    else if ( a2 == (char *)38400 )
    {
      v4 = 20480;
      goto LABEL_10;
    }
    goto LABEL_16;
  }
  if ( a2 == (char *)3125000 )
  {
LABEL_23:
    v4 = 0;
    goto LABEL_10;
  }
  if ( (int)a2 <= 3125000 )
  {
    if ( a2 != byte_17D784 )
    {
      if ( a2 != (char *)3000000 )
        goto LABEL_16;
      goto LABEL_23;
    }
LABEL_24:
    v4 = 256;
    goto LABEL_10;
  }
  if ( a2 == (char *)6250000 )
  {
    v4 = 257;
    goto LABEL_9;
  }
  if ( a2 != (char *)12500000 )
  {
LABEL_16:
    v4 = 6656;
    goto LABEL_10;
  }
  v4 = 1;
LABEL_9:
  (*(void (__fastcall **)(int, int))(a1 + 188))(a1, 1);
LABEL_10:
  v7[0] = v4;
  V_LOCK();
  V_INT((int)v8, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v10,
    0x1000u,
    0,
    v9,
    v8[0],
    v8[1],
    v8[2],
    v8[3],
    v8[4],
    v8[5],
    v8[6],
    v9,
    "set fuart cfg value %08x/%d",
    v4,
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_fuart_cfg_KAS_2380",
    30,
    486,
    40,
    v10);
  v5 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v7);
  usleep(0x2710u);
  return v5;
}
