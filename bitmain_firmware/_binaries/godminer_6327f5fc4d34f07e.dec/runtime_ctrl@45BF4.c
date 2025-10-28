_DWORD *__fastcall runtime_ctrl(int a1)
{
  _DWORD *v1; // r5
  int v2; // r3
  char *v3; // r2

  switch ( a1 )
  {
    case 2:
      v1 = runtime_ctrl_kda_2110();
      break;
    case 3:
      v1 = runtime_ctrl_hns_2130();
      break;
    case 4:
      v1 = runtime_ctrl_dcr_1727();
      break;
    case 5:
      v1 = runtime_ctrl_dash_1766();
      break;
    default:
      v1 = runtime_ctrl_ckb_2042();
      break;
  }
  if ( v1 )
  {
    pthread_mutex_lock(&stru_119638);
    v2 = dword_119650;
    v3 = &stru_119638.__size[4 * dword_119650++];
    *((_DWORD *)v3 + 7) = v1;
    v1[49] = v2;
    pthread_mutex_unlock(&stru_119638);
  }
  return v1;
}
