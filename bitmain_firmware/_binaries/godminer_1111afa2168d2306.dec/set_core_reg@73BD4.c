int __fastcall set_core_reg(int a1, char a2, int a3, int a4)
{
  int v4; // r6
  int v9; // r3
  int v10; // r1
  int v12; // [sp+Ch] [bp-1018h]
  int v13; // [sp+10h] [bp-1014h] BYREF
  __int16 v14; // [sp+18h] [bp-100Ch]
  __int16 v15; // [sp+1Ah] [bp-100Ah]
  char v16; // [sp+1Ch] [bp-1008h]
  char v17; // [sp+1Dh] [bp-1007h]
  char v18[4100]; // [sp+20h] [bp-1004h] BYREF

  LOWORD(v4) = -20956;
  HIWORD(v4) = (unsigned int)"r_DASH_1766" >> 16;
  V_LOCK();
  LOWORD(v9) = -18752;
  HIWORD(v9) = (unsigned int)"ce_DCR_1727" >> 16;
  logfmt_raw(v18, 0x1000u, 0, v9, v4 + 1408 + 0xC, a3, a4, v12, 0, 0, 0, 0);
  V_UNLOCK();
  LOWORD(v10) = -19376;
  HIWORD(v10) = (unsigned int)": %02x%02x%02x%02x chipid:%d coreid:%d" >> 16;
  zlog(g_zc, v10, 173, v4 + 1424 + 0xC, 0xCu, 344, 20, v18);
  v16 = a2;
  v14 = 1;
  v15 = a3;
  v13 = a4;
  v17 = 0xCu;
  return (*(int (__fastcall **)(int, int *))(a1 + 280))(a1, &v13);
}
