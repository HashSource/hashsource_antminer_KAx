int __fastcall serdes_internal_loop_ate_init_rvn(int a1, unsigned int a2, int a3, int a4)
{
  char *v8; // r1
  int v9; // r10
  unsigned __int8 *v10; // r8
  char *v11; // r1
  int v12; // r1
  char *v13; // r1
  int v14; // r1
  char *v15; // r1
  int v16; // r1
  char *v17; // r3
  int v18; // r3
  char *v19; // r1
  int v20; // r8
  int v21; // r1
  int v22; // r8
  char *v23; // r1
  char *v24; // r1
  int v26; // [sp+40h] [bp-E8h]
  _DWORD v27[7]; // [sp+48h] [bp-E0h] BYREF
  int v28; // [sp+64h] [bp-C4h]
  _DWORD v29[7]; // [sp+68h] [bp-C0h] BYREF
  int v30; // [sp+84h] [bp-A4h]
  _DWORD v31[7]; // [sp+88h] [bp-A0h] BYREF
  int v32; // [sp+A4h] [bp-84h]
  _DWORD v33[7]; // [sp+A8h] [bp-80h] BYREF
  int v34; // [sp+C4h] [bp-64h]
  _DWORD v35[7]; // [sp+C8h] [bp-60h] BYREF
  int v36; // [sp+E4h] [bp-44h]
  _DWORD v37[7]; // [sp+E8h] [bp-40h] BYREF
  int v38; // [sp+104h] [bp-24h]
  _DWORD v39[7]; // [sp+108h] [bp-20h] BYREF
  int v40; // [sp+124h] [bp-4h]
  char v41[4100]; // [sp+128h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v8) = 588;
  HIWORD(v8) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v27, v8, *(int *)(a1 + 232));
  LOWORD(v9) = -9416;
  HIWORD(v9) = (unsigned int)&unk_14F614 >> 16;
  v26 = a4;
  a4 <<= 7;
  logfmt_raw(
    v41,
    0x1000u,
    0,
    v28,
    v27[0],
    v27[1],
    v27[2],
    v27[3],
    v27[4],
    v27[5],
    v27[6],
    v28,
    "%s ...",
    "serdes_internal_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    151,
    60,
    v41);
  v10 = (unsigned __int8 *)malloc(0x300u);
  sub_99D08(a1, a3, 240, 0x80000000);
  sub_99D5C(a1, (unsigned __int16)a3, 240, v10);
  V_LOCK();
  LOWORD(v11) = 588;
  HIWORD(v11) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v29, v11, *(int *)(a1 + 232));
  logfmt_raw(
    v41,
    0x1000u,
    0,
    v30,
    v29[0],
    v29[1],
    v29[2],
    v29[3],
    v29[4],
    v29[5],
    v29[6],
    v30,
    v9,
    "serdes_internal_loop_ate_init_rvn",
    v10[8],
    240,
    *(_DWORD *)v10);
  V_UNLOCK();
  LOWORD(v12) = 7660;
  HIWORD(v12) = (unsigned int)"%d] remote temp failed after retry %d times" >> 16;
  zlog(g_zc, v12, 174, "serdes_internal_loop_ate_init_rvn", 33, 158, 60, v41);
  sub_99D08(a1, a3, 86, 67634184);
  sub_99D5C(a1, (unsigned __int16)a3, 86, v10);
  V_LOCK();
  LOWORD(v13) = 588;
  HIWORD(v13) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v31, v13, *(int *)(a1 + 232));
  logfmt_raw(
    v41,
    0x1000u,
    0,
    v32,
    v31[0],
    v31[1],
    v31[2],
    v31[3],
    v31[4],
    v31[5],
    v31[6],
    v32,
    v9,
    "serdes_internal_loop_ate_init_rvn",
    v10[8],
    86,
    *(_DWORD *)v10);
  V_UNLOCK();
  LOWORD(v14) = 7660;
  HIWORD(v14) = (unsigned int)"%d] remote temp failed after retry %d times" >> 16;
  LOWORD(v10) = -9384;
  zlog(g_zc, v14, 174, "serdes_internal_loop_ate_init_rvn", 33, 162, 60, v41);
  sub_99D08(a1, a3, 64, 256);
  sub_99D08(a1, a3, 80, 33423870);
  sub_99D08(a1, a3, 81, 832516511);
  sub_99D08(a1, a3, 88, -1);
  sub_99D08(a1, a3, 86, 201853960);
  V_LOCK();
  LOWORD(v15) = 588;
  HIWORD(v15) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v33, v15, *(int *)(a1 + 232));
  HIWORD(v10) = (unsigned int)"d freq: %.2f, expected freq: %.2f" >> 16;
  logfmt_raw(
    v41,
    0x1000u,
    0,
    v34,
    v33[0],
    v33[1],
    v33[2],
    v33[3],
    v33[4],
    v33[5],
    v33[6],
    v34,
    v10,
    "serdes_internal_loop_ate_init_rvn",
    a3);
  V_UNLOCK();
  LOWORD(v16) = 7660;
  HIWORD(v16) = (unsigned int)"%d] remote temp failed after retry %d times" >> 16;
  zlog(g_zc, v16, 174, "serdes_internal_loop_ate_init_rvn", 33, 172, 60, v41);
  sub_99D08(a1, a3, 77, (int)&loc_30000 + 3);
  sub_99D08(a1, a3, 78, -2144272046);
  serdes_apb_read_rvn_0(a1, a2, a3, 338);
  sub_99D08(a1, a3, 77, 33554944);
  sub_99D08(a1, a3, 78, -2144247742);
  serdes_apb_read_rvn_0(a1, a2, a3, 24642);
  sub_99D08(a1, a3, 77, 100664832);
  sub_99D08(a1, a3, 78, -2144247742);
  sub_99D08(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99D08(a1, a3, 78, -2144272003);
  sub_9A280(a1, a3, 24642, v26 | 0x600);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144247741);
  sub_9A280(a1, a3, 24644, a4);
  sub_9A280(a1, a3, 24642, v26 | 7);
  sub_99D08(a1, a3, 77, 16777472);
  sub_99D08(a1, a3, 78, -2144247741);
  sub_9A280(a1, a3, 24644, a4 | 0x8000);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144251892);
  sub_99D08(a1, a3, 77, 268439552);
  sub_99D08(a1, a3, 78, -2144251892);
  sub_99D08(a1, a3, 77, 33489407);
  sub_99D08(a1, a3, 78, -2144272086);
  sub_99D08(a1, a3, 77, 268374015);
  sub_99D08(a1, a3, 78, -2144272085);
  sub_9A280(a1, a3, 24644, a4 | 0x8020);
  sub_9A280(a1, a3, 24644, a4 | 0x8060);
  sub_99D08(a1, a3, 77, -1);
  sub_99D08(a1, a3, 78, -2144247719);
  sub_99D08(a1, a3, 77, -8388737);
  sub_99D08(a1, a3, 78, -2144247718);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144247776);
  sub_99D08(a1, a3, 77, -2136964960);
  sub_99D08(a1, a3, 78, -2144247776);
  if ( v26 == 2 )
  {
    sub_99D08(a1, a3, 77, 272633920);
    sub_99D08(a1, a3, 78, -2144247722);
    sub_99D08(a1, a3, 77, -1);
    sub_99D08(a1, a3, 78, -2144247718);
    sub_99D08(a1, a3, 77, 0);
    sub_99D08(a1, a3, 78, -2144247771);
    sub_99D08(a1, a3, 77, (int)&unk_140014);
    sub_99D08(a1, a3, 78, -2144247771);
    sub_99D08(a1, a3, 77, 33554944);
    sub_99D08(a1, a3, 78, -2144247760);
    sub_99D08(a1, a3, 77, 122947412);
    sub_99D08(a1, a3, 78, -2144247760);
    sub_99D08(a1, a3, 77, 1073758208);
    sub_99D08(a1, a3, 78, -2144247770);
    sub_99D08(a1, a3, 77, -1072381932);
    sub_99D08(a1, a3, 78, -2144247770);
    v17 = (char *)&loc_40004;
  }
  else
  {
    sub_99D08(a1, a3, 77, 271585328);
    sub_99D08(a1, a3, 78, -2144247722);
    sub_99D08(a1, a3, 77, -1);
    sub_99D08(a1, a3, 78, -2144247718);
    sub_99D08(a1, a3, 77, 0);
    sub_99D08(a1, a3, 78, -2144247771);
    sub_99D08(a1, a3, 77, (int)&unk_140014);
    sub_99D08(a1, a3, 78, -2144247771);
    sub_99D08(a1, a3, 77, 33554944);
    sub_99D08(a1, a3, 78, -2144247760);
    sub_99D08(a1, a3, 77, 122947412);
    sub_99D08(a1, a3, 78, -2144247760);
    sub_99D08(a1, a3, 77, 1073758208);
    sub_99D08(a1, a3, 78, -2144247770);
    sub_99D08(a1, a3, 77, -1072381932);
    sub_99D08(a1, a3, 78, -2144247770);
    v17 = (char *)&loc_30000 + 3;
  }
  sub_99D08(a1, a3, 77, (int)v17);
  sub_99D08(a1, a3, 78, -2144247739);
  sub_99D08(a1, a3, 77, -1);
  sub_99D08(a1, a3, 78, -2144247732);
  sub_99D08(a1, a3, 77, 268439552);
  sub_99D08(a1, a3, 78, -2144247769);
  sub_99D08(a1, a3, 77, 805318656);
  sub_99D08(a1, a3, 78, -2144247769);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144247751);
  sub_99D08(a1, a3, 77, 5505108);
  sub_99D08(a1, a3, 78, -2144247751);
  sub_99D08(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99D08(a1, a3, 78, -2144251903);
  sub_99D08(a1, a3, 77, 2293795);
  sub_99D08(a1, a3, 78, -2144251903);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144251872);
  sub_99D08(a1, a3, 77, (int)&loc_80008);
  sub_99D08(a1, a3, 78, -2144251872);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144272111);
  sub_99D08(a1, a3, 77, 1073692671);
  sub_99D08(a1, a3, 78, -2144272088);
  sub_99D08(a1, a3, 77, 234884608);
  sub_99D08(a1, a3, 78, -2144272382);
  sub_99D08(a1, a3, 77, 235408904);
  sub_99D08(a1, a3, 78, -2144272382);
  sub_99D08(a1, a3, 77, 234884608);
  sub_99D08(a1, a3, 78, -2144272381);
  sub_99D08(a1, a3, 77, 235408904);
  sub_99D08(a1, a3, 78, -2144272381);
  sub_99D08(a1, a3, 77, (int)&unk_180018);
  sub_99D08(a1, a3, 78, -2144272353);
  sub_99D08(a1, a3, 77, 22348117);
  sub_99D08(a1, a3, 78, -2144272044);
  sub_99D08(a1, a3, 77, 67044351);
  sub_99D08(a1, a3, 78, -2144272044);
  sub_99D08(a1, a3, 77, 61277095);
  sub_99D08(a1, a3, 78, -2144272380);
  sub_99D08(a1, a3, 77, 65471463);
  sub_99D08(a1, a3, 78, -2144272380);
  sub_99D08(a1, a3, 77, 235408904);
  sub_99D08(a1, a3, 78, -2144272382);
  sub_99D08(a1, a3, 77, 252186376);
  sub_99D08(a1, a3, 78, -2144272382);
  sub_99D08(a1, a3, 77, 235408904);
  sub_99D08(a1, a3, 78, -2144272381);
  sub_99D08(a1, a3, 77, 252186376);
  sub_99D08(a1, a3, 78, -2144272381);
  sub_99D08(a1, a3, 77, (int)&loc_40004);
  sub_99D08(a1, a3, 78, -2144272379);
  sub_99D08(a1, a3, 77, (int)&loc_C000C);
  sub_99D08(a1, a3, 78, -2144272379);
  sub_99D08(a1, a3, 77, (int)&loc_40004);
  sub_99D08(a1, a3, 78, -2144272378);
  sub_99D08(a1, a3, 77, (int)&loc_C000C);
  sub_99D08(a1, a3, 78, -2144272378);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144272372);
  sub_99D08(a1, a3, 77, (int)&loc_100010);
  sub_99D08(a1, a3, 78, -2144272372);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144272360);
  sub_99D08(a1, a3, 77, (int)&loc_100010);
  sub_99D08(a1, a3, 78, -2144272360);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144272114);
  sub_99D08(a1, a3, 77, 710158932);
  sub_99D08(a1, a3, 78, -2144272114);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144272124);
  sub_99D08(a1, a3, 77, (int)"re_header_hash");
  sub_99D08(a1, a3, 78, -2144272124);
  if ( v26 == 2 )
    LOWORD(v18) = 498;
  else
    LOWORD(v18) = 501;
  if ( v26 == 2 )
    HIWORD(v18) = 498;
  else
    HIWORD(v18) = 501;
  sub_99D08(a1, a3, 77, v18);
  sub_99D08(a1, a3, 78, -2144247559);
  sub_99D08(a1, a3, 77, 25166208);
  sub_99D08(a1, a3, 78, -2144251901);
  sub_99D08(a1, a3, 77, 92800392);
  sub_99D08(a1, a3, 78, -2144251901);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144251900);
  sub_99D08(a1, a3, 77, 541073472);
  sub_99D08(a1, a3, 78, -2144251900);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144247761);
  sub_99D08(a1, a3, 77, (int)"re_header_hash");
  sub_99D08(a1, a3, 78, -2144247761);
  sub_99D08(a1, a3, 77, 537010178);
  sub_99D08(a1, a3, 78, -2144247750);
  sub_99D08(a1, a3, 77, 872428544);
  sub_99D08(a1, a3, 78, -2144247769);
  sub_99D08(a1, a3, 77, 1006648320);
  sub_99D08(a1, a3, 78, -2144247769);
  sub_99D08(a1, a3, 77, (int)&loc_80008);
  sub_99D08(a1, a3, 78, -2144247745);
  sub_99D08(a1, a3, 77, (int)&unk_180018);
  sub_99D08(a1, a3, 78, -2144247745);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144247798);
  sub_99D08(a1, a3, 77, (int)"re_header_hash");
  sub_99D08(a1, a3, 78, -2144247798);
  sub_99D08(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99D08(a1, a3, 78, -2144247604);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144247796);
  sub_99D08(a1, a3, 77, 268439552);
  sub_99D08(a1, a3, 78, -2144247796);
  sub_99D08(a1, a3, 77, 0);
  sub_99D08(a1, a3, 78, -2144243666);
  sub_99D08(a1, a3, 77, (int)"re_header_hash");
  sub_99D08(a1, a3, 78, -2144243666);
  sub_99D08(a1, a3, 77, 4259905);
  sub_99D08(a1, a3, 78, -2144251869);
  sub_99D08(a1, a3, 77, 13304011);
  sub_99D08(a1, a3, 78, -2144251869);
  sub_99D08(a1, a3, 77, (int)&loc_40004);
  sub_99D08(a1, a3, 78, -2144243609);
  sub_99D08(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_99D08(a1, a3, 78, -2144247768);
  sub_99D08(a1, a3, 77, (int)&loc_70004 + 3);
  sub_99D08(a1, a3, 78, -2144272078);
  serdes_apb_read_rvn_0(a1, a2, a3, 306);
  sub_99D08(a1, a3, 77, -2136964960);
  sub_99D08(a1, a3, 78, -2144247776);
  serdes_apb_read_rvn_0(a1, a2, a3, 24608);
  sub_99D08(a1, a3, 77, -2136309590);
  sub_99D08(a1, a3, 78, -2144247776);
  serdes_apb_read_rvn_0(a1, a2, a3, 24608);
  V_LOCK();
  LOWORD(v19) = 588;
  HIWORD(v19) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v35, v19, *(int *)(a1 + 232));
  LOWORD(v20) = -9348;
  HIWORD(v20) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/relea"
                              "se/build/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c" >> 16;
  logfmt_raw(
    v41,
    0x1000u,
    0,
    v36,
    v35[0],
    v35[1],
    v35[2],
    v35[3],
    v35[4],
    v35[5],
    v35[6],
    v36,
    v20,
    "serdes_internal_loop_ate_init_rvn");
  V_UNLOCK();
  LOWORD(v21) = 7660;
  HIWORD(v21) = (unsigned int)"%d] remote temp failed after retry %d times" >> 16;
  zlog(g_zc, v21, 174, "serdes_internal_loop_ate_init_rvn", 33, 291, 60, v41);
  serdes_wait_status_rvn(a1, a2, a3, 12308, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 12820, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 13332, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 13844, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 4156, 80);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 80);
  serdes_wait_status_rvn(a1, a2, a3, 8217, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8729, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9241, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9753, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4114, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4626, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5138, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5650, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8196, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8708, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9220, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9732, 0);
  sub_99D08(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99D08(a1, a3, 78, -2144251791);
  sub_99D08(a1, a3, 77, (int)&loc_E000C + 2);
  sub_99D08(a1, a3, 78, -2144247768);
  sub_99D08(a1, a3, 77, (int)&loc_E000C + 2);
  sub_99D08(a1, a3, 78, -2144247768);
  sub_99D08(a1, a3, 77, (int)&loc_30000 + 3);
  sub_99D08(a1, a3, 78, -2144243377);
  sub_99D08(a1, a3, 77, (int)&loc_30000 + 3);
  sub_99D08(a1, a3, 78, -2144243377);
  sub_99D08(a1, a3, 77, (int)&loc_70004 + 3);
  sub_99D08(a1, a3, 78, -2144243377);
  sub_99D08(a1, a3, 77, -2136244053);
  sub_99D08(a1, a3, 78, -2144247776);
  sub_99D08(a1, a3, 77, -2136244053);
  sub_99D08(a1, a3, 78, -2144247776);
  usleep(0x2710u);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 93);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 93);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 93);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 93);
  sub_99D08(a1, a3, 77, -2136309590);
  sub_99D08(a1, a3, 78, -2144247776);
  sub_99D08(a1, a3, 77, -2136309590);
  sub_99D08(a1, a3, 78, -2144247776);
  usleep((__useconds_t)&stru_18698.st_size);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 92);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 92);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 92);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 92);
  usleep(0xEA60u);
  sub_99D08(a1, a3, 77, -1062551382);
  sub_99D08(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 94);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 94);
  if ( v26 == 2 )
  {
    sub_99D08(a1, a3, 77, (int)&loc_30000 + 3);
    sub_99D08(a1, a3, 78, -2144247798);
    sub_99D08(a1, a3, 77, (int)&loc_30000 + 3);
    sub_99D08(a1, a3, 78, -2144247798);
    usleep(0x3E8u);
    serdes_wait_status_rvn(a1, a2, a3, 8218, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status_rvn(a1, a2, a3, 8730, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status_rvn(a1, a2, a3, 9242, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status_rvn(a1, a2, a3, 9754, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    sub_99D08(a1, a3, 77, (int)"re_header_hash");
    sub_99D08(a1, a3, 78, -2144247798);
    sub_99D08(a1, a3, 77, (int)"re_header_hash");
    sub_99D08(a1, a3, 78, -2144247798);
    usleep((__useconds_t)&stru_18698.st_size);
    serdes_wait_status_rvn(a1, a2, a3, 8218, 0);
    serdes_wait_status_rvn(a1, a2, a3, 8730, 0);
    serdes_wait_status_rvn(a1, a2, a3, 9242, 0);
    serdes_wait_status_rvn(a1, a2, a3, 9754, 0);
  }
  sub_99D08(a1, a3, 77, -2136309590);
  LOWORD(v22) = -9316;
  sub_99D08(a1, a3, 78, -2144247776);
  sub_99D08(a1, a3, 77, -1062551382);
  sub_99D08(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  V_LOCK();
  LOWORD(v23) = 588;
  HIWORD(v23) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v37, v23, *(int *)(a1 + 232));
  HIWORD(v22) = (unsigned int)"pace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c" >> 16;
  logfmt_raw(
    v41,
    0x1000u,
    0,
    v38,
    v37[0],
    v37[1],
    v37[2],
    v37[3],
    v37[4],
    v37[5],
    v37[6],
    v38,
    v22,
    "serdes_internal_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    375,
    60,
    v41);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 94);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 94);
  V_LOCK();
  LOWORD(v24) = 588;
  HIWORD(v24) = (unsigned int)": get test = %d" >> 16;
  V_INT((int)v39, v24, *(int *)(a1 + 232));
  logfmt_raw(
    v41,
    0x1000u,
    0,
    v40,
    v39[0],
    v39[1],
    v39[2],
    v39[3],
    v39[4],
    v39[5],
    v39[6],
    v40,
    "%s Enabling RX LBERT in LFSR31 and setting RX LBERT SYNC to 1",
    "serdes_internal_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    380,
    60,
    v41);
  sub_99D08(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99D08(a1, a3, 78, -2144251757);
  sub_99D08(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99D08(a1, a3, 78, -2144251757);
  sub_99D08(a1, a3, 77, (int)&loc_110010 + 1);
  sub_99D08(a1, a3, 78, -2144251757);
  sub_99D08(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99D08(a1, a3, 78, -2144251757);
  sub_99D08(a1, a3, 77, (int)&loc_110010 + 1);
  sub_99D08(a1, a3, 78, -2144251757);
  sub_99D08(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99D08(a1, a3, 78, -2144251757);
  usleep(0x2710u);
  return 0;
}
