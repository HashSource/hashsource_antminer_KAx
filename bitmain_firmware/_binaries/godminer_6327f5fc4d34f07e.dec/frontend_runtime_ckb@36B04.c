_DWORD *frontend_runtime_ckb()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x50u);
  *result = stratum_connect;
  result[1] = stratum_disconnect;
  result[2] = stratum_recv_line;
  result[3] = stratum_send_line;
  result[4] = stratum_login_base;
  result[5] = stratum_handle_method_base;
  result[6] = stratum_handle_response_base;
  result[7] = sub_36A74;
  result[8] = sub_366C4;
  result[9] = stratum_subscribe_base;
  result[10] = stratum_authorize_base;
  result[11] = sub_366FC;
  result[12] = sub_36370;
  result[13] = stratum_set_diff_or_target_base;
  result[14] = target_to_diff_ckb;
  result[15] = diff_to_target_ckb;
  result[16] = target_to_double_diff_ckb;
  return result;
}
