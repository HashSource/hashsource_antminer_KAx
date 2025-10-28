_DWORD *__fastcall runtime_ctrl(int a1)
{
  _DWORD *v1; // r5
  int v2; // r3
  char *v3; // r2
  int v5; // r3
  int v6; // r3
  int v7; // r1
  char v9[4100]; // [sp+18h] [bp-1004h] BYREF

  switch ( a1 )
  {
    case 1:
      v1 = runtime_ctrl_ckb_2042();
      goto LABEL_3;
    case 2:
      v1 = runtime_ctrl_kda_2110();
      goto LABEL_3;
    case 3:
      v1 = runtime_ctrl_hns_2130();
      goto LABEL_3;
    case 4:
      v1 = runtime_ctrl_dcr_1727();
      goto LABEL_3;
    case 5:
      v1 = runtime_ctrl_dash_1766();
      goto LABEL_3;
    case 6:
      v1 = runtime_ctrl_eth_2280();
      goto LABEL_3;
    case 8:
      v1 = runtime_ctrl_ltc_1489();
      goto LABEL_3;
    case 9:
      v1 = runtime_ctrl_zec_1746();
      goto LABEL_3;
    case 10:
      v1 = runtime_ctrl_rvn_2020();
      goto LABEL_3;
    case 11:
      v1 = runtime_ctrl_kas_2380();
LABEL_3:
      if ( v1 )
      {
        pthread_mutex_lock(&stru_181FF0);
        v2 = dword_182008;
        v3 = &stru_181FF0.__size[4 * dword_182008++];
        *((_DWORD *)v3 + 7) = v1;
        v1[57] = v2;
        pthread_mutex_unlock(&stru_181FF0);
      }
      break;
    default:
      V_LOCK();
      LOWORD(v5) = -27452;
      HIWORD(v5) = (unsigned int)"x" >> 16;
      v1 = 0;
      logfmt_raw(v9, 0x1000u, 0, v5, a1);
      V_UNLOCK();
      LOWORD(v6) = -27504;
      LOWORD(v7) = -27412;
      HIWORD(v6) = (unsigned int)", addr:%02x" >> 16;
      HIWORD(v7) = (unsigned int)"8x" >> 16;
      zlog(g_zc, v7, 155, v6, 12, 62, 100, v9);
      break;
  }
  return v1;
}
