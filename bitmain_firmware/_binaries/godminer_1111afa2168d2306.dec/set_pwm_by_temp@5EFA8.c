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

  if ( !byte_196B28 )
  {
    clock_gettime(1, &stru_196B2C);
    byte_196B28 = 1;
    v1 = dword_193720;
    *(_QWORD *)&dword_196B40 = 0;
    v2 = dword_193720 != 0;
    if ( dword_193720 != 1 )
      goto LABEL_3;
    goto LABEL_19;
  }
  clock_gettime(1, (struct timespec *)&dword_196B34);
  v11 = *(_QWORD *)&dword_196B40;
  v12 = 1000LL * (dword_196B34 - stru_196B2C.tv_sec) + (dword_196B38 - stru_196B2C.tv_nsec) / 1000000;
  if ( *(__int64 *)&dword_196B40 < 20 )
  {
    result = dword_19373C;
    if ( v12 < dword_19373C )
      return result;
LABEL_18:
    clock_gettime(1, &stru_196B2C);
    *(_QWORD *)&dword_196B40 = v11 + 1;
    v1 = dword_193720;
    v2 = dword_193720 != 0;
    if ( dword_193720 != 1 )
    {
LABEL_3:
      if ( !v2 )
      {
        v19 = sub_5E8A8();
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
        v3 = *(_QWORD *)&dword_196B40;
        flt_196B54 = (float)get_temp(dword_193734);
        v4 = fan_pwm_get();
        v5 = flt_196B50 - flt_196B54;
        flt_196B68 = flt_196B50 - flt_196B54;
        v6 = (float)(flt_196B50 - flt_196B54) - flt_196B6C;
        v7 = (float)((float)(flt_196B50 - flt_196B54) - (float)(flt_196B6C + flt_196B6C)) + flt_196B70;
        if ( v3 < 21 )
        {
          flt_196B70 = flt_196B6C;
          flt_196B6C = flt_196B50 - flt_196B54;
          v8 = (int)(float)((float)((float)(v5 * flt_196B60) + (float)(v6 * flt_196B58)) + (float)(v7 * flt_196B64));
          if ( v8 < -20 )
            v8 = -20;
        }
        else
        {
          flt_196B70 = flt_196B6C;
          flt_196B6C = flt_196B50 - flt_196B54;
          v8 = (int)(float)((float)((float)(v5 * flt_196B60) + (float)(v6 * flt_196B5C)) + (float)(v7 * flt_196B64));
        }
        temp = get_temp(dword_19372C);
        if ( temp >= dword_193730 )
          v5 = 100.0;
        else
          v8 += v4;
        if ( temp < dword_193730 )
          v5 = (float)v8;
        if ( v5 < flt_196B4C )
        {
          if ( flt_196B48 >= flt_196B4C )
          {
            v10 = (int)flt_196B4C;
            return fan_pwm_set(v10);
          }
        }
        else if ( v5 <= flt_196B48 )
        {
          v10 = (int)v5;
          return fan_pwm_set(v10);
        }
        v10 = (int)flt_196B48;
        return fan_pwm_set(v10);
      }
      v10 = 100;
      return fan_pwm_set(v10);
    }
LABEL_19:
    v14 = sub_5E8A8();
    if ( v14 <= 13 )
    {
      v15 = 20;
LABEL_27:
      if ( get_temp(dword_19372C) >= dword_193730 )
        v15 = 100;
      if ( v15 < dword_193724 )
        v10 = dword_193724;
      else
        v10 = v15;
      if ( v10 >= dword_193728 )
        v10 = dword_193728;
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
  result = dword_193740;
  if ( v12 >= dword_193740 )
    goto LABEL_18;
  return result;
}
