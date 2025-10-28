int set_pwm_by_temp()
{
  double v0; // d7
  int v1; // r3
  bool v2; // cf
  __int64 v3; // r8
  int v4; // r7
  float v5; // s14
  float v6; // s11
  float v7; // s13
  int v8; // r6
  int temp; // r0
  signed int v10; // r0
  __int64 v11; // r6
  __int64 v12; // r2
  int result; // r0
  int v14; // r0
  int v15; // r4
  bool v16; // cc
  double v17; // d5
  int v18; // r0
  int v19; // r0

  if ( !byte_175260 )
  {
    clock_gettime(1, &stru_175264);
    byte_175260 = 1;
    v1 = dword_1726DC;
    *(_QWORD *)&dword_175278 = 0;
    v2 = dword_1726DC != 0;
    if ( dword_1726DC != 1 )
      goto LABEL_3;
    goto LABEL_19;
  }
  clock_gettime(1, (struct timespec *)&dword_17526C);
  v11 = *(_QWORD *)&dword_175278;
  v12 = 1000LL * (dword_17526C - stru_175264.tv_sec) + (dword_175270 - stru_175264.tv_nsec) / 1000000;
  if ( *(__int64 *)&dword_175278 < 20 )
  {
    result = dword_1726F8;
    if ( v12 < dword_1726F8 )
      return result;
LABEL_18:
    clock_gettime(1, &stru_175264);
    *(_QWORD *)&dword_175278 = v11 + 1;
    v1 = dword_1726DC;
    v2 = dword_1726DC != 0;
    if ( dword_1726DC != 1 )
    {
LABEL_3:
      if ( !v2 )
      {
        v19 = sub_571D0();
        if ( v19 <= 18 )
        {
          v15 = 40;
          goto LABEL_27;
        }
        if ( (unsigned int)(v19 - 19) <= 0xE )
        {
          v18 = v19 - 18;
          v17 = 0.666666667;
          v0 = 40.0;
        }
        else
        {
          if ( (unsigned int)(v19 - 34) <= 4 )
          {
            v15 = 50;
            goto LABEL_27;
          }
          if ( (unsigned int)(v19 - 39) <= 9 )
          {
            v15 = (int)((double)(v19 - 38) + 50.0);
            goto LABEL_27;
          }
          if ( (unsigned int)(v19 - 49) > 6 )
          {
            v15 = 100;
            goto LABEL_27;
          }
          v18 = v19 - 48;
          v17 = 5.71428571;
          v0 = 60.0;
        }
        goto LABEL_26;
      }
      if ( v1 == 2 )
      {
        v3 = *(_QWORD *)&dword_175278;
        flt_17528C = (float)get_temp(dword_1726F0);
        v4 = fan_pwm_get();
        v5 = flt_175288 - flt_17528C;
        flt_1752A0 = flt_175288 - flt_17528C;
        v6 = (float)(flt_175288 - flt_17528C) - flt_1752A4;
        v7 = (float)((float)(flt_175288 - flt_17528C) - (float)(flt_1752A4 + flt_1752A4)) + flt_1752A8;
        if ( v3 < 21 )
        {
          flt_1752A8 = flt_1752A4;
          flt_1752A4 = flt_175288 - flt_17528C;
          v8 = (int)(float)((float)((float)(v5 * flt_175298) + (float)(v6 * flt_175290)) + (float)(v7 * flt_17529C));
          if ( v8 < -20 )
            v8 = -20;
        }
        else
        {
          flt_1752A8 = flt_1752A4;
          flt_1752A4 = flt_175288 - flt_17528C;
          v8 = (int)(float)((float)((float)(v5 * flt_175298) + (float)(v6 * flt_175294)) + (float)(v7 * flt_17529C));
        }
        temp = get_temp(dword_1726E8);
        if ( temp >= dword_1726EC )
          v5 = 100.0;
        else
          v8 += v4;
        if ( temp < dword_1726EC )
          v5 = (float)v8;
        if ( v5 < flt_175284 )
        {
          if ( flt_175280 >= flt_175284 )
          {
            v10 = (int)flt_175284;
            return fan_pwm_set(v10);
          }
        }
        else if ( v5 <= flt_175280 )
        {
          v10 = (int)v5;
          return fan_pwm_set(v10);
        }
        v10 = (int)flt_175280;
        return fan_pwm_set(v10);
      }
      v10 = 100;
      return fan_pwm_set(v10);
    }
LABEL_19:
    v14 = sub_571D0();
    if ( v14 <= 13 )
    {
      v15 = 20;
LABEL_27:
      if ( get_temp(dword_1726E8) >= dword_1726EC )
        v15 = 100;
      if ( v15 < dword_1726E0 )
        v10 = dword_1726E0;
      else
        v10 = v15;
      if ( v10 >= dword_1726E4 )
        v10 = dword_1726E4;
      return fan_pwm_set(v10);
    }
    v16 = (unsigned int)(v14 - 14) > 0x12;
    if ( (unsigned int)(v14 - 14) > 0x12 )
    {
      v17 = 1.42857143;
      v18 = v14 - 32;
      v0 = 60.0;
    }
    else
    {
      v17 = 2.10526316;
      v18 = v14 - 13;
    }
    if ( !v16 )
      v0 = 20.0;
LABEL_26:
    v15 = (int)(v0 + (double)v18 * v17);
    goto LABEL_27;
  }
  result = dword_1726FC;
  if ( v12 >= dword_1726FC )
    goto LABEL_18;
  return result;
}
