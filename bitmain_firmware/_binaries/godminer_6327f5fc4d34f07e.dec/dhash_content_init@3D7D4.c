_DWORD *__fastcall dhash_content_init(int a1)
{
  _DWORD *result; // r0

  switch ( a1 )
  {
    case 1:
      result = dhash_content_ckb_2042();
      break;
    case 2:
      result = dhash_content_kda_2110();
      break;
    case 3:
      result = dhash_content_hns_2130();
      break;
    case 4:
      result = dhash_content_dcr_1727();
      break;
    case 5:
      result = dhash_content_ltc_1489();
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
