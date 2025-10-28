int __fastcall read_feedback_voltage(int a1)
{
  int v1; // s0
  int v2; // s1
  int v4; // r3
  int v5; // r1
  int v7; // [sp+4h] [bp-1010h]
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( platform_is_pic_mcu_en() )
    pic1704_get_an_voltage1(a1);
  else
    bitmain_get_sample_voltage();
  V_LOCK();
  LOWORD(v4) = -31984;
  HIWORD(v4) = (unsigned int)"m failed" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v4, a1, v7, v1, v2);
  V_UNLOCK();
  LOWORD(v5) = -32212;
  HIWORD(v5) = (unsigned int)"asic_id" >> 16;
  return zlog(g_zc, v5, 150, "read_feedback_voltage", 21, 57, 20, v8);
}
