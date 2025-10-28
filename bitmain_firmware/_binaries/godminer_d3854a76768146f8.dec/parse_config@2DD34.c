void __fastcall parse_config(_DWORD *a1)
{
  int v1; // s0
  int v2; // s1
  char **v3; // r4
  char *v4; // r9
  char *v6; // r10
  int v7; // r3
  int v8; // r1
  char *v9; // t1
  _DWORD *v10; // r0
  _DWORD *v11; // r5
  int v12; // r3
  const char *v13; // r0
  char *v14; // r5
  int v15; // r0
  const char *v16; // r1
  const char *v17; // r1
  int v18; // r11
  unsigned int i; // r10
  _DWORD *v20; // r0
  int v21; // r1
  char s[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v6) = 5156;
  v3 = &off_130A1C;
  LOWORD(v4) = 30076;
  HIWORD(v6) = (unsigned int)"%c%s/s" >> 16;
  while ( 1 )
  {
    v10 = (_DWORD *)json_object_get(a1, v6);
    v11 = v10;
    if ( !v10 )
      goto LABEL_7;
    v12 = *v10;
    if ( v3[1] )
      break;
    if ( v12 != 5 )
      goto LABEL_7;
    HIWORD(v4) = (unsigned int)"tegory fail" >> 16;
    parse_arg((int)v3[3], v4);
    if ( &unk_130B2C == (_UNKNOWN *)v3 )
      return;
LABEL_8:
    v9 = v3[4];
    v3 += 4;
    v6 = v9;
    if ( !v9 )
      return;
  }
  if ( v12 != 2 )
  {
    switch ( v12 )
    {
      case 3:
        v15 = json_integer_value((int)v10);
        LOWORD(v16) = 788;
        HIWORD(v16) = (unsigned int)"t miner sn" >> 16;
        sprintf(s, v16, v15);
        parse_arg((int)v3[3], s);
        break;
      case 4:
        json_real_value();
        LOWORD(v17) = -29948;
        HIWORD(v17) = (unsigned int)"nsor" >> 16;
        sprintf(s, v17, v1, v2);
        parse_arg((int)v3[3], s);
        break;
      case 1:
        LOWORD(v18) = 5164;
        for ( i = 0; (unsigned int)json_array_size(v11) > i; ++i )
        {
          v20 = json_array_get(v11, i);
          if ( !v20 )
            break;
          if ( *v20 )
          {
            V_LOCK();
            HIWORD(v18) = (unsigned int)"hex2bin str truncated" >> 16;
            logfmt_raw(s, 0x1000u, 0, v18, *v3);
            V_UNLOCK();
            LOWORD(v21) = 4232;
            HIWORD(v21) = (unsigned int)&unk_132994 >> 16;
            zlog(g_zc, v21, 139, "parse_config", 12, 531, 100, s);
          }
          else
          {
            parse_config(v20);
          }
        }
        break;
      default:
        V_LOCK();
        LOWORD(v7) = 5192;
        HIWORD(v7) = (unsigned int)"bin failed on '%s'" >> 16;
        logfmt_raw(s, 0x1000u, 0, v7, v6);
        V_UNLOCK();
        LOWORD(v8) = 4232;
        HIWORD(v8) = (unsigned int)&unk_132994 >> 16;
        zlog(g_zc, v8, 139, "parse_config", 12, 539, 100, s);
        break;
    }
LABEL_7:
    if ( &unk_130B2C == (_UNKNOWN *)v3 )
      return;
    goto LABEL_8;
  }
  v13 = (const char *)json_string_value(v10);
  v14 = _strdup(v13);
  if ( v14 )
  {
    parse_arg((int)v3[3], v14);
    free(v14);
    goto LABEL_7;
  }
}
