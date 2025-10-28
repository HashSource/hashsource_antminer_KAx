int __fastcall get_chain_mps_voltage(int a1, _WORD *a2)
{
  int v4; // r3
  int v5; // r1
  int result; // r0
  unsigned __int16 v7; // r9
  __int16 v8; // r10
  int v9; // r9
  unsigned int v10; // r8
  int v11; // r3
  int v12; // r1
  unsigned __int8 v13; // [sp+10h] [bp-1008h] BYREF
  unsigned __int8 v14; // [sp+11h] [bp-1007h]
  __int16 src; // [sp+18h] [bp-1000h] BYREF
  char v16; // [sp+1Ah] [bp-FFEh]

  *a2 = -1;
  if ( !sub_A6550(a1, 0)
    || (src = 8562, v16 = 2, sub_A6188(a1, 60, &src, 3u, &v13, 2u))
    || (v7 = v13, v8 = v14, !sub_A6550(a1, 2))
    || (v16 = 2, src = 3442, (result = sub_A6188(a1, 60, &src, 3u, &v13, 2u)) != 0) )
  {
    V_LOCK();
    LOWORD(v4) = 16008;
    HIWORD(v4) = (unsigned int)"om_nonce_response_rate" >> 16;
    logfmt_raw((char *)&src, 0x1000u, 0, v4, a1);
    V_UNLOCK();
    LOWORD(v5) = 15688;
    HIWORD(v5) = (unsigned int)"eeprom_load_one_chain" >> 16;
    zlog(g_zc, v5, 164, "get_chain_mps_voltage", 21, 193, 100, &src);
    return 1;
  }
  else
  {
    v9 = 10 * ((v7 | (unsigned __int16)(v8 << 8)) & 0x1FF) + 490;
    v10 = 10 * (((unsigned int)(v13 | (v14 << 8)) >> 5) & 0x1FF) + 490;
    *a2 = v10;
    if ( v9 != v10 )
    {
      V_LOCK();
      LOWORD(v11) = 15960;
      HIWORD(v11) = (unsigned int)"api_get_eeprom_nonce_response_rate" >> 16;
      logfmt_raw((char *)&src, 0x1000u, 0, v11, v9, v10, a1);
      V_UNLOCK();
      LOWORD(v12) = 15688;
      HIWORD(v12) = (unsigned int)"eeprom_load_one_chain" >> 16;
      zlog(g_zc, v12, 164, "get_chain_mps_voltage", 21, 189, 80, &src);
      return 0;
    }
  }
  return result;
}
