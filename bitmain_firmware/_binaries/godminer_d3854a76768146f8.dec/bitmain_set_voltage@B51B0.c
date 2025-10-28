int bitmain_set_voltage()
{
  unsigned int v0; // r0
  int v1; // r5
  int v3; // r1
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v5[4096]; // [sp+818h] [bp-1000h] BYREF

  if ( dword_18A85C || (v1 = sub_B44D4(), v1 >= 0) )
  {
    v0 = bitmain_convert_V_to_N();
    if ( v0 > 0xFF )
      return -2147482879;
    else
      return sub_B40E8((void *)dword_18A858, (unsigned __int8)v0);
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_set_voltage");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v3) = 26444;
    HIWORD(v3) = (unsigned int)"ZcashPoW" >> 16;
    zlog(g_zc, v3, 173, "bitmain_set_voltage", 19, 708, 100, v5);
  }
  return v1;
}
