_DWORD *__fastcall set_frontend_runtime_type(int a1, int a2)
{
  _DWORD *v4; // r4
  int v6; // r3
  int v7; // r3
  int v8; // r1
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  switch ( a2 )
  {
    case 0:
    case 1:
      v4 = frontend_runtime_ckb();
      goto LABEL_3;
    case 2:
      v4 = frontend_runtime_kda();
      goto LABEL_3;
    case 3:
      v4 = frontend_runtime_hns();
      goto LABEL_3;
    case 4:
      v4 = frontend_runtime_dcr();
      goto LABEL_3;
    case 5:
      v4 = frontend_runtime_dash();
      goto LABEL_3;
    case 6:
      v4 = frontend_runtime_eth();
      goto LABEL_3;
    case 7:
      v4 = frontend_runtime_eth_2282();
      goto LABEL_3;
    case 8:
      v4 = frontend_runtime_ltc();
      goto LABEL_3;
    case 9:
      v4 = frontend_runtime_zec();
      goto LABEL_3;
    case 10:
      v4 = frontend_runtime_rvn();
      goto LABEL_3;
    case 11:
      v4 = frontend_runtime_kas();
      goto LABEL_3;
    case 12:
      v4 = frontend_runtime_ks5();
LABEL_3:
      if ( v4 )
      {
        v4[18] = a1;
        if ( dword_196694 )
          free((void *)dword_196694);
        v4[19] = a2;
        dword_196694 = (int)v4;
      }
      break;
    default:
      V_LOCK();
      LOWORD(v6) = -18128;
      HIWORD(v6) = (unsigned int)"subscribe_kas" >> 16;
      v4 = 0;
      logfmt_raw(v9, 0x1000u, 0, v6, a2);
      V_UNLOCK();
      LOWORD(v7) = -18184;
      LOWORD(v8) = -18088;
      HIWORD(v7) = (unsigned int)"tum_handle_response_kas" >> 16;
      HIWORD(v8) = (unsigned int)"enkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c" >> 16;
      zlog(g_zc, v8, 157, v7, 25, 63, 100, v9);
      break;
  }
  return v4;
}
