int __fastcall sub_5D770(int a1, int a2)
{
  float v2; // s0
  __int16 v3; // r3
  int v4; // r12
  signed int v5; // r6
  float v6; // s19
  int v7; // r10
  int v8; // r11
  int v9; // r8
  int v10; // r5
  int v11; // r2
  int v12; // r4
  float v13; // s17
  int v14; // r0
  int v15; // r0
  float v16; // s16
  int v17; // r2
  signed int v19; // r7
  int v20; // r6
  unsigned int v22; // [sp+38h] [bp-104Ch]
  int v25; // [sp+4Ch] [bp-1038h]
  _DWORD v26[2]; // [sp+50h] [bp-1034h] BYREF
  int v27; // [sp+58h] [bp-102Ch]
  int v28; // [sp+5Ch] [bp-1028h]
  int v29; // [sp+60h] [bp-1024h] BYREF
  int v30; // [sp+64h] [bp-1020h]
  int v31; // [sp+68h] [bp-101Ch]
  int v32; // [sp+6Ch] [bp-1018h]
  __int64 v33; // [sp+70h] [bp-1014h]
  int v34; // [sp+78h] [bp-100Ch]
  int v35; // [sp+7Ch] [bp-1008h]
  char v36[4100]; // [sp+80h] [bp-1004h] BYREF

  v3 = 0;
  v27 = 0;
  v26[1] = 0;
  v28 = 0;
  v26[0] = 0;
  if ( !a2 )
    v3 = 8;
  LOBYTE(v27) = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      HIWORD(v27) = 12;
  }
  else
  {
    HIWORD(v27) = v3;
  }
  v4 = -1068236443;
  v5 = 2;
  v25 = 2;
LABEL_8:
  v6 = (float)v5;
  v7 = 0;
  v8 = 0;
LABEL_9:
  v9 = v8 + 1;
  v10 = v8;
  v22 = (v5 << 8) | 0xC0000000 | v7;
  while ( 1 )
  {
    v11 = (int)(float)((float)((float)((float)((float)(v10 + 1) * (float)((float)(v8 + 1) * v2)) * v6) / 25.0) * 100.0);
    v12 = v11 / 100;
    if ( v11 % 100 > 50 )
      ++v12;
    if ( (unsigned int)(v12 - 16) <= 0xEA )
    {
      v13 = (float)((float)v12 * 25.0) / v6;
      if ( (v5 != 1 || v13 <= 3125.0) && v13 <= 3200.0 && v13 >= 2000.0 )
      {
        v14 = sub_DCEB0(25 * v12, v5);
        v15 = sub_DCEB0(v14, v8 + 1);
        v16 = (float)sub_DCEB0(v15, v10 + 1);
        v17 = v13 > 2400.0;
        v4 = v10 & 7 | v22 | (v12 << 16) | (v17 << 28);
        if ( fabsf(v16 - v2) < 3.0 )
          break;
      }
    }
    if ( v10-- == 0 )
    {
      v7 += 16;
      ++v8;
      if ( v9 != 8 )
        goto LABEL_9;
      v5 = 1;
      if ( v25 == 1 )
      {
        v26[0] = v4;
        V_LOCK();
        V_INT((int)&v29, "chain", *(int *)(a1 + 200));
        logfmt_raw(
          v36,
          0x1000u,
          0,
          v35,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35,
          "set pll_no %d freq: %.2f, expected freq: %.2f",
          a2,
          0,
          0,
          v2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_freq_KDA_2110",
          25,
          500,
          40,
          v36);
        goto LABEL_24;
      }
      v25 = 1;
      goto LABEL_8;
    }
  }
  v19 = v5;
  v20 = v10 & 7 | v22 | (v12 << 16) | (v17 << 28);
  V_LOCK();
  logfmt_raw(
    v36,
    0x1000u,
    0,
    "target_freq:%.2f actual_freq:%.2f,vco:%.2f fbdiv:%d refdiv:%d postdiv1:%d, postdiv2:%d",
    v2,
    v16,
    v13,
    v12,
    v19,
    v8,
    v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "inferred_plldivider",
    19,
    473,
    20,
    v36);
  v26[0] = v20;
  V_LOCK();
  V_INT((int)&v29, "chain", *(int *)(a1 + 200));
  logfmt_raw(
    v36,
    0x1000u,
    0,
    v35,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    "set pll_no %d freq: %.2f, expected freq: %.2f",
    a2,
    v16,
    v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_freq_KDA_2110",
    25,
    500,
    40,
    v36);
  if ( v16 > 0.0 )
    v10 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 216))(a1, v26);
  else
    v10 = -1;
LABEL_24:
  usleep(0x2710u);
  return v10;
}
