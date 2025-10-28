_DWORD *__fastcall set_frontend_runtime_type(int a1, int a2)
{
  _DWORD *v4; // r4

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
LABEL_3:
      if ( v4 )
      {
        v4[17] = a1;
        if ( dword_108714 )
          free((void *)dword_108714);
        v4[18] = a2;
        dword_108714 = (int)v4;
      }
      break;
    default:
      v4 = 0;
      break;
  }
  return v4;
}
