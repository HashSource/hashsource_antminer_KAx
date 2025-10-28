int __fastcall sweep_get_error_code(_DWORD *a1)
{
  int v2; // r9
  int v3; // r8
  int v4; // r7
  int v5; // r6
  int v6; // r5
  int v7; // r11
  const char *v8; // r10
  _BYTE *v9; // r8
  _BYTE *v10; // r9
  int i; // r7
  _BYTE *v12; // r9
  int j; // r7
  const char *v14; // r10
  _BYTE *v15; // r7
  int k; // r9
  int m; // r7
  char *v19; // r1
  time_t v20; // [sp+0h] [bp-30Ch]
  time_t v21; // [sp+4h] [bp-308h]
  time_t v22; // [sp+8h] [bp-304h]
  time_t v23; // [sp+Ch] [bp-300h]
  time_t v24; // [sp+10h] [bp-2FCh]
  time_t v25; // [sp+14h] [bp-2F8h]
  char s[256]; // [sp+18h] [bp-2F4h] BYREF
  _BYTE dest[500]; // [sp+118h] [bp-1F4h] BYREF

  memcpy(dest, &byte_196BD0, 0x1F0u);
  v2 = (unsigned __int8)byte_196BD0;
  v3 = (unsigned __int8)byte_196BD8;
  v22 = dword_196BD4;
  v4 = (unsigned __int8)byte_196BE0;
  v5 = (unsigned __int8)byte_196DA8;
  v23 = dword_196BDC;
  v6 = (unsigned __int8)byte_196DB0;
  v7 = (unsigned __int8)byte_196DB8;
  v21 = dword_196BE4;
  v24 = dword_196DAC;
  v25 = dword_196DB4;
  v20 = dword_196DBC;
  pthread_mutex_lock(&miner_6060info_lock);
  if ( v2 )
  {
    LOWORD(v19) = -31992;
    HIWORD(v19) = (unsigned int)"enkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
    set_json_info_by_errorcode_and_time(a1, v19, v22);
  }
  if ( v3 )
    set_json_info_by_errorcode_and_time(a1, "P:2", v23);
  if ( v4 )
    set_json_info_by_errorcode_and_time(a1, "J:6", v21);
  LOWORD(v8) = -31988;
  v9 = dest;
  v10 = dest;
  for ( i = 0; i != 8; ++i )
  {
    while ( !v10[24] )
    {
      ++i;
      v10 += 8;
      if ( i == 8 )
        goto LABEL_11;
    }
    HIWORD(v8) = (unsigned int)"ns/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
    snprintf(s, 0x100u, v8, i, v20);
    set_json_info_by_errorcode_and_time(a1, s, *((_DWORD *)v10 + 7));
    v10 += 8;
  }
LABEL_11:
  v12 = dest;
  for ( j = 0; j != 16; ++j )
  {
    while ( !v12[88] )
    {
      ++j;
      v12 += 8;
      if ( j == 16 )
        goto LABEL_15;
    }
    snprintf(s, 0x100u, "R%d:1", j);
    set_json_info_by_errorcode_and_time(a1, s, *((_DWORD *)v12 + 23));
    v12 += 8;
  }
LABEL_15:
  LOWORD(v14) = -31980;
  v15 = dest;
  for ( k = 0; k != 16; ++k )
  {
    while ( !v15[216] )
    {
      ++k;
      v15 += 8;
      if ( k == 16 )
        goto LABEL_19;
    }
    HIWORD(v14) = (unsigned int)"ns/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
    snprintf(s, 0x100u, v14, k);
    set_json_info_by_errorcode_and_time(a1, s, *((_DWORD *)v15 + 55));
    v15 += 8;
  }
LABEL_19:
  for ( m = 0; m != 16; ++m )
  {
    while ( !v9[344] )
    {
      ++m;
      v9 += 8;
      if ( m == 16 )
        goto LABEL_23;
    }
    snprintf(s, 0x100u, "J%d:2", m);
    set_json_info_by_errorcode_and_time(a1, s, *((_DWORD *)v9 + 87));
    v9 += 8;
  }
LABEL_23:
  if ( v5 )
    set_json_info_by_errorcode_and_time(a1, "N:4", v24);
  if ( v6 )
    set_json_info_by_errorcode_and_time(a1, "M:1", v25);
  if ( v7 )
    set_json_info_by_errorcode_and_time(a1, "J:8", v20);
  return pthread_mutex_unlock(&miner_6060info_lock);
}
