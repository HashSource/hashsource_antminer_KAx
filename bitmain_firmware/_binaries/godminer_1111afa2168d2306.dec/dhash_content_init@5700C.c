_DWORD *__fastcall dhash_content_init(int a1)
{
  _DWORD *result; // r0
  int v2; // r3
  int v3; // r1
  char v5[4096]; // [sp+18h] [bp-1000h] BYREF

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
      result = dhash_content_dash_1766();
      break;
    case 6:
      result = dhash_content_eth_2280();
      break;
    case 7:
      result = dhash_content_eth_2282();
      break;
    case 8:
      result = dhash_content_ltc_1489();
      break;
    case 9:
      result = dhash_content_zec_1746();
      break;
    case 10:
      result = dhash_content_rvn_2044();
      break;
    case 11:
      result = dhash_content_kas_2380();
      break;
    case 12:
      result = dhash_content_ks5_2382();
      break;
    default:
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "ALGO %d does not define dhash_content", a1);
      V_UNLOCK();
      LOWORD(v2) = -8256;
      LOWORD(v3) = -8196;
      HIWORD(v2) = (unsigned int)"g_gen_engine" >> 16;
      HIWORD(v3) = (unsigned int)&unk_14E1C4 >> 16;
      zlog(g_zc, v3, 157, v2, 18, 59, 100, v5);
      result = 0;
      break;
  }
  return result;
}
