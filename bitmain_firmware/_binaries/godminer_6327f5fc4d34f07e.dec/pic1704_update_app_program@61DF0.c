int __fastcall pic1704_update_app_program(int a1)
{
  FILE *v2; // r6
  char *v3; // r10
  char *v4; // r5
  unsigned int v5; // r0
  int v6; // r9
  int v7; // r7
  int v8; // r2
  char *v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v15; // r2
  unsigned __int8 v16[4]; // [sp+14h] [bp-1820h] BYREF
  char s[8]; // [sp+18h] [bp-181Ch] BYREF
  int v18; // [sp+20h] [bp-1814h] BYREF
  int v19; // [sp+24h] [bp-1810h]
  int v20; // [sp+28h] [bp-180Ch]
  int v21; // [sp+2Ch] [bp-1808h]
  int v22[512]; // [sp+30h] [bp-1804h] BYREF
  char v23[20]; // [sp+830h] [bp-1004h] BYREF
  __int16 v24; // [sp+844h] [bp-FF0h]

  *(_DWORD *)s = 0;
  v18 = 0;
  *(_DWORD *)&s[3] = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v2 = (FILE *)fopen64("/etc/config/dsPIC33EP16GS202_app.txt", "r");
  if ( !v2 )
  {
    snprintf(
      (char *)v22,
      0x800u,
      "%s open DSPIC33EP16GS202_PIC_PROGRAM failed chain[%d]!",
      "pic1704_update_app_program",
      a1);
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, v22);
    V_UNLOCK();
    v6 = -1;
    v15 = 274;
    goto LABEL_19;
  }
  v3 = (char *)calloc(0x3700u, 1u);
  if ( !v3 )
  {
    snprintf((char *)v22, 0x800u, "%s malloc failed chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, v22);
    V_UNLOCK();
    v6 = -1;
    v15 = 281;
LABEL_19:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      165,
      "pic1704_update_app_program",
      26,
      v15,
      20,
      v23);
    return v6;
  }
  v4 = v3;
  fseek(v2, 0, 0);
  do
  {
    v4 += 4;
    fgets(s, 7, v2);
    v5 = strtoul(s, 0, 16);
    *(v4 - 1) = v5;
    *(v4 - 4) = HIBYTE(v5);
    *(v4 - 3) = BYTE2(v5);
    *(v4 - 2) = BYTE1(v5);
  }
  while ( v4 != v3 + 14080 );
  fclose(v2);
  v6 = pic1704_reset(a1);
  if ( v6 )
  {
    v6 = pic1704_erase_program(a1);
    if ( v6 )
    {
      v7 = 0;
      do
      {
        v9 = &v3[16 * v7];
        v22[1] = (int)&v18;
        v10 = *(_DWORD *)v9;
        v11 = *((_DWORD *)v9 + 1);
        v12 = *((_DWORD *)v9 + 2);
        v13 = *((_DWORD *)v9 + 3);
        ++v7;
        HIBYTE(v22[0]) = a1;
        LOWORD(v22[0]) = 4098;
        v18 = v10;
        v19 = v11;
        v20 = v12;
        v21 = v13;
        BYTE2(v22[0]) = 2;
        v16[1] = 0;
        memset(v23, 0, sizeof(v23));
        v24 = 0;
        v16[0] = -1;
        if ( !sub_6183C(v22[0], (int)&v18, (int)v23, v16) )
        {
          v6 = 0;
          snprintf((char *)v22, 0x800u, "%s send data to pic error chain[%d]!", "pic1704_update_app_program", a1);
          V_LOCK();
          logfmt_raw(v23, 0x1000u, 0, v22);
          V_UNLOCK();
          v8 = 335;
          goto LABEL_12;
        }
      }
      while ( v7 != 880 );
      v6 = pic1704_reset(a1);
      if ( v6 )
      {
        v6 = 1;
        free(v3);
        return v6;
      }
      snprintf((char *)v22, 0x800u, "%s reset error after program chain[%d]!", "pic1704_update_app_program", a1);
      V_LOCK();
      logfmt_raw(v23, 0x1000u, 0, v22);
      V_UNLOCK();
      v8 = 345;
    }
    else
    {
      snprintf((char *)v22, 0x800u, "%s erase pic error chain[%d]!", "pic1704_update_app_program", a1);
      V_LOCK();
      logfmt_raw(v23, 0x1000u, 0, v22);
      V_UNLOCK();
      v8 = 315;
    }
  }
  else
  {
    snprintf((char *)v22, 0x800u, "%s reset pic error chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, v22);
    V_UNLOCK();
    v8 = 306;
  }
LABEL_12:
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/drv_pic/pic_1704.c",
    165,
    "pic1704_update_app_program",
    26,
    v8,
    20,
    v23);
  free(v3);
  return v6;
}
