unsigned int __fastcall close_pic(unsigned int result)
{
  unsigned int v1; // r5
  unsigned int v2; // r6
  const char *v3; // r2
  int v4; // r1
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v6[4096]; // [sp+810h] [bp-1000h] BYREF

  v1 = result;
  if ( result > 0xF )
  {
    LOWORD(v3) = 21492;
    HIWORD(v3) = (unsigned int)"et_BC_write_command timeout!" >> 16;
    snprintf(s, 0x800u, v3, "close_pic", result);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v4) = 20644;
    HIWORD(v4) = (unsigned int)" J%d:5." >> 16;
    return zlog(g_zc, v4, 165, "close_pic", 9, 798, 100, v6);
  }
  else
  {
    v2 = 2 * result;
    if ( g_bitmain_pic_state[2 * result] || g_bitmain_pic_state[v2 + 1] )
    {
      pthread_mutex_lock(&i2c_mutex_all);
      iic_uninit(g_bitmain_pic_state[2 * v1]);
      g_bitmain_pic_state[v2 + 1] = 0;
      return pthread_mutex_unlock(&i2c_mutex_all);
    }
  }
  return result;
}
