int __fastcall pic1704_get_an_voltage2(char a1, int a2)
{
  float v2; // s0
  float v3; // s1
  int result; // r0
  int *v6; // lr
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r1
  double v16; // d9
  int *v17; // r12
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  unsigned int v26; // [sp+2Ch] [bp-180Ch] BYREF
  unsigned int v27; // [sp+30h] [bp-1808h] BYREF
  unsigned int v28; // [sp+34h] [bp-1804h] BYREF
  int s; // [sp+38h] [bp-1800h] BYREF
  int v30; // [sp+3Ch] [bp-17FCh]
  int v31; // [sp+40h] [bp-17F8h]
  int v32; // [sp+44h] [bp-17F4h]
  int v33; // [sp+48h] [bp-17F0h]
  int v34; // [sp+4Ch] [bp-17ECh]
  int v35; // [sp+50h] [bp-17E8h]
  int v36; // [sp+54h] [bp-17E4h]
  char v37[4096]; // [sp+838h] [bp-1000h] BYREF

  v26 = 0;
  v27 = 0;
  v28 = 0;
  result = pic1704_get_all_voltage(a1, &v26, &v27, &v28);
  if ( (_BYTE)result )
  {
    LOWORD(v6) = 21400;
    HIWORD(v6) = (unsigned int)"12_15" >> 16;
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v10 = v6[3];
    v6 += 4;
    s = v7;
    v30 = v8;
    v31 = v9;
    v32 = v10;
    v11 = v6[1];
    v12 = v6[2];
    v13 = v6[3];
    v33 = *v6;
    v34 = v11;
    v35 = v12;
    LOWORD(v36) = v13;
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v14) = 20644;
    HIWORD(v14) = (unsigned int)" J%d:5." >> 16;
    zlog(g_zc, v14, 165, "pic1704_get_an_voltage2", 23, 473, 20, v37);
    snprintf(
      (char *)&s,
      0x800u,
      "an0 = %f, an2 %f, an6 %f.",
      (double)v26 * 3.3 * 0.0009765625,
      (double)v27 * 3.3 * 0.0009765625,
      (double)v28 * 3.3 * 0.0009765625);
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v15) = 20644;
    HIWORD(v15) = (unsigned int)" J%d:5." >> 16;
    zlog(g_zc, v15, 165, "pic1704_get_an_voltage2", 23, 474, 20, v37);
    if ( a2 && ((v16 = (double)v28 * 3.3 * 0.0009765625, v2 > v16) || v3 < v16) )
    {
      LOWORD(v17) = 21460;
      HIWORD(v17) = (unsigned int)"" >> 16;
      v18 = *v17;
      v19 = v17[1];
      v20 = v17[2];
      v21 = v17[3];
      v17 += 4;
      s = v18;
      v30 = v19;
      v31 = v20;
      v32 = v21;
      v22 = v17[1];
      v23 = v17[2];
      v24 = v17[3];
      v33 = *v17;
      v34 = v22;
      v35 = v23;
      v36 = v24;
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v25) = 20644;
      HIWORD(v25) = (unsigned int)" J%d:5." >> 16;
      return zlog(g_zc, v25, 165, "pic1704_get_an_voltage2", 23, 480, 20, v37);
    }
    else
    {
      return sub_BB950(v27);
    }
  }
  return result;
}
