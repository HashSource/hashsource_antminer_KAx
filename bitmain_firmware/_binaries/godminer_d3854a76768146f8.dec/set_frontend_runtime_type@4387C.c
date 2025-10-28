_DWORD *__fastcall set_frontend_runtime_type(int a1, int a2)
{
  _DWORD *v4; // r4
  void **v5; // r6
  int v7; // r3
  int v8; // r3
  int v9; // r1
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

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
    case 7:
      v4 = frontend_runtime_eth();
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
LABEL_3:
      if ( v4 )
      {
        LOWORD(v5) = 20072;
        v4[18] = a1;
        HIWORD(v5) = (unsigned int)&unk_176358 >> 16;
        if ( *v5 )
          free(*v5);
        v4[19] = a2;
        *v5 = v4;
      }
      break;
    default:
      V_LOCK();
      LOWORD(v7) = 19464;
      HIWORD(v7) = (unsigned int)"n:%d, PT2_freq: %d, sweep_average_freq: %.2f, sweep_level_freq: %d  sweep_matrix:\n%s" >> 16;
      v4 = 0;
      logfmt_raw(v10, 0x1000u, 0, v7, a2);
      V_UNLOCK();
      LOWORD(v8) = 19408;
      LOWORD(v9) = 19504;
      HIWORD(v8) = (unsigned int)"high voltage befor rise freq." >> 16;
      HIWORD(v9) = (unsigned int)"%.2f, sweep_level_freq: %d  sweep_matrix:\n%s" >> 16;
      zlog(g_zc, v9, 157, v8, 25, 58, 100, v10);
      break;
  }
  return v4;
}
